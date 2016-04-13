/*
 * Copyright (c) 1999-2008 Mark D. Hill and David A. Wood
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
 */

#ifndef __MEM_RUBY_STRUCTURES_TBETABLE_HH__
#define __MEM_RUBY_STRUCTURES_TBETABLE_HH__

#include <iostream>
#include <stdio.h>

#include "base/hashmap.hh"
#include "mem/ruby/common/Address.hh"

template<class ENTRY>
class TBETable
{
  public:
    TBETable(int number_of_TBEs)
        : m_number_of_TBEs(number_of_TBEs)
    {
    }

    bool isPresent(Addr address) const;
    void allocate(Addr address);
    void deallocate(Addr address);
    bool
    areNSlotsAvailable(int n) const
    {
        return (m_number_of_TBEs - m_map.size()) >= n;
    }

    ENTRY* lookup(Addr address);

    // NTU Bobolu
    // echo function for debugging in Ruby
    void echo(int message, const Addr& address) const {
        switch(message) {
            case 1:
                fprintf(stderr, "GPUL1 : issue PUT_Atom_SYS to GPUL2, address : 0x%lx\n", address);
                break;
            case 2:
                fprintf(stderr, "GPUL2 : issue storeMemory to DIR, address : 0x%lx\n", address);
                break;
            case 3:
                fprintf(stderr, "DIR : receive STORE_MEM from GPUL2, address : 0x%lx\n", address);
                break;
            case 6:
                fprintf(stderr, "DIR : issue storeBypassMemory to DRAM, address : 0x%lx\n", address);
                break;
            case 7:
                fprintf(stderr, "DIR : receive Memory_StoreSYS_Ack from DRAM, address : 0x%lx\n", address);
                break;
            case 8:
                fprintf(stderr, "DIR : send WriteDoneAck to GPUL2, address : 0x%lx\n", address);
                break;
            case 9:
                fprintf(stderr, "GPUL2 : receive WriteDoneAck from DIR, address : 0x%lx\n", address);
                break;
            case 10:
                fprintf(stderr, "GPUL1 : issue PUT_Atom_GL to GPUL2, address : 0x%lx\n", address);
                break;
            case 11:
                fprintf(stderr, "GPUL2 : issue fetchMemory to DIR, address : 0x%lx\n", address);
                break;
            case 12:
                fprintf(stderr, "DIR : receive FETCH_MEM from GPUL2, address : 0x%lx\n", address);
                break;
            case 13:
                fprintf(stderr, "DIR : issue queueMemoryFetchRequest to DRAM, address : 0x%lx\n", address);
                break;
            case 14:
                fprintf(stderr, "GPUL1 : issue GET_Atom_SYS to GPUL2, address : 0x%lx\n", address);
                break;
            case 15:
                fprintf(stderr, "DIR : receive DATA from DRAM, address : 0x%lx\n", address);
                break;
            case 16:
                fprintf(stderr, "GPUL2 : receive DATA from DIR, address : 0x%lx\n", address);
                break;
            case 17:
                fprintf(stderr, "GPUL1(I) : receive Load_Atomic_CTA, address : 0x%lx\n", address);
                break;
            case 18:
                fprintf(stderr, "GPUL1(V_a) : receive Load_Atomic_CTA, address : 0x%lx\n", address);
                break;
            case 19:
                fprintf(stderr, "GPUL2(I) : receive Load_Atomic_CTA/GL from GPUL1, address : 0x%lx\n", address);
                break;
            case 20: 
                fprintf(stderr, "GPUL2(AT) : receive Load_Atomic_CTA/GL from GPUL1, address : 0x%lx\n", address);
                break;
        }
    }

    // Print cache contents
    void print(std::ostream& out) const;

  private:
    // Private copy constructor and assignment operator
    TBETable(const TBETable& obj);
    TBETable& operator=(const TBETable& obj);

    // Data Members (m_prefix)
    m5::hash_map<Addr, ENTRY> m_map;

  private:
    int m_number_of_TBEs;
};

template<class ENTRY>
inline std::ostream&
operator<<(std::ostream& out, const TBETable<ENTRY>& obj)
{
    obj.print(out);
    out << std::flush;
    return out;
}

template<class ENTRY>
inline bool
TBETable<ENTRY>::isPresent(Addr address) const
{
    assert(address == makeLineAddress(address));
    assert(m_map.size() <= m_number_of_TBEs);
    return !!m_map.count(address);
}

template<class ENTRY>
inline void
TBETable<ENTRY>::allocate(Addr address)
{
    assert(!isPresent(address));
    assert(m_map.size() < m_number_of_TBEs);
    m_map[address] = ENTRY();
}

template<class ENTRY>
inline void
TBETable<ENTRY>::deallocate(Addr address)
{
    assert(isPresent(address));
    assert(m_map.size() > 0);
    m_map.erase(address);
}

// looks an address up in the cache
template<class ENTRY>
inline ENTRY*
TBETable<ENTRY>::lookup(Addr address)
{
  if(m_map.find(address) != m_map.end()) return &(m_map.find(address)->second);
  return NULL;
}


template<class ENTRY>
inline void
TBETable<ENTRY>::print(std::ostream& out) const
{
}

#endif // __MEM_RUBY_STRUCTURES_TBETABLE_HH__
