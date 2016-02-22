#ifndef CUDA_DEVICE_RUNTIME_INCLUDED
#define CUDA_DEVICE_RUNTIME_INCLUDED

#include <list>
#include "../stream_manager.h"

#define cudaStreamNonBlocking 0x01

enum cudaError
{
    cudaSuccess                           =      0,   // No errors
    cudaErrorMissingConfiguration         =      1,   // Missing configuration error
    cudaErrorMemoryAllocation             =      2,   // Memory allocation error
    cudaErrorInitializationError          =      3,   // Initialization error
    cudaErrorLaunchFailure                =      4,   // Launch failure
    cudaErrorPriorLaunchFailure           =      5,   // Prior launch failure
    cudaErrorLaunchTimeout                =      6,   // Launch timeout error
    cudaErrorLaunchOutOfResources         =      7,   // Launch out of resources error
    cudaErrorInvalidDeviceFunction        =      8,   // Invalid device function
    cudaErrorInvalidConfiguration         =      9,   // Invalid configuration
    cudaErrorInvalidDevice                =     10,   // Invalid device
    cudaErrorInvalidValue                 =     11,   // Invalid value
    cudaErrorInvalidPitchValue            =     12,   // Invalid pitch value
    cudaErrorInvalidSymbol                =     13,   // Invalid symbol
    cudaErrorMapBufferObjectFailed        =     14,   // Map buffer object failed
    cudaErrorUnmapBufferObjectFailed      =     15,   // Unmap buffer object failed
    cudaErrorInvalidHostPointer           =     16,   // Invalid host pointer
    cudaErrorInvalidDevicePointer         =     17,   // Invalid device pointer
    cudaErrorInvalidTexture               =     18,   // Invalid texture
    cudaErrorInvalidTextureBinding        =     19,   // Invalid texture binding
    cudaErrorInvalidChannelDescriptor     =     20,   // Invalid channel descriptor
    cudaErrorInvalidMemcpyDirection       =     21,   // Invalid memcpy direction
    cudaErrorAddressOfConstant            =     22,   // Address of constant error
                                                      // \deprecated
                                                      // This error return is deprecated as of
                                                      // Cuda 3.1. Variables in constant memory
                                                      // may now have their address taken by the
                                                      // runtime via ::cudaGetSymbolAddress().
    cudaErrorTextureFetchFailed           =     23,   // Texture fetch failed
    cudaErrorTextureNotBound              =     24,   // Texture not bound error
    cudaErrorSynchronizationError         =     25,   // Synchronization error
    cudaErrorInvalidFilterSetting         =     26,   // Invalid filter setting
    cudaErrorInvalidNormSetting           =     27,   // Invalid norm setting
    cudaErrorMixedDeviceExecution         =     28,   // Mixed device execution
    cudaErrorCudartUnloading              =     29,   // CUDA runtime unloading
    cudaErrorUnknown                      =     30,   // Unknown error condition
    cudaErrorNotYetImplemented            =     31,   // Function not yet implemented
    cudaErrorMemoryValueTooLarge          =     32,   // Memory value too large
    cudaErrorInvalidResourceHandle        =     33,   // Invalid resource handle
    cudaErrorNotReady                     =     34,   // Not ready error
    cudaErrorInsufficientDriver           =     35,   // CUDA runtime is newer than driver
    cudaErrorSetOnActiveProcess           =     36,   // Set on active process error
    cudaErrorInvalidSurface               =     37,   // Invalid surface
    cudaErrorNoDevice                     =     38,   // No Cuda-capable devices detected
    cudaErrorECCUncorrectable             =     39,   // Uncorrectable ECC error detected
    cudaErrorSharedObjectSymbolNotFound   =     40,   // Link to a shared object failed to resolve
    cudaErrorSharedObjectInitFailed       =     41,   // Shared object initialization failed
    cudaErrorUnsupportedLimit             =     42,   // ::cudaLimit not supported by device
    cudaErrorDuplicateVariableName        =     43,   // Duplicate global variable lookup by string name
    cudaErrorDuplicateTextureName         =     44,   // Duplicate texture lookup by string name
    cudaErrorDuplicateSurfaceName         =     45,   // Duplicate surface lookup by string name
    cudaErrorDevicesUnavailable           =     46,   // All Cuda-capable devices are busy (see ::cudaComputeMode) or unavailable
    cudaErrorStartupFailure               =   0x7f,   // Startup failure
    cudaErrorApiFailureBase               =  10000    // API failure base
};

typedef enum cudaError cudaError_t;

std::list<stream_operation> g_cuda_device_launch_op;

void gpgpusim_cuda_getParameterBufferV2(
		const class ptx_instruction * pI,
		class ptx_thread_info * thread,
		const class function_info * target_func);

void gpgpusim_cuda_launchDeviceV2(
		const class ptx_instruction * pI,
		class ptx_thread_info * thread,
		const class function_info * target_func);

void gpgpusim_cuda_streamCreateWithFlags(
		const ptx_instruction * pI,
		ptx_thread_info * thread,
		const class function_info * target_func);

void launch_one_device_kernel();

#endif
