/* 
 * opencl_runtime_api.cc
 *
 * Copyright © 2009 by Tor M. Aamodt and the University of British Columbia,
 * Vancouver, BC V6T 1Z4, All Rights Reserved.
 * 
 * THIS IS A LEGAL DOCUMENT BY DOWNLOADING GPGPU-SIM, YOU ARE AGREEING TO THESE
 * TERMS AND CONDITIONS.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNERS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * NOTE: The files libcuda/cuda_runtime_api.c and src/cuda-sim/cuda-math.h
 * are derived from the CUDA Toolset available from http://www.nvidia.com/cuda
 * (property of NVIDIA).  The files benchmarks/BlackScholes/ and
 * benchmarks/template/ are derived from the CUDA SDK available from
 * http://www.nvidia.com/cuda (also property of NVIDIA).  The files from
 * src/intersim/ are derived from Booksim (a simulator provided with the
 * textbook "Principles and Practices of Interconnection Networks" available
 * from http://cva.stanford.edu/books/ppin/). As such, those files are bound by
 * the corresponding legal terms and conditions set forth separately (original
 * copyright notices are left in files from these sources and where we have
 * modified a file our copyright notice appears before the original copyright
 * notice).
 *
 * Using this version of GPGPU-Sim requires a complete installation of CUDA
 * which is distributed seperately by NVIDIA under separate terms and
 * conditions.  To use this version of GPGPU-Sim with OpenCL requires a
 * recent version of NVIDIA's drivers which support OpenCL.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the University of British Columbia nor the names of
 * its contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * 4. This version of GPGPU-SIM is distributed freely for non-commercial use only.
 *
 * 5. No nonprofit user may place any restrictions on the use of this software,
 * including as modified by the user, by any other authorized user.
 *
 * 6. GPGPU-SIM was developed primarily by Tor M. Aamodt, Wilson W. L. Fung,
 * Ali Bakhoda, George L. Yuan, at the University of British Columbia,
 * Vancouver, BC V6T 1Z4
 */

#include <assert.h>
#include <map>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>
#include <unistd.h>

extern "C" {
    #include "m5op.h"
}
#include "opencl_runtime_api.h"

// Some feature and method is call cuda_syscall needs.
// Copy form cuda_runtime_api.cc.
#include "builtin_types.h"

typedef enum cudaError cudaError_t;

enum { CUDA_MALLOC_DEVICE = 0,
       CUDA_MALLOC_HOST = 1,
       CUDA_FREE_DEVICE = 4,
       CUDA_FREE_HOST = 5
};

void
pack(char *bytes, int &bytes_off, int *lengths, int &lengths_off, char *arg, int arg_size)
{
    for (int i = 0; i < arg_size; i++) {
        bytes[bytes_off + i] = *arg;
        arg++;
    }
    *(lengths + lengths_off) = arg_size;

    bytes_off += arg_size;
    lengths_off += 1;
}

unsigned char
touchPages(unsigned char *ptr, size_t size)
{
    unsigned char sum = 0;
    for (unsigned i = 0; i < size; i += PAGE_SIZE_BYTES) {
        sum += ptr[i];
    }
    sum += ptr[size-1];
    return sum;
}

void
blockThread()
{
    // Cache line align the bool to ensure other values are not allocated on
    // the same line to avoid contention and Ruby functional access failures
    bool *is_free;
    int error = posix_memalign((void**)&is_free, 128, 128);
    if (error) {
        fprintf(stderr, "ERROR: cudaRegisterFatBinary2 failed with code: %d, Exiting...\n", error);
        exit(-1);
    }
    *is_free = false;

    gpusyscall_t call_params;
    call_params.num_args = 1;
    call_params.arg_lengths = new int[call_params.num_args];
    call_params.arg_lengths[0] = sizeof(bool*);
    call_params.total_bytes = call_params.arg_lengths[0];
    call_params.args = new char[call_params.total_bytes];
    int bytes_off = 0;
    int lengths_off = 0;
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&is_free, call_params.arg_lengths[0]);

    // This while loop is used to suppress interrupts that awaken the thread.
    // When a thread is woken up, it may handle a system call, and it should
    // return to blocking (suspended) if the mutex has not yet been cleared.
    bool free_to_pass = *is_free;
    while(!free_to_pass) {
        m5_gpu(83, (uint64_t)&call_params);
        free_to_pass = *is_free;
    }

    delete[] call_params.args;
    delete[] call_params.arg_lengths;
    delete is_free;
}

