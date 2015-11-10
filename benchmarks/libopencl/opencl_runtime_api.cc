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

//#   define __my_func__    __PRETTY_FUNCTION__
# if defined __cplusplus ? __GNUC_PREREQ (2, 6) : __GNUC_PREREQ (2, 4)
#   define __my_func__    __func__
# else
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#   define __my_func__    __my_func__
#  else
#   define __my_func__    ((__const char *) 0)
#  endif
# endif

#define CL_USE_DEPRECATED_OPENCL_1_0_APIS
#include <CL/cl.h>

/* Jie */
#include "builtin_types.h"

typedef enum cudaError cudaError_t;

enum { CUDA_MALLOC_DEVICE = 0,
       CUDA_MALLOC_HOST = 1,
       CUDA_FREE_DEVICE = 4,
       CUDA_FREE_HOST = 5
};

#define PAGE_SIZE_BYTES 4096

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
/* Jie */

// TODO: Migrate into gem5-gpu:
class function_info;

void opencl_not_implemented(const char* func, unsigned line)
{
    fflush(stdout);
    fflush(stderr);
    printf("\n\nGPGPU-Sim PTX: Execution error: OpenCL API function \"%s()\" has not been implemented yet.\n"
           "                 [gem5-gpu/benchmarks/libopencl/%s around line %u]\n\n\n",
           func,__FILE__, line);
    fflush(stdout);
    abort();
}

static void setErrCode(cl_int *errcode_ret, cl_int err_code) {
    if (errcode_ret) {
        *errcode_ret = err_code;
    }
}

struct _cl_context {
    _cl_context(cl_device_id gpu);
    cl_device_id get_first_device();
    cl_mem CreateBuffer(cl_mem_flags flags,
                        size_t       size,
                        void *       host_ptr,
                        cl_int *     errcode_ret);
    cl_mem lookup_mem(cl_mem m);
  private:
    unsigned m_uid;
    cl_device_id m_gpu;
    static unsigned sm_context_uid;

    std::map<void*/*host_ptr*/,cl_mem> m_hostptr_to_cl_mem;
    std::map<cl_mem/*device ptr*/,cl_mem> m_devptr_to_cl_mem;
};

struct _cl_device_id {
    //_cl_device_id(gpgpu_sim* gpu) {m_id = 0; m_next = NULL; m_gpgpu=gpu;}
    struct _cl_device_id *next() { return m_next; }
    //gpgpu_sim *the_device() const { return m_gpgpu; }
  private:
    unsigned m_id;
    //gpgpu_sim *m_gpgpu;
    struct _cl_device_id *m_next;
};

struct _cl_command_queue
{
    _cl_command_queue(cl_context context, cl_device_id device, cl_command_queue_properties properties)
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
    _cl_mem(cl_mem_flags flags, size_t size , void *host_ptr, cl_int *errcode_ret, cl_device_id gpu);
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
    _cl_program(cl_context     context,
                cl_uint        count,
                const char **  strings,
                const size_t * lengths);
    void Build(const char *options);
    cl_kernel CreateKernel(const char *kernel_name, cl_int *errcode_ret);
    cl_context get_context() { return m_context; }
    char *get_ptx();
    size_t get_ptx_size();

  private:
    cl_context m_context;
    std::map<cl_uint,pgm_info> m_pgm;
    static unsigned m_kernels_compiled;
};

struct _cl_kernel {
    _cl_kernel(cl_program prog, const char* kernel_name, class function_info *kernel_impl);
    void SetKernelArg(cl_uint arg_index, size_t arg_size, const void * arg_value);
    cl_int bind_args(/*gpgpu_ptx_sim_arg_list_t &arg_list*/);
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

void gem5gpu_opencl_warning(const char* func, unsigned line, const char *desc)
{
    printf("gem5-gpu OpenCL API: Warning (%s:%u) ** %s\n", func,line,desc);
}

_cl_kernel::_cl_kernel(cl_program prog, const char* kernel_name, class function_info *kernel_impl)
{
    m_uid = sm_context_uid++;
    m_kernel_name = std::string(kernel_name);
    m_kernel_impl = kernel_impl;
    m_prog = prog;
}

void _cl_kernel::SetKernelArg(cl_uint      arg_index,
                              size_t       arg_size,
                              const void * arg_value)
{
    arg_info arg;
    arg.m_arg_size = arg_size;
    arg.m_arg_value = arg_value;
    m_args[arg_index] = arg;
}

cl_int _cl_kernel::bind_args(/*gpgpu_ptx_sim_arg_list_t &arg_list*/)
{
    opencl_not_implemented(__my_func__,__LINE__);
    //assert(arg_list.empty());
    unsigned k=0;
    std::map<unsigned, arg_info>::iterator i;
    for (i = m_args.begin(); i!=m_args.end(); i++) {
        if (i->first != k)
            return CL_INVALID_KERNEL_ARGS;
        arg_info arg = i->second;
        //gpgpu_ptx_sim_arg param(arg.m_arg_value, arg.m_arg_size, 0);
        //arg_list.push_front(param);
        k++;
    }
    return CL_SUCCESS;
}

#define min(a,b) ((a<b)?(a):(b))

size_t _cl_kernel::get_workgroup_size(cl_device_id device)
{
    opencl_not_implemented(__my_func__,__LINE__);
    //unsigned nregs = ptx_kernel_nregs(m_kernel_impl);
    //unsigned result_regs = (unsigned)-1;
    //if (nregs > 0)
    //    result_regs = device->the_device()->num_registers_per_core() / ((nregs+3)&~3);
    //unsigned result = device->the_device()->threads_per_core();
    //result = min(result, result_regs);
    return (size_t)0;
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

_cl_mem::_cl_mem(cl_mem_flags flags,
                 size_t       size,
                 void *       host_ptr,
                 cl_int *     errcode_ret,
                 cl_device_id gpu)
{
    setErrCode(errcode_ret, CL_SUCCESS);

    m_is_on_host = false;
    m_flags = flags;
    m_size = size;
    m_host_ptr = host_ptr;
    m_device_ptr = 0;

    if ((flags & (CL_MEM_USE_HOST_PTR|CL_MEM_COPY_HOST_PTR)) && host_ptr == NULL) {
        setErrCode(errcode_ret, CL_INVALID_HOST_PTR);
        return;
    }
    if ((flags & CL_MEM_COPY_HOST_PTR) && (flags & CL_MEM_USE_HOST_PTR)) {
        setErrCode(errcode_ret, CL_INVALID_VALUE);
        return;
    }
    if (flags & CL_MEM_ALLOC_HOST_PTR) {
        if (host_ptr)
            opencl_not_implemented(__my_func__,__LINE__);
        m_host_ptr = malloc(size);
    }

    if (flags & (CL_MEM_USE_HOST_PTR|CL_MEM_ALLOC_HOST_PTR)) {
        m_is_on_host = true;
    } else {
        m_is_on_host = false;
    }
    if (!(flags & (CL_MEM_USE_HOST_PTR|CL_MEM_ALLOC_HOST_PTR))) {
        // if not allocating on host, then allocate GPU memory and make a copy
        opencl_not_implemented(__my_func__,__LINE__);
        //m_device_ptr = (size_t) gpu->the_device()->gpu_malloc(size);
        //if (host_ptr)
        //    gpu->the_device()->memcpy_to_gpu(m_device_ptr, host_ptr, size);
    }
}

_cl_context::_cl_context(struct _cl_device_id *gpu)
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
               cl_int *     errcode_ret)
{
    if (host_ptr && (m_hostptr_to_cl_mem.find(host_ptr) != m_hostptr_to_cl_mem.end())) {
        printf("GPGPU-Sim OpenCL API: WARNING ** clCreateBuffer - buffer already created for this host variable\n");
    }
    cl_mem result = new _cl_mem(flags,size,host_ptr,errcode_ret,m_gpu);
    m_devptr_to_cl_mem[result->device_ptr()] = result;
    if (host_ptr)
        m_hostptr_to_cl_mem[host_ptr] = result;
    if (result->device_ptr())
        return (cl_mem) result->device_ptr();
    else
        return (cl_mem) host_ptr;
}

cl_mem _cl_context::lookup_mem(cl_mem m)
{
    std::map<cl_mem/*device ptr*/,cl_mem>::iterator i=m_devptr_to_cl_mem.find(m);
    if (i == m_devptr_to_cl_mem.end()) {
        void *t = (void*)m;
        std::map<void*/*host_ptr*/,cl_mem>::iterator j = m_hostptr_to_cl_mem.find(t);
        if (j == m_hostptr_to_cl_mem.end())
            return NULL;
        else
            return j->second;
    } else {
        return i->second;
    }
}

unsigned _cl_program::m_kernels_compiled = 0;
_cl_program::_cl_program(cl_context        context,
                         cl_uint           count,
                         const char **     strings,
                         const size_t *    lengths)
{
    m_context = context;
    for (cl_uint i=0; i<count; i++) {
        unsigned len;
        if (lengths != NULL and lengths[i] > 0)
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

void register_ptx_function(const char *name, function_info *impl)
{
    sg_info->m_kernels[name] = impl;
}

void ptxinfo_addinfo()
{
    opencl_not_implemented(__my_func__,__LINE__);
    //ptxinfo_opencl_addinfo(sg_info->m_kernels);
}

void _cl_program::Build(const char *options)
{
    printf("GPGPU-Sim OpenCL API: compiling OpenCL kernels...\n");
    std::map<cl_uint,pgm_info>::iterator i;
    for (i = m_pgm.begin(); i!= m_pgm.end(); i++) {
        pgm_info &info=i->second;
        sg_info = &info;
        unsigned source_num=i->first;
        char ptx_fname[1024];
        char *use_extracted_ptx = getenv("PTX_SIM_USE_PTX_FILE");
        if (use_extracted_ptx == NULL) {
            char *nvopencl_libdir = getenv("NVOPENCL_LIBDIR");
            const std::string gpgpu_opencl_path_str = std::string(getenv("GPGPUSIM_ROOT"))
                    + "/build/" + std::string(getenv("GPGPUSIM_CONFIG"));
            bool error = false;
            if (nvopencl_libdir == NULL) {
                printf("GPGPU-Sim OpenCL API: Please set your NVOPENCL_LIBDIR environment variable to\n"
                        "                      the location of NVIDIA's libOpenCL.so file on your system.\n");
                error = true;
            }
            if (getenv("GPGPUSIM_ROOT") == NULL || getenv("GPGPUSIM_CONFIG") == NULL) {
                fprintf(stderr,"GPGPU-Sim OpenCL API: Please set your GPGPUSIM_ROOT environment variable\n");
                fprintf(stderr,"                      to point to the location of your GPGPU-Sim installation\n");
                error = true;
            }
            if (error)
                exit(1);

            char cl_fname[1024];
            const char *source = info.m_source.c_str();

            // call wrapper
            char *ld_library_path_orig = getenv("LD_LIBRARY_PATH");

            // create temporary filenames
            snprintf(cl_fname,1024,"_cl_XXXXXX");
            snprintf(ptx_fname,1024,"_ptx_XXXXXX");
            int fd = mkstemp(cl_fname);
            close(fd);
            fd = mkstemp(ptx_fname);
            close(fd);

            // write OpenCL source to file
            FILE *fp = fopen(cl_fname,"w");
            if (fp == NULL) {
                printf("GPGPU-Sim OpenCL API: ERROR ** could not create temporary files required for generating PTX\n");
                printf("                      Ensure you have write permission to the simulation directory\n");
                exit(1);
            }
            fputs(source,fp);
            fclose(fp);

            char commandline[1024];
            const char *opt = options?options:"";
            const char* remote_dir = getenv("OPENCL_REMOTE_DIRECTORY");
            const char* local_pwd = getenv("PWD");
            if (!remote_dir || strncmp(remote_dir, "", 1) == 0) {
                remote_dir = local_pwd;
            }
            const char* remote_host = getenv("OPENCL_REMOTE_GPU_HOST");
            if (remote_host && remote_dir) {
                // create same directory on OpenCL to PTX server
                snprintf(commandline,1024,"ssh %s mkdir -p %s", remote_host, remote_dir);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                int result = system(commandline);
                if (result) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result); exit(1); }

                // copy input OpenCL file to OpenCL to PTX server
                snprintf(commandline,1024,"rsync -t %s/%s %s:%s/%s", local_pwd, cl_fname, remote_host, remote_dir, cl_fname);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                result = system(commandline);
                if (result) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result); exit(1); }

                // copy the nvopencl_wrapper file to the remote server
                snprintf(commandline,1024,"rsync -t %s/libopencl/bin/nvopencl_wrapper %s:%s/nvopencl_wrapper", gpgpu_opencl_path_str.c_str(), remote_host, remote_dir);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                result = system(commandline);
                if (result) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result); exit(1); }

