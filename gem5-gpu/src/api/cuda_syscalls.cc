// This file created from cuda_runtime_api.h distributed with CUDA 1.1
// Changes Copyright 2009,  Tor M. Aamodt, Ali Bakhoda and George L. Yuan
// University of British Columbia

/*
 * cuda_syscalls.cc
 *
 * Copyright © 2009 by Tor M. Aamodt, Wilson W. L. Fung, Ali Bakhoda,
 * George L. Yuan and the University of British Columbia, Vancouver,
 * BC V6T 1Z4, All Rights Reserved.
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

/*
 * Copyright 1993-2007 NVIDIA Corporation.  All rights reserved.
 *
 * NOTICE TO USER:
 *
 * This source code is subject to NVIDIA ownership rights under U.S. and
 * international Copyright laws.  Users and possessors of this source code
 * are hereby granted a nonexclusive, royalty-free license to use this code
 * in individual and commercial software.
 *
 * NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE
 * CODE FOR ANY PURPOSE.  IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR
 * IMPLIED WARRANTY OF ANY KIND.  NVIDIA DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS,  WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION,  ARISING OUT OF OR IN CONNECTION WITH THE USE
 * OR PERFORMANCE OF THIS SOURCE CODE.
 *
 * U.S. Government End Users.   This source code is a "commercial item" as
 * that term is defined at  48 C.F.R. 2.101 (OCT 1995), consisting  of
 * "commercial computer  software"  and "commercial computer software
 * documentation" as such terms are  used in 48 C.F.R. 12.212 (SEPT 1995)
 * and is provided to the U.S. Government only as a commercial end item.
 * Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through
 * 227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the
 * source code with only those rights set forth herein.
 *
 * Any use of this source code in individual and commercial software must
 * include, in the user documentation and internal comments to the code,
 * the above Disclaimer and U.S. Government End Users Notice.
 */

/*
 * Copyright (c) 2011-2013 Mark D. Hill and David A. Wood
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

#include <cassert>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <iostream>
#include <string>

#ifdef OPENGL_SUPPORT
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h> // Apple's version of GLUT is here
#else
#include <GL/gl.h>
#endif
#endif

#include "api/cuda_syscalls.hh"
#include "api/gpu_syscall_helper.hh"
#include "cpu/thread_context.hh"
#include "cuda-sim/cuda-sim.h"
#include "cuda-sim/ptx_ir.h"
#include "cuda-sim/ptx_loader.h"
#include "cuda-sim/ptx_parser.h"
#include "debug/GPUSyscalls.hh"
#include "gpu/gpgpu-sim/cuda_gpu.hh"
#include "gpgpusim_entrypoint.h"
#include "gpgpu-sim/gpu-sim.h"
#include "stream_manager.h"

#define MAX_STRING_LEN 1000

typedef struct CUstream_st *cudaStream_t;

static int load_static_globals(GPUSyscallHelper *helper, symbol_table *symtab);
static int load_constants(GPUSyscallHelper *helper, symbol_table *symtab);

unsigned g_active_device = 0; // Active CUDA-enabled GPU that runs the code
cudaError_t g_last_cudaError = cudaSuccess;

extern stream_manager *g_stream_manager;

/* Jie : need change to opencl mode *//*
void register_ptx_function(const char *name, function_info *impl)
{
   // TODO: Figure out the best location for this function
}
*//* Jie : need change to opencl mode */

kernel_info_t *gpgpu_cuda_ptx_sim_init_grid(gpgpu_ptx_sim_arg_list_t args,
                                            struct dim3 gridDim,
                                            struct dim3 blockDim,
                                            function_info* entry)
{
   kernel_info_t *result = new kernel_info_t(gridDim,blockDim,entry);
   if (entry == NULL) {
       panic("GPGPU-Sim PTX: ERROR launching kernel -- no PTX implementation found");
   }
   unsigned argcount=args.size();
   unsigned argn=1;
   for (gpgpu_ptx_sim_arg_list_t::iterator a = args.begin(); a != args.end(); a++) {
      entry->add_param_data(argcount-argn, &(*a));
      argn++;
   }

   entry->finalize(result->get_param_memory());
   g_ptx_kernel_count++;

   return result;
}

#if defined __APPLE__
#   define __my_func__    __PRETTY_FUNCTION__
#else
# if defined __cplusplus ? __GNUC_PREREQ (2, 6) : __GNUC_PREREQ (2, 4)
#   define __my_func__    __PRETTY_FUNCTION__
# else
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#   define __my_func__    __func__
#  else
#   define __my_func__    ((__const char *) 0)
#  endif
# endif
#endif

class kernel_config {
  public:
    kernel_config(dim3 GridDim, dim3 BlockDim, size_t sharedMem, struct CUstream_st *stream)
    {
        m_GridDim=GridDim;
        m_BlockDim=BlockDim;
        m_sharedMem=sharedMem;
        m_stream = stream;
    }
    void set_arg(const void *arg, size_t size, size_t offset)
    {
        m_args.push_front(gpgpu_ptx_sim_arg(arg,size,offset));
    }
    dim3 grid_dim() const { return m_GridDim; }
    dim3 block_dim() const { return m_BlockDim; }
    gpgpu_ptx_sim_arg_list_t get_args() { return m_args; }
    struct CUstream_st *get_stream() { return m_stream; }

  private:
    dim3 m_GridDim;
    dim3 m_BlockDim;
    size_t m_sharedMem;
    struct CUstream_st *m_stream;
    gpgpu_ptx_sim_arg_list_t m_args;
};

extern "C" void ptxinfo_addinfo()
{
    if (!strcmp("__cuda_dummy_entry__",get_ptxinfo_kname())) {
      // this string produced by ptxas for empty ptx files (e.g., bandwidth test)
        clear_ptxinfo();
        return;
    }
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    print_ptxinfo();
    cudaGPU->add_ptxinfo(get_ptxinfo_kname(), get_ptxinfo_kinfo());
    clear_ptxinfo();
}

void cuda_not_implemented(const char* func, unsigned line)
{
    fflush(stdout);
    fflush(stderr);
    printf("\n\ngem5-gpu CUDA: Execution error: CUDA API function \"%s()\" has not been implemented yet.\n"
            "                 [gem5-gpu/src/gem5/%s around line %u]\n\n\n",
    func,__FILE__, line);
    fflush(stdout);
    abort();
}

typedef std::map<unsigned,CUevent_st*> event_tracker_t;

int CUevent_st::m_next_event_uid;
event_tracker_t g_timer_events;
std::list<kernel_config> g_cuda_launch_stack;

/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

void
cudaMalloc(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_devPtr = *((Addr*)helper.getParam(0, true));
    size_t sim_size = *((size_t*)helper.getParam(1));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaMalloc(devPtr = %x, size = %d)\n", sim_devPtr, sim_size);

    g_last_cudaError = cudaSuccess;

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    if (!cudaGPU->isManagingGPUMemory()) {
        // Tell CUDA runtime to allocate memory
        cudaError_t to_return = cudaErrorApiFailureBase;
        helper.setReturn((uint8_t*)&to_return, sizeof(cudaError_t));
        return;
    } else {
        Addr addr = cudaGPU->allocateGPUMemory(sim_size);
        helper.writeBlob(sim_devPtr, (uint8_t*)(&addr), sizeof(Addr), true);
        if (addr) {
            g_last_cudaError = cudaSuccess;
        } else {
            g_last_cudaError = cudaErrorMemoryAllocation;
        }
        helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
    }
}

void
cudaMallocHost(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_ptr = *((Addr*)helper.getParam(0, true));
    size_t sim_size = *((size_t*)helper.getParam(1));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaMallocHost(ptr = %x, size = %d)\n", sim_ptr, sim_size);

    g_last_cudaError = cudaSuccess;
    // Tell CUDA runtime to allocate memory
    cudaError_t to_return = cudaErrorApiFailureBase;
    helper.setReturn((uint8_t*)&to_return, sizeof(cudaError_t));
}

void
cudaRegisterDeviceMemory(ThreadContext *tc, gpusyscall_t *call_params)
{
    // This GPU syscall is used to initialize tracking of GPU memory so that
    // the GPU can do TLB lookups and if necessary, physical memory allocations
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_devicePtr = *((Addr*)helper.getParam(0, true));
    size_t sim_size = *((size_t*)helper.getParam(1));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaRegisterDeviceMemory(devicePtr = %x, size = %d)\n", sim_devicePtr, sim_size);

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    cudaGPU->registerDeviceMemory(tc, sim_devicePtr, sim_size);
}

void
cudaMallocPitch(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height __dv(1)) {
void
cudaMallocArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaFree(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_devPtr = *((Addr*)helper.getParam(0, true));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaFree(devPtr = %x)\n", sim_devPtr);

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    if (!cudaGPU->isManagingGPUMemory()) {
        g_last_cudaError = cudaSuccess;
        // Tell CUDA runtime to free memory
        cudaError_t to_return = cudaErrorApiFailureBase;
        helper.setReturn((uint8_t*)&to_return, sizeof(cudaError_t));
    } else {
        // TODO: Tell SPA to free this memory
        cudaError_t to_return = cudaSuccess;
        helper.setReturn((uint8_t*)&to_return, sizeof(cudaError_t));
    }
}

void
cudaFreeHost(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_ptr = *((Addr*)helper.getParam(0, true));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaFreeHost(ptr = %x)\n", sim_ptr);

    g_last_cudaError = cudaSuccess;
    // Tell CUDA runtime to free memory
    cudaError_t to_return = cudaErrorApiFailureBase;
    helper.setReturn((uint8_t*)&to_return, sizeof(cudaError_t));
}

//__host__ cudaError_t CUDARTAPI cudaFreeArray(struct cudaArray *array){
void
cudaFreeArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
};


/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

void
cudaMemcpy(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_dst = *((Addr*)helper.getParam(0, true));
    Addr sim_src = *((Addr*)helper.getParam(1, true));
    size_t sim_count = *((size_t*)helper.getParam(2));
    enum cudaMemcpyKind sim_kind = *((enum cudaMemcpyKind*)helper.getParam(3));

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaMemcpy(dst = %x, src = %x, count = %d, kind = %s)\n",
            sim_dst, sim_src, sim_count, cudaMemcpyKindStrings[sim_kind]);

    bool suspend = false;
    if (sim_count == 0) {
        g_last_cudaError = cudaSuccess;
        helper.setReturn((uint8_t*)&suspend, sizeof(bool));
        return;
    }

    if (sim_kind == cudaMemcpyHostToDevice) {
        stream_operation mem_op((const void*)sim_src, (size_t)sim_dst, sim_count, 0);
        mem_op.setThreadContext(tc);
        g_stream_manager->push(mem_op);
    } else if (sim_kind == cudaMemcpyDeviceToHost) {
        stream_operation mem_op((size_t)sim_src, (void*)sim_dst, sim_count, 0);
        mem_op.setThreadContext(tc);
        g_stream_manager->push(mem_op);
    } else if (sim_kind == cudaMemcpyDeviceToDevice) {
        stream_operation mem_op((size_t)sim_src, (size_t)sim_dst, sim_count, 0);
        mem_op.setThreadContext(tc);
        g_stream_manager->push(mem_op);
    } else {
        panic("GPGPU-Sim PTX: cudaMemcpy - ERROR : unsupported cudaMemcpyKind\n");
    }

    suspend = cudaGPU->needsToBlock();
    assert(suspend);
    g_last_cudaError = cudaSuccess;
    helper.setReturn((uint8_t*)&suspend, sizeof(bool));
}

