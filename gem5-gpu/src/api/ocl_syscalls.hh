#ifndef __OCL_SYSCALLS_HH__
#define __OCL_SYSCALLS_HH__

#include "api/gpu_syscall_helper.hh"
#include "sim/syscall_emul.hh"

/*******************************
   OpenCL API GEM5 HANDLERS
********************************/
void clGetPlatformIDs(ThreadContext *tc, gpusyscall_t *call_params);
void clGetDeviceIDs(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateContext(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateCommandQueue(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateProgramWithSource(ThreadContext *tc, gpusyscall_t *call_params);
void clBuildProgram(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateBuffer(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateKernel(ThreadContext *tc, gpusyscall_t *call_params);
void clSetKernelArg(ThreadContext *tc, gpusyscall_t *call_params);
void clEnqueueNDRangeKernel(ThreadContext *tc, gpusyscall_t *call_params);
void clEnqueueReadBuffer(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseKernel(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseProgram(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseMemObject(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseCommandQueue(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseContext(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateProgramWithBinary(ThreadContext *tc, gpusyscall_t *call_params);
void clEnqueueWriteBuffer(ThreadContext *tc, gpusyscall_t *call_params);
void clFinish(ThreadContext *tc, gpusyscall_t *call_params);
void clGetContextInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetDeviceInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetEventInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetEventProfilingInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetKernelWorkGroupInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetPlatformInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetProgramBuildInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clGetProgramInfo(ThreadContext *tc, gpusyscall_t *call_params);
void clReleaseEvent(ThreadContext *tc, gpusyscall_t *call_params);
void clWaitForEvents(ThreadContext *tc, gpusyscall_t *call_params);
void clCreateContextFromType(ThreadContext *tc, gpusyscall_t *call_params);

#endif
