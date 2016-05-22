/*
 * Copyright (c) 2012-2013 Mark D. Hill and David A. Wood
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Joel Hestness, Jason Power
 *
 */

#include <cmath>

#include "gpu/lsq_warp_inst_buffer.hh"

using namespace std;

const string WarpInstBuffer::instructionTypeStrings[] =
        { "invalid", "load", "store", "fence", "atomic" };

bool
WarpInstBuffer::addLaneRequest(unsigned lane_id, PacketPtr pkt)
{
    if (curTick() != startTick) {
        // This is a request occurring later than the original to this
        // warp. It must block until the prior warp request is complete
        return false;
    }
    assert(state == DISPATCHING);
    assert(!laneRequestPkts[lane_id]);
    laneRequestPkts[lane_id] = pkt;
    return true;
}

// Struct to track the chunks touched by a cache access and the lanes that
// whose requests are coalesced into this access
// Copied from GPGPU-Sim
struct transaction_info {
    std::bitset<4> chunks; // bitmask: 32-byte chunks accessed
    // mem_access_byte_mask_t bytes;
    std::list<unsigned> activeLanes; // threads in this transaction
};

void
WarpInstBuffer::coalesce()
{
    /**
     * This code is largely based on coalescing code found in GPGPU-Sim. It
     * is suggested that you review the NVidia CUDA manual for coalescing rules
     * before modifying this code.
     */
    assert(laneCount == 32 &&
           "Unknown whether coalescing works with more or less than 32 lanes");

    assert(instructionType == LOAD_INST || instructionType == STORE_INST ||
           instructionType == ATOMIC_INST);

    unsigned segment_size = 0;
    switch (requestDataSize) {
      case 1: segment_size = 32; break;
      case 2: segment_size = 64; break;
      case 4: case 8: case 16: segment_size = 128; break;
    }
    unsigned subwarp_size = laneCount / warpParts;

    for (unsigned subwarp = 0; subwarp < warpParts; subwarp++) {
        map<Addr, transaction_info> subwarp_transactions;

        // Step 1: Find all transactions generated by this subwarp
        for (unsigned thread = subwarp * subwarp_size;
             thread < subwarp_size * (subwarp+1);
             thread++)
        {
            if (!laneRequestPkts[thread])
                continue;

            unsigned num_accesses = 1;

            for (unsigned access = 0; access < num_accesses; access++) {
                Addr addr = getLaneAddr(thread);
                Addr block_address = addr & ~((Addr)(segment_size - 1));
                // Figure out which 32-byte chunk within in a 128-byte block
                // this thread is accessing
                unsigned chunk = (addr & 127) / 32;
                transaction_info &info = subwarp_transactions[block_address];

                // Can only write to one segment
                assert(block_address == ((addr + requestDataSize - 1) &
                       ~((Addr)(segment_size - 1))));

                info.chunks.set(chunk);
                info.activeLanes.push_back(thread);
            }
        }

        // Step 2: Reduce each transaction size, if possible
        map<Addr, transaction_info>::iterator t = subwarp_transactions.begin();
        for (; t != subwarp_transactions.end(); t++) {
            Addr addr = t->first;
            transaction_info &info = t->second;

            // GPGPU-Sim: memory_coalescing_arch_13_reduce_and_send(); code
            // ported below.
            assert((addr & (segment_size-1)) == 0);

            const bitset<4> &q = info.chunks;
            assert(q.count() >= 1);
            // Halves (used to check if 64 byte segment can be compressed
            // into a single 32 byte segment)
            bitset<2> h;

            unsigned size = segment_size;
            if (segment_size == 128 ) {
                bool lower_half_used = q[0] || q[1];
                bool upper_half_used = q[2] || q[3];
                if (lower_half_used && !upper_half_used) {
                    // only lower 64 bytes used
                    size = 64;
                    if(q[0]) h.set(0);
                    if(q[1]) h.set(1);
                } else if (!lower_half_used && upper_half_used) {
                    // only upper 64 bytes used
                    addr += 64;
                    size = 64;
                    if(q[2]) h.set(0);
                    if(q[3]) h.set(1);
                } else {
                    assert(lower_half_used && upper_half_used);
                }
            } else if (segment_size == 64) {
                // need to set halves
                if ((addr % 128) == 0) {
                    if(q[0]) h.set(0);
                    if(q[1]) h.set(1);
                } else {
                    assert((addr % 128) == 64);
                    if(q[2]) h.set(0);
                    if(q[3]) h.set(1);
                }
            }
            if (size == 64) {
                bool lower_half_used = h[0];
                bool upper_half_used = h[1];
                if (lower_half_used && !upper_half_used) {
                    size = 32;
                } else if (!lower_half_used && upper_half_used) {
                    addr += 32;
                    size = 32;
                } else {
                    assert(lower_half_used && upper_half_used);
                }
            }

            if (instructionType == LOAD_INST) {
                // It would be good to reduce the size as much as possible to
                // allow for flexibility in the minimum request size in caches
                generateCoalescedAccesses(addr, size, info.activeLanes);
            } else if (instructionType == STORE_INST) {
                // Currently, writes must be contiguous
                // A map from the word of the block to the lane id
                // Needs to be multimap since two lanes could have same addr
                multimap<unsigned, unsigned> validWords;
                list<unsigned>::const_iterator iter = info.activeLanes.begin();
                for (; iter != info.activeLanes.end(); iter++) {
                    Addr a = getLaneAddr(*iter);
                    int offset = a & (size-1);
                    validWords.insert(pair<unsigned, unsigned>(offset, *iter));
                }

                multimap<unsigned, unsigned>::iterator it = validWords.begin();
                while (it != validWords.end()) {
                    Addr base = addr + it->first;
                    list<unsigned> lanes;
                    int chunkSize = requestDataSize;
                    // While the next offset is the current offset + size of
                    // word. Use >= because could have two requests with same
                    // offset incr the current offset
                    multimap<unsigned, unsigned>::iterator next(it);
                    next++;
                    do {
                        lanes.push_back(it->second);
                        if (next == validWords.end()) {
                            // This was the last thread
                            it++;
                            break;
                        }
                        if (it->first + requestDataSize == next->first) {
                            // Only add to the chunk if the address is the next
                            chunkSize += requestDataSize;
                        } else if (it->first != next->first) {
                            // If the next offset is not cur + size or cur,
                            // this is at the end of a chunk
                            it++;
                            break;
                        }
                        it++;
                        next++;
                    } while (it != validWords.end());
                    // This is a new chunk that needs to be sent
                    generateCoalescedAccesses(base, chunkSize, lanes);
                }
            } else if (instructionType == ATOMIC_INST) {
                // NOTE: Atomics are coalesced differently than loads, but they
                // use the same method to identify the portions of cache lines
                // that will be touched. Send to generateCoalescedAccesses to
                // construct atomic packets
                generateCoalescedAccesses(addr, size, info.activeLanes);
            } else {
                panic("Invalid instruction in coalescer");
            }
        }
    }
}