                // convert OpenCL to PTX on remote server
                snprintf(commandline,1024,"ssh %s \"export LD_LIBRARY_PATH=%s; %s/nvopencl_wrapper %s/%s %s/%s %s\"",
                        remote_host, nvopencl_libdir, remote_dir, remote_dir, cl_fname, remote_dir, ptx_fname, opt);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                result = system(commandline);
                if (result) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result); exit(1); }

                // copy output PTX from OpenCL to PTX server back to simulation directory
                snprintf(commandline,1024,"rsync -t %s:%s/%s %s/%s", remote_host, remote_dir, ptx_fname, local_pwd, ptx_fname);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                result = system(commandline);
                if (result) { printf("GPGPU-Sim OpenCL API: ERROR (%d)\n", result); exit(1); }
            } else {
                setenv("LD_LIBRARY_PATH",nvopencl_libdir,1);
                snprintf(commandline,1024,"%s/libopencl/bin/nvopencl_wrapper %s %s %s",
                        gpgpu_opencl_path_str.c_str(), cl_fname, ptx_fname, opt);
                printf("GPGPU-Sim OpenCL API: OpenCL wrapper command line \'%s\'\n", commandline);
                fflush(stdout);
                int result = system(commandline);
                setenv("LD_LIBRARY_PATH",ld_library_path_orig,1);
                if (result != 0) {
                    printf("GPGPU-Sim OpenCL API: ERROR ** while calling NVIDIA driver to convert OpenCL to PTX (%u)\n", result);
                    printf("GPGPU-Sim OpenCL API: LD_LIBRARY_PATH was \'%s\'\n", nvopencl_libdir);
                    printf("GPGPU-Sim OpenCL API: command line was \'%s\'\n", commandline);
                    exit(1);
                }
            }
            opencl_not_implemented(__my_func__,__LINE__);
            //if (!g_keep_intermediate_files) {
            //    // clean up files...
            //    snprintf(commandline,1024,"rm -f %s", cl_fname);
            //    int result = system(commandline);
            //    if (result != 0)
            //        printf("GPGPU-Sim OpenCL API: could not remove temporary files generated while generating PTX\n");
            //}
        } else {
            snprintf(ptx_fname,1024,"_%u.ptx", source_num);
        }

        // read in PTX generated by wrapper
        FILE *fp = fopen(ptx_fname,"r");
        if (fp == NULL) {
            printf("GPGPU-Sim OpenCL API: ERROR ** could not open PTX file \'%s\' for reading\n", ptx_fname);
            if (use_extracted_ptx != NULL)
                printf("                      Ensure PTX files are in simulation directory.\n");
            exit(1);
        }
          fseek(fp,0,SEEK_END);
          unsigned len = ftell(fp);
          if (len == 0) {
              exit(1);
          }
          fseek(fp,0,SEEK_SET);
          char *tmp = (char*)calloc(len+1,1);
          size_t bytes_read = fread(tmp,1,len,fp);
          assert(bytes_read > 0);
          fclose(fp);
          if (use_extracted_ptx == NULL) {
              // clean up files...
              char commandline[1024];
              snprintf(commandline,1024,"rm -f %s", ptx_fname);
              int result = system(commandline);
              if (result != 0)
                  printf("GPGPU-Sim OpenCL API: could not remove temporary files generated while generating PTX\n");
              // remove any trailing characters from string
              while(len > 0 && tmp[len] != '}') {
                  tmp[len] = 0;
                  len--;
              }
          }
          info.m_asm = tmp;
          //info.m_symtab = gpgpu_ptx_sim_load_ptx_from_string(tmp, source_num);
          //gpgpu_ptxinfo_load_from_string(tmp, source_num);
          free(tmp);
    }
    printf("GPGPU-Sim OpenCL API: finished compiling OpenCL kernels.\n");
}

