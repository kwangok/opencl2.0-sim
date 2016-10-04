/*
 * Copyright 2016 by Chia-Lin Yang, Shiao-Li Tsao, Kun-Chih Chen,
 * National Taiwan University, National Chiao Tung University and
 * National Sun Yat-Sen University, Taiwan, All Rights Reserved.
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

#include "api/ocl_syscalls.hh"
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

extern unsigned g_active_device;

extern stream_manager *g_stream_manager;

kernel_info_t *gpgpu_cuda_ptx_sim_init_grid(gpgpu_ptx_sim_arg_list_t args,
                                            struct dim3 gridDim,
                                            struct dim3 blockDim,
                                            function_info* entry,
                                            struct dim3 lastBlockDim = dim3(1, 1, 1),
                                            bool useLastBlockDim = false);

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

extern symbol_table* registering_symtab;
extern unsigned registering_fat_cubin_handle;
extern int registering_allocation_size;
extern Addr registering_allocation_ptr;

unsigned get_global_and_constant_alloc_size(symbol_table* symtab);

// copy OpenCL feature and method from gpgpu-sum file
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
   CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
   if( nregs > 0 )
      result_regs = cudaGPU->getDeviceProperties()->regsPerBlock / ((nregs+3)&~3);
      // result_regs = device->the_device()->num_registers_per_core() / ((nregs+3)&~3);
   unsigned result = cudaGPU->getMaxThreadsPerMultiprocessor();
   // unsigned result = device->the_device()->threads_per_core();
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
   else printf("GPGPU-Sim warn: It is in cuda mode, set GEM5GPU_CUDA_OR_OPENCL environment variable to OPENCL for opencl mode.\n");
}

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
         char *gpgpu_opencl_path_str = getenv("NVWRAPPER_ROOT");
         bool error = false;
         if( nvopencl_libdir == NULL ) {
            printf("GPGPU-Sim OpenCL API: Please set your NVOPENCL_LIBDIR environment variable to\n"
                   "                      the location of NVIDIA's libOpenCL.so file on your system.\n");
            error = true;
         }
         if( gpgpu_opencl_path_str == NULL ) {
            fprintf(stderr,"GPGPU-Sim OpenCL API: Please set your NVWRAPPER_ROOT environment variable\n");
            fprintf(stderr,"                      to point to the location of your NVWRAPPER installation\n");
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
            snprintf(commandline,1024,"rsync -t %s/nvopencl_wrapper %s:%s/nvopencl_wrapper", gpgpu_opencl_path_str, remote_host, remote_dir );
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
            snprintf(commandline,1024,"%s/nvopencl_wrapper %s %s %s", 
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
      // modify loading ptx method to gem5-gpu way
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
      gpgpu_sim *the_gpu = NULL;
      the_device = new _cl_device_id(the_gpu);
   }
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

/*******************************
  OpenCL 1.x API implementation
********************************/
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

  cl_context_properties * properties = new cl_context_properties[2];
  cl_int * errcode_ret = new cl_int;
  if ( properties_addr == NULL ) properties = NULL;
  else helper.readBlob(properties_addr, (uint8_t*)properties, 2 * sizeof(cl_context_properties));

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

  const void * arg_value;
  if ( arg_value_addr == NULL ) arg_value = NULL;
  else
  {
	  arg_value = new char[arg_size];
	  helper.readBlob(arg_value_addr, (uint8_t*)arg_value, arg_size);
  }

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

    const size_t * global_work_offset = new size_t[work_dim];
    const size_t * global_work_size = new size_t[work_dim];
    const size_t * local_work_size = new size_t[work_dim];
    if ( global_work_offset_addr == NULL ) global_work_offset = NULL;
    else helper.readBlob(global_work_offset_addr, (uint8_t*)global_work_offset, work_dim * sizeof(const size_t));
    if ( global_work_size_addr == NULL ) global_work_size = NULL;
    else helper.readBlob(global_work_size_addr, (uint8_t*)global_work_size, work_dim * sizeof(const size_t));
    if ( local_work_size_addr == NULL ) local_work_size = NULL;
    else helper.readBlob(local_work_size_addr, (uint8_t*)local_work_size, work_dim * sizeof(const size_t));

    int _global_size[3];
    int zeros[3] = { 0, 0, 0};
    printf("\n\n\n");
    char *mode = getenv("PTX_SIM_MODE_FUNC");
    if ( mode )
        sscanf(mode,"%u", &g_ptx_sim_mode);
    printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel '%s' (mode=%s)\n", kernel->name().c_str(), g_ptx_sim_mode?"functional simulation":"performance simulation");
    if ( !work_dim || work_dim > 3 )
    {
        cl_int ret = CL_INVALID_WORK_DIMENSION;
        helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
        return ;
    }
    size_t _local_size[3];
    if( local_work_size != NULL )
    {
        for (unsigned d = 0; d < work_dim; ++d) 
            _local_size[d] = local_work_size[d];
    }
    else
    {
        printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel automatic local work size selection:\n");
        for (unsigned d = 0; d < work_dim; ++d)
        {
            if(d == 0)
            {
                if(global_work_size[d] <= cudaGPU->getMaxThreadsPerMultiprocessor())
                {
                    _local_size[d] = global_work_size[d];
                }
                else
                { 
                    // start with the maximum number of thread that a core may hold, 
                    // and decrement by 64 threadsuntil there is a local_work_size 
                    // that can perfectly divide the global_work_size. 
                    unsigned n_thread_per_core = cudaGPU->getMaxThreadsPerMultiprocessor();
                    size_t local_size_attempt = n_thread_per_core; 
                    while (local_size_attempt > 1 and (n_thread_per_core % 64 == 0))
                    {
                        if (global_work_size[d] % local_size_attempt == 0)
                        {
                            break; 
                        }
                        local_size_attempt -= 64; 
                    }
                    if (local_size_attempt == 0) local_size_attempt = 1;
                    _local_size[d] = local_size_attempt;
                }
            }
            else
            {
                _local_size[d] = 1;
            }
            printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel global_work_size[%u] = %zu\n", d, global_work_size[d]);
            printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel local_work_size[%u]  = %zu\n", d, _local_size[d]);
        }
    }

    // Automatic handle for (global_work_size % local_size) != 0
    int last_local_size[3] = {1, 1, 1};

    for (unsigned d = 0; d < work_dim; ++d)
    {
        _global_size[d] = (int)global_work_size[d];
        if ((global_work_size[d] % _local_size[d]) != 0)
        {
            // Padding size
            _global_size[d] = (int)(((global_work_size[d] / _local_size[d]) + 1) * _local_size[d]);
            last_local_size[d] = global_work_size[d] % _local_size[d];
            printf("GPGPU-Sim OpenCL API: clEnqueueNDRangeKernel new global_work_size[%u] = %d\n", d, _global_size[d]);
            printf("GPGPU-Sim OpenCL API: last_local_size[%u] = %d\n", d, last_local_size[d]);
        }
        else
        {
            last_local_size[d] = _local_size[d];
        }
    }
    if (global_work_offset != NULL)
    {
        for (unsigned d = 0; d < work_dim; ++d)
        {
            if (global_work_offset[d] != 0)
            {
                printf("GPGPU-Sim: global id offset is not supported\n");
                abort();
            }
        }
    }
    assert(_global_size[0] == _local_size[0] * (_global_size[0]/_local_size[0])); // i.e., we can divide into equal CTAs
    dim3 GridDim;
    GridDim.x = _global_size[0]/_local_size[0];
    GridDim.y = (work_dim < 2) ? 1 : (_global_size[1]/_local_size[1]);
    GridDim.z = (work_dim < 3) ? 1 : (_global_size[2]/_local_size[2]);
    dim3 BlockDim;
    BlockDim.x = _local_size[0];
    BlockDim.y = (work_dim < 2) ? 1 : _local_size[1];
    BlockDim.z = (work_dim < 3) ? 1 : _local_size[2];
    gpgpu_ptx_sim_arg_list_t params;
    cl_int err_val = kernel->bind_args(params);
    if ( err_val != CL_SUCCESS )
    {
        cl_int ret = err_val;
        helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
        return ;
    }
    gpgpu_t *gpu = command_queue->get_device()->the_device();
    // Don't need read param for ptx 2.2 and above version
    if (kernel->get_implementation()->get_ptx_version().ver() < 2.2)
    {
        gpgpu_ptx_sim_memcpy_symbol( "%_global_size", _global_size, 3 * sizeof(int), 0, 1, gpu );
        gpgpu_ptx_sim_memcpy_symbol( "%_work_dim", &work_dim, 1 * sizeof(int), 0, 1, gpu  );
        gpgpu_ptx_sim_memcpy_symbol( "%_global_num_groups", &GridDim, 3 * sizeof(int), 0, 1, gpu );
        gpgpu_ptx_sim_memcpy_symbol( "%_global_launch_offset", zeros, 3 * sizeof(int), 0, 1, gpu );
        gpgpu_ptx_sim_memcpy_symbol( "%_global_block_offset", zeros, 3 * sizeof(int), 0, 1, gpu );
    }
    // Set up edge case block size
    dim3 LastBlockDim;
    LastBlockDim.x = last_local_size[0];
    LastBlockDim.y = last_local_size[1];
    LastBlockDim.z = last_local_size[2];
    bool useLastBlockDim = !(LastBlockDim.x == BlockDim.x && LastBlockDim.y == BlockDim.y && LastBlockDim.z == BlockDim.z);
    // modify launch kernel to gem5-gpu way
    kernel_info_t *grid = gpgpu_cuda_ptx_sim_init_grid(
            params,
            GridDim,
            BlockDim,
            kernel->get_implementation(),
            LastBlockDim,
            useLastBlockDim);

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