void
WarpInstBuffer::generateCoalescedAccesses(Addr addr, size_t size,
                                          list<unsigned> &active_lanes)
{
    Request::Flags flags;
    int asid = 0;
    if (bypassL1) {
        flags.set(Request::BYPASS_L1);
    }

    CoalescedAccess *mem_access;
    if (instructionType == LOAD_INST) {
        RequestPtr req = new Request(asid, addr, size, flags, masterId,
                                     pc, 0, 0);
        mem_access = new CoalescedAccess(req, MemCmd::ReadReq, this,
                                         active_lanes);
        coalescedAccesses.push_back(mem_access);
    } else if (instructionType == STORE_INST) {
        RequestPtr req = new Request(asid, addr, size, flags, masterId,
                                     pc, 0, 0);
        uint8_t *pkt_data = new uint8_t[size];
        list<unsigned>::iterator iter = active_lanes.begin();
        for (; iter != active_lanes.end(); iter++) {
            Addr offset = getLaneAddr(*iter) - addr;
            memcpy(&pkt_data[offset], getLaneData(*iter), requestDataSize);
        }
        mem_access = new CoalescedAccess(req, MemCmd::WriteReq, this,
                                         active_lanes, pkt_data);
        coalescedAccesses.push_back(mem_access);
    } else if (instructionType == ATOMIC_INST) {
        // To coalesce atomics requires a different style of packet. When
        // performed in the cache hierarchy and/or at the memory controller,
        // atomics occur sequentially in groups, and the code below will
        // construct the data structures in packets to convey the atomics to
        // the memory hierarchy.

        // The trickiest part of modeling in-cache atomics is getting the right
        // latency and bandwidth of coalesced accesses. In hardware, atomics
        // can be sent to the caches in groups ("coalesced") operating on the
        // same cache line, but the size of a request sent to the caches is
        // limited, so typically, multiple accesses must be sent if threads
        // from the same warp access the same cache line. This code must
        // compensate for this structure in order to get reasonable
        // latency/bandwidth. Specifically, modeling here must consider:
        //  1) The number of atomics that the hardware can "coalesce" into a
        //     single access to cache (Fermi: 3)
        //  2) The number of concurrently outstanding accesses per cache line
        //     that hardware allows (Fermi: 4 32B L2 cache subblocks per block)
        //  3) The product of (1) and (2) is the number of accesses that will
        //     need to be included in a single packet, since Ruby only allows
        //     a single outstanding request to one cache line
        //     NOTE: By structuring coalesced atomic packets like this,
        //           serialization latency will be slightly different from HW!

        // TODO: Update to support other data types! For now, only
        // floats and unsigned int (i.e. 4B)
        assert(requestDataSize == 4);

        assert(active_lanes.size() > 0);

        // Set this request to be a locked read-modify-write (swap)
        flags.set(Request::LOCKED_RMW | Request::MEM_SWAP);

        // deicide: Set the scope information for atomic requests
        PacketPtr sample_pkt = laneRequestPkts[active_lanes.front()];
        if (sample_pkt->req->isCtaScope()) {
            flags.set(Request::CTA_SCOPE);
        } else if (sample_pkt->req->isGlobalScope()) {
            flags.set(Request::GLOBAL_SCOPE);
        } else if (sample_pkt->req->isSystemScope()) {
            flags.set(Request::SYSTEM_SCOPE);
        }

        // The maximum number of atomic operations that can be sent to each
        // cache subblock (i.e. (1) above)
        // TODO: If desired, this can be parameterized to test performance of
        // various different in-cache atomics architectures
        unsigned max_atom_per_subblock_per_pkt = 3;
        unsigned bytes_per_subblock = 32;

        // Calculate the number of cache subblocks that this set of coalesced
        // accesses will touch
        unsigned num_subblocks = size / bytes_per_subblock;

        // For each subblock, pull out the lanes that will access it
        list<unsigned>::iterator iter = active_lanes.begin();
        map<unsigned, list<unsigned> > subblock_atomics;
        for (; iter != active_lanes.end(); iter++) {
            unsigned lane_index = *iter;
            unsigned subblock_id = (getLaneAddr(lane_index) - addr) /
                                                            bytes_per_subblock;
            subblock_atomics[subblock_id].push_back(lane_index);
        }

        // Based on the number of atomics that will touch each subblock,
        // calculate the number of memory accesses that will need to be sent
        unsigned max_atoms_per_subline = 0;
        for (unsigned subblock = 0; subblock < num_subblocks; subblock++) {
            if (subblock_atomics[subblock].size() > max_atoms_per_subline) {
                max_atoms_per_subline = subblock_atomics[subblock].size();
            }
        }
        unsigned num_packets = ceil((float)max_atoms_per_subline /
                                    (float)max_atom_per_subblock_per_pkt);

        // Create the packets
        for (unsigned pkt_num = 0; pkt_num < num_packets; pkt_num++) {
            // First, gather the lanes that will be included in this packet
            list<unsigned> lanes_this_packet;
            unsigned num_atoms_this_access = 0;
            for (unsigned subblock = 0; subblock < num_subblocks; subblock++) {
                // Only pull up to the maximum accesses per subblock
                for (unsigned i = 0; i < max_atom_per_subblock_per_pkt; i++) {
                    if (!subblock_atomics[subblock].empty()) {
                        lanes_this_packet.push_back(
                                            subblock_atomics[subblock].front());
                        subblock_atomics[subblock].pop_front();
                        num_atoms_this_access++;
                    }
                }
            }
            assert(num_atoms_this_access == lanes_this_packet.size());

            // Now create the packet by appropriately setting the packet data
            // for each of the lane atomics associated with this access
            size_t actual_data_size = num_atoms_this_access *
                                                sizeof(AtomicOpRequest*);
            if (size > actual_data_size) {
                actual_data_size = size;
            }
            uint8_t *pkt_data = new uint8_t[actual_data_size];
            AtomicOpRequest **atom_data = (AtomicOpRequest**)pkt_data;
            unsigned data_index = 0;
            list<unsigned>::iterator iter = lanes_this_packet.begin();
            for (; iter != lanes_this_packet.end(); iter++) {
                unsigned lane_index = *iter;
                AtomicOpRequest *lane_request =
                                            getLaneAtomicRequest(lane_index);
                assert(lane_request->uniqueId == lane_index);
                atom_data[data_index] = lane_request;
                lane_request->lineOffset = getLaneAddr(lane_index) - addr;
                lane_request->lastAccess = false;
                data_index++;
            }
            atom_data[num_atoms_this_access-1]->lastAccess = true;

            RequestPtr req = new Request(asid, addr, size, flags, masterId,
                                         pc, 0, 0);
            CoalescedAccess *mem_access = new CoalescedAccess(req,
                    MemCmd::SwapReq, this, lanes_this_packet, pkt_data);
            coalescedAccesses.push_back(mem_access);
        }
    } else {
        panic("Invalid instruction generating coalesced accesses\n");
    }
}

