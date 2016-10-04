#ifndef __SIM_GPGPU_SYSCALLS_HH__
#define __SIM_GPGPU_SYSCALLS_HH__

#include "api/cuda_syscalls.hh"
#include "api/ocl_syscalls.hh"

typedef void (*gpuFunc_t)(ThreadContext *, gpusyscall_t *);

gpuFunc_t gpgpu_funcs[] = {
        cudaMalloc,             /* 0 */
        cudaMallocHost,         /* 1 */
        cudaMallocPitch,        /* 2 */
        cudaMallocArray,        /* 3 */
        cudaFree,               /* 4 */
        cudaFreeHost,           /* 5 */
        cudaFreeArray,          /* 6 */
        cudaMemcpy,             /* 7 */
        cudaMemcpyToArray,      /* 8 */
        cudaMemcpyFromArray,   /* 9 */
        cudaMemcpyArrayToArray,/* 10 */
        cudaMemcpy2D,          /* 11 */
        cudaMemcpy2DToArray,   /* 12 */
        cudaMemcpy2DFromArray, /* 13 */
        cudaMemcpy2DArrayToArray,/* 14 */
        cudaMemcpyToSymbol,    /* 15 */
        cudaMemcpyFromSymbol,  /* 16 */
        cudaMemcpyAsync,       /* 17 */
        cudaMemcpyToArrayAsync,/* 18 */
        cudaMemcpyFromArrayAsync,/* 19 */
        cudaMemcpy2DAsync,     /* 20 */
        cudaMemcpy2DToArrayAsync,/* 21 */
        cudaMemcpy2DFromArrayAsync,/* 22 */
        cudaMemset,            /* 23 */
        cudaMemset2D,          /* 24 */
        cudaGetSymbolAddress,  /* 25 */
        cudaGetSymbolSize,     /* 26 */
        cudaGetDeviceCount,    /* 27 */
        cudaGetDeviceProperties,/* 28 */
        cudaChooseDevice,      /* 29 */
        cudaSetDevice,         /* 30 */
        cudaGetDevice,         /* 31 */
        cudaBindTexture,       /* 32 */
        cudaBindTextureToArray,/* 33 */
        cudaUnbindTexture,     /* 34 */
        cudaGetTextureAlignmentOffset,/* 35 */
        cudaGetTextureReference,/* 36 */
        cudaGetChannelDesc,        /* 37 */
        cudaCreateChannelDesc, /* 38 */
        cudaGetLastError,        /* 39 */
        cudaGetErrorString,        /* 40 */
        cudaConfigureCall,        /* 41 */
        cudaSetupArgument,        /* 42 */
        cudaLaunch,        /* 43 */
        cudaStreamCreate,        /* 44 */
        cudaStreamDestroy,        /* 45 */
        cudaStreamSynchronize,        /* 46 */
        cudaStreamQuery,        /* 47 */
        cudaEventCreate,        /* 48 */
        cudaEventRecord,        /* 49 */
        cudaEventQuery,        /* 50 */
        cudaEventSynchronize,        /* 51 */
        cudaEventDestroy,        /* 52 */
        cudaEventElapsedTime,        /* 53 */
        cudaThreadExit,        /* 54 */
        cudaThreadSynchronize,        /* 55 */
        __cudaSynchronizeThreads,    /* 56 */
        __cudaRegisterFatBinary,    /* 57 */
        __cudaUnregisterFatBinary,   /* 58 */
        __cudaRegisterFunction,        /* 59 */
        __cudaRegisterVar,        /* 60 */
        __cudaRegisterShared,        /* 61 */
        __cudaRegisterSharedVar,        /* 62 */
        __cudaRegisterTexture,        /* 63 */
        cudaGLRegisterBufferObject,  /* 64 */
        cudaGLMapBufferObject,        /* 65 */
        cudaGLUnmapBufferObject,        /* 66 */
        cudaGLUnregisterBufferObject,/* 67 */
        cudaHostAlloc,        /* 68 */
        cudaHostGetDevicePointer,        /* 69 */
        cudaSetValidDevices,        /* 70 */
        cudaSetDeviceFlags,        /* 71 */
        cudaFuncGetAttributes,        /* 72 */
        cudaEventCreateWithFlags,        /* 73 */
        cudaDriverGetVersion,        /* 74 */
        cudaRuntimeGetVersion,        /* 75 */
        cudaGLSetGLDevice,        /* 76 */
        cudaWGLGetDevice,        /* 77 */
        __cudaMutexOperation,        /* 78 */
        __cudaTextureFetch,        /* 79 */
        __cudaSynchronizeThreads,        /* 80 */
        __cudaRegisterFatBinaryFinalize,    /* 81 */
        cudaRegisterDeviceMemory,    /* 82 */
        cudaBlockThread,    /* 83 */
        __cudaCheckAllocateLocal,    /* 84 */
        __cudaSetLocalAllocation,    /* 85 */
        clGetPlatformIDs,		/*  86 OpenCL  1 */
        clGetDeviceIDs,			/*  87 OpenCL  2 */
        clCreateContext,		/*  88 OpenCL  3 */
        clCreateCommandQueue,		/*  89 OpenCL  4 */
        clCreateProgramWithSource,	/*  90 OpenCL  5 */
        clBuildProgram,			/*  91 OpenCL  6 */
        clCreateBuffer,			/*  92 OpenCL  7 */
        clCreateKernel,			/*  93 OpenCL  8 */
        clSetKernelArg,			/*  94 OpenCL  9 */
        clEnqueueNDRangeKernel,		/*  95 OpenCL 10 */
        clEnqueueReadBuffer,		/*  96 OpenCL 11 */
        clReleaseKernel,		/*  97 OpenCL 12 */
        clReleaseProgram,		/*  98 OpenCL 13 */
        clReleaseMemObject,		/*  99 OpenCL 14 */
        clReleaseCommandQueue,		/* 100 OpenCL 15 */
        clReleaseContext,		/* 101 OpenCL 16 */
        clCreateProgramWithBinary,	/* 102 OpenCL 17 */
        clEnqueueWriteBuffer,		/* 103 OpenCL 18 */
        clFinish,			/* 104 OpenCL 19 */
        clGetContextInfo,		/* 105 OpenCL 20 */
        clGetDeviceInfo,		/* 106 OpenCL 21 */
        clGetEventInfo,			/* 107 OpenCL 22 */
        clGetEventProfilingInfo,	/* 108 OpenCL 23 */
        clGetKernelWorkGroupInfo,	/* 109 OpenCL 24 */
        clGetPlatformInfo,		/* 110 OpenCL 25 */
        clGetProgramBuildInfo,		/* 111 OpenCL 26 */
        clGetProgramInfo,		/* 112 OpenCL 27 */
        clReleaseEvent,			/* 113 OpenCL 28 */
        clWaitForEvents,		/* 114 OpenCL 29 */
        clCreateContextFromType		/* 115 OpenCL 30 */
};

#endif