//__host__ cudaError_t CUDARTAPI cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind) {
void
cudaMemcpyToArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind) {
void
cudaMemcpyFromArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind __dv(cudaMemcpyDeviceToDevice)) {
void
cudaMemcpyArrayToArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
void
cudaMemcpy2D(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
void
cudaMemcpy2DToArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) {
void
cudaMemcpy2DFromArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

//__host__ cudaError_t CUDARTAPI cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind __dv(cudaMemcpyDeviceToDevice)) {
void
cudaMemcpy2DArrayToArray(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaMemcpyToSymbol(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_symbol = *((Addr*)helper.getParam(0, true));
    Addr sim_src = *((Addr*)helper.getParam(1, true));
    size_t sim_count = *((size_t*)helper.getParam(2));
    size_t sim_offset = *((size_t*)helper.getParam(3));
    enum cudaMemcpyKind sim_kind = *((enum cudaMemcpyKind*)helper.getParam(4));

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaMemcpyToSymbol(symbol = %x, src = %x, count = %d, offset = %d, kind = %s)\n",
            sim_symbol, sim_src, sim_count, sim_offset, cudaMemcpyKindStrings[sim_kind]);

    assert(sim_kind == cudaMemcpyHostToDevice);
    stream_operation mem_op((const void*)sim_src, (const char*)sim_symbol, sim_count, sim_offset, NULL);
    mem_op.setThreadContext(tc);
    g_stream_manager->push(mem_op);

    bool suspend = cudaGPU->needsToBlock();
    assert(suspend);
    g_last_cudaError = cudaSuccess;
    helper.setReturn((uint8_t*)&suspend, sizeof(bool));
}

//__host__ cudaError_t CUDARTAPI cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset __dv(0), enum cudaMemcpyKind kind __dv(cudaMemcpyDeviceToHost)) {
void
cudaMemcpyFromSymbol(ThreadContext *tc, gpusyscall_t *call_params) {
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

//	__host__ cudaError_t CUDARTAPI cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream)
void
cudaMemcpyAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

//	__host__ cudaError_t CUDARTAPI cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream)
void
cudaMemcpyToArrayAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

//	__host__ cudaError_t CUDARTAPI cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream)
void
cudaMemcpyFromArrayAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

//	__host__ cudaError_t CUDARTAPI cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream)
void
cudaMemcpy2DAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaMemcpy2DToArrayAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaMemcpy2DFromArrayAsync(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaBlockThread(ThreadContext *tc, gpusyscall_t *call_params)
{
    // Similar to futex in syscalls, except we need to track the variable to
    // be set
    GPUSyscallHelper helper(tc, call_params);
    Addr sim_is_free_ptr = *((Addr*)helper.getParam(0, true));

    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaBlockThread(tc = %x, is_free_ptr = %x)\n", tc, sim_is_free_ptr);

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    cudaGPU->blockThread(tc, sim_is_free_ptr);
}

/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

void
cudaMemset(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_mem = *((Addr*)helper.getParam(0, true));
    int sim_c = *((int*)helper.getParam(1));
    size_t sim_count = *((size_t*)helper.getParam(2));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaMemset(mem = %x, c = %d, count = %d)\n", sim_mem, sim_c, sim_count);

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    if (!cudaGPU->isManagingGPUMemory()) {
        // Signal to libcuda that it should handle the memset
        g_last_cudaError = cudaErrorApiFailureBase;
        helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
    } else {
        stream_operation mem_op((size_t)sim_mem, sim_c, sim_count, 0);
        mem_op.setThreadContext(tc);
        g_stream_manager->push(mem_op);
        g_last_cudaError = cudaSuccess;
        helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
    }
}

void
cudaMemset2D(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

void
cudaGetSymbolAddress(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGetSymbolSize(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
*                                                                              *
*                                                                              *
*                                                                              *
*******************************************************************************/

void
cudaGetDeviceCount(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);
    Addr sim_count = *((Addr*)helper.getParam(0, true));

    int count = CudaGPU::getNumCudaDevices();
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaGetDeviceCount(count* = %x) = %d\n", sim_count, count);

    helper.writeBlob(sim_count, (uint8_t*)(&count), sizeof(int));
    g_last_cudaError = cudaSuccess;
}

void
cudaGetDeviceProperties(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_prop = *((Addr*)helper.getParam(0, true));
    int sim_device = *((int*)helper.getParam(1));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaGetDeviceProperties(prop* = %x, device = %d)\n", sim_prop, sim_device);
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    if (sim_device <= CudaGPU::getNumCudaDevices())  {
        CudaGPU::CudaDeviceProperties *prop = cudaGPU->getDeviceProperties();
        helper.writeBlob(sim_prop, (uint8_t*)(prop), sizeof(CudaGPU::CudaDeviceProperties));
        g_last_cudaError = cudaSuccess;
    } else {
        g_last_cudaError = cudaErrorInvalidDevice;
    }
    helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
}

void
cudaChooseDevice(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaSetDevice(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    int sim_device = *((int*)helper.getParam(0));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaSetDevice(device = %d)\n", sim_device);
    if (sim_device <= CudaGPU::getNumCudaDevices()) {
        g_active_device = sim_device;
        g_last_cudaError = cudaSuccess;
    } else {
        g_last_cudaError = cudaErrorInvalidDevice;
    }
    helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
}

void
cudaGetDevice(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_device = *((Addr*)helper.getParam(0, true));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaGetDevice(device = 0x%x)\n", sim_device);
    if (g_active_device <= CudaGPU::getNumCudaDevices()) {
        helper.writeBlob(sim_device, (uint8_t*)&g_active_device, sizeof(int));
        g_last_cudaError = cudaSuccess;
    } else {
        g_last_cudaError = cudaErrorInvalidDevice;
    }
    helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

// __host__ cudaError_t CUDARTAPI cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size __dv(UINT_MAX))
void
cudaBindTexture(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaBindTextureToArray(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaUnbindTexture(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGetTextureAlignmentOffset(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGetTextureReference(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

void
cudaGetChannelDesc(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaCreateChannelDesc(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

void
cudaGetLastError(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaGetLastError()\n");
    helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
}

void
cudaGetErrorString(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

void
cudaConfigureCall(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    dim3 sim_gridDim = *((dim3*)helper.getParam(0));
    dim3 sim_blockDim = *((dim3*)helper.getParam(1));
    size_t sim_sharedMem = *((size_t*)helper.getParam(2));
    cudaStream_t sim_stream = *((cudaStream_t*)helper.getParam(3));
    if (sim_stream) {
        panic("gem5-fusion doesn't currently support CUDA streams");
    }
    assert(!sim_stream); // We do not currently support CUDA streams
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaConfigureCall(gridDim = (%u,%u,%u), blockDim = (%u,%u,%u), sharedMem = %u, stream)\n", sim_gridDim.x, sim_gridDim.y, sim_gridDim.z, sim_blockDim.x, sim_blockDim.y, sim_blockDim.z, sim_sharedMem);

    g_cuda_launch_stack.push_back(kernel_config(sim_gridDim, sim_blockDim, sim_sharedMem, sim_stream));
    g_last_cudaError = cudaSuccess;
}

void
cudaSetupArgument(ThreadContext *tc, gpusyscall_t *call_params){
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_arg = *((Addr*)helper.getParam(0, true));
    size_t sim_size = *((size_t*)helper.getParam(1));
    size_t sim_offset = *((size_t*)helper.getParam(2));
    const void* arg = new uint8_t[sim_size];
    helper.readBlob(sim_arg, (uint8_t*)arg, sim_size);
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaSetupArgument(arg = %x, size = %d, offset = %d)\n", sim_arg, sim_size, sim_offset);

    assert(!g_cuda_launch_stack.empty());
    kernel_config &config = g_cuda_launch_stack.back();
    config.set_arg(arg, sim_size, sim_offset);

    g_last_cudaError = cudaSuccess;
}


void
cudaLaunch(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_hostFun = *((Addr*)helper.getParam(0, true));

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    char *mode = getenv("PTX_SIM_MODE_FUNC");
    if (mode)
        sscanf(mode,"%u", &g_ptx_sim_mode);
    assert(!g_cuda_launch_stack.empty());
    kernel_config config = g_cuda_launch_stack.back();
    struct CUstream_st *stream = config.get_stream();
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaLaunch(hostFun* = %x)\n", sim_hostFun);
    kernel_info_t *grid = gpgpu_cuda_ptx_sim_init_grid(config.get_args(), config.grid_dim(), config.block_dim(), cudaGPU->get_kernel((const char*)sim_hostFun));
    grid->set_inst_base_vaddr(cudaGPU->getInstBaseVaddr());
    std::string kname = grid->name();
    stream_operation op(grid, g_ptx_sim_mode, stream);
    op.setThreadContext(tc);
    g_stream_manager->push(op);
    g_cuda_launch_stack.pop_back();
    g_last_cudaError = cudaSuccess;
}

size_t getMaxThreadsPerBlock(struct cudaFuncAttributes attr) {
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    CudaGPU::CudaDeviceProperties *prop;

    prop = cudaGPU->getDeviceProperties();

    size_t max = prop->maxThreadsPerBlock;

    if ((prop->regsPerBlock / attr.numRegs) < max) {
        max = prop->regsPerBlock / attr.numRegs;
    }

    return max;
}

void
cudaFuncGetAttributes(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_attr = *((Addr*)helper.getParam(0, true));
    Addr sim_hostFun = *((Addr*)helper.getParam(1, true));

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    function_info *entry = cudaGPU->get_kernel((const char*)sim_hostFun);

    if (entry) {
        const struct gpgpu_ptx_sim_kernel_info *kinfo = entry->get_kernel_info();
        cudaFuncAttributes attr;
        attr.sharedSizeBytes = kinfo->smem;
        attr.constSizeBytes  = kinfo->cmem;
        attr.localSizeBytes  = kinfo->lmem;
        attr.numRegs         = kinfo->regs;
        attr.maxThreadsPerBlock = getMaxThreadsPerBlock(attr);
        attr.ptxVersion      = kinfo->ptx_version;
        attr.binaryVersion   = kinfo->sm_target;
        helper.writeBlob(sim_attr, (uint8_t*)&attr, sizeof(cudaFuncAttributes));
        g_last_cudaError = cudaSuccess;
    } else {
        g_last_cudaError = cudaErrorInvalidDeviceFunction;
    }

    helper.setReturn((uint8_t*)&g_last_cudaError, sizeof(cudaError_t));
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

// __host__ cudaError_t CUDARTAPI cudaStreamCreate(cudaStream_t *stream)
void
cudaStreamCreate(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

// __host__ cudaError_t CUDARTAPI cudaStreamDestroy(cudaStream_t stream)
void
cudaStreamDestroy(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

// __host__ cudaError_t CUDARTAPI cudaStreamSynchronize(cudaStream_t stream)
void
cudaStreamSynchronize(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

// __host__ cudaError_t CUDARTAPI cudaStreamQuery(cudaStream_t stream)
void
cudaStreamQuery(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

// __host__ cudaError_t CUDARTAPI cudaEventCreate(cudaEvent_t *event)
void
cudaEventCreate(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventRecord(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventQuery(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventSynchronize(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventDestroy(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventElapsedTime(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

/*******************************************************************************
 *                                                                              *
 *                                                                              *
 *                                                                              *
*******************************************************************************/

void
cudaThreadExit(ThreadContext *tc, gpusyscall_t *call_params)
{
    // This function should clean-up any/all resources associated with the
    // current device in the passed thread context
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaThreadSynchronize(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: cudaThreadSynchronize(), tc = %x\n", tc);
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    bool suspend = cudaGPU->needsToBlock();
    g_last_cudaError = cudaSuccess;
    helper.setReturn((uint8_t*)&suspend, sizeof(bool));
}

void
__cudaSynchronizeThreads(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
deleteFatCudaBinary(__cudaFatCudaBinary* fat_cubin) {
    if (fat_cubin->ident) delete[] fat_cubin->ident;
    if (fat_cubin->ptx) {
        // @TODO: This might need to loop... consider splitting out the
        // CUDA binary read into a separate helper class that tracks the
        // number of ptx_entries that are read in
        if (fat_cubin->ptx->gpuProfileName) delete[] fat_cubin->ptx->gpuProfileName;
        if (fat_cubin->ptx->ptx) delete[] fat_cubin->ptx->ptx;
        delete[] fat_cubin->ptx;
    }
    delete fat_cubin;
}

symbol_table* registering_symtab = NULL;
unsigned registering_fat_cubin_handle = 0;
int registering_allocation_size = -1;
Addr registering_allocation_ptr = 0;
Addr registering_local_alloc_ptr = 0;

unsigned
get_global_and_constant_alloc_size(symbol_table* symtab)
{
    unsigned total_bytes = 0;
    symbol_table::iterator iter;
    for (iter = symtab->global_iterator_begin(); iter != symtab->global_iterator_end(); iter++) {
        symbol* global = *iter;
        total_bytes += global->get_size_in_bytes();
    }

    for (iter = symtab->const_iterator_begin(); iter != symtab->const_iterator_end(); iter++) {
        symbol* constant = *iter;
        total_bytes += constant->get_size_in_bytes();
    }

    return total_bytes;
}

unsigned
get_local_alloc_size(CudaGPU *cudaGPU) {
    unsigned cores = cudaGPU->getDeviceProperties()->multiProcessorCount;
    unsigned threads_per_core = cudaGPU->getMaxThreadsPerMultiprocessor();
    // NOTE: Per technical specs Wikipedia: http://en.wikipedia.org/wiki/CUDA
    // For CUDA GPUs with compute capability 1.x, each thread should be able to
    // access up to 16kB of memory, and for compute capability 2.x+, each
    // thread should be able to access up to 512kB of local memory. Since this
    // could blow out the simulator's memory footprint, here we use 8kB per
    // thread as a more reasonable baseline. This may need to be changed if
    // benchmarks trip on the GPGPU-Sim-side panic of too much local memory
    // usage per thread.
    unsigned max_local_mem_per_thread = 8 * 1024;
    return cores * threads_per_core * max_local_mem_per_thread;
}

void
finalize_global_and_constant_setup(ThreadContext *tc, Addr base_addr, symbol_table* symtab)
{
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    Addr curr_addr = base_addr;
    Addr next_addr = 0;
    symbol_table::iterator iter;
    for (iter = symtab->global_iterator_begin(); iter != symtab->global_iterator_end(); iter++) {
        symbol* global = *iter;
        global->set_address(curr_addr);
        cudaGPU->registerDeviceMemory(tc, curr_addr, global->get_size_in_bytes());
        next_addr = curr_addr + global->get_size_in_bytes();
        if (next_addr - base_addr > registering_allocation_size) {
            panic("Didn't allocate enough global+const memory. Bailing!");
        } else {
            DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: Updated symbol \"%s\" to address range 0x%x to 0x%x\n", global->name(), curr_addr, next_addr-1);
        }
        curr_addr = next_addr;
    }

    for (iter = symtab->const_iterator_begin(); iter != symtab->const_iterator_end(); iter++) {
        symbol* constant = *iter;
        constant->set_address(curr_addr);
        cudaGPU->registerDeviceMemory(tc, curr_addr, constant->get_size_in_bytes());
        next_addr = curr_addr + constant->get_size_in_bytes();
        if (next_addr - base_addr > registering_allocation_size) {
            panic("Didn't allocate enough global+const memory. Bailing!");
        } else {
            DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: Updated symbol \"%s\" to address range 0x%x to 0x%x\n", constant->name(), curr_addr, next_addr-1);
        }
        curr_addr = next_addr;
    }
}

void registerFatBinaryTop(GPUSyscallHelper *helper, Addr sim_fatCubin, size_t sim_binSize)
{
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    gpgpu_t *gpu = cudaGPU->getTheGPU();

    // Get primary arguments
    __cudaFatCudaBinary* fat_cubin = new __cudaFatCudaBinary;

#if THE_ISA == ARM_ISA
    // Size of fat binary in 32-bit simulated system is 64B
    #define FATBIN_PACKAGE_SIZE 64
    // Add 4B to keep last 64-bit pointer math from reading other stack junk
    uint8_t fatbin_package[FATBIN_PACKAGE_SIZE + 4];
    helper->readBlob(sim_fatCubin, fatbin_package, FATBIN_PACKAGE_SIZE);
    fat_cubin->magic = unpackData<unsigned long>(fatbin_package, 0);
    fat_cubin->version = unpackData<unsigned long>(fatbin_package, 4);
    fat_cubin->gpuInfoVersion = unpackData<unsigned long>(fatbin_package, 8);
    fat_cubin->key = unpackPointer<char*>(fatbin_package, 12);
    fat_cubin->ident = unpackPointer<char*>(fatbin_package, 16);
    fat_cubin->usageMode = unpackPointer<char*>(fatbin_package, 20);
    fat_cubin->ptx = unpackPointer<__cudaFatPtxEntry*>(fatbin_package, 24);
    fat_cubin->cubin = unpackPointer<__cudaFatCubinEntry*>(fatbin_package, 28);
    fat_cubin->debug = unpackPointer<__cudaFatDebugEntry*>(fatbin_package, 32);
    fat_cubin->debugInfo = unpackPointer<void*>(fatbin_package, 36);
    fat_cubin->flags = unpackData<unsigned int>(fatbin_package, 40);
    fat_cubin->exported = unpackPointer<__cudaFatSymbol*>(fatbin_package, 44);
    fat_cubin->imported = unpackPointer<__cudaFatSymbol*>(fatbin_package, 48);
    fat_cubin->dependends = unpackPointer<__cudaFatCudaBinaryRec*>(fatbin_package, 52);
    fat_cubin->characteristic = unpackData<unsigned int>(fatbin_package, 56);
    fat_cubin->elf = unpackPointer<__cudaFatElfEntry*>(fatbin_package, 60);
#elif THE_ISA == X86_ISA
    // x86 64-bit, we can just read directly from memory
    helper->readBlob(sim_fatCubin, (uint8_t*)fat_cubin, sizeof(struct __cudaFatCudaBinaryRec));
#else
    #error Currently gem5-gpu is only known to support x86 and ARM
#endif

    if (sim_binSize < 0) {
        panic("Used wrong __cudaRegisterFatBinary call!!! Did you run the sizeHack.py?");
    }

    // Read in the fat PTX entries
    uint8_t* ptx_entries = NULL;
    __cudaFatPtxEntry* ptx_entry_ptr;
    int ptx_count = 0;
    do {
        uint8_t* temp_ptx_entry_buf = new uint8_t[sizeof(__cudaFatPtxEntry) * (ptx_count + 1)];
        if (ptx_entries) {
            memcpy(temp_ptx_entry_buf, ptx_entries, sizeof(__cudaFatPtxEntry) * ptx_count);
        }

#if THE_ISA == ARM_ISA
        // Size of PTX entry in 32-bit simulated system is 8B
        #define PTXENTRY_PACKAGE_SIZE 8
        // Add 4B to keep last 64-bit pointer math from reading other stack junk
        uint8_t ptx_entry_package[PTXENTRY_PACKAGE_SIZE + 4];
        helper->readBlob(
                (Addr)fat_cubin->ptx + ptx_count * PTXENTRY_PACKAGE_SIZE,
                ptx_entry_package, PTXENTRY_PACKAGE_SIZE);

        __cudaFatPtxEntry *temp_ptx_entry_ptr =
                                    (__cudaFatPtxEntry*)temp_ptx_entry_buf;
        temp_ptx_entry_ptr[ptx_count].gpuProfileName =
                                    unpackPointer<char*>(ptx_entry_package, 0);
        temp_ptx_entry_ptr[ptx_count].ptx =
                                    unpackPointer<char*>(ptx_entry_package, 4);
#elif THE_ISA == X86_ISA
        helper->readBlob((Addr)(fat_cubin->ptx + ptx_count),
                temp_ptx_entry_buf + sizeof(__cudaFatPtxEntry) * ptx_count,
                sizeof(__cudaFatPtxEntry));
#endif
        ptx_entry_ptr = (__cudaFatPtxEntry *)temp_ptx_entry_buf + ptx_count;
        if (ptx_entry_ptr->ptx != 0) {
            DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: Found instruction text segment: %x\n", (Addr)ptx_entry_ptr->ptx);
            cudaGPU->registerDeviceInstText(helper->getThreadContext(), (Addr)ptx_entry_ptr->ptx, sim_binSize);
            uint8_t* ptx_code = new uint8_t[sim_binSize];
            helper->readBlob((Addr)ptx_entry_ptr->ptx, ptx_code, sim_binSize);
            uint8_t* gpu_profile = new uint8_t[MAX_STRING_LEN];
            helper->readString((Addr)ptx_entry_ptr->gpuProfileName, gpu_profile, MAX_STRING_LEN);

            ptx_entry_ptr->ptx = (char*)ptx_code;
            ptx_entry_ptr->gpuProfileName = (char*)gpu_profile;
        }
        ptx_count++;
        if (ptx_entries) delete[] ptx_entries;
        ptx_entries = temp_ptx_entry_buf;
    } while(ptx_entry_ptr->gpuProfileName != 0);
    fat_cubin->ptx = (__cudaFatPtxEntry *)ptx_entries;

    // Read ident member
    Addr ident_addr = (Addr)fat_cubin->ident;
    fat_cubin->ident = new char[MAX_STRING_LEN];
    helper->readString(ident_addr, (uint8_t*)fat_cubin->ident, MAX_STRING_LEN);

    static unsigned next_fat_bin_handle = 1;
    static unsigned source_num = 1;
    assert(registering_fat_cubin_handle == 0);
    registering_fat_cubin_handle = next_fat_bin_handle++;
    assert(fat_cubin->version >= 3);
    unsigned num_ptx_versions = 0;
    unsigned max_capability = 0;
    unsigned selected_capability = 0;
    bool found = false;
    unsigned forced_max_capability = gpu->get_config().get_forced_max_capability();
    while (fat_cubin->ptx[num_ptx_versions].gpuProfileName != NULL) {
        unsigned capability = 0;
        sscanf(fat_cubin->ptx[num_ptx_versions].gpuProfileName, "compute_%u", &capability);
        DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: __cudaRegisterFatBinary found PTX versions for '%s', capability = %s\n", fat_cubin->ident, fat_cubin->ptx[num_ptx_versions].gpuProfileName);
        if (forced_max_capability) {
            if (capability > max_capability && capability <= forced_max_capability) {
                found = true;
                max_capability = capability;
                selected_capability = num_ptx_versions;
            }
        } else {
            if (capability > max_capability) {
                found = true;
                max_capability = capability;
                selected_capability = num_ptx_versions;
            }
        }
        num_ptx_versions++;
    }
    if (found) {
        DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: Loading PTX for %s, capability = %s\n",
                fat_cubin->ident, fat_cubin->ptx[selected_capability].gpuProfileName);
        const char *ptx = fat_cubin->ptx[selected_capability].ptx;
        if (gpu->get_config().convert_to_ptxplus()) {
            panic("GPGPU-Sim PTXPLUS: gem5 + GPGPU-Sim does not support PTXPLUS!");
        } else {
            assert(registering_symtab == NULL);
            registering_symtab = gpgpu_ptx_sim_load_ptx_from_string(ptx, source_num);
            cudaGPU->add_binary(registering_symtab, registering_fat_cubin_handle);
            gpgpu_ptxinfo_load_from_string(ptx, source_num);
        }
        source_num++;
        assert(registering_allocation_size == -1);
        registering_allocation_size = get_global_and_constant_alloc_size(registering_symtab);
    } else {
        panic("GPGPU-Sim PTX: warning -- did not find an appropriate PTX in cubin");
    }
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterFatBinary needs %d bytes allocated\n", registering_allocation_size);

    deleteFatCudaBinary(fat_cubin);
}

void
__cudaRegisterFatBinary(ThreadContext *tc, gpusyscall_t *call_params)
{
#if (CUDART_VERSION < 2010)
    panic("GPGPU-Sim PTX: ERROR ** this version of GPGPU-Sim requires CUDA 2.1 or higher\n");
#endif

    GPUSyscallHelper helper(tc, call_params);

    // Get CUDA call simulated parameters
    Addr sim_fatCubin = *((Addr*)helper.getParam(0, true));
    int sim_binSize = *((int*)helper.getParam(1));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterFatBinary(fatCubin* = %x, binSize = %d)\n", sim_fatCubin, sim_binSize);
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    registerFatBinaryTop(&helper, sim_fatCubin, sim_binSize);

    cudaGPU->saveFatBinaryInfoTop(tc->threadId(), registering_fat_cubin_handle, sim_fatCubin, sim_binSize);

    if (!cudaGPU->isManagingGPUMemory()) {
        helper.setReturn((uint8_t*)&registering_allocation_size, sizeof(int));
    } else {
        assert(!registering_allocation_ptr);
        registering_allocation_ptr = cudaGPU->allocateGPUMemory(registering_allocation_size);
        int zero_allocation = 0;
        helper.setReturn((uint8_t*)&zero_allocation, sizeof(int));
    }
}

unsigned int registerFatBinaryBottom(GPUSyscallHelper *helper, Addr sim_alloc_ptr)
{
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterFatBinaryFinalize(alloc_ptr* = 0x%x)\n", sim_alloc_ptr);

    assert(registering_symtab);
    assert(registering_fat_cubin_handle > 0);
    assert(registering_allocation_size >= 0);
    assert(sim_alloc_ptr || registering_allocation_size == 0);

    if (registering_allocation_size > 0) {
        finalize_global_and_constant_setup(helper->getThreadContext(), sim_alloc_ptr, registering_symtab);
    }

    load_static_globals(helper, registering_symtab);
    load_constants(helper, registering_symtab);

    unsigned int handle = registering_fat_cubin_handle;

    registering_symtab = NULL;
    registering_fat_cubin_handle = 0;
    registering_allocation_size = -1;
    registering_allocation_ptr = 0;

    return handle;
}

void
__cudaRegisterFatBinaryFinalize(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);
    Addr sim_alloc_ptr = *((Addr*)helper.getParam(0, true));

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    cudaGPU->saveFatBinaryInfoBottom(sim_alloc_ptr);

    unsigned int handle;
    if (!cudaGPU->isManagingGPUMemory()) {
        cudaGPU->saveFatBinaryInfoBottom(sim_alloc_ptr);
        handle = registerFatBinaryBottom(&helper, sim_alloc_ptr);
    } else {
        assert(!sim_alloc_ptr);
        assert(registering_allocation_ptr || registering_allocation_size == 0);
        cudaGPU->saveFatBinaryInfoBottom(registering_allocation_ptr);
        handle = registerFatBinaryBottom(&helper, registering_allocation_ptr);
    }

    // TODO: If local memory has been allocated and has been mapped by the CPU
    // thread, register the allocation with the GPU for address translation.
    // if (registering_local_alloc_ptr && !cudaGPU->getAccessHostPagetable()) {
    //    cudaGPU->registerDeviceMemory(tc, registering_local_alloc_ptr, get_local_alloc_size(cudaGPU));
    // }

    helper.setReturn((uint8_t*)&handle, sizeof(void**), true);
}

void
__cudaCheckAllocateLocal(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaCheckAllocateLocal()\n");

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    assert(registering_symtab);
    if (registering_symtab->get_local_next() > 0 && (registering_local_alloc_ptr == NULL)) {
        unsigned long long local_alloc_size = get_local_alloc_size(cudaGPU);
        if (!cudaGPU->isManagingGPUMemory()) {
            DPRINTF(GPUSyscalls, "gem5 GPU Syscall:      CPU must allocate local: %lluB\n", local_alloc_size);
            helper.setReturn((uint8_t*)&local_alloc_size, sizeof(unsigned long long), false);
        } else {
            DPRINTF(GPUSyscalls, "gem5 GPU Syscall:      GPU allocating local...\n");
            registering_local_alloc_ptr = cudaGPU->allocateGPUMemory(local_alloc_size);
            cudaGPU->setLocalBaseVaddr(registering_local_alloc_ptr);
            cudaGPU->registerDeviceMemory(tc, registering_local_alloc_ptr, local_alloc_size);
            unsigned long long zero_allocation = 0;
            helper.setReturn((uint8_t*)&zero_allocation, sizeof(int));
        }
    }
}

void
__cudaSetLocalAllocation(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);
    Addr sim_alloc_ptr = *((Addr*)helper.getParam(0, true));

    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaSetLocalAllocation(alloc_ptr* = 0x%x)\n", sim_alloc_ptr);

    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

    // Save the local memory base address
    assert(!cudaGPU->isManagingGPUMemory());
    assert(!registering_local_alloc_ptr);
    registering_local_alloc_ptr = sim_alloc_ptr;
    cudaGPU->setLocalBaseVaddr(registering_local_alloc_ptr);

    // TODO: Need to check if using host or GPU page mappings. If the GPU is
    // not able to access the host's pagetable, then the memory pages need to
    // be mapped for the GPU to access them.
    // global: bool registering_signal_local_map = false;
    // if (!cudaGPU->getAccessHostPagetable()) {
    //     registering_signal_local_map = true;
    //     helper.setReturn((uint8_t*)&signal_map_memory, sizeof(bool));
    // }
}

void
__cudaUnregisterFatBinary(ThreadContext *tc, gpusyscall_t *call_params)
{
    // TODO: If running multiple benchmarks in the same simulation, this will
    // need to be updated to print as appropriate
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    cudaGPU->printPTXFileLineStats();
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaUnregisterFatBinary() Faked\n");

    registering_local_alloc_ptr = 0;
}

void
__cudaRegisterFunction(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    Addr sim_fatCubinHandle = *((Addr*)helper.getParam(0, true));
    Addr sim_hostFun = *((Addr*)helper.getParam(1, true));
    Addr sim_deviceFun = *((Addr*)helper.getParam(2));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterFunction(fatCubinHandle** = %x, hostFun* = %x, deviceFun* = %x)\n",
            sim_fatCubinHandle, sim_hostFun, sim_deviceFun);

    // Read device function name from simulated system memory
    char* device_fun = new char[MAX_STRING_LEN];
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    helper.readString(sim_deviceFun, (uint8_t*)device_fun, MAX_STRING_LEN);

    // Register function
    unsigned fat_cubin_handle = (unsigned)(unsigned long long)sim_fatCubinHandle;
    cudaGPU->register_function(fat_cubin_handle, (const char*)sim_hostFun, device_fun);
    cudaGPU->saveFunctionNames(fat_cubin_handle, (const char*)sim_hostFun, device_fun);
    delete[] device_fun;
}

void register_var(Addr sim_deviceAddress, const char* deviceName, int sim_size, int sim_constant, int sim_global, int sim_ext, Addr sim_hostVar)
{
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterVar(fatCubinHandle** = %x, hostVar* = 0x%x, deviceAddress* = 0x%x, deviceName* = %s, ext = %d, size = %d, constant = %d, global = %d)\n",
            /*sim_fatCubinHandle*/ 0, sim_hostVar, sim_deviceAddress,
            deviceName, sim_ext, sim_size, sim_constant, sim_global);

    if (sim_constant && !sim_global && !sim_ext) {
        gpgpu_ptx_sim_register_const_variable((void*)sim_hostVar, deviceName, sim_size);
    } else if (!sim_constant && !sim_global && !sim_ext) {
        gpgpu_ptx_sim_register_global_variable((void*)sim_hostVar, deviceName, sim_size);
    } else {
        panic("__cudaRegisterVar: Don't know how to register variable!");
    }
}

void __cudaRegisterVar(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    // Addr sim_fatCubinHandle = *((Addr*)helper.getParam(0, true));
    Addr sim_hostVar = *((Addr*)helper.getParam(1, true));
    Addr sim_deviceAddress = *((Addr*)helper.getParam(2, true));
    Addr sim_deviceName = *((Addr*)helper.getParam(3, true));
    int sim_ext = *((int*)helper.getParam(4));
    int sim_size = *((int*)helper.getParam(5));
    int sim_constant = *((int*)helper.getParam(6));
    int sim_global = *((int*)helper.getParam(7));

    const char* deviceName = new char[MAX_STRING_LEN];
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    helper.readString(sim_deviceName, (uint8_t*)deviceName, MAX_STRING_LEN);

    cudaGPU->saveVar(sim_deviceAddress, deviceName, sim_size, sim_constant, sim_global, sim_ext, sim_hostVar);

    register_var(sim_deviceAddress, deviceName, sim_size, sim_constant, sim_global, sim_ext, sim_hostVar);
}

//  void __cudaRegisterShared(void **fatCubinHandle, void **devicePtr)
void
__cudaRegisterShared(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
__cudaRegisterSharedVar(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
__cudaRegisterTexture(ThreadContext *tc, gpusyscall_t *call_params)
{
    GPUSyscallHelper helper(tc, call_params);

    // Addr sim_fatCubinHandle = *((Addr*)helper.getParam(0, true));
    Addr sim_hostVar = *((Addr*)helper.getParam(1));
    // Addr sim_deviceAddress = *((Addr*)helper.getParam(2, true));
    Addr sim_deviceName = *((Addr*)helper.getParam(3, true));
    int sim_dim = *((int*)helper.getParam(4));
    int sim_norm = *((int*)helper.getParam(5));
    int sim_ext = *((int*)helper.getParam(6));
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: __cudaRegisterTexture(fatCubinHandle** = %x, hostVar* = %x, deviceAddress* = %x, deviceName* = %x, dim = %d, norm = %d, ext = %d)\n",
            /*sim_fatCubinHandle*/ 0, sim_hostVar, /*sim_deviceAddress*/ 0,
            sim_deviceName, sim_dim, sim_norm, sim_ext);

    const char* deviceName = new char[MAX_STRING_LEN];
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    gpgpu_t *gpu = cudaGPU->getTheGPU();
    helper.readString(sim_deviceName, (uint8_t*)deviceName, MAX_STRING_LEN);

    gpu->gpgpu_ptx_sim_bindNameToTexture(deviceName, (const struct textureReference*)sim_hostVar, sim_dim, sim_norm, sim_ext);
    warn("__cudaRegisterTexture implementation is not complete!");
}

void
cudaGLRegisterBufferObject(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGLMapBufferObject(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGLUnmapBufferObject(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaGLUnregisterBufferObject(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

#if (CUDART_VERSION >= 2010)

void
cudaHostAlloc(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaHostGetDevicePointer(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaSetValidDevices(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaSetDeviceFlags(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaEventCreateWithFlags(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaDriverGetVersion(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaRuntimeGetVersion(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

#endif

void
cudaGLSetGLDevice(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
cudaWGLGetDevice(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
__cudaMutexOperation(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

void
__cudaTextureFetch(ThreadContext *tc, gpusyscall_t *call_params)
{
    cuda_not_implemented(__my_func__,__LINE__);
}

namespace cuda_math {
    uint64_t __cudaMutexOperation(ThreadContext *tc, gpusyscall_t *call_params)
    {
        cuda_not_implemented(__my_func__,__LINE__);
        return 0;
    }

    uint64_t __cudaTextureFetch(ThreadContext *tc, gpusyscall_t *call_params)
    {
        cuda_not_implemented(__my_func__,__LINE__);
        return 0;
    }

    uint64_t __cudaSynchronizeThreads(ThreadContext *tc, gpusyscall_t *call_params)
    {
        //TODO This function should syncronize if we support Asyn kernel calls
        return g_last_cudaError = cudaSuccess;
    }

    void  __cudaTextureFetch(const void *tex, void *index, int integer, void *val) {
        cuda_not_implemented(__my_func__,__LINE__);
    }

    void __cudaMutexOperation(int lock)
    {
        cuda_not_implemented(__my_func__,__LINE__);
    }
}

/// static functions

static int load_static_globals(GPUSyscallHelper *helper, symbol_table *symtab)
{
    DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: loading globals with explicit initializers\n");
    int ng_bytes = 0;
    symbol_table::iterator g = symtab->global_iterator_begin();

    for (; g != symtab->global_iterator_end(); g++) {
        symbol *global = *g;
        if (global->has_initializer()) {
            DPRINTF(GPUSyscalls, "GPGPU-Sim PTX:     initializing '%s'\n", global->name().c_str());
            // unsigned addr = global->get_address();
            const type_info *type = global->type();
            type_info_key ti = type->get_key();
            size_t size;
            int t;
            ti.type_decode(size, t);
            int nbytes = size/8;
            Addr offset = 0;
            std::list<operand_info> init_list = global->get_initializer();
            for (std::list<operand_info>::iterator i = init_list.begin(); i != init_list.end(); i++) {
                operand_info op = *i;
                ptx_reg_t value = op.get_literal_value();

                Addr addr = global->get_address();
                helper->writeBlob(addr + offset, (uint8_t*)&value, nbytes);

                offset += nbytes;
                ng_bytes += nbytes;
            }
            DPRINTF(GPUSyscalls, " wrote %u bytes to \'%s\'\n", offset, global->name());
        }
    }
    DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: finished loading globals (%u bytes total).\n", ng_bytes);
    return ng_bytes;
}

static int load_constants(GPUSyscallHelper *helper, symbol_table *symtab)
{
   DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: loading constants with explicit initializers\n");
   int nc_bytes = 0;
   symbol_table::iterator g = symtab->const_iterator_begin();

   for (; g != symtab->const_iterator_end(); g++) {
      symbol *constant = *g;
      if (constant->is_const() && constant->has_initializer()) {

         // get the constant element data size
         int basic_type;
         size_t num_bits;
         constant->type()->get_key().type_decode(num_bits, basic_type);

         std::list<operand_info> init_list = constant->get_initializer();
         int nbytes_written = 0;
         for (std::list<operand_info>::iterator i = init_list.begin(); i != init_list.end(); ++i) {
            operand_info op = *i;
            ptx_reg_t value = op.get_literal_value();
            int nbytes = num_bits/8;
            switch (op.get_type()) {
            case int_t: assert(nbytes >= 1); break;
            case float_op_t: assert(nbytes == 4); break;
            case double_op_t: assert(nbytes >= 4); break; // account for double DEMOTING
            default:
               panic("Op type not recognized in load_constants"); break;
            }

            Addr addr = constant->get_address() + nbytes_written;
            helper->writeBlob(addr, (uint8_t*)&value, nbytes);

            DPRINTF(GPUSyscalls, " wrote %u bytes to \'%s\'\n", nbytes, constant->name());
            nc_bytes += nbytes;
            nbytes_written += nbytes;
         }
      }
   }
   DPRINTF(GPUSyscalls, "GPGPU-Sim PTX: finished loading constants (%u bytes total).\n", nc_bytes);
   return nc_bytes;
}

/* Jie */

#include <CL/cl.h>

static void setErrCode(cl_int *errcode_ret, cl_int err_code) {
   if ( errcode_ret ) {
      *errcode_ret = err_code;
   }
}

struct _cl_context {
   _cl_context( cl_device_id gpu );
   cl_device_id get_first_device();
   cl_mem CreateBuffer(
               cl_mem_flags flags,
               size_t       size ,
               void *       host_ptr,
               cl_int *     errcode_ret );
   cl_mem lookup_mem( cl_mem m );
private:
   unsigned m_uid;
   cl_device_id m_gpu;
   static unsigned sm_context_uid;

   std::map<void*/*host_ptr*/,cl_mem> m_hostptr_to_cl_mem;
   std::map<cl_mem/*device ptr*/,cl_mem> m_devptr_to_cl_mem;
};

struct _cl_device_id {
   _cl_device_id(gpgpu_sim* gpu) {m_id = 0; m_next = NULL; m_gpgpu=gpu;}
   struct _cl_device_id *next() { return m_next; }
   gpgpu_sim *the_device() const { return m_gpgpu; }
private:
   unsigned m_id;
   gpgpu_sim *m_gpgpu;
   struct _cl_device_id *m_next;
};

struct _cl_command_queue 
{ 
   _cl_command_queue( cl_context context, cl_device_id device, cl_command_queue_properties properties ) 
   {
      m_valid = true;
      m_context = context;
      m_device = device;
      m_properties = properties;
   }
   bool is_valid() { return m_valid; }
   cl_context get_context() { return m_context; }
   cl_device_id get_device() { return m_device; }
   cl_command_queue_properties get_properties() { return m_properties; }
private:
   bool m_valid;
   cl_context                     m_context;
   cl_device_id                   m_device;
   cl_command_queue_properties    m_properties;
};

struct _cl_mem {
   _cl_mem( cl_mem_flags flags, size_t size , void *host_ptr, cl_int *errcode_ret, cl_device_id gpu );
   cl_mem device_ptr();
   void* host_ptr();
   bool is_on_host() { return m_is_on_host; }
private:
   bool m_is_on_host;
   size_t m_device_ptr;
   void *m_host_ptr;
   cl_mem_flags m_flags; 
   size_t m_size;
};

struct pgm_info {
   std::string   m_source;
   std::string   m_asm;
   class symbol_table *m_symtab;
   std::map<std::string,function_info*> m_kernels;
};

struct _cl_program {
   _cl_program( cl_context context,
                cl_uint           count, 
             const char **     strings,   
             const size_t *    lengths );
   void Build(const char *options, GPUSyscallHelper *helper);
   cl_kernel CreateKernel( const char *kernel_name, cl_int *errcode_ret );
   cl_context get_context() { return m_context; }
   char *get_ptx();
   size_t get_ptx_size();

private:
   cl_context m_context;
   std::map<cl_uint,pgm_info> m_pgm;
   static unsigned m_kernels_compiled;
};

struct _cl_kernel {
   _cl_kernel( cl_program prog, const char* kernel_name, class function_info *kernel_impl );
   void SetKernelArg(
      cl_uint      arg_index,
      size_t       arg_size,
      const void * arg_value );
   cl_int bind_args( gpgpu_ptx_sim_arg_list_t &arg_list );
   std::string name() const { return m_kernel_name; }
   size_t get_workgroup_size(cl_device_id device);
   cl_program get_program() { return m_prog; }
   class function_info *get_implementation() { return m_kernel_impl; }
private:
   unsigned m_uid;
   static unsigned sm_context_uid;
   cl_program m_prog;

   std::string m_kernel_name;

   struct arg_info {
      size_t m_arg_size;
      const void *m_arg_value;
   };
   
   std::map<unsigned, arg_info> m_args;
   class function_info *m_kernel_impl;
};

struct _cl_platform_id {
   static const unsigned m_uid = 0;
};

struct _cl_platform_id g_gpgpu_sim_platform_id;

void gpgpusim_exit()
{
   abort();
}

void gpgpusim_opencl_warning( const char* func, unsigned line, const char *desc )
{
   printf("GPGPU-Sim OpenCL API: Warning (%s:%u) ** %s\n", func,line,desc);
}

void gpgpusim_opencl_error( const char* func, unsigned line, const char *desc )
{
   printf("GPGPU-Sim OpenCL API: ERROR (%s:%u) ** %s\n", func,line,desc);
   gpgpusim_exit();
}

_cl_kernel::_cl_kernel( cl_program prog, const char* kernel_name, class function_info *kernel_impl )
{
   m_uid = sm_context_uid++;
   m_kernel_name = std::string(kernel_name);
   m_kernel_impl = kernel_impl;
   m_prog = prog;
}

void _cl_kernel::SetKernelArg(
      cl_uint      arg_index,
      size_t       arg_size,
      const void * arg_value )
{
   arg_info arg;
   arg.m_arg_size = arg_size;
   arg.m_arg_value = arg_value;
   m_args[arg_index] = arg;
}

cl_int _cl_kernel::bind_args( gpgpu_ptx_sim_arg_list_t &arg_list )
{
   assert( arg_list.empty() );
   unsigned k=0;
   std::map<unsigned, arg_info>::iterator i;
   for( i = m_args.begin(); i!=m_args.end(); i++ ) {
      if( i->first != k ) 
         return CL_INVALID_KERNEL_ARGS;
      arg_info arg = i->second;
      gpgpu_ptx_sim_arg param( arg.m_arg_value, arg.m_arg_size, 0 );
      arg_list.push_front( param );
      k++;
   }
   return CL_SUCCESS;
}

#define min(a,b) ((a<b)?(a):(b))

size_t _cl_kernel::get_workgroup_size(cl_device_id device)
{
   unsigned nregs = ptx_kernel_nregs( m_kernel_impl );
   unsigned result_regs = (unsigned)-1;
   if( nregs > 0 )
      result_regs = device->the_device()->num_registers_per_core() / ((nregs+3)&~3);
   unsigned result = device->the_device()->threads_per_core();
   result = min(result, result_regs);
   return (size_t)result;
}

cl_mem _cl_mem::device_ptr()
{
   cl_mem result = (cl_mem)(void*)m_device_ptr;
   return result;
}

void* _cl_mem::host_ptr()
{
   return m_host_ptr;
}

_cl_mem::_cl_mem(
   cl_mem_flags flags,
   size_t       size ,
   void *       host_ptr,
   cl_int *     errcode_ret,
   cl_device_id gpu )
{
   setErrCode( errcode_ret, CL_SUCCESS );

   m_is_on_host = false;
   m_flags = flags;
   m_size = size;
   m_host_ptr = host_ptr;
   m_device_ptr = 0;

   if( (flags & (CL_MEM_USE_HOST_PTR|CL_MEM_COPY_HOST_PTR)) && host_ptr == NULL ) {
      setErrCode( errcode_ret, CL_INVALID_HOST_PTR );
      return;
   }
   if( (flags & CL_MEM_COPY_HOST_PTR) && (flags & CL_MEM_USE_HOST_PTR) ) {
      setErrCode( errcode_ret, CL_INVALID_VALUE );
      return;
   }
   if( flags & CL_MEM_ALLOC_HOST_PTR ) {
      if( host_ptr ) 
         gpgpusim_opencl_error(__my_func__,__LINE__," CL_MEM_ALLOC_HOST_PTR -- not yet supported/tested.\n");
      m_host_ptr = malloc(size);
   }

   if( flags & (CL_MEM_USE_HOST_PTR|CL_MEM_ALLOC_HOST_PTR) ) {
      m_is_on_host = true;
   } else {
      m_is_on_host = false;
   }
   if( !(flags & (CL_MEM_USE_HOST_PTR|CL_MEM_ALLOC_HOST_PTR)) ) {
      // if not allocating on host, then allocate GPU memory and make a copy
      m_device_ptr = (size_t) gpu->the_device()->gpu_malloc(size);
      if( host_ptr )
         gpu->the_device()->memcpy_to_gpu( m_device_ptr, host_ptr, size );
   }
}

_cl_context::_cl_context( struct _cl_device_id *gpu ) 
{ 
   m_uid = sm_context_uid++; 
   m_gpu = gpu;
}

cl_device_id _cl_context::get_first_device() 
{
   return m_gpu;
}

cl_mem _cl_context::CreateBuffer(
               cl_mem_flags flags,
               size_t       size ,
               void *       host_ptr,
               cl_int *     errcode_ret )
{
   if( host_ptr && (m_hostptr_to_cl_mem.find(host_ptr) != m_hostptr_to_cl_mem.end()) ) {
      printf("GPGPU-Sim OpenCL API: WARNING ** clCreateBuffer - buffer already created for this host variable\n");
   }
   cl_mem result = new _cl_mem(flags,size,host_ptr,errcode_ret,m_gpu);
   m_devptr_to_cl_mem[result->device_ptr()] = result;
   if( host_ptr ) 
      m_hostptr_to_cl_mem[host_ptr] = result;
   if( result->device_ptr() ) 
      return (cl_mem) result->device_ptr();
   else 
      return (cl_mem) host_ptr;
}

cl_mem _cl_context::lookup_mem( cl_mem m )
{
   std::map<cl_mem/*device ptr*/,cl_mem>::iterator i=m_devptr_to_cl_mem.find(m);
   if( i == m_devptr_to_cl_mem.end() ) {
      void *t = (void*)m;
      std::map<void*/*host_ptr*/,cl_mem>::iterator j = m_hostptr_to_cl_mem.find(t);
      if( j == m_hostptr_to_cl_mem.end() )
         return NULL;
      else 
         return j->second;
   } else {
      return i->second;
   }
}

unsigned _cl_program::m_kernels_compiled = 0;
_cl_program::_cl_program( cl_context        context,
                          cl_uint           count, 
                          const char **     strings, 
                          const size_t *    lengths )
{
   m_context = context;
   for( cl_uint i=0; i<count; i++ ) {
      unsigned len;
      if(lengths != NULL and lengths[i] > 0)
          len = lengths[i];
      else
          len = strlen(strings[i]);
      char *tmp = (char*)malloc(len+1);
      memcpy(tmp,strings[i],len);
      tmp[len] = 0;
      m_pgm[m_kernels_compiled].m_source = tmp;
      ++m_kernels_compiled;
      free(tmp);
   }
}

static pgm_info *sg_info;

void register_ptx_function( const char *name, function_info *impl )
{
   char *mode = getenv("GEM5GPU_CUDA_OR_OPENCL");
   if ( mode != NULL && strcmp(mode, "OPENCL") == 0 ) sg_info->m_kernels[name] = impl;
   else printf("Jie: It is in cuda mode, set GEM5GPU_CUDA_OR_OPENCL environment variable to OPENCL for opencl mode.\n");
}

/* Jie : maybe do not need *//*
extern "C" void ptxinfo_addinfo()
{
   ptxinfo_opencl_addinfo( sg_info->m_kernels );
}
*//* Jie : maybe do not need */

void _cl_program::Build(const char *options, GPUSyscallHelper *helper)
{
   printf("GPGPU-Sim OpenCL API: compiling OpenCL kernels...\n"); 
   std::map<cl_uint,pgm_info>::iterator i;
   for( i = m_pgm.begin(); i!= m_pgm.end(); i++ ) {
      pgm_info &info=i->second;
      sg_info = &info;
      unsigned source_num=i->first;
      char ptx_fname[1024];
      char *use_extracted_ptx = getenv("PTX_SIM_USE_PTX_FILE");
      if( use_extracted_ptx == NULL ) {
         char *nvopencl_libdir = getenv("NVOPENCL_LIBDIR");
         char *gpgpu_opencl_path_str = getenv("GEM5GPU_ROOT");
         bool error = false;
         if( nvopencl_libdir == NULL ) {
            printf("GPGPU-Sim OpenCL API: Please set your NVOPENCL_LIBDIR environment variable to\n"
                   "                      the location of NVIDIA's libOpenCL.so file on your system.\n");
            error = true;
         }
         if( gpgpu_opencl_path_str == NULL ) {
            fprintf(stderr,"GPGPU-Sim OpenCL API: Please set your GEM5GPU_ROOT environment variable\n");
            fprintf(stderr,"                      to point to the location of your GEM5GPU installation\n");
            error = true;
         }
         if( error ) 
            exit(1); 

         char cl_fname[1024];
         const char *source = info.m_source.c_str();

         // call wrapper
         char *ld_library_path_orig = getenv("LD_LIBRARY_PATH");

         // create temporary filenames
         snprintf(cl_fname,1024,"_cl_XXXXXX");
         snprintf(ptx_fname,1024,"_ptx_XXXXXX");
         int fd=mkstemp(cl_fname); 
         close(fd);
         fd=mkstemp(ptx_fname); 
         close(fd);

         // write OpenCL source to file
         FILE *fp = fopen(cl_fname,"w");
         if( fp == NULL ) {
            printf("GPGPU-Sim OpenCL API: ERROR ** could not create temporary files required for generating PTX\n");
            printf("                      Ensure you have write permission to the simulation directory\n");
            exit(1);
         }
         fputs(source,fp);
         fclose(fp);

         char commandline[1024];
         const char *opt = options?options:"";
         const char *remote_dir = getenv( "OPENCL_REMOTE_DIRECTORY" );
         const char *local_pwd = getenv( "PWD" );
         if ( !remote_dir || strncmp( remote_dir, "", 1 ) == 0 ) {
             remote_dir = local_pwd;
         }
         const char* remote_host = getenv( "OPENCL_REMOTE_GPU_HOST" );
         if ( remote_host && remote_dir ) {
            // create same directory on OpenCL to PTX server
            snprintf(commandline,1024,"ssh %s mkdir -p %s", remote_host, remote_dir );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            int result = system(commandline);
            if( result ) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result ); exit(1); }

            // copy input OpenCL file to OpenCL to PTX server
            snprintf(commandline,1024,"rsync -t %s/%s %s:%s/%s", local_pwd, cl_fname, remote_host, remote_dir, cl_fname );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            result = system(commandline);
            if( result ) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result ); exit(1); }

            // copy the nvopencl_wrapper file to the remote server
            snprintf(commandline,1024,"rsync -t %s/libopencl/bin/nvopencl_wrapper %s:%s/nvopencl_wrapper", gpgpu_opencl_path_str, remote_host, remote_dir );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            result = system(commandline);
            if( result ) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result ); exit(1); }

            // convert OpenCL to PTX on remote server
            snprintf(commandline,1024,"ssh %s \"export LD_LIBRARY_PATH=%s; %s/nvopencl_wrapper %s/%s %s/%s %s\"",
                    remote_host, nvopencl_libdir, remote_dir, remote_dir, cl_fname, remote_dir, ptx_fname, opt );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            result = system(commandline);
            if( result ) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result ); exit(1); }

            // copy output PTX from OpenCL to PTX server back to simulation directory
            snprintf(commandline,1024,"rsync -t %s:%s/%s %s/%s", remote_host, remote_dir, ptx_fname, local_pwd, ptx_fname );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            result = system(commandline);
            if( result ) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result ); exit(1); }
         } else {
            setenv("LD_LIBRARY_PATH",nvopencl_libdir,1);
            snprintf(commandline,1024,"%s/libopencl/bin/nvopencl_wrapper %s %s %s", 
                   gpgpu_opencl_path_str, cl_fname, ptx_fname, opt );
            printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
            fflush(stdout);
            int result = system(commandline);
            setenv("LD_LIBRARY_PATH",ld_library_path_orig,1);
            if( result != 0 ) {
               printf("GPGPU-Sim OpenCL API: ERROR ** while calling NVIDIA driver to convert OpenCL to PTX (%u)\n",
                      result );
               printf("GPGPU-Sim OpenCL API: LD_LIBRARY_PATH was \'%s\'\n", nvopencl_libdir);
               printf("GPGPU-Sim OpenCL API: command line was \'%s\'\n", commandline);
               exit(1);
            }
         }
         if( !g_keep_intermediate_files ) {
            // clean up files...
            snprintf(commandline,1024,"rm -f %s", cl_fname );
            int result = system(commandline);
            if( result != 0 ) 
               printf("GPGPU-Sim OpenCL API: could not remove temporary files generated while generating PTX\n");
         }
      } else {
         snprintf(ptx_fname,1024,"_%u.ptx", source_num);
      }

      // read in PTX generated by wrapper
      FILE *fp = fopen(ptx_fname,"r");
      if( fp == NULL ) {
         printf("GPGPU-Sim OpenCL API: ERROR ** could not open PTX file \'%s\' for reading\n", ptx_fname );
         if( use_extracted_ptx != NULL ) 
            printf("                      Ensure PTX files are in simulation directory.\n");
         exit(1);
      }
      fseek(fp,0,SEEK_END);
      unsigned len = ftell(fp);
      if( len == 0 ) {
         exit(1);
      }
      fseek(fp,0,SEEK_SET);
      char *tmp = (char*)calloc(len+1,1);
      fread(tmp,1,len,fp);
      fclose(fp);
      if( use_extracted_ptx == NULL ) {
         // clean up files...
         char commandline[1024];
         snprintf(commandline,1024,"rm -f %s", ptx_fname );
         int result = system(commandline);
         if( result != 0 ) 
            printf("GPGPU-Sim OpenCL API: could not remove temporary files generated while generating PTX\n");
         // remove any trailing characters from string
         while( len > 0 && tmp[len] != '}' ) {
            tmp[len] = 0;
            len--;
         }
      }
      for ( int i = 0 ; i < len - 8 ; i++ )
        if ( tmp[i+0] == '.' &&
             tmp[i+1] == 'u' &&
             tmp[i+2] == '3' &&
             tmp[i+3] == '2' &&
             tmp[i+4] == ' ' &&
             tmp[i+5] == '.' &&
             tmp[i+6] == 'p' &&
             tmp[i+7] == 't' &&
             tmp[i+8] == 'r' )
          tmp[i+2] = '6', tmp[i+3] = '4', printf("Jie: change ptx pointer info \".u32 .ptr\" to \".u64 .ptr\" at %d\n", i);
      info.m_asm = tmp;
      CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
      cudaGPU->registerDeviceInstText(helper->getThreadContext(), (Addr)tmp, len+1);
      static unsigned next_fat_bin_handle = 1;
      assert(registering_fat_cubin_handle == 0);
      registering_fat_cubin_handle = next_fat_bin_handle++;
      registering_symtab = info.m_symtab = gpgpu_ptx_sim_load_ptx_from_string( tmp, source_num );
      cudaGPU->add_binary(registering_symtab, registering_fat_cubin_handle);
      gpgpu_ptxinfo_load_from_string( tmp, source_num );
      assert(registering_allocation_size == -1);
      registering_allocation_size = get_global_and_constant_alloc_size(registering_symtab);
      free(tmp);
   }
   printf("GPGPU-Sim OpenCL API: finished compiling OpenCL kernels.\n"); 
}

cl_kernel _cl_program::CreateKernel( const char *kernel_name, cl_int *errcode_ret )
{
   cl_kernel result = NULL;
   class function_info *finfo=NULL;
   std::map<cl_uint,pgm_info>::iterator f;
   for( f = m_pgm.begin(); f!= m_pgm.end(); f++ ) {
      pgm_info &info=f->second;
      std::map<std::string,function_info*>::iterator k = info.m_kernels.find(kernel_name);
      if( k != info.m_kernels.end() ) {
         assert( finfo == NULL ); // kernels with same name in different .cl files
         finfo = k->second;
      }
   }

   if( finfo == NULL ) 
      setErrCode( errcode_ret, CL_INVALID_PROGRAM_EXECUTABLE );
   else{ 
      result = new _cl_kernel(this,kernel_name,finfo);
      setErrCode( errcode_ret, CL_SUCCESS );
   }
   return result;
}

char *_cl_program::get_ptx()
{
   if( m_pgm.empty() ) {
      printf("GPGPU-Sim PTX OpenCL API: Cannot get PTX before building program\n");
      abort();
   }
   size_t buffer_length= get_ptx_size();
   char *tmp = (char*)calloc(buffer_length + 1,1);
   tmp[ buffer_length ] = '\0';
   unsigned n=0;
   std::map<cl_uint,pgm_info>::iterator p;
   for( p=m_pgm.begin(); p != m_pgm.end(); p++ ) {
      const char *ptx = p->second.m_asm.c_str();
      unsigned len = strlen( ptx );
      assert( (n+len) <= buffer_length );
      memcpy(tmp+n,ptx,len);
      n+=len;
   }
   assert( n == buffer_length );
   return tmp;
}

size_t _cl_program::get_ptx_size()
{
   size_t buffer_length=0;
   std::map<cl_uint,pgm_info>::iterator p;
   for( p=m_pgm.begin(); p != m_pgm.end(); p++ ) {
      buffer_length += p->second.m_asm.length();
   }
   return buffer_length;
}

unsigned _cl_context::sm_context_uid = 0;
unsigned _cl_kernel::sm_context_uid = 0;

class _cl_device_id *GPGPUSim_Init()
{
   static _cl_device_id *the_device = NULL;
   if( !the_device ) { 
      gpgpu_sim *the_gpu = NULL/* Jie : maybe do not need *//*gpgpu_ptx_sim_init_perf()*//* Jie : maybe do not need */; 
      the_device = new _cl_device_id(the_gpu);
   }
/* Jie : not exist function and maybe do not need *//* 
   start_sim_thread(2);
*//* Jie : not exist function and maybe do not need */
   return the_device;
}

void opencl_not_implemented( const char* func, unsigned line )
{
   fflush(stdout);
   fflush(stderr);
   printf("\n\nGPGPU-Sim PTX: Execution error: OpenCL API function \"%s()\" has not been implemented yet.\n"
         "                 [$GPGPUSIM_ROOT/libcuda/%s around line %u]\n\n\n", 
         func,__FILE__, line );
   fflush(stdout);
   abort();
}

void opencl_not_finished( const char* func, unsigned line )
{
   fflush(stdout);
   fflush(stderr);
   printf("\n\nGPGPU-Sim PTX: Execution error: OpenCL API function \"%s()\" has not been completed yet.\n"
         "                 [$GPGPUSIM_ROOT/libopencl/%s around line %u]\n\n\n", 
         func,__FILE__, line );
   fflush(stdout);
   abort();
}

void clGetPlatformIDs(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_uint num_entries = *((cl_uint*)helper.getParam(0));
  Addr platforms_addr = *((Addr*)helper.getParam(1, true));
  Addr num_platforms_addr = *((Addr*)helper.getParam(2, true));

  cl_platform_id * platforms = new cl_platform_id;
  cl_uint * num_platforms = new cl_uint;
  if ( platforms_addr == NULL ) platforms = NULL;
  else helper.readBlob(platforms_addr, (uint8_t*)platforms, sizeof(cl_platform_id));
  if ( num_platforms_addr == NULL ) num_platforms = NULL;
  else helper.readBlob(num_platforms_addr, (uint8_t*)num_platforms, sizeof(cl_uint));

  if ( ((num_entries == 0) && (platforms != NULL)) ||
       ((num_platforms == NULL) && (platforms == NULL)) ) {
    cl_int ret = CL_INVALID_VALUE;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
    return ;
  }
  if ( (platforms != NULL) && (num_entries > 0) ) {
    platforms[0] = &g_gpgpu_sim_platform_id;
    helper.writeBlob(platforms_addr, (uint8_t*)platforms, sizeof(cl_platform_id));
  }
  if ( num_platforms ) {
    *num_platforms = 1;
    helper.writeBlob(num_platforms_addr, (uint8_t*)num_platforms, sizeof(cl_uint));
  }
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

#define NUM_DEVICES 1

void clGetDeviceIDs(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_platform_id platform = *((cl_platform_id*)helper.getParam(0));
  cl_device_type device_type = *((cl_device_type*)helper.getParam(1));
  cl_uint num_entries = *((cl_uint*)helper.getParam(2));
  Addr devices_addr = *((Addr*)helper.getParam(3, true));
  Addr num_devices_addr = *((Addr*)helper.getParam(4, true));

  cl_device_id * devices = new cl_device_id;
  cl_uint * num_devices = new cl_uint;
  if ( devices_addr == NULL ) devices = NULL;
  else helper.readBlob(devices_addr, (uint8_t*)devices, sizeof(cl_device_id));
  if ( num_devices_addr == NULL ) num_devices = NULL;
  else helper.readBlob(num_devices_addr, (uint8_t*)num_devices, sizeof(cl_uint));

  if( platform == NULL || platform->m_uid != 0 ) {
    cl_int ret = CL_INVALID_PLATFORM;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
    return ;
  }
  if( (num_entries == 0 && devices != NULL) ||
      (num_devices == NULL && devices == NULL) ) {
    cl_int ret = CL_INVALID_VALUE;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
    return ;
  }
  switch( device_type ) {
    case CL_DEVICE_TYPE_CPU: {
      // Some benchmarks (e.g. ComD benchmark from Mantevo package) looks for CPU and GPU to choose among, so it is not wise to abort execution because of GPGPUsim is not a CPU !.
      printf("GPGPU-Sim OpenCL API: unsupported device type %lx\n", device_type );
      cl_int ret = CL_DEVICE_NOT_FOUND;
      helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
      return ;
      break;
    }
    case CL_DEVICE_TYPE_DEFAULT:
    case CL_DEVICE_TYPE_GPU:
    case CL_DEVICE_TYPE_ACCELERATOR:
    case CL_DEVICE_TYPE_ALL: {
      if( devices != NULL ) {
        devices[0] = GPGPUSim_Init();
        helper.writeBlob(devices_addr, (uint8_t*)devices, sizeof(cl_device_id));
      }
      if( num_devices ) {
        *num_devices = NUM_DEVICES;
        helper.writeBlob(num_devices_addr, (uint8_t*)num_devices, sizeof(cl_uint));
      }
      break;
    default:
      cl_int ret = CL_INVALID_DEVICE_TYPE;
      helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
      return ;
    }
  }
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clCreateContext(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  Addr properties_addr = *((Addr*)helper.getParam(0, true));
  Addr errcode_ret_addr = *((Addr*)helper.getParam(1, true));

  cl_context_properties * properties = new cl_context_properties;
  cl_int * errcode_ret = new cl_int;
  if ( properties_addr == NULL ) properties = NULL;
  else helper.readBlob(properties_addr, (uint8_t*)properties, sizeof(cl_context_properties));

  struct _cl_device_id *gpu = GPGPUSim_Init();
  if( properties != NULL ) {
    if( properties[0] != CL_CONTEXT_PLATFORM || properties[1] != (cl_context_properties)&g_gpgpu_sim_platform_id ) {
      setErrCode( errcode_ret, CL_INVALID_PLATFORM );
      if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
      cl_context ret = NULL;
      helper.setReturn((uint8_t*)&ret, sizeof(cl_context));
      return ;
    }
  }
  setErrCode( errcode_ret, CL_SUCCESS );
  if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
  cl_context ctx = new _cl_context(gpu);
  helper.setReturn((uint8_t*)&ctx, sizeof(cl_context));
  return ;
}

void clCreateCommandQueue(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_context context = *((cl_context*)helper.getParam(0));
  cl_device_id device = *((cl_device_id*)helper.getParam(1));
  cl_command_queue_properties properties = *((cl_command_queue_properties*)helper.getParam(2));
  Addr errcode_ret_addr = *((Addr*)helper.getParam(3, true));

  cl_int * errcode_ret = new cl_int;

  if( !context ) {
    setErrCode( errcode_ret, CL_INVALID_CONTEXT );
    if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
    cl_command_queue ret = NULL;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_command_queue));
    return ;
  }
  gpgpusim_opencl_warning(__my_func__,__LINE__, "assuming device_id is in context");
  if( (properties & CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE) )
    gpgpusim_opencl_warning(__my_func__,__LINE__, "ignoring command queue property");
  if( (properties & CL_QUEUE_PROFILING_ENABLE) )
    gpgpusim_opencl_warning(__my_func__,__LINE__, "ignoring command queue property");
  setErrCode( errcode_ret, CL_SUCCESS );
  if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
  cl_command_queue ret = new _cl_command_queue(context,device,properties);
  helper.setReturn((uint8_t*)&ret, sizeof(cl_command_queue));
  return ;
}

void clCreateProgramWithSource(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_context context = *((cl_context*)helper.getParam(0));
  cl_uint count = *((cl_uint*)helper.getParam(1));
  Addr stringsData_addr = *((Addr*)helper.getParam(2, true));
  Addr lengths_addr = *((Addr*)helper.getParam(3, true));
  Addr errcode_ret_addr = *((Addr*)helper.getParam(4, true));

  const size_t * lengths = new size_t;
  cl_int * errcode_ret = new cl_int;
  if ( lengths_addr == NULL ) lengths = NULL;
  else helper.readBlob(lengths_addr, (uint8_t*)lengths, sizeof(const size_t));
  const char * stringsData = new char[*lengths];
  if ( stringsData_addr == NULL ) stringsData = NULL;
  else helper.readBlob(stringsData_addr, (uint8_t*)stringsData, *lengths * sizeof(char));
  const char ** strings = &stringsData;

  if( !context ) {
    setErrCode( errcode_ret, CL_INVALID_CONTEXT );
    if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
    cl_program ret = NULL;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_program));
    return ;
  }
  setErrCode( errcode_ret, CL_SUCCESS );
  if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
  cl_program ret = new _cl_program(context,count,strings,lengths);
  helper.setReturn((uint8_t*)&ret, sizeof(cl_program));
  return ;
}

void clBuildProgram(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_program program = *((cl_program*)helper.getParam(0));
  Addr options_addr = *((Addr*)helper.getParam(1, true));
  Addr ret_addr = *((Addr*)helper.getParam(2, true));

  char * options = new char[99];
  if ( options_addr == NULL ) options = NULL;
  else helper.readBlob(options_addr, (uint8_t*)options, 99 * sizeof(char));

  if( !program ) {
    cl_int * ret = new cl_int;
    *ret = CL_INVALID_PROGRAM;
    helper.writeBlob(ret_addr, (uint8_t*)ret, sizeof(cl_int));
    return ;
  }
  program->Build(options, &helper);
  cl_int * ret = new cl_int;
  *ret = CL_SUCCESS;
  helper.writeBlob(ret_addr, (uint8_t*)ret, sizeof(cl_int));

  CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

  cudaGPU->saveFatBinaryInfoTop(tc->threadId(), registering_fat_cubin_handle, NULL, 0);
  if (!cudaGPU->isManagingGPUMemory()) {
    helper.setReturn((uint8_t*)&registering_allocation_size, sizeof(int));
  } else {
    assert(!registering_allocation_ptr);
    registering_allocation_ptr = cudaGPU->allocateGPUMemory(registering_allocation_size);
    int zero_allocation = 0;
    helper.setReturn((uint8_t*)&zero_allocation, sizeof(int));
  }

  return ;
}

void clCreateBuffer(ThreadContext *tc, gpusyscall_t *call_params) {
  opencl_not_implemented(__my_func__,__LINE__);
}

void clCreateKernel(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_program program = *((cl_program*)helper.getParam(0));
  int kernel_name_length = *((int*)helper.getParam(1));
  Addr kernel_name_addr = *((Addr*)helper.getParam(2, true));
  Addr errcode_ret_addr = *((Addr*)helper.getParam(3, true));

  const char * kernel_name = new char[kernel_name_length];
  cl_int * errcode_ret = new cl_int;
  if ( kernel_name_addr == NULL ) kernel_name = NULL;
  else helper.readBlob(kernel_name_addr, (uint8_t*)kernel_name, kernel_name_length * sizeof(char));

  if ( kernel_name == NULL ) {
    setErrCode(errcode_ret, CL_INVALID_KERNEL_NAME);
    if ( errcode_ret_addr != NULL ) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
    cl_kernel ret = NULL;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_kernel));
    return ;
  }
  cl_kernel kobj = program->CreateKernel(kernel_name,errcode_ret);
  if ( errcode_ret_addr != NULL ) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
  helper.setReturn((uint8_t*)&kobj, sizeof(cl_kernel));
  return ;
}

void clSetKernelArg(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_kernel kernel = *((cl_kernel*)helper.getParam(0));
  cl_uint arg_index = *((cl_uint*)helper.getParam(1));
  size_t arg_size = *((size_t*)helper.getParam(2));
  Addr arg_value_addr = *((Addr*)helper.getParam(3, true));

  const void * arg_value = new void*;
  if ( arg_value_addr == NULL ) arg_value = NULL;
  else helper.readBlob(arg_value_addr, (uint8_t*)arg_value, arg_size);

  kernel->SetKernelArg(arg_index,arg_size,arg_value);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clEnqueueNDRangeKernel(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_command_queue command_queue = *((cl_command_queue*)helper.getParam(0));
  cl_kernel kernel = *((cl_kernel*)helper.getParam(1));
  cl_uint work_dim  = *((cl_uint*)helper.getParam(2));
  Addr global_work_offset_addr = *((Addr*)helper.getParam(3, true));
  Addr global_work_size_addr = *((Addr*)helper.getParam(4, true));
  Addr local_work_size_addr = *((Addr*)helper.getParam(5, true));

  CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);

  const size_t * global_work_offset = new size_t;
  const size_t * global_work_size = new size_t;
  const size_t * local_work_size = new size_t;
  if ( global_work_offset_addr == NULL ) global_work_offset = NULL;
  else helper.readBlob(global_work_offset_addr, (uint8_t*)global_work_offset, sizeof(const size_t));
  if ( global_work_size_addr == NULL ) global_work_size = NULL;
  else helper.readBlob(global_work_size_addr, (uint8_t*)global_work_size, sizeof(const size_t));
  if ( local_work_size_addr == NULL ) local_work_size = NULL;
  else helper.readBlob(local_work_size_addr, (uint8_t*)local_work_size, sizeof(const size_t));

  int _global_size[3];
  int zeros[3] = { 0, 0, 0};
  printf("\n\n\n");
  char *mode = getenv("PTX_SIM_MODE_FUNC");
  if ( mode )
    sscanf(mode,"%u", &g_ptx_sim_mode);
  printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel '%s' (mode=%s)\n", kernel->name().c_str(), g_ptx_sim_mode?"functional simulation":"performance simulation");
  if ( !work_dim || work_dim > 3 ) {
    cl_int ret = CL_INVALID_WORK_DIMENSION;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
    return ;
  }
  size_t _local_size[3];
  if( local_work_size != NULL ) {
    for ( unsigned d=0; d < work_dim; d++ ) 
      _local_size[d]=local_work_size[d];
  } else {
    printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel automatic local work size selection:\n");
    for ( unsigned d=0; d < work_dim; d++ ) {
      if( d==0 ) {
        if( global_work_size[d] <= cudaGPU->getMaxThreadsPerMultiprocessor()/* Jie : change to gem5-gpu mode *//*command_queue->get_device()->the_device()->threads_per_core()*//* Jie : change to gem5-gpu mode */ ) {
          _local_size[d] = global_work_size[d];
        }
        else { 
          // start with the maximum number of thread that a core may hold, 
          // and decrement by 64 threadsuntil there is a local_work_size 
          // that can perfectly divide the global_work_size. 
          unsigned n_thread_per_core = cudaGPU->getMaxThreadsPerMultiprocessor()/* Jie : change to gem5-gpu mode *//*command_queue->get_device()->the_device()->threads_per_core()*//* Jie : change to gem5-gpu mode */;
          size_t local_size_attempt = n_thread_per_core; 
          while (local_size_attempt > 1 and (n_thread_per_core % 64 == 0)) {
            if (global_work_size[d] % local_size_attempt == 0) {
              break; 
            }
            local_size_attempt -= 64; 
          }
          if (local_size_attempt == 0) local_size_attempt = 1;
          _local_size[d] = local_size_attempt;
        }
      }
      else {
         _local_size[d] = 1;
      }
      printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel global_work_size[%u] = %zu\n", d, global_work_size[d] );
      printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel local_work_size[%u]  = %zu\n", d, _local_size[d] );
    }
  }
  for ( unsigned d=0; d < work_dim; d++ ) {
    _global_size[d] = (int)global_work_size[d];
    if ( (global_work_size[d] % _local_size[d]) != 0 ) {
      cl_int ret = CL_INVALID_WORK_GROUP_SIZE;
      helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
      return ;
    }
  }
  if (global_work_offset != NULL){
    for ( unsigned d=0; d < work_dim; d++ ) {
      if (global_work_offset[d] != 0){
        printf("GPGPU-Sim: global id offset is not supported\n");
        abort();
      }
    }
  }
  assert( global_work_size[0] == _local_size[0] * (global_work_size[0]/_local_size[0]) ); // i.e., we can divide into equal CTAs
  dim3 GridDim;
  GridDim.x = global_work_size[0]/_local_size[0];
  GridDim.y = (work_dim < 2)?1:(global_work_size[1]/_local_size[1]);
  GridDim.z = (work_dim < 3)?1:(global_work_size[2]/_local_size[2]);
  dim3 BlockDim;
  BlockDim.x = _local_size[0];
  BlockDim.y = (work_dim < 2)?1:_local_size[1];
  BlockDim.z = (work_dim < 3)?1:_local_size[2];
  gpgpu_ptx_sim_arg_list_t params;
  cl_int err_val = kernel->bind_args(params);
  if ( err_val != CL_SUCCESS ) {
    cl_int ret = err_val;
    helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
    return ;
  }
  gpgpu_t *gpu = command_queue->get_device()->the_device();
  if (kernel->get_implementation()->get_ptx_version().ver() </* Jie : change 3.0 to 2.2 */2.2/* Jie : change 3.0 to 2.2 */){
    gpgpu_ptx_sim_memcpy_symbol( "%_global_size", _global_size, 3 * sizeof(int), 0, 1, gpu );
    gpgpu_ptx_sim_memcpy_symbol( "%_work_dim", &work_dim, 1 * sizeof(int), 0, 1, gpu  );
    gpgpu_ptx_sim_memcpy_symbol( "%_global_num_groups", &GridDim, 3 * sizeof(int), 0, 1, gpu );
    gpgpu_ptx_sim_memcpy_symbol( "%_global_launch_offset", zeros, 3 * sizeof(int), 0, 1, gpu );
    gpgpu_ptx_sim_memcpy_symbol( "%_global_block_offset", zeros, 3 * sizeof(int), 0, 1, gpu );
  }
  kernel_info_t *grid = gpgpu_cuda_ptx_sim_init_grid(params,GridDim,BlockDim,kernel->get_implementation());
  struct CUstream_st *stream = 0;
  grid->set_inst_base_vaddr(cudaGPU->getInstBaseVaddr());
  std::string kname = grid->name();
  stream_operation op(grid, g_ptx_sim_mode, stream);
  op.setThreadContext(tc);
  g_stream_manager->push(op);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clEnqueueReadBuffer(ThreadContext *tc, gpusyscall_t *call_params) {
  opencl_not_implemented(__my_func__,__LINE__);
}

void clReleaseKernel(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clReleaseProgram(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clReleaseMemObject(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clReleaseCommandQueue(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

void clReleaseContext(ThreadContext *tc, gpusyscall_t *call_params) {
  GPUSyscallHelper helper(tc, call_params);
  cl_int ret = CL_SUCCESS;
  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
  return ;
}

/* Jie */