bool
WarpInstBuffer::finishAccess(CoalescedAccess *mem_access)
{
    // For lane in active mask, make response packet, and if read, data
    list<unsigned>* active_lanes = mem_access->getActiveLanes();
    if (instructionType == ATOMIC_INST) {
        AtomicOpRequest **atomic_ops =
                (AtomicOpRequest**)mem_access->getPtr<uint8_t>();
        bool atomics_done = false;
        for (int i = 0; !atomics_done; i++) {
            unsigned lane_id = atomic_ops[i]->uniqueId;
            assert(active_lanes->front() == lane_id);
            PacketPtr lane_pkt = laneRequestPkts[lane_id];
            assert(lane_pkt);
            lane_pkt->makeResponse();
            assert((AtomicOpRequest*)lane_pkt->getPtr<uint8_t>() ==
                   atomic_ops[i]);
            atomics_done = atomic_ops[i]->lastAccess;
            atomic_ops[i]->lastAccess = true;
            active_lanes->pop_front();
        }
        assert(active_lanes->empty());
    } else {
        while (!active_lanes->empty()) {
            unsigned lane_id = active_lanes->front();
            PacketPtr lane_pkt = laneRequestPkts[lane_id];
            assert(lane_pkt);
            if (instructionType == LOAD_INST) {
                Addr offset = lane_pkt->req->getVaddr() -
                              mem_access->req->getVaddr();
                assert(offset < mem_access->getSize());
                memcpy(lane_pkt->getPtr<uint8_t>(),
                        mem_access->getPtr<uint8_t>() + offset,
                        lane_pkt->getSize());
                lane_pkt->makeTimingResponse();
            } else {
                // No need to send response for writes
                // This assumes that the shader core moves store instructions
                // directly to commit after dispatching them to the LSQ.
                assert(instructionType == STORE_INST);
                if (lane_pkt->req) delete lane_pkt->req;
                delete lane_pkt;
                laneRequestPkts[lane_id] = NULL;
            }
            active_lanes->pop_front();
        }
    }
    removeTranslated(mem_access);
    delete mem_access;

    // TODO: If restricting per-warp queued memory accesses (e.g. Fermi),
    // if there are translated requests that are not yet scheduled for
    // injection, schedule the next one here

    // If all accesses have completed, signal completion of this
    // warp instruction, so it can be written back
    if (coalescedAccesses.empty() && translatedAccesses.empty()) {
        return true;
    }
    return false;
}