cl_kernel _cl_program::CreateKernel(const char *kernel_name, cl_int *errcode_ret)
{
    cl_kernel result = NULL;
    class function_info *finfo=NULL;
    std::map<cl_uint,pgm_info>::iterator f;
    for (f = m_pgm.begin(); f!= m_pgm.end(); f++) {
        pgm_info &info=f->second;
        std::map<std::string,function_info*>::iterator k = info.m_kernels.find(kernel_name);
        if (k != info.m_kernels.end()) {
            assert(finfo == NULL); // kernels with same name in different .cl files
            finfo = k->second;
        }
    }

    if (finfo == NULL) {
        setErrCode(errcode_ret, CL_INVALID_PROGRAM_EXECUTABLE);
    } else {
        result = new _cl_kernel(this,kernel_name,finfo);
        setErrCode(errcode_ret, CL_SUCCESS);
    }
    return result;
}

char *_cl_program::get_ptx()
{
    if (m_pgm.empty()) {
        printf("GPGPU-Sim PTX OpenCL API: Cannot get PTX before building program\n");
        abort();
    }
    size_t buffer_length= get_ptx_size();
    char *tmp = (char*)calloc(buffer_length + 1,1);
    tmp[ buffer_length ] = '\0';
    unsigned n=0;
    std::map<cl_uint,pgm_info>::iterator p;
    for (p=m_pgm.begin(); p != m_pgm.end(); p++) {
        const char *ptx = p->second.m_asm.c_str();
        unsigned len = strlen(ptx);
        assert((n+len) <= buffer_length);
        memcpy(tmp+n,ptx,len);
        n+=len;
    }
    assert(n == buffer_length);
    return tmp;
}

size_t _cl_program::get_ptx_size()
{
    size_t buffer_length=0;
    std::map<cl_uint,pgm_info>::iterator p;
    for (p=m_pgm.begin(); p != m_pgm.end(); p++) {
        buffer_length += p->second.m_asm.length();
    }
    return buffer_length;
}

unsigned _cl_context::sm_context_uid = 0;
unsigned _cl_kernel::sm_context_uid = 0;

void opencl_not_finished(const char* func, unsigned line)
{
    fflush(stdout);
    fflush(stderr);
    printf("\n\nGPGPU-Sim PTX: Execution error: OpenCL API function \"%s()\" has not been completed yet.\n"
           "                 [gem5-gpu/benchmarks/libopencl/%s around line %u]\n\n\n",
           func,__FILE__, line);
    fflush(stdout);
    abort();
}

extern CL_API_ENTRY cl_context CL_API_CALL
clCreateContextFromType(const cl_context_properties * properties,
                        cl_device_type          device_type,
                        void (*pfn_notify)(const char *, const void *, size_t, void *),
                        void *                  user_data,
                        cl_int *                errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
    //_cl_device_id *gpu = GPGPUSim_Init();

    switch (device_type) {
      case CL_DEVICE_TYPE_GPU:
      case CL_DEVICE_TYPE_ACCELERATOR:
      case CL_DEVICE_TYPE_DEFAULT:
      case CL_DEVICE_TYPE_ALL:
        break; // GPGPU-Sim qualifies as these types of device.
      default:
        printf("GPGPU-Sim OpenCL API: unsupported device type %lx\n", device_type);
        setErrCode(errcode_ret, CL_DEVICE_NOT_FOUND);
        return NULL;
        break;
    }

    if (properties != NULL) {
        printf("GPGPU-Sim OpenCL API: do not know how to use properties in %s\n", __my_func__);
        //exit(1); // Temporarily commented out to allow the AMD Sample applications to run.
    }

    setErrCode(errcode_ret, CL_SUCCESS);
    cl_context ctx = NULL; //new _cl_context(gpu);
    opencl_not_implemented(__my_func__,__LINE__);
    return ctx;
}