#define CL_STRING_CASE( S ) \
      if( param_value && (param_value_size < strlen(S)+1) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  snprintf(buf,strlen(S)+1,S); \
		  helper.writeBlob(param_value_addr, (uint8_t*)buf, (strlen(S)+1) * sizeof(char)); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = strlen(S)+1; \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_INT_CASE( N ) \
      if( param_value && param_value_size < sizeof(cl_int) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((cl_int*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(cl_int); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_UINT_CASE( N ) \
      if( param_value && param_value_size < sizeof(cl_uint) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((cl_int*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(cl_int); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_ULONG_CASE( N ) \
      if( param_value && param_value_size < sizeof(cl_ulong) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((cl_ulong*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(cl_ulong); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_BOOL_CASE( N ) \
      if( param_value && param_value_size < sizeof(cl_bool) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((cl_bool*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(cl_bool); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_SIZE_CASE( N ) \
      if( param_value && param_value_size < sizeof(size_t) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((size_t*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(size_t); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

#define CL_CASE( T, N ) \
      if( param_value && param_value_size < sizeof(T) ) { \
			cl_int ret = CL_INVALID_VALUE; \
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int)); \
			return ; \
	  } \
      if( param_value ) { \
		  *((T*)param_value) = (N); \
		  helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size); \
	  } \
      if( param_value_size_ret ) { \
		  *param_value_size_ret = sizeof(T); \
		  helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t)); \
	  } \

void clFinish(ThreadContext *tc, gpusyscall_t *call_params) {
    // clFinish will block CPU thread until kernel is done
    GPUSyscallHelper helper(tc, call_params);
    DPRINTF(GPUSyscalls, "gem5 GPU Syscall: clFinish(), tc = %x\n", tc);
    CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device);
    bool suspend = cudaGPU->needsToBlock();
    helper.setReturn((uint8_t*)&suspend, sizeof(bool));
    return ;
}

void clGetContextInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_context context = *((cl_context*)helper.getParam(0));
	cl_context_info param_name = *((cl_context_info*)helper.getParam(1));
	Addr param_value_addr = *((Addr*)helper.getParam(2, true));
	Addr param_value_size_ret_addr = *((Addr*)helper.getParam(3, true));
	size_t param_value_size = *((size_t*)helper.getParam(4));

	void * param_value = new char[param_value_size]; 
	if ( param_value_addr == NULL ) param_value = NULL;
	else helper.readBlob(param_value_addr, (uint8_t*)param_value, param_value_size );
	
	size_t * param_value_size_ret = new size_t;
	if ( param_value_size_ret_addr == NULL ) param_value_size_ret = NULL;
	else helper.readBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
	
	if( context == NULL ) {
		cl_int ret = CL_INVALID_CONTEXT;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
	}
	switch( param_name ) {
	case CL_CONTEXT_DEVICES: {
		unsigned ngpu=0;
		cl_device_id device_id = context->get_first_device();
		while ( device_id != NULL ) {
			if( param_value ) {
				((cl_device_id*)param_value)[ngpu] = device_id;
				helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
			}
			device_id = device_id->next();
			ngpu++;
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = ngpu * sizeof(cl_device_id);
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
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
	}
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clGetDeviceInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_device_id device = *((cl_device_id*)helper.getParam(0));
	cl_device_info param_name = *((cl_device_info*)helper.getParam(1));
	size_t param_value_size = *((size_t*)helper.getParam(2));
	Addr param_value_addr = *((Addr*)helper.getParam(3, true));
	Addr param_value_size_ret_addr = *((Addr*)helper.getParam(4, true));

	CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device); 

	void * param_value = new char[param_value_size];
	if ( param_value_addr == NULL ) param_value = NULL;
	else helper.readBlob(param_value_addr, (uint8_t*)param_value, param_value_size);

	size_t * param_value_size_ret = new size_t;
	if ( param_value_size_ret_addr == NULL ) param_value_size_ret = NULL;
	else helper.readBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));

	if( device != GPGPUSim_Init() ) {
		cl_int ret = CL_INVALID_DEVICE;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
	}
	char *buf = (char*)param_value;
	switch( param_name ) {
	case CL_DEVICE_NAME: CL_STRING_CASE( "GPGPU-Sim" ); break;
	case CL_DEVICE_GLOBAL_MEM_SIZE: CL_ULONG_CASE( 1024*1024*1024 ); break;
	case CL_DEVICE_MAX_COMPUTE_UNITS: CL_UINT_CASE( cudaGPU->getDeviceProperties()->multiProcessorCount ); break;
	case CL_DEVICE_MAX_CLOCK_FREQUENCY: CL_UINT_CASE( cudaGPU->getDeviceProperties()->clockRate ); break;
	case CL_DEVICE_VENDOR:CL_STRING_CASE("GPGPU-Sim.org"); break;
	case CL_DEVICE_VERSION: CL_STRING_CASE("OpenCL 1.0"); break;
	case CL_DRIVER_VERSION: CL_STRING_CASE("1.0"); break;
	case CL_DEVICE_TYPE: CL_CASE(cl_device_type, CL_DEVICE_TYPE_GPU); break;
	case CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS: CL_INT_CASE( 3 ); break;
	case CL_DEVICE_MAX_WORK_ITEM_SIZES: 
		if( param_value && param_value_size < 3*sizeof(size_t) ) {
			cl_int ret = CL_INVALID_VALUE;
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
			return ;
		}
		if( param_value ) {
			unsigned n_thread_per_shader = cudaGPU->getMaxThreadsPerMultiprocessor();
			((size_t*)param_value)[0] = n_thread_per_shader;
			((size_t*)param_value)[1] = n_thread_per_shader;
			((size_t*)param_value)[2] = n_thread_per_shader;
			helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = 3*sizeof(cl_uint);
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
		break;
	case CL_DEVICE_MAX_WORK_GROUP_SIZE: CL_INT_CASE( cudaGPU->getMaxThreadsPerMultiprocessor() ); break;
	case CL_DEVICE_ADDRESS_BITS: CL_INT_CASE( 32 ); break;
	case CL_DEVICE_AVAILABLE: CL_BOOL_CASE( CL_TRUE ); break;
	case CL_DEVICE_COMPILER_AVAILABLE: CL_BOOL_CASE( CL_TRUE ); break;
	case CL_DEVICE_IMAGE_SUPPORT: CL_INT_CASE( CL_TRUE ); break;
	case CL_DEVICE_MAX_READ_IMAGE_ARGS: CL_INT_CASE( 128 ); break;
	case CL_DEVICE_MAX_WRITE_IMAGE_ARGS: CL_INT_CASE( 8 ); break;
	case CL_DEVICE_IMAGE2D_MAX_HEIGHT: CL_INT_CASE( 8192 ); break;
	case CL_DEVICE_IMAGE2D_MAX_WIDTH: CL_INT_CASE( 8192 ); break;
	case CL_DEVICE_IMAGE3D_MAX_HEIGHT: CL_INT_CASE( 2048 ); break;
	case CL_DEVICE_IMAGE3D_MAX_WIDTH: CL_INT_CASE( 2048 ); break;
	case CL_DEVICE_IMAGE3D_MAX_DEPTH: CL_INT_CASE( 2048 ); break;
	case CL_DEVICE_MAX_MEM_ALLOC_SIZE: CL_INT_CASE( 128*1024*1024 ); break;
	case CL_DEVICE_ERROR_CORRECTION_SUPPORT: CL_INT_CASE( 0 ); break;
	case CL_DEVICE_LOCAL_MEM_TYPE: CL_INT_CASE( CL_LOCAL ); break;
	case CL_DEVICE_LOCAL_MEM_SIZE: CL_ULONG_CASE( cudaGPU->getDeviceProperties()->sharedMemPerBlock ); break;
	case CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE: CL_ULONG_CASE( 64 * 1024 ); break;
	case CL_DEVICE_QUEUE_PROPERTIES: CL_INT_CASE( CL_QUEUE_PROFILING_ENABLE ); break;
	case CL_DEVICE_EXTENSIONS: 
		if( param_value && (param_value_size < 1) ) {
			cl_int ret = CL_INVALID_VALUE;
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
			return ;
		}
		if( param_value ) buf[0]=0;
		if( param_value_size_ret ) {
			*param_value_size_ret = 1; 
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
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
        DPRINTF(GPUSyscalls, "gem5 GPU Syscall: WARNING ** Not yet implemented OpenCL device info");
        break;
		// opencl_not_implemented(__my_func__,__LINE__);
	}
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clGetKernelWorkGroupInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_kernel kernel = *((cl_kernel*)helper.getParam(0));
	cl_device_id device = *((cl_device_id*)helper.getParam(1));
	cl_kernel_work_group_info param_name = *((cl_kernel_work_group_info*)helper.getParam(2));
	Addr param_value_addr = *((Addr*)helper.getParam(3, true));
	size_t param_value_size = *((size_t*)helper.getParam(4));
	Addr param_value_size_ret_addr = *((Addr*)helper.getParam(5, true));

	CudaGPU *cudaGPU = CudaGPU::getCudaGPU(g_active_device); 
	
	void * param_value = new char[param_value_size];
	if ( param_value_addr == NULL ) param_value = NULL;
	else helper.readBlob(param_value_addr, (uint8_t*)param_value, param_value_size);

	size_t * param_value_size_ret = new size_t;
	if ( param_value_size_ret_addr == NULL ) param_value_size_ret = NULL;
	else helper.readBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
	
	if( kernel == NULL ) {
		cl_int ret = CL_INVALID_KERNEL;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
	}
	switch( param_name ) {
	case CL_KERNEL_WORK_GROUP_SIZE:
		CL_SIZE_CASE( kernel->get_workgroup_size(device) );
		break;
	case CL_KERNEL_COMPILE_WORK_GROUP_SIZE:
	case CL_KERNEL_LOCAL_MEM_SIZE:
		//opencl_not_implemented(__my_func__,__LINE__);
		warn("clGetKernelWorkGroupInfo CL_KERNEL_LOCAL_MEM_SIZE implementation is not complete!");
		*(size_t *)param_value = cudaGPU->getDeviceProperties()->sharedMemPerBlock;
		helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		break;
	default:
		cl_int ret = CL_INVALID_VALUE;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
		break;
	}
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clGetPlatformInfo(ThreadContext *tc, gpusyscall_t *call_params) {
    GPUSyscallHelper helper(tc, call_params);
	cl_platform_id platform = *((cl_platform_id*)helper.getParam(0));
	cl_platform_info param_name = *((cl_platform_info*)helper.getParam(1));
	Addr param_value_addr = *((Addr*)helper.getParam(2, true));
	size_t param_value_size = *((size_t*)helper.getParam(3));
	Addr param_value_size_ret_addr = *((Addr*)helper.getParam(4, true));
	
	void * param_value = new char[param_value_size];
	if ( param_value_addr == NULL ) param_value = NULL;
	else helper.readBlob(param_value_addr, (uint8_t*)param_value, param_value_size);

	size_t * param_value_size_ret = new size_t;
	if ( param_value_size_ret_addr == NULL ) param_value_size_ret = NULL;
	else helper.readBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
	
	if( platform == NULL || platform->m_uid != 0 ) {
	  cl_int ret = CL_INVALID_PLATFORM;
	  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	  return ;
	}
	char *buf = (char*)param_value;
	switch( param_name ) {
	case CL_PLATFORM_PROFILE:    CL_STRING_CASE("FULL_PROFILE"); break;
	case CL_PLATFORM_VERSION:    CL_STRING_CASE("OpenCL 1.0"); break;
	case CL_PLATFORM_NAME:       CL_STRING_CASE("GPGPU-Sim"); break;
	case CL_PLATFORM_VENDOR:     CL_STRING_CASE("GPGPU-Sim.org"); break;
	case CL_PLATFORM_EXTENSIONS: CL_STRING_CASE(" "); break;
	default:
	  cl_int ret = CL_INVALID_VALUE;
	  helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	  return ;
	}
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clGetProgramInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_program program = *((cl_program*)helper.getParam(0));
	cl_program_info param_name = *((cl_program_info*)helper.getParam(1));
	size_t param_value_size = *((size_t*)helper.getParam(2));
	Addr param_value_addr = *((Addr*)helper.getParam(3, true));
	Addr param_value_size_ret_addr = *((Addr*)helper.getParam(4, true));

	void * param_value = new char[param_value_size];
	if ( param_value_addr == NULL ) param_value = NULL;
	else helper.readBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
	
	size_t * param_value_size_ret = new size_t;
	if ( param_value_size_ret_addr == NULL ) param_value_size_ret = NULL;
	else helper.readBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
	
	if( program == NULL ) {
		cl_int ret = CL_INVALID_PROGRAM;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
	}
	char *tmp=NULL;
	size_t len=0;
	switch( param_name ) {
	case CL_PROGRAM_REFERENCE_COUNT: 
		CL_INT_CASE(1);
		break;
	case CL_PROGRAM_CONTEXT:
		if( param_value && param_value_size < sizeof(cl_context)) {
			cl_int ret = CL_INVALID_VALUE;
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
			return ;
		}
		if( param_value ) {
			*((cl_context*)param_value) = program->get_context();
			helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = sizeof(cl_context);
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
		break;
	case CL_PROGRAM_NUM_DEVICES:
		CL_INT_CASE(NUM_DEVICES);
		break;
	case CL_PROGRAM_DEVICES:
		if( param_value && param_value_size < NUM_DEVICES * sizeof(cl_device_id) ) {
			cl_int ret = CL_INVALID_VALUE;
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
			return ;
		}
		if( param_value ) {
			assert( NUM_DEVICES == 1 );
			((cl_device_id*)param_value)[0] = GPGPUSim_Init();
			helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = sizeof(cl_device_id);
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
		break;
	case CL_PROGRAM_SOURCE:
		opencl_not_implemented(__my_func__,__LINE__);
		break;
	case CL_PROGRAM_BINARY_SIZES:
		if( param_value && param_value_size < NUM_DEVICES * sizeof(size_t) ) {
			cl_int ret = CL_INVALID_VALUE;
			helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
			return ;
		}
		if( param_value ) {
			*((size_t*)param_value) = program->get_ptx_size();
			helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = NUM_DEVICES*sizeof(size_t);
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
		break;
	case CL_PROGRAM_BINARIES:
		len = program->get_ptx_size();
		tmp = program->get_ptx();
		if( param_value ) {
			memcpy( ((char**)param_value)[0], tmp, len );
			helper.writeBlob(param_value_addr, (uint8_t*)param_value, param_value_size);
		}
		if( param_value_size_ret ) {
			*param_value_size_ret = len;
			helper.writeBlob(param_value_size_ret_addr, (uint8_t*)param_value_size_ret, sizeof(size_t));
		}
		break;
	default:
		cl_int ret = CL_INVALID_VALUE;
		helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
		return ;
		break;
	}
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
	
}

void clCreateContextFromType(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	Addr properties_addr = *((Addr*)helper.getParam(0, true));
	cl_device_type device_type = *((cl_device_type*)helper.getParam(1));
	Addr errcode_ret_addr = *((Addr*)helper.getParam(2, true));

	const cl_context_properties * properties = new cl_context_properties;
	if ( properties_addr == NULL ) properties = NULL;
	else helper.readBlob(properties_addr, (uint8_t*)properties, sizeof(cl_context_properties));
	
	cl_int * errcode_ret = new cl_int;
	if ( errcode_ret_addr == NULL ) errcode_ret = NULL;
	else helper.readBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
	
	_cl_device_id *gpu = GPGPUSim_Init();

   switch (device_type) {
   case CL_DEVICE_TYPE_GPU: 
   case CL_DEVICE_TYPE_ACCELERATOR:
   case CL_DEVICE_TYPE_DEFAULT:
   case CL_DEVICE_TYPE_ALL:
      break; // GPGPU-Sim qualifies as these types of device. 
   default: 
      printf("GPGPU-Sim OpenCL API: unsupported device type %lx\n", device_type );
      setErrCode( errcode_ret, CL_DEVICE_NOT_FOUND );
	  if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
	  cl_context ret = NULL;
	  helper.setReturn((uint8_t*)&ret, sizeof(cl_context));
	  return ;
      break;
   }
   
   if( properties_addr != NULL ) {
      printf("GPGPU-Sim OpenCL API: do not know how to use properties in %s\n", __my_func__ );
      //exit(1); // Temporarily commented out to allow the AMD Sample applications to run. 
   }
   
   setErrCode( errcode_ret, CL_SUCCESS );
   if ( errcode_ret_addr != NULL) helper.writeBlob(errcode_ret_addr, (uint8_t*)errcode_ret, sizeof(cl_int));
   cl_context ret = new _cl_context(gpu);
   helper.setReturn((uint8_t*)&ret, sizeof(cl_context));
   return ;
}

void clReleaseEvent(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clWaitForEvents(ThreadContext *tc, gpusyscall_t *call_params) {
	GPUSyscallHelper helper(tc, call_params);
	cl_int ret = CL_SUCCESS;
	helper.setReturn((uint8_t*)&ret, sizeof(cl_int));
	return ;
}

void clCreateProgramWithBinary(ThreadContext *tc, gpusyscall_t *call_params) {
	opencl_not_implemented(__my_func__,__LINE__);
}

void clGetEventInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	opencl_not_implemented(__my_func__,__LINE__);
}

void clGetEventProfilingInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	opencl_not_implemented(__my_func__,__LINE__);
}

void clGetProgramBuildInfo(ThreadContext *tc, gpusyscall_t *call_params) {
	opencl_not_implemented(__my_func__,__LINE__);
}

void clEnqueueWriteBuffer(ThreadContext *tc, gpusyscall_t *call_params) {
	opencl_not_implemented(__my_func__,__LINE__);
}