cudaError_t
cudaMallocHelper(void **ptr, size_t size, unsigned type)
{
    gpusyscall_t call_params;
    call_params.num_args = 2;
    call_params.arg_lengths = new int[call_params.num_args];

    call_params.arg_lengths[0] = sizeof(void **);
    call_params.arg_lengths[1] = sizeof(size_t);
    call_params.total_bytes = call_params.arg_lengths[0] + call_params.arg_lengths[1];

    call_params.args = new char[call_params.total_bytes];

    call_params.ret = new char[sizeof(cudaError_t)];
    cudaError_t* ret_spot = (cudaError_t*)call_params.ret;
    *ret_spot = cudaSuccess;

    int bytes_off = 0;
    int lengths_off = 0;

    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&ptr, call_params.arg_lengths[0]);
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&size, call_params.arg_lengths[1]);

    m5_gpu(type, (uint64_t)&call_params);
    cudaError_t ret = *((cudaError_t*)call_params.ret);

    delete call_params.args;
    delete call_params.arg_lengths;
    delete call_params.ret;

    if (ret == cudaErrorApiFailureBase) {
        // This return code indicates that memory management must be handled
        // outside the simulator, so CPU must allocate memory for GPU
        int error = posix_memalign(ptr, 128, size);
        if (error) {
            fprintf(stderr, "ERROR: cudaMalloc failed with code: %d, Exiting...\n", error);
            exit(-1);
        }
        ret = cudaSuccess;

        // Touch all pages to ensure OS mapping
        touchPages((unsigned char*)*ptr, size);

        if (type == CUDA_MALLOC_DEVICE) {
            // Need to register this memory as device memory in simulator.
            // This registration is used if/when enforcing access permissions
            // between CPU and GPU
            call_params.num_args = 2;
            call_params.arg_lengths = new int[call_params.num_args];

            call_params.arg_lengths[0] = sizeof(void*);
            call_params.arg_lengths[1] = sizeof(size_t);
            call_params.total_bytes = call_params.arg_lengths[0] + call_params.arg_lengths[1];

            call_params.args = new char[call_params.total_bytes];

            call_params.ret = new char[sizeof(cudaError_t)];
            ret_spot = (cudaError_t*)call_params.ret;
            *ret_spot = cudaSuccess;

            bytes_off = 0;
            lengths_off = 0;

            pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)ptr, call_params.arg_lengths[0]);
            pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&size, call_params.arg_lengths[1]);

            m5_gpu(82, (uint64_t)&call_params);
            cudaError_t reg_ret = *((cudaError_t*)call_params.ret);
            assert(reg_ret == cudaSuccess);

            delete[] call_params.args;
            delete[] call_params.arg_lengths;
            delete[] call_params.ret;
        }
    }

    return ret;
}

cudaError_t
cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind)
{
    // If transfer will access host memory, touch it to ensure OS page mapping
    if (kind == cudaMemcpyHostToDevice) {
        touchPages((unsigned char*)src, count);
    } else if(kind == cudaMemcpyDeviceToHost) {
        touchPages((unsigned char*)dst, count);
    }

    gpusyscall_t call_params;
    call_params.num_args = 4;
    call_params.arg_lengths = new int[call_params.num_args];

    call_params.arg_lengths[0] = sizeof(void*);
    call_params.arg_lengths[1] = sizeof(const void*);
    call_params.arg_lengths[2] = sizeof(size_t);
    call_params.arg_lengths[3] = sizeof(enum cudaMemcpyKind);
    call_params.total_bytes = call_params.arg_lengths[0] +
            call_params.arg_lengths[1] + call_params.arg_lengths[2] +
            call_params.arg_lengths[3];

    call_params.args = new char[call_params.total_bytes];
    call_params.ret = new char[sizeof(bool)];
    bool* ret_spot = (bool*)call_params.ret;
    *ret_spot = false;

    int bytes_off = 0;
    int lengths_off = 0;
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&dst, call_params.arg_lengths[0]);
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&src, call_params.arg_lengths[1]);
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&count, call_params.arg_lengths[2]);
    pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&kind, call_params.arg_lengths[3]);

    m5_gpu(7, (uint64_t)&call_params);
    bool block_thread = *((bool*)call_params.ret);

    delete call_params.args;
    delete call_params.arg_lengths;
    delete call_params.ret;

    if (block_thread) {
        blockThread();
    }

    return cudaSuccess;
}