/***************************** Unimplemented shell functions *******************************************/
extern CL_API_ENTRY cl_program CL_API_CALL
clCreateProgramWithBinary(cl_context                     /* context */,
                          cl_uint                        /* num_devices */,
                          const cl_device_id *           /* device_list */,
                          const size_t *                 /* lengths */,
                          const unsigned char **         /* binaries */,
                          cl_int *                       /* binary_status */,
                          cl_int *                       /* errcode_ret */) CL_API_SUFFIX__VERSION_1_0 {

    opencl_not_finished(__my_func__, __LINE__);
    return cl_program();
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetEventProfilingInfo(cl_event            /* event */,
                        cl_profiling_info   /* param_name */,
                        size_t              /* param_value_size */,
                        void *              /* param_value */,
                        size_t *            /* param_value_size_ret */) CL_API_SUFFIX__VERSION_1_0{
    gem5gpu_opencl_warning(__my_func__,__LINE__, "GPGPUsim - OpenCLFunction is not implemented. Returning CL_SUCCESS");
    return CL_SUCCESS;
}
/*******************************************************************************************************/


extern CL_API_ENTRY cl_context CL_API_CALL
clCreateContext( const cl_context_properties * properties,
                  cl_uint num_devices,
                  const cl_device_id *devices,
                  void (*pfn_notify)(const char *, const void *, size_t, void *),
                  void *                  user_data,
                  cl_int *                errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 2;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(const cl_context_properties*);
  call_params.arg_lengths[1] = sizeof(cl_int*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_context)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&properties, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&errcode_ret, call_params.arg_lengths[1]);

  m5_gpu(88, (uint64_t)&call_params);
  cl_context ret = *((cl_context*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    //struct _cl_device_id *gpu = GPGPUSim_Init();
    if (properties != NULL) {
        if (properties[0] != CL_CONTEXT_PLATFORM || properties[1] != (cl_context_properties)&g_gpgpu_sim_platform_id) {
            setErrCode(errcode_ret, CL_INVALID_PLATFORM);
            return NULL;
        }
    }
    setErrCode(errcode_ret, CL_SUCCESS);

    cl_context ctx = NULL; //new _cl_context(gpu);
    opencl_not_implemented(__my_func__,__LINE__);
    return ctx;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetContextInfo(cl_context         context,
                 cl_context_info    param_name,
                 size_t             param_value_size,
                 void *             param_value,
                 size_t *           param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    if (context == NULL) return CL_INVALID_CONTEXT;
    switch(param_name) {
      case CL_CONTEXT_DEVICES: {
        unsigned ngpu=0;
        cl_device_id device_id = context->get_first_device();
        while (device_id != NULL) {
            if (param_value)
                ((cl_device_id*)param_value)[ngpu] = device_id;
            device_id = device_id->next();
            ngpu++;
        }
        if (param_value_size_ret) *param_value_size_ret = ngpu * sizeof(cl_device_id);
        break;
      }
      case CL_CONTEXT_REFERENCE_COUNT:
        opencl_not_finished(__my_func__,__LINE__);
        break;
      case CL_CONTEXT_PROPERTIES:
        opencl_not_finished(__my_func__,__LINE__);
        break;
      default:
        opencl_not_finished(__my_func__,__LINE__);
        break;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_command_queue CL_API_CALL
clCreateCommandQueue(cl_context                     context,
                     cl_device_id                   device,
                     cl_command_queue_properties    properties,
                     cl_int *                       errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 4;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_context);
  call_params.arg_lengths[1] = sizeof(cl_device_id);
  call_params.arg_lengths[2] = sizeof(cl_command_queue_properties);
  call_params.arg_lengths[3] = sizeof(cl_int*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_command_queue)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&context, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&device, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&properties, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&errcode_ret, call_params.arg_lengths[3]);

  m5_gpu(89, (uint64_t)&call_params);
  cl_command_queue ret = *((cl_command_queue*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    if (!context) { setErrCode(errcode_ret, CL_INVALID_CONTEXT);   return NULL; }
    gem5gpu_opencl_warning(__my_func__,__LINE__, "assuming device_id is in context");
    if ((properties & CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE))
        gem5gpu_opencl_warning(__my_func__,__LINE__, "ignoring command queue property");
    if ((properties & CL_QUEUE_PROFILING_ENABLE))
        gem5gpu_opencl_warning(__my_func__,__LINE__, "ignoring command queue property");
    setErrCode(errcode_ret, CL_SUCCESS);
    return new _cl_command_queue(context,device,properties);
}

extern CL_API_ENTRY cl_mem CL_API_CALL
clCreateBuffer(cl_context   context,
               cl_mem_flags flags,
               size_t       size ,
               void *       host_ptr,
               cl_int *     errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  cl_mem cl_ret;
  cudaError_t cuda_ret = cudaMallocHelper((void**)&cl_ret, size, CUDA_MALLOC_DEVICE);
  if ( errcode_ret != NULL )
    if ( cuda_ret == cudaSuccess ) *errcode_ret = CL_SUCCESS;
    else *errcode_ret = CL_INVALID_CONTEXT;
  if ( host_ptr != NULL )
    cudaMemcpy(cl_ret, host_ptr, size, cudaMemcpyHostToDevice);
  return cl_ret;
/* Jie */
    if (!context) { setErrCode(errcode_ret, CL_INVALID_CONTEXT);   return NULL; }
    return context->CreateBuffer(flags,size,host_ptr,errcode_ret);
}

extern CL_API_ENTRY cl_program CL_API_CALL
clCreateProgramWithSource(cl_context        context,
                          cl_uint           count,
                          const char **     strings,
                          const size_t *    lengths,
                          cl_int *          errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 5;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_context);
  call_params.arg_lengths[1] = sizeof(cl_uint);
  call_params.arg_lengths[2] = sizeof(char*);
  call_params.arg_lengths[3] = sizeof(const size_t*);
  call_params.arg_lengths[4] = sizeof(cl_int*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3]+call_params.arg_lengths[4];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_program)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  const size_t * length = new size_t(strlen(*strings));
  char * stringsData = new char[*length];
  strcpy( stringsData, *strings );

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&context, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&count, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&stringsData, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&length, call_params.arg_lengths[3]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&errcode_ret, call_params.arg_lengths[4]);

  m5_gpu(90, (uint64_t)&call_params);
  cl_program ret = *((cl_program*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    if (!context) { setErrCode(errcode_ret, CL_INVALID_CONTEXT);   return NULL; }
    setErrCode(errcode_ret, CL_SUCCESS);
    return new _cl_program(context,count,strings,lengths);
}


extern CL_API_ENTRY cl_int CL_API_CALL
clBuildProgram(cl_program           program,
               cl_uint              num_devices,
               const cl_device_id * device_list,
               const char *         options,
               void (*pfn_notify)(cl_program /* program */, void * /* user_data */),
               void *               user_data) CL_API_SUFFIX__VERSION_1_0
{
 /* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 3;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_program);
  call_params.arg_lengths[1] = sizeof(const char*);
  call_params.arg_lengths[2] = sizeof(cl_int*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = -1; // ???

  char * option = new char[99];
  strcpy(option, ((options != NULL) ? options : ""));
  cl_int * ret = new cl_int;

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&program, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&option, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&ret, call_params.arg_lengths[2]);

  m5_gpu(91, (uint64_t)&call_params);
  int allocation_size = *((int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  if (allocation_size < 0) {
    printf("gem5 + GPGPU-Sim CUDA RT: Problem with const allocation... Exiting\n");
    exit(-1);
  }

  // Allocate memory for globals and constants:
  int padding = allocation_size % PAGE_SIZE_BYTES;
  if (padding > 0) {
    allocation_size -= padding;
    allocation_size += PAGE_SIZE_BYTES;
  }
  unsigned char* alloc_ptr = NULL;
  if (allocation_size > 0) {
    int error = posix_memalign((void**)&alloc_ptr, PAGE_SIZE_BYTES, allocation_size);
    if (error) {
      fprintf(stderr, "ERROR: cudaRegisterFatBinary2 failed with code: %d, Exiting...\n", error);
      exit(-1);
    }

    // Const memory space is default allocated to 0, and this touches
    // all pages to ensure OS mapping... Double win
    memset(alloc_ptr, 0, allocation_size);
  }

  // Second up-call after allocating memory for globals and constants:
  call_params.num_args = 1;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(void *);
  call_params.total_bytes = call_params.arg_lengths[0];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(void**)];
  void*** ret_spot2 = (void***)call_params.ret;
  *ret_spot2 = NULL;

  bytes_off = 0;
  lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&alloc_ptr, call_params.arg_lengths[0]);

  m5_gpu(81, (uint64_t)&call_params);
  // void** ret = *((void***)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return *ret;
/* Jie */
    if (!program) return CL_INVALID_PROGRAM;
    program->Build(options);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_kernel CL_API_CALL
clCreateKernel(cl_program      program,
               const char *    kernel_name,
               cl_int *        errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 4;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_program);
  call_params.arg_lengths[1] = sizeof(int);
  call_params.arg_lengths[2] = sizeof(const char*);
  call_params.arg_lengths[3] = sizeof(cl_int*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_kernel)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int kernel_name_length = strlen(kernel_name)+1;

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&program, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&kernel_name_length, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&kernel_name, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&errcode_ret, call_params.arg_lengths[3]);

  m5_gpu(93, (uint64_t)&call_params);
  cl_kernel ret = *((cl_kernel*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    if (kernel_name == NULL) {
        setErrCode(errcode_ret, CL_INVALID_KERNEL_NAME);
        return NULL;
    }
    cl_kernel kobj = program->CreateKernel(kernel_name,errcode_ret);
    return kobj;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clSetKernelArg(cl_kernel    kernel,
               cl_uint      arg_index,
               size_t       arg_size,
               const void * arg_value) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 4;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_kernel);
  call_params.arg_lengths[1] = sizeof(cl_uint);
  call_params.arg_lengths[2] = sizeof(size_t);
  call_params.arg_lengths[3] = sizeof(const void*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&kernel, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&arg_index, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&arg_size, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&arg_value, call_params.arg_lengths[3]);

  m5_gpu(94, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    kernel->SetKernelArg(arg_index,arg_size,arg_value);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clEnqueueNDRangeKernel(cl_command_queue command_queue,
                       cl_kernel        kernel,
                       cl_uint          work_dim,
                       const size_t *   global_work_offset,
                       const size_t *   global_work_size,
                       const size_t *   local_work_size,
                       cl_uint          num_events_in_wait_list,
                       const cl_event * event_wait_list,
                       cl_event *       event) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 6;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_command_queue);
  call_params.arg_lengths[1] = sizeof(cl_kernel);
  call_params.arg_lengths[2] = sizeof(cl_uint);
  call_params.arg_lengths[3] = sizeof(const size_t*);
  call_params.arg_lengths[4] = sizeof(const size_t*);
  call_params.arg_lengths[5] = sizeof(const size_t*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3]+call_params.arg_lengths[4]+call_params.arg_lengths[5];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&command_queue, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&kernel, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&work_dim, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&global_work_offset, call_params.arg_lengths[3]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&global_work_size, call_params.arg_lengths[4]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&local_work_size, call_params.arg_lengths[5]);

  m5_gpu(95, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    int _global_size[3];
    //int zeros[3] = {0, 0, 0};
    printf("\n\n\n");
    //char *mode = getenv("PTX_SIM_MODE_FUNC");
    opencl_not_implemented(__my_func__,__LINE__);
    //if (mode)
    //    sscanf(mode,"%u", &g_ptx_sim_mode);
    //printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel '%s' (mode=%s)\n", kernel->name().c_str(),
    //       g_ptx_sim_mode?"functional simulation":"performance simulation");
    if (!work_dim || work_dim > 3) return CL_INVALID_WORK_DIMENSION;
    size_t _local_size[3];
    if (local_work_size != NULL) {
        for (unsigned d=0; d < work_dim; d++)
            _local_size[d]=local_work_size[d];
    } else {
        printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel automatic local work size selection:\n");
        for (unsigned d=0; d < work_dim; d++) {
            if (d==0) {
                opencl_not_implemented(__my_func__,__LINE__);
                if (global_work_size[d] <= 0) { //command_queue->get_device()->the_device()->threads_per_core()) {
                    _local_size[d] = global_work_size[d];
                } else {
                    // start with the maximum number of thread that a core may hold,
                    // and decrement by 64 threadsuntil there is a local_work_size
                    // that can perfectly divide the global_work_size.
                    opencl_not_implemented(__my_func__,__LINE__);
                    unsigned n_thread_per_core = 0; //command_queue->get_device()->the_device()->threads_per_core();
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
            } else {
                _local_size[d] = 1;
            }
            printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel global_work_size[%u] = %zu\n", d, global_work_size[d]);
            printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel local_work_size[%u]  = %zu\n", d, _local_size[d]);
        }
    }
    for (unsigned d=0; d < work_dim; d++) {
        _global_size[d] = (int)global_work_size[d];
        if ((global_work_size[d] % _local_size[d]) != 0)
            return CL_INVALID_WORK_GROUP_SIZE;
    }
    if (global_work_offset != NULL){
        for (unsigned d=0; d < work_dim; d++) {
            if (global_work_offset[d] != 0){
                printf("GPGPU-Sim: global id offset is not supported\n");
                abort();
            }
        }
    }
    assert(global_work_size[0] == _local_size[0] * (global_work_size[0]/_local_size[0])); // i.e., we can divide into equal CTAs
    opencl_not_implemented(__my_func__,__LINE__);
    //dim3 GridDim;
    //GridDim.x = global_work_size[0]/_local_size[0];
    //GridDim.y = (work_dim < 2)?1:(global_work_size[1]/_local_size[1]);
    //GridDim.z = (work_dim < 3)?1:(global_work_size[2]/_local_size[2]);
    //dim3 BlockDim;
    //BlockDim.x = _local_size[0];
    //BlockDim.y = (work_dim < 2)?1:_local_size[1];
    //BlockDim.z = (work_dim < 3)?1:_local_size[2];

    //gpgpu_ptx_sim_arg_list_t params;
    cl_int err_val = kernel->bind_args(/*params*/);
    if (err_val != CL_SUCCESS)
        return err_val;

    opencl_not_implemented(__my_func__,__LINE__);
    //gpgpu_t *gpu = command_queue->get_device()->the_device();
    //if (kernel->get_implementation()->get_ptx_version().ver() < 3.0){
    //    gpgpu_ptx_sim_memcpy_symbol("%_global_size", _global_size, 3 * sizeof(int), 0, 1, gpu);
    //    gpgpu_ptx_sim_memcpy_symbol("%_work_dim", &work_dim, 1 * sizeof(int), 0, 1, gpu );
    //    gpgpu_ptx_sim_memcpy_symbol("%_global_num_groups", &GridDim, 3 * sizeof(int), 0, 1, gpu);
    //    gpgpu_ptx_sim_memcpy_symbol("%_global_launch_offset", zeros, 3 * sizeof(int), 0, 1, gpu);
    //    gpgpu_ptx_sim_memcpy_symbol("%_global_block_offset", zeros, 3 * sizeof(int), 0, 1, gpu);
    //}
    //kernel_info_t *grid = gpgpu_opencl_ptx_sim_init_grid(kernel->get_implementation(),params,GridDim,BlockDim,gpu);
    //if (g_ptx_sim_mode)
    //    gpgpu_opencl_ptx_sim_main_func(grid);
    //else
    //    gpgpu_opencl_ptx_sim_main_perf(grid);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clEnqueueReadBuffer(cl_command_queue    command_queue,
                    cl_mem              buffer,
                    cl_bool             blocking_read,
                    size_t              offset,
                    size_t              cb,
                    void *              ptr,
                    cl_uint             num_events_in_wait_list,
                    const cl_event *    event_wait_list,
                    cl_event *          event) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  cudaMemcpy(ptr, buffer, cb, cudaMemcpyDeviceToHost);
  return CL_SUCCESS;
/* Jie */
    opencl_not_implemented(__my_func__,__LINE__);
    //if (!blocking_read)
    //    gpgpusim_opencl_warning(__my_func__,__LINE__, "non-blocking read treated as blocking read");
    //gpgpu_t *gpu = command_queue->get_device()->the_device();
    //gpu->memcpy_from_gpu(ptr, (size_t)buffer, cb);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clEnqueueWriteBuffer(cl_command_queue   command_queue,
                     cl_mem             buffer,
                     cl_bool            blocking_write,
                     size_t             offset,
                     size_t             cb,
                     const void *       ptr,
                     cl_uint            num_events_in_wait_list,
                     const cl_event *   event_wait_list,
                     cl_event *         event) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  cudaMemcpy(buffer, ptr, cb, cudaMemcpyHostToDevice);
  return CL_SUCCESS;
/* Jie */
    opencl_not_implemented(__my_func__,__LINE__);
    //if (!blocking_write)
    //    gpgpusim_opencl_warning(__my_func__,__LINE__, "non-blocking write treated as blocking write");
    //gpgpu_t *gpu = command_queue->get_device()->the_device();
    //gpu->memcpy_to_gpu((size_t)buffer, ptr, cb);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseMemObject(cl_mem /* memobj */) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 0;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.total_bytes = 0;
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  m5_gpu(99, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseKernel(cl_kernel   /* kernel */) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 0;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.total_bytes = 0;
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  m5_gpu(97, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseProgram(cl_program /* program */) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 0;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.total_bytes = 0;
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  m5_gpu(98, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseCommandQueue(cl_command_queue /* command_queue */) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 0;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.total_bytes = 0;
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  m5_gpu(100, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseContext(cl_context /* context */) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 0;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.total_bytes = 0;
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  m5_gpu(101, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetPlatformIDs(cl_uint num_entries, cl_platform_id *platforms, cl_uint *num_platforms) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 3;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_uint);
  call_params.arg_lengths[1] = sizeof(cl_platform_id*);
  call_params.arg_lengths[2] = sizeof(cl_uint*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&num_entries, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&platforms, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&num_platforms, call_params.arg_lengths[2]);

  m5_gpu(86, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    if (((num_entries == 0) && (platforms != NULL)) ||
        ((num_platforms == NULL) && (platforms == NULL)))
        return CL_INVALID_VALUE;
    if ((platforms != NULL) && (num_entries > 0))
        platforms[0] = &g_gpgpu_sim_platform_id;
    if (num_platforms)
        *num_platforms = 1;
    return CL_SUCCESS;
}

#define CL_STRING_CASE(S) \
    if (param_value && (param_value_size < strlen(S)+1)) return CL_INVALID_VALUE; \
    if (param_value) snprintf(buf,strlen(S)+1,S); \
    if (param_value_size_ret) *param_value_size_ret = strlen(S)+1;

#define CL_INT_CASE(N) \
    if (param_value && param_value_size < sizeof(cl_int)) return CL_INVALID_VALUE; \
    if (param_value) *((cl_int*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(cl_int);

#define CL_UINT_CASE(N) \
    if (param_value && param_value_size < sizeof(cl_uint)) return CL_INVALID_VALUE; \
    if (param_value) *((cl_uint*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(cl_uint);

#define CL_ULONG_CASE(N) \
    if (param_value && param_value_size < sizeof(cl_ulong)) return CL_INVALID_VALUE; \
    if (param_value) *((cl_ulong*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(cl_ulong);

#define CL_BOOL_CASE(N) \
    if (param_value && param_value_size < sizeof(cl_bool)) return CL_INVALID_VALUE; \
    if (param_value) *((cl_bool*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(cl_bool);

#define CL_SIZE_CASE(N) \
    if (param_value && param_value_size < sizeof(size_t)) return CL_INVALID_VALUE; \
    if (param_value) *((size_t*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(size_t);

#define CL_CASE(T, N) \
    if (param_value && param_value_size < sizeof(T)) return CL_INVALID_VALUE; \
    if (param_value) *((T*)param_value) = (N); \
    if (param_value_size_ret) *param_value_size_ret = sizeof(T);

extern CL_API_ENTRY cl_int CL_API_CALL
clGetPlatformInfo(cl_platform_id   platform,
                  cl_platform_info param_name,
                  size_t           param_value_size,
                  void *           param_value,
                  size_t *         param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    if (platform == NULL || platform->m_uid != 0)
        return CL_INVALID_PLATFORM;
    char *buf = (char*)param_value;
    switch(param_name) {
      case CL_PLATFORM_PROFILE:    CL_STRING_CASE("FULL_PROFILE"); break;
      case CL_PLATFORM_VERSION:    CL_STRING_CASE("OpenCL 1.0"); break;
      case CL_PLATFORM_NAME:       CL_STRING_CASE("gem5-gpu"); break;
      case CL_PLATFORM_VENDOR:     CL_STRING_CASE("gem5-gpu.cs.wisc.edu"); break;
      case CL_PLATFORM_EXTENSIONS: CL_STRING_CASE(" "); break;
      default:
        return CL_INVALID_VALUE;
    }
    return CL_SUCCESS;
}

#define NUM_DEVICES 1

extern CL_API_ENTRY cl_int CL_API_CALL
clGetDeviceIDs(cl_platform_id   platform,
               cl_device_type   device_type,
               cl_uint          num_entries,
               cl_device_id *   devices,
               cl_uint *        num_devices) CL_API_SUFFIX__VERSION_1_0
{
/* Jie */
  gpusyscall_t call_params;
  call_params.num_args = 5;
  call_params.arg_lengths = new int[call_params.num_args];
  call_params.arg_lengths[0] = sizeof(cl_platform_id);
  call_params.arg_lengths[1] = sizeof(cl_device_type);
  call_params.arg_lengths[2] = sizeof(cl_uint);
  call_params.arg_lengths[3] = sizeof(cl_device_id*);
  call_params.arg_lengths[4] = sizeof(cl_uint*);
  call_params.total_bytes = call_params.arg_lengths[0]+call_params.arg_lengths[1]+call_params.arg_lengths[2]+call_params.arg_lengths[3]+call_params.arg_lengths[4];
  call_params.args = new char[call_params.total_bytes];
  call_params.ret = new char[sizeof(cl_int)];

  int* ret_spot = (int*)call_params.ret; // ???
  *ret_spot = 0; // ???

  int bytes_off = 0;
  int lengths_off = 0;
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&platform, call_params.arg_lengths[0]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&device_type, call_params.arg_lengths[1]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&num_entries, call_params.arg_lengths[2]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&devices, call_params.arg_lengths[3]);
  pack(call_params.args, bytes_off, call_params.arg_lengths, lengths_off, (char *)&num_devices, call_params.arg_lengths[4]);

  m5_gpu(87, (uint64_t)&call_params);
  cl_int ret = *((cl_int*)call_params.ret);

  delete call_params.args;
  delete call_params.arg_lengths;
  delete call_params.ret;

  return ret;
/* Jie */
    if (platform == NULL || platform->m_uid != 0)
        return CL_INVALID_PLATFORM;
    if ((num_entries == 0 && devices != NULL) ||
        (num_devices == NULL && devices == NULL))
        return CL_INVALID_VALUE;

    switch(device_type) {
      case CL_DEVICE_TYPE_CPU:
        // Some benchmarks (e.g. ComD benchmark from Mantevo package) looks for CPU and GPU to choose among, so it is not wise to abort execution because of GPGPUsim is not a CPU !.
        printf("GPGPU-Sim OpenCL API: unsupported device type %lx\n", device_type);
        return CL_DEVICE_NOT_FOUND;
        break;
      case CL_DEVICE_TYPE_DEFAULT:
      case CL_DEVICE_TYPE_GPU:
      case CL_DEVICE_TYPE_ACCELERATOR:
      case CL_DEVICE_TYPE_ALL:
        opencl_not_implemented(__my_func__,__LINE__);
        //if (devices != NULL)
        //   devices[0] = GPGPUSim_Init();
        if (num_devices)
            *num_devices = NUM_DEVICES;
        break;
      default:
        return CL_INVALID_DEVICE_TYPE;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetDeviceInfo(cl_device_id    device,
                cl_device_info  param_name,
                size_t          param_value_size,
                void *          param_value,
                size_t *        param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    opencl_not_implemented(__my_func__,__LINE__);
    //if (device != GPGPUSim_Init())
    //    return CL_INVALID_DEVICE;
    char *buf = (char*)param_value;
    switch(param_name) {
      case CL_DEVICE_NAME: CL_STRING_CASE("GPGPU-Sim"); break;
      case CL_DEVICE_GLOBAL_MEM_SIZE: CL_ULONG_CASE(1024*1024*1024); break;
      case CL_DEVICE_MAX_COMPUTE_UNITS: opencl_not_implemented(__my_func__,__LINE__); break;
      case CL_DEVICE_MAX_CLOCK_FREQUENCY: opencl_not_implemented(__my_func__,__LINE__); break;
      case CL_DEVICE_VENDOR:CL_STRING_CASE("GPGPU-Sim.org"); break;
      case CL_DEVICE_VERSION: CL_STRING_CASE("OpenCL 1.0"); break;
      case CL_DRIVER_VERSION: CL_STRING_CASE("1.0"); break;
      case CL_DEVICE_TYPE: CL_CASE(cl_device_type, CL_DEVICE_TYPE_GPU); break;
      case CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS: CL_INT_CASE(3); break;
      case CL_DEVICE_MAX_WORK_ITEM_SIZES:
        if (param_value && param_value_size < 3*sizeof(size_t)) return CL_INVALID_VALUE; \
        if (param_value) {
            opencl_not_implemented(__my_func__,__LINE__);
            unsigned n_thread_per_shader = 0; //device->the_device()->threads_per_core();
            ((size_t*)param_value)[0] = n_thread_per_shader;
            ((size_t*)param_value)[1] = n_thread_per_shader;
            ((size_t*)param_value)[2] = n_thread_per_shader;
        }
        if (param_value_size_ret) *param_value_size_ret = 3*sizeof(cl_uint);
        break;
      case CL_DEVICE_MAX_WORK_GROUP_SIZE: opencl_not_implemented(__my_func__,__LINE__); break;
      case CL_DEVICE_ADDRESS_BITS: CL_INT_CASE(32); break;
      case CL_DEVICE_AVAILABLE: CL_BOOL_CASE(CL_TRUE); break;
      case CL_DEVICE_COMPILER_AVAILABLE: CL_BOOL_CASE(CL_TRUE); break;
      case CL_DEVICE_IMAGE_SUPPORT: CL_INT_CASE(CL_TRUE); break;
      case CL_DEVICE_MAX_READ_IMAGE_ARGS: CL_INT_CASE(128); break;
      case CL_DEVICE_MAX_WRITE_IMAGE_ARGS: CL_INT_CASE(8); break;
      case CL_DEVICE_IMAGE2D_MAX_HEIGHT: CL_INT_CASE(8192); break;
      case CL_DEVICE_IMAGE2D_MAX_WIDTH: CL_INT_CASE(8192); break;
      case CL_DEVICE_IMAGE3D_MAX_HEIGHT: CL_INT_CASE(2048); break;
      case CL_DEVICE_IMAGE3D_MAX_WIDTH: CL_INT_CASE(2048); break;
      case CL_DEVICE_IMAGE3D_MAX_DEPTH: CL_INT_CASE(2048); break;
      case CL_DEVICE_MAX_MEM_ALLOC_SIZE: CL_INT_CASE(128*1024*1024); break;
      case CL_DEVICE_ERROR_CORRECTION_SUPPORT: CL_INT_CASE(0); break;
      case CL_DEVICE_LOCAL_MEM_TYPE: CL_INT_CASE(CL_LOCAL); break;
      case CL_DEVICE_LOCAL_MEM_SIZE: opencl_not_implemented(__my_func__,__LINE__); break;
      case CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE: CL_ULONG_CASE(64 * 1024); break;
      case CL_DEVICE_QUEUE_PROPERTIES: CL_INT_CASE(CL_QUEUE_PROFILING_ENABLE); break;
      case CL_DEVICE_EXTENSIONS:
        if (param_value && (param_value_size < 1)) return CL_INVALID_VALUE;
        if (param_value) buf[0]=0;
        if (param_value_size_ret) *param_value_size_ret = 1;
        break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR: CL_INT_CASE(1); break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT: CL_INT_CASE(1); break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT: CL_INT_CASE(1); break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG: CL_INT_CASE(1); break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT: CL_INT_CASE(1); break;
      case CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE: CL_INT_CASE(0); break;
      case CL_DEVICE_SINGLE_FP_CONFIG: CL_INT_CASE(0); break;
      case CL_DEVICE_MEM_BASE_ADDR_ALIGN: CL_INT_CASE(256*8); break;
      default:
        opencl_not_implemented(__my_func__,__LINE__);
        break;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clFinish(cl_command_queue /* command_queue */) CL_API_SUFFIX__VERSION_1_0
{
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetProgramInfo(cl_program         program,
                 cl_program_info    param_name,
                 size_t             param_value_size,
                 void *             param_value,
                 size_t *           param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    if (program == NULL)
        return CL_INVALID_PROGRAM;
    char *tmp=NULL;
    size_t len=0;
    switch(param_name) {
      case CL_PROGRAM_REFERENCE_COUNT:
        CL_INT_CASE(1);
        break;
      case CL_PROGRAM_CONTEXT:
        if (param_value && param_value_size < sizeof(cl_context)) return CL_INVALID_VALUE;
        if (param_value) *((cl_context*)param_value) = program->get_context();
        if (param_value_size_ret) *param_value_size_ret = sizeof(cl_context);
        break;
      case CL_PROGRAM_NUM_DEVICES:
        CL_INT_CASE(NUM_DEVICES);
        break;
      case CL_PROGRAM_DEVICES:
        if (param_value && param_value_size < NUM_DEVICES * sizeof(cl_device_id))
            return CL_INVALID_VALUE;
        if (param_value) {
            assert(NUM_DEVICES == 1);
            opencl_not_implemented(__my_func__,__LINE__);
            //((cl_device_id*)param_value)[0] = GPGPUSim_Init();
        }
        if (param_value_size_ret) *param_value_size_ret = sizeof(cl_device_id);
        break;
      case CL_PROGRAM_SOURCE:
        opencl_not_implemented(__my_func__,__LINE__);
        break;
      case CL_PROGRAM_BINARY_SIZES:
        if (param_value && param_value_size < NUM_DEVICES * sizeof(size_t)) return CL_INVALID_VALUE;
        if (param_value) *((size_t*)param_value) = program->get_ptx_size();
        if (param_value_size_ret) *param_value_size_ret = NUM_DEVICES*sizeof(size_t);
        break;
      case CL_PROGRAM_BINARIES:
        len = program->get_ptx_size();
        tmp = program->get_ptx();
        if (param_value) memcpy(((char**)param_value)[0], tmp, len);
        if (param_value_size_ret) *param_value_size_ret = len;
        break;
      default:
        return CL_INVALID_VALUE;
        break;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clEnqueueCopyBuffer(cl_command_queue    command_queue,
                    cl_mem              src_buffer,
                    cl_mem              dst_buffer,
                    size_t              src_offset,
                    size_t              dst_offset,
                    size_t              cb,
                    cl_uint             num_events_in_wait_list,
                    const cl_event *    event_wait_list,
                    cl_event *          event) CL_API_SUFFIX__VERSION_1_0
{
    if (num_events_in_wait_list > 0)
        opencl_not_implemented(__my_func__,__LINE__);
    if (command_queue == NULL || !command_queue->is_valid())
        return CL_INVALID_COMMAND_QUEUE;
    cl_context context = command_queue->get_context();
    cl_mem src = context->lookup_mem(src_buffer);
    cl_mem dst = context->lookup_mem(dst_buffer);
    if (src == NULL || dst == NULL)
        return CL_INVALID_MEM_OBJECT;

    if (src->is_on_host() && !dst->is_on_host())
        opencl_not_implemented(__my_func__,__LINE__);
    else if (!src->is_on_host() && dst->is_on_host())
        opencl_not_implemented(__my_func__,__LINE__);
    else if (!src->is_on_host() && !dst->is_on_host())
        opencl_not_implemented(__my_func__,__LINE__);
    else
        opencl_not_implemented(__my_func__,__LINE__);
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetKernelWorkGroupInfo(cl_kernel                  kernel,
                         cl_device_id               device,
                         cl_kernel_work_group_info  param_name,
                         size_t                     param_value_size,
                         void *                     param_value,
                         size_t *                   param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    if (kernel == NULL)
        return CL_INVALID_KERNEL;
    switch(param_name) {
      case CL_KERNEL_WORK_GROUP_SIZE:
        CL_SIZE_CASE(kernel->get_workgroup_size(device));
        break;
      case CL_KERNEL_COMPILE_WORK_GROUP_SIZE:
      case CL_KERNEL_LOCAL_MEM_SIZE:
        opencl_not_implemented(__my_func__,__LINE__);
        break;
      default:
        return CL_INVALID_VALUE;
        break;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clWaitForEvents(cl_uint             /* num_events */,
                const cl_event *    /* event_list */) CL_API_SUFFIX__VERSION_1_0
{
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clReleaseEvent(cl_event /* event */) CL_API_SUFFIX__VERSION_1_0
{
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetCommandQueueInfo(cl_command_queue      command_queue,
                      cl_command_queue_info param_name,
                      size_t                param_value_size,
                      void *                param_value,
                      size_t *              param_value_size_ret) CL_API_SUFFIX__VERSION_1_0
{
    if (command_queue == NULL)
        return CL_INVALID_COMMAND_QUEUE;
    switch(param_name) {
      case CL_QUEUE_CONTEXT: CL_CASE(cl_context, command_queue->get_context()); break;
      case CL_QUEUE_DEVICE: CL_CASE(cl_device_id, command_queue->get_device()); break;
      case CL_QUEUE_REFERENCE_COUNT: CL_CASE(cl_uint,1); break;
      case CL_QUEUE_PROPERTIES: CL_CASE(cl_command_queue_properties, command_queue->get_properties()); break;
      default:
        return CL_INVALID_VALUE;
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clFlush(cl_command_queue /* command_queue */) CL_API_SUFFIX__VERSION_1_0
{
    return CL_SUCCESS;
}

extern CL_API_ENTRY cl_int CL_API_CALL
clGetSupportedImageFormats(cl_context           context,
                           cl_mem_flags         flags,
                           cl_mem_object_type   image_type,
                           cl_uint              num_entries,
                           cl_image_format *    image_formats,
                           cl_uint *            num_image_formats) CL_API_SUFFIX__VERSION_1_0
{
    if (!context)
        return CL_INVALID_CONTEXT;
    if (flags == CL_MEM_READ_ONLY) {
        if (image_type == CL_MEM_OBJECT_IMAGE2D || image_type == CL_MEM_OBJECT_IMAGE2D) {
            if (num_entries == 0 || image_formats == NULL) {
                if (num_image_formats != NULL)
                    *num_image_formats = 71;
            } else {
                if (num_entries != 71)
                    opencl_not_implemented(__my_func__,__LINE__);
                image_formats[0].image_channel_order = CL_R;                        image_formats[0].image_channel_data_type = CL_FLOAT               ;
                image_formats[1].image_channel_order = CL_R;                        image_formats[1].image_channel_data_type = CL_HALF_FLOAT          ;
                image_formats[2].image_channel_order = CL_R;                        image_formats[2].image_channel_data_type = CL_UNORM_INT8          ;
                image_formats[3].image_channel_order = CL_R;                        image_formats[3].image_channel_data_type = CL_UNORM_INT16         ;
                image_formats[4].image_channel_order = CL_R;                        image_formats[4].image_channel_data_type = CL_SNORM_INT16         ;
                image_formats[5].image_channel_order = CL_R;                        image_formats[5].image_channel_data_type = CL_SIGNED_INT8         ;
                image_formats[6].image_channel_order = CL_R;                        image_formats[6].image_channel_data_type = CL_SIGNED_INT16        ;
                image_formats[7].image_channel_order = CL_R;                        image_formats[7].image_channel_data_type = CL_SIGNED_INT32        ;
                image_formats[8].image_channel_order = CL_R;                        image_formats[8].image_channel_data_type = CL_UNSIGNED_INT8       ;
                image_formats[9].image_channel_order = CL_R;                        image_formats[9].image_channel_data_type = CL_UNSIGNED_INT16      ;
                image_formats[10].image_channel_order = CL_R;                       image_formats[10].image_channel_data_type = CL_UNSIGNED_INT32     ;
                image_formats[11].image_channel_order = CL_A;                       image_formats[11].image_channel_data_type = CL_FLOAT              ;
                image_formats[12].image_channel_order = CL_A;                       image_formats[12].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[13].image_channel_order = CL_A;                       image_formats[13].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[14].image_channel_order = CL_A;                       image_formats[14].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[15].image_channel_order = CL_A;                       image_formats[15].image_channel_data_type = CL_SNORM_INT16        ;
                image_formats[16].image_channel_order = CL_A;                       image_formats[16].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[17].image_channel_order = CL_A;                       image_formats[17].image_channel_data_type = CL_SIGNED_INT16       ;
                image_formats[18].image_channel_order = CL_A;                       image_formats[18].image_channel_data_type = CL_SIGNED_INT32       ;
                image_formats[19].image_channel_order = CL_A;                       image_formats[19].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[20].image_channel_order = CL_A;                       image_formats[20].image_channel_data_type = CL_UNSIGNED_INT16     ;
                image_formats[21].image_channel_order = CL_A;                       image_formats[21].image_channel_data_type = CL_UNSIGNED_INT32     ;
                image_formats[22].image_channel_order = CL_RG;                      image_formats[22].image_channel_data_type = CL_FLOAT              ;
                image_formats[23].image_channel_order = CL_RG;                      image_formats[23].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[24].image_channel_order = CL_RG;                      image_formats[24].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[25].image_channel_order = CL_RG;                      image_formats[25].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[26].image_channel_order = CL_RG;                      image_formats[26].image_channel_data_type = CL_SNORM_INT16        ;
                image_formats[27].image_channel_order = CL_RG;                      image_formats[27].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[28].image_channel_order = CL_RG;                      image_formats[28].image_channel_data_type = CL_SIGNED_INT16       ;
                image_formats[29].image_channel_order = CL_RG;                      image_formats[29].image_channel_data_type = CL_SIGNED_INT32       ;
                image_formats[30].image_channel_order = CL_RG;                      image_formats[30].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[31].image_channel_order = CL_RG;                      image_formats[31].image_channel_data_type = CL_UNSIGNED_INT16     ;
                image_formats[32].image_channel_order = CL_RG;                      image_formats[32].image_channel_data_type = CL_UNSIGNED_INT32     ;
                image_formats[33].image_channel_order = CL_RA;                      image_formats[33].image_channel_data_type = CL_FLOAT              ;
                image_formats[34].image_channel_order = CL_RA;                      image_formats[34].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[35].image_channel_order = CL_RA;                      image_formats[35].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[36].image_channel_order = CL_RA;                      image_formats[36].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[37].image_channel_order = CL_RA;                      image_formats[37].image_channel_data_type = CL_SNORM_INT16        ;
                image_formats[38].image_channel_order = CL_RA;                      image_formats[38].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[39].image_channel_order = CL_RA;                      image_formats[39].image_channel_data_type = CL_SIGNED_INT16       ;
                image_formats[40].image_channel_order = CL_RA;                      image_formats[40].image_channel_data_type = CL_SIGNED_INT32       ;
                image_formats[41].image_channel_order = CL_RA;                      image_formats[41].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[42].image_channel_order = CL_RA;                      image_formats[42].image_channel_data_type = CL_UNSIGNED_INT16     ;
                image_formats[43].image_channel_order = CL_RA;                      image_formats[43].image_channel_data_type = CL_UNSIGNED_INT32     ;
                image_formats[44].image_channel_order = CL_RGBA;                    image_formats[44].image_channel_data_type = CL_FLOAT              ;
                image_formats[45].image_channel_order = CL_RGBA;                    image_formats[45].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[46].image_channel_order = CL_RGBA;                    image_formats[46].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[47].image_channel_order = CL_RGBA;                    image_formats[47].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[48].image_channel_order = CL_RGBA;                    image_formats[48].image_channel_data_type = CL_SNORM_INT16        ;
                image_formats[49].image_channel_order = CL_RGBA;                    image_formats[49].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[50].image_channel_order = CL_RGBA;                    image_formats[50].image_channel_data_type = CL_SIGNED_INT16       ;
                image_formats[51].image_channel_order = CL_RGBA;                    image_formats[51].image_channel_data_type = CL_SIGNED_INT32       ;
                image_formats[52].image_channel_order = CL_RGBA;                    image_formats[52].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[53].image_channel_order = CL_RGBA;                    image_formats[53].image_channel_data_type = CL_UNSIGNED_INT16     ;
                image_formats[54].image_channel_order = CL_RGBA;                    image_formats[54].image_channel_data_type = CL_UNSIGNED_INT32     ;
                image_formats[55].image_channel_order = CL_BGRA;                    image_formats[55].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[56].image_channel_order = CL_BGRA;                    image_formats[56].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[57].image_channel_order = CL_BGRA;                    image_formats[57].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[58].image_channel_order = CL_ARGB;                    image_formats[58].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[59].image_channel_order = CL_ARGB;                    image_formats[59].image_channel_data_type = CL_SIGNED_INT8        ;
                image_formats[60].image_channel_order = CL_ARGB;                    image_formats[60].image_channel_data_type = CL_UNSIGNED_INT8      ;
                image_formats[61].image_channel_order = CL_INTENSITY;               image_formats[61].image_channel_data_type = CL_FLOAT              ;
                image_formats[62].image_channel_order = CL_INTENSITY;               image_formats[62].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[63].image_channel_order = CL_INTENSITY;               image_formats[63].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[64].image_channel_order = CL_INTENSITY;               image_formats[64].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[65].image_channel_order = CL_INTENSITY;               image_formats[65].image_channel_data_type = CL_SNORM_INT16        ;
                image_formats[66].image_channel_order = CL_LUMINANCE;               image_formats[66].image_channel_data_type = CL_FLOAT              ;
                image_formats[67].image_channel_order = CL_LUMINANCE;               image_formats[67].image_channel_data_type = CL_HALF_FLOAT         ;
                image_formats[68].image_channel_order = CL_LUMINANCE;               image_formats[68].image_channel_data_type = CL_UNORM_INT8         ;
                image_formats[69].image_channel_order = CL_LUMINANCE;               image_formats[69].image_channel_data_type = CL_UNORM_INT16        ;
                image_formats[70].image_channel_order = CL_LUMINANCE;               image_formats[70].image_channel_data_type = CL_SNORM_INT16        ;
            }
        } else return CL_INVALID_VALUE;
    } else {
        opencl_not_implemented(__my_func__,__LINE__);
    }
    return CL_SUCCESS;
}

extern CL_API_ENTRY void * CL_API_CALL
clEnqueueMapBuffer(cl_command_queue command_queue,
                   cl_mem           buffer,
                   cl_bool          blocking_map,
                   cl_map_flags     map_flags,
                   size_t           offset,
                   size_t           cb,
                   cl_uint          num_events_in_wait_list,
                   const cl_event * event_wait_list,
                   cl_event *       event,
                   cl_int *         errcode_ret) CL_API_SUFFIX__VERSION_1_0
{
    _cl_mem *mem = command_queue->get_context()->lookup_mem(buffer);
    assert( mem->is_on_host() );
    return mem->host_ptr();
}


extern CL_API_ENTRY cl_int CL_API_CALL
clSetCommandQueueProperty(cl_command_queue command_queue,
                          cl_command_queue_properties properties,
                          cl_bool enable,
                          cl_command_queue_properties *old_properties) CL_API_SUFFIX__VERSION_1_0
{
    // TODO: do something here
    return CL_SUCCESS;
}
