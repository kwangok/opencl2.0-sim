# 1 "gaussian.cu"
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 271 "/usr/include/libio.h" 3
struct _IO_FILE;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval;
# 203 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL};
# 296 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone;
# 93 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {


ITIMER_REAL,


ITIMER_VIRTUAL,



ITIMER_PROF};
# 195 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUipcMem_flags_enum {
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1};
# 204 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUctx_flags_enum {
CU_CTX_SCHED_AUTO,
CU_CTX_SCHED_SPIN,
CU_CTX_SCHED_YIELD,
CU_CTX_SCHED_BLOCKING_SYNC = 4,
CU_CTX_BLOCKING_SYNC = 4,


CU_CTX_SCHED_MASK = 7,
CU_CTX_MAP_HOST,
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
CU_CTX_FLAGS_MASK = 31};
# 221 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUevent_flags_enum {
CU_EVENT_DEFAULT,
CU_EVENT_BLOCKING_SYNC,
CU_EVENT_DISABLE_TIMING,
CU_EVENT_INTERPROCESS = 4};
# 231 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUarray_format_enum {
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
CU_AD_FORMAT_UNSIGNED_INT16,
CU_AD_FORMAT_UNSIGNED_INT32,
CU_AD_FORMAT_SIGNED_INT8 = 8,
CU_AD_FORMAT_SIGNED_INT16,
CU_AD_FORMAT_SIGNED_INT32,
CU_AD_FORMAT_HALF = 16,
CU_AD_FORMAT_FLOAT = 32};
# 245 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUaddress_mode_enum {
CU_TR_ADDRESS_MODE_WRAP,
CU_TR_ADDRESS_MODE_CLAMP,
CU_TR_ADDRESS_MODE_MIRROR,
CU_TR_ADDRESS_MODE_BORDER};
# 255 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfilter_mode_enum {
CU_TR_FILTER_MODE_POINT,
CU_TR_FILTER_MODE_LINEAR};
# 263 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUdevice_attribute_enum {
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
CU_DEVICE_ATTRIBUTE_INTEGRATED,
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
CU_DEVICE_ATTRIBUTE_TCC_DRIVER,
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH,
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR,
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT,
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE,
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID,
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT,
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH};
# 362 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUpointer_attribute_enum {
CU_POINTER_ATTRIBUTE_CONTEXT = 1,
CU_POINTER_ATTRIBUTE_MEMORY_TYPE,
CU_POINTER_ATTRIBUTE_DEVICE_POINTER,
CU_POINTER_ATTRIBUTE_HOST_POINTER};
# 372 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfunction_attribute_enum {
# 378 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 385 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 391 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_NUM_REGS,
# 410 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 419 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,

CU_FUNC_ATTRIBUTE_MAX};
# 427 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfunc_cache_enum {
CU_FUNC_CACHE_PREFER_NONE,
CU_FUNC_CACHE_PREFER_SHARED,
CU_FUNC_CACHE_PREFER_L1,
CU_FUNC_CACHE_PREFER_EQUAL};
# 437 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUsharedconfig_enum {
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE,
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE,
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE};
# 446 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUmemorytype_enum {
CU_MEMORYTYPE_HOST = 1,
CU_MEMORYTYPE_DEVICE,
CU_MEMORYTYPE_ARRAY,
CU_MEMORYTYPE_UNIFIED};
# 456 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUcomputemode_enum {
CU_COMPUTEMODE_DEFAULT,
CU_COMPUTEMODE_EXCLUSIVE,
CU_COMPUTEMODE_PROHIBITED,
CU_COMPUTEMODE_EXCLUSIVE_PROCESS};
# 466 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUjit_option_enum {
# 472 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 485 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 492 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_WALL_TIME,
# 500 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 508 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 516 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 524 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 531 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 538 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 544 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_TARGET,
# 551 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_FALLBACK_STRATEGY};
# 558 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUjit_target_enum {

CU_TARGET_COMPUTE_10,
CU_TARGET_COMPUTE_11,
CU_TARGET_COMPUTE_12,
CU_TARGET_COMPUTE_13,
CU_TARGET_COMPUTE_20,
CU_TARGET_COMPUTE_21,
CU_TARGET_COMPUTE_30};
# 572 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUjit_fallback_enum {

CU_PREFER_PTX,

CU_PREFER_BINARY};
# 583 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
CU_GRAPHICS_REGISTER_FLAGS_NONE,
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY,
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD,
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4,
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8};
# 594 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD};
# 603 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUarray_cubemap_face_enum {
CU_CUBEMAP_FACE_POSITIVE_X,
CU_CUBEMAP_FACE_NEGATIVE_X,
CU_CUBEMAP_FACE_POSITIVE_Y,
CU_CUBEMAP_FACE_NEGATIVE_Y,
CU_CUBEMAP_FACE_POSITIVE_Z,
CU_CUBEMAP_FACE_NEGATIVE_Z};
# 615 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUlimit_enum {
CU_LIMIT_STACK_SIZE,
CU_LIMIT_PRINTF_FIFO_SIZE,
CU_LIMIT_MALLOC_HEAP_SIZE};
# 624 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum cudaError_enum {
# 630 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_SUCCESS,
# 636 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 642 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 648 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,




CUDA_ERROR_DEINITIALIZED,
# 659 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PROFILER_DISABLED,




CUDA_ERROR_PROFILER_NOT_INITIALIZED,




CUDA_ERROR_PROFILER_ALREADY_STARTED,




CUDA_ERROR_PROFILER_ALREADY_STOPPED,




CUDA_ERROR_NO_DEVICE = 100,
# 685 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 692 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 702 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 711 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,




CUDA_ERROR_MAP_FAILED = 205,




CUDA_ERROR_UNMAP_FAILED,
# 727 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,




CUDA_ERROR_ALREADY_MAPPED,
# 740 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,




CUDA_ERROR_ALREADY_ACQUIRED,




CUDA_ERROR_NOT_MAPPED,
# 756 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 762 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 768 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 774 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 781 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_IN_USE,




CUDA_ERROR_INVALID_SOURCE = 300,




CUDA_ERROR_FILE_NOT_FOUND,




CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,




CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,




CUDA_ERROR_OPERATING_SYSTEM,
# 813 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 820 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 829 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 840 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 851 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 862 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 868 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 875 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED,
# 882 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED,
# 888 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708,
# 895 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_CONTEXT_IS_DESTROYED,
# 903 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ASSERT,
# 910 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_TOO_MANY_PEERS,
# 916 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED,
# 922 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED,




CUDA_ERROR_UNKNOWN = 999};
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __time_t;

typedef long __suseconds_t;
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;};
# 63 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
typedef struct timezone *__restrict__ __timezone_ptr_t;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 958 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(void);
# 1013 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t);
# 1043 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int *);
# 1246 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *, int);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2189 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 2870 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 70 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern void *memset(void *, int, size_t);
# 143 "/usr/include/string.h" 3
extern __attribute__((__pure__)) int strcmp(const char *, const char *);
# 269 "/usr/include/stdio.h" 3
extern FILE *fopen(const char *__restrict__, const char *__restrict__);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 103 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((__malloc__)) void *malloc(size_t);
extern void free(void *);
# 544 "/usr/include/stdlib.h" 3
extern __attribute__((__noreturn__)) void exit(int);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 73 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern int gettimeofday(struct timeval *__restrict__, struct timezone *__restrict__);
# 26 "gaussian.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 52 "gaussian.cu"
extern int main(int, char **);
# 128 "gaussian.cu"
extern void _Z21PrintDevicePropertiesv(void);
# 170 "gaussian.cu"
extern void _Z15InitProblemOncePc(char *);
# 201 "gaussian.cu"
extern void _Z10InitPerRunv(void);
# 253 "gaussian.cu"
extern void _Z10ForwardSubv(void);
# 317 "gaussian.cu"
extern void _Z7BackSubv(void);
# 333 "gaussian.cu"
extern void _Z7InitMatPfii(float *, int, int);
# 348 "gaussian.cu"
extern void _Z8PrintMatPfii(float *, int, int);
# 366 "gaussian.cu"
extern void _Z7InitAryPfi(float *, int);
# 379 "gaussian.cu"
extern void _Z8PrintAryPfi(float *, int);
# 387 "gaussian.cu"
extern void _Z14checkCUDAErrorPKc(const char *);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___16_gaussian_cpp1_ii_bd85c056(void) __attribute__((__constructor__));
# 167 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
# 31 "gaussian.cu"
int Size = 0;
float *a = 0;
# 32 "gaussian.cu"
float *b = 0;
# 32 "gaussian.cu"
float *finalVec = 0;
float *m = 0;

FILE *fp = 0;
# 50 "gaussian.cu"
extern unsigned totalKernelTime;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 50 "gaussian.cu"
unsigned totalKernelTime = 0U;
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default"))) = "St9exception";
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default"))) = "St9bad_alloc";
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf( float __x)
{




 int __cuda_local_var_6664_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_6664_7_non_const___m) : "x" (__x));
return __cuda_local_var_6664_7_non_const___m & 8;

}

 __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit( double __x)
{




 int __cuda_local_var_6676_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_6676_7_non_const___m) : "x" (__x));
return __cuda_local_var_6676_7_non_const___m & 128;

}

 __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl( long double __x)
{
 union _ZZ10__signbitlEUt_ __cuda_local_var_6684_56_non_const___u;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
(__cuda_local_var_6684_56_non_const___u.__l) = __x;
return (int)(((((__cuda_local_var_6684_56_non_const___u.__i))[2]) & 32768) != 0);
}
# 52 "gaussian.cu"
int main( int argc,  char **argv)
{
 int __cuda_local_var_17608_9_non_const_verbose;
# 89 "gaussian.cu"
 struct timeval __cuda_local_var_17643_20_non_const_time_start;
# 100 "gaussian.cu"
 struct timeval __cuda_local_var_17654_20_non_const_time_end;

 unsigned __cuda_local_var_17656_18_non_const_time_total;
# 54 "gaussian.cu"
__cuda_local_var_17608_9_non_const_verbose = 1;
if (argc < 2) {
printf(((const char *)"Usage: gaussian matrix.txt [-q]\n\n"));
printf(((const char *)"-q (quiet) suppresses printing the matrix and result values.\n"));
printf(((const char *)"The first line of the file contains the dimension of the matrix, n."));
printf(((const char *)"The second line of the file is a newline.\n"));
printf(((const char *)"The next n lines contain n tab separated values for the matrix."));
printf(((const char *)"The next line of the file is a newline.\n"));
printf(((const char *)"The next line of the file is a 1xn vector with tab separated values.\n"));
printf(((const char *)"The next line of the file is a newline. (optional)\n"));
printf(((const char *)"The final line of the file is the pre-computed solution. (optional)\n"));
printf(((const char *)"Example: matrix4.txt:\n"));
printf(((const char *)"4\n"));
printf(((const char *)"\n"));
printf(((const char *)"-0.6\t-0.5\t0.7\t0.3\n"));
printf(((const char *)"-0.3\t-0.9\t0.3\t0.7\n"));
printf(((const char *)"-0.4\t-0.5\t-0.3\t-0.8\n"));
printf(((const char *)"0.0\t-0.1\t0.2\t0.9\n"));
printf(((const char *)"\n"));
printf(((const char *)"-0.85\t-0.68\t0.24\t-0.53\n"));
printf(((const char *)"\n"));
printf(((const char *)"0.7\t0.0\t-0.4\t-0.5\n"));
exit(0);
}




_Z15InitProblemOncePc((argv[1]));
if (argc > 2) {
if (!(strcmp(((const char *)(argv[2])), ((const char *)"-q")))) { __cuda_local_var_17608_9_non_const_verbose = 0; }
}

_Z10InitPerRunv();


gettimeofday((&__cuda_local_var_17643_20_non_const_time_start), ((struct timezone *)0LL));


m5_work_begin(0UL, 0UL);



_Z10ForwardSubv();



gettimeofday((&__cuda_local_var_17654_20_non_const_time_end), ((struct timezone *)0LL));
__cuda_local_var_17656_18_non_const_time_total = ((unsigned)((((__cuda_local_var_17654_20_non_const_time_end.tv_sec) * 1000000L) + (__cuda_local_var_17654_20_non_const_time_end.tv_usec)) - (((__cuda_local_var_17643_20_non_const_time_start.tv_sec) * 1000000L) + (__cuda_local_var_17643_20_non_const_time_start.tv_usec))));

_Z7BackSubv();


m5_work_end(0UL, 0UL);


if (__cuda_local_var_17608_9_non_const_verbose) {
printf(((const char *)"The final solution is: \n"));
_Z8PrintAryPfi(finalVec, Size);
}
printf(((const char *)"\nTime total (including memory transfers)\t%f sec\n"), (((double)__cuda_local_var_17656_18_non_const_time_total) * (9.999999999999999547e-07)));
printf(((const char *)"Time for CUDA kernels:\t%f sec\n"), (((double)totalKernelTime) * (9.999999999999999547e-07)));




free(((void *)m));
free(((void *)a));
free(((void *)b)); return 0;
}




void _Z21PrintDevicePropertiesv(void) {
 struct cudaDeviceProp __cuda_local_var_17683_17_non_const_deviceProp;
 int __cuda_local_var_17684_6_non_const_nDevCount;
# 130 "gaussian.cu"
__cuda_local_var_17684_6_non_const_nDevCount = 0;

cudaGetDeviceCount((&__cuda_local_var_17684_6_non_const_nDevCount));
printf(((const char *)"Total Device found: %d"), __cuda_local_var_17684_6_non_const_nDevCount); {
 int nDeviceIdx;
# 134 "gaussian.cu"
nDeviceIdx = 0; for (; (nDeviceIdx < __cuda_local_var_17684_6_non_const_nDevCount); ++nDeviceIdx)
{
memset(((void *)(&__cuda_local_var_17683_17_non_const_deviceProp)), 0, 568UL);
if (0 == ((int)(cudaGetDeviceProperties((&__cuda_local_var_17683_17_non_const_deviceProp), nDeviceIdx))))
{
printf(((const char *)"\nDevice Name \t\t - %s "), ((__cuda_local_var_17683_17_non_const_deviceProp.name)));
printf(((const char *)"\n**************************************"));
printf(((const char *)"\nTotal Global Memory\t\t\t - %lu KB"), ((__cuda_local_var_17683_17_non_const_deviceProp.totalGlobalMem) / 1024UL));
printf(((const char *)"\nShared memory available per block \t - %lu KB"), ((__cuda_local_var_17683_17_non_const_deviceProp.sharedMemPerBlock) / 1024UL));
printf(((const char *)"\nNumber of registers per thread block \t - %d"), (__cuda_local_var_17683_17_non_const_deviceProp.regsPerBlock));
printf(((const char *)"\nWarp size in threads \t\t\t - %d"), (__cuda_local_var_17683_17_non_const_deviceProp.warpSize));
printf(((const char *)"\nMemory Pitch \t\t\t\t - %zu bytes"), (__cuda_local_var_17683_17_non_const_deviceProp.memPitch));
printf(((const char *)"\nMaximum threads per block \t\t - %d"), (__cuda_local_var_17683_17_non_const_deviceProp.maxThreadsPerBlock));
printf(((const char *)"\nMaximum Thread Dimension (block) \t - %d %d %d"), (((__cuda_local_var_17683_17_non_const_deviceProp.maxThreadsDim))[0]), (((__cuda_local_var_17683_17_non_const_deviceProp.maxThreadsDim))[1]), (((__cuda_local_var_17683_17_non_const_deviceProp.maxThreadsDim))[2]));
printf(((const char *)"\nMaximum Thread Dimension (grid) \t - %d %d %d"), (((__cuda_local_var_17683_17_non_const_deviceProp.maxGridSize))[0]), (((__cuda_local_var_17683_17_non_const_deviceProp.maxGridSize))[1]), (((__cuda_local_var_17683_17_non_const_deviceProp.maxGridSize))[2]));
printf(((const char *)"\nTotal constant memory \t\t\t - %zu bytes"), (__cuda_local_var_17683_17_non_const_deviceProp.totalConstMem));
printf(((const char *)"\nCUDA ver \t\t\t\t - %d.%d"), (__cuda_local_var_17683_17_non_const_deviceProp.major), (__cuda_local_var_17683_17_non_const_deviceProp.minor));
printf(((const char *)"\nClock rate \t\t\t\t - %d KHz"), (__cuda_local_var_17683_17_non_const_deviceProp.clockRate));
printf(((const char *)"\nTexture Alignment \t\t\t - %zu bytes"), (__cuda_local_var_17683_17_non_const_deviceProp.textureAlignment));
printf(((const char *)"\nDevice Overlap \t\t\t\t - %s"), ((__cuda_local_var_17683_17_non_const_deviceProp.deviceOverlap) ? ((const char *)("Allowed")) : ((const char *)("Not Allowed"))));
printf(((const char *)"\nNumber of Multi processors \t\t - %d\n\n"), (__cuda_local_var_17683_17_non_const_deviceProp.multiProcessorCount));
} else  {

printf(((const char *)"\n%s"), (cudaGetErrorString((cudaGetLastError())))); }
} } 
}
# 170 "gaussian.cu"
void _Z15InitProblemOncePc( char *filename)
{
# 178 "gaussian.cu"
fp = (fopen(((const char *)filename), ((const char *)"r")));

fscanf(fp, ((const char *)"%d"), (&Size));

a = ((float *)(malloc((((unsigned long)(Size * Size)) * 4UL))));

_Z7InitMatPfii(a, Size, Size);


b = ((float *)(malloc((((unsigned long)Size) * 4UL))));

_Z7InitAryPfi(b, Size);



m = ((float *)(malloc((((unsigned long)(Size * Size)) * 4UL)))); 
}
# 201 "gaussian.cu"
void _Z10InitPerRunv(void)
{
 int __cuda_local_var_17748_6_non_const_i;
for (__cuda_local_var_17748_6_non_const_i = 0; (__cuda_local_var_17748_6_non_const_i < (Size * Size)); __cuda_local_var_17748_6_non_const_i++) {
(*(m + __cuda_local_var_17748_6_non_const_i)) = (0.0F); } 
}
# 253 "gaussian.cu"
void _Z10ForwardSubv(void)
{  unsigned __T20;
 unsigned __T21;
 unsigned __T22;
 unsigned __T23;
 unsigned __T24;
 unsigned __T25;
# 255 "gaussian.cu"
 int __cuda_local_var_17792_6_non_const_t;
 float *__cuda_local_var_17793_12_non_const_m_cuda;
# 256 "gaussian.cu"
 float *__cuda_local_var_17793_20_non_const_a_cuda;
# 256 "gaussian.cu"
 float *__cuda_local_var_17793_28_non_const_b_cuda;
# 270 "gaussian.cu"
 int __cuda_local_var_17807_6_non_const_block_size;
# 270 "gaussian.cu"
 int __cuda_local_var_17807_17_non_const_grid_size;
# 277 "gaussian.cu"
 dim3 __cuda_local_var_17814_7_non_const_dimBlock;
 dim3 __cuda_local_var_17815_7_non_const_dimGrid;


 int __cuda_local_var_17818_6_non_const_blockSize2d;
# 281 "gaussian.cu"
 int __cuda_local_var_17818_19_non_const_gridSize2d;



 dim3 __cuda_local_var_17822_7_non_const_dimBlockXY;
 dim3 __cuda_local_var_17823_7_non_const_dimGridXY;


 struct timeval __cuda_local_var_17826_20_non_const_time_start;
# 299 "gaussian.cu"
 struct timeval __cuda_local_var_17836_17_non_const_time_end;
# 259 "gaussian.cu"
cudaMalloc(((void **)(&__cuda_local_var_17793_12_non_const_m_cuda)), (((unsigned long)(Size * Size)) * 4UL));

cudaMalloc(((void **)(&__cuda_local_var_17793_20_non_const_a_cuda)), (((unsigned long)(Size * Size)) * 4UL));

cudaMalloc(((void **)(&__cuda_local_var_17793_28_non_const_b_cuda)), (((unsigned long)Size) * 4UL));


cudaMemcpy(((void *)__cuda_local_var_17793_12_non_const_m_cuda), ((const void *)m), (((unsigned long)(Size * Size)) * 4UL), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_17793_20_non_const_a_cuda), ((const void *)a), (((unsigned long)(Size * Size)) * 4UL), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_17793_28_non_const_b_cuda), ((const void *)b), (((unsigned long)Size) * 4UL), cudaMemcpyHostToDevice);



__cuda_local_var_17807_6_non_const_block_size = 512;
__cuda_local_var_17807_17_non_const_grid_size = ((Size / __cuda_local_var_17807_6_non_const_block_size) + ((!(Size % __cuda_local_var_17807_6_non_const_block_size)) ? 0 : 1));



{ __T20 = ((unsigned)__cuda_local_var_17807_6_non_const_block_size); { (__cuda_local_var_17814_7_non_const_dimBlock.x) = __T20; (__cuda_local_var_17814_7_non_const_dimBlock.y) = 1U; (__cuda_local_var_17814_7_non_const_dimBlock.z) = 1U; } }
{ __T21 = ((unsigned)__cuda_local_var_17807_17_non_const_grid_size); { (__cuda_local_var_17815_7_non_const_dimGrid.x) = __T21; (__cuda_local_var_17815_7_non_const_dimGrid.y) = 1U; (__cuda_local_var_17815_7_non_const_dimGrid.z) = 1U; } }



__cuda_local_var_17818_6_non_const_blockSize2d = 4;
__cuda_local_var_17818_19_non_const_gridSize2d = ((Size / __cuda_local_var_17818_6_non_const_blockSize2d) + ((int)(!((Size % __cuda_local_var_17818_6_non_const_blockSize2d) ? 0 : 1))));

{ __T22 = ((unsigned)__cuda_local_var_17818_6_non_const_blockSize2d); __T23 = ((unsigned)__cuda_local_var_17818_6_non_const_blockSize2d); { (__cuda_local_var_17822_7_non_const_dimBlockXY.x) = __T22; (__cuda_local_var_17822_7_non_const_dimBlockXY.y) = __T23; (__cuda_local_var_17822_7_non_const_dimBlockXY.z) = 1U; } }
{ __T24 = ((unsigned)__cuda_local_var_17818_19_non_const_gridSize2d); __T25 = ((unsigned)__cuda_local_var_17818_19_non_const_gridSize2d); { (__cuda_local_var_17823_7_non_const_dimGridXY.x) = __T24; (__cuda_local_var_17823_7_non_const_dimGridXY.y) = __T25; (__cuda_local_var_17823_7_non_const_dimGridXY.z) = 1U; } }



gettimeofday((&__cuda_local_var_17826_20_non_const_time_start), ((struct timezone *)0LL));
for (__cuda_local_var_17792_6_non_const_t = 0; (__cuda_local_var_17792_6_non_const_t < (Size - 1)); __cuda_local_var_17792_6_non_const_t++) {
(cudaConfigureCall(__cuda_local_var_17815_7_non_const_dimGrid, __cuda_local_var_17814_7_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z4Fan1PfS_ii(__cuda_local_var_17793_12_non_const_m_cuda, __cuda_local_var_17793_20_non_const_a_cuda, Size, __cuda_local_var_17792_6_non_const_t));
cudaThreadSynchronize();
(cudaConfigureCall(__cuda_local_var_17823_7_non_const_dimGridXY, __cuda_local_var_17822_7_non_const_dimBlockXY, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z4Fan2PfS_S_iii(__cuda_local_var_17793_12_non_const_m_cuda, __cuda_local_var_17793_20_non_const_a_cuda, __cuda_local_var_17793_28_non_const_b_cuda, Size, (Size - __cuda_local_var_17792_6_non_const_t), __cuda_local_var_17792_6_non_const_t));
cudaThreadSynchronize();
_Z14checkCUDAErrorPKc(((const char *)"Fan2"));
}


gettimeofday((&__cuda_local_var_17836_17_non_const_time_end), ((struct timezone *)0LL));
totalKernelTime = ((unsigned)((((__cuda_local_var_17836_17_non_const_time_end.tv_sec) * 1000000L) + (__cuda_local_var_17836_17_non_const_time_end.tv_usec)) - (((__cuda_local_var_17826_20_non_const_time_start.tv_sec) * 1000000L) + (__cuda_local_var_17826_20_non_const_time_start.tv_usec))));


cudaMemcpy(((void *)m), ((const void *)__cuda_local_var_17793_12_non_const_m_cuda), (((unsigned long)(Size * Size)) * 4UL), cudaMemcpyDeviceToHost);
cudaMemcpy(((void *)a), ((const void *)__cuda_local_var_17793_20_non_const_a_cuda), (((unsigned long)(Size * Size)) * 4UL), cudaMemcpyDeviceToHost);
cudaMemcpy(((void *)b), ((const void *)__cuda_local_var_17793_28_non_const_b_cuda), (((unsigned long)Size) * 4UL), cudaMemcpyDeviceToHost);
cudaFree(((void *)__cuda_local_var_17793_12_non_const_m_cuda));
cudaFree(((void *)__cuda_local_var_17793_20_non_const_a_cuda));
cudaFree(((void *)__cuda_local_var_17793_28_non_const_b_cuda)); 
}
# 317 "gaussian.cu"
void _Z7BackSubv(void)
{



 int __cuda_local_var_17859_6_non_const_i;
# 322 "gaussian.cu"
 int __cuda_local_var_17859_8_non_const_j;
# 320 "gaussian.cu"
finalVec = ((float *)(malloc((((unsigned long)Size) * 4UL))));


for (__cuda_local_var_17859_6_non_const_i = 0; (__cuda_local_var_17859_6_non_const_i < Size); __cuda_local_var_17859_6_non_const_i++) {
(finalVec[((Size - __cuda_local_var_17859_6_non_const_i) - 1)]) = (b[((Size - __cuda_local_var_17859_6_non_const_i) - 1)]);
for (__cuda_local_var_17859_8_non_const_j = 0; (__cuda_local_var_17859_8_non_const_j < __cuda_local_var_17859_6_non_const_i); __cuda_local_var_17859_8_non_const_j++)
{
(finalVec[((Size - __cuda_local_var_17859_6_non_const_i) - 1)]) -= ((*((a + (Size * ((Size - __cuda_local_var_17859_6_non_const_i) - 1))) + ((Size - __cuda_local_var_17859_8_non_const_j) - 1))) * (finalVec[((Size - __cuda_local_var_17859_8_non_const_j) - 1)]));
}
(finalVec[((Size - __cuda_local_var_17859_6_non_const_i) - 1)]) = ((finalVec[((Size - __cuda_local_var_17859_6_non_const_i) - 1)]) / (*((a + (Size * ((Size - __cuda_local_var_17859_6_non_const_i) - 1))) + ((Size - __cuda_local_var_17859_6_non_const_i) - 1))));
} 
}

void _Z7InitMatPfii( float *ary,  int nrow,  int ncol)
{
 int __cuda_local_var_17872_6_non_const_i;
# 335 "gaussian.cu"
 int __cuda_local_var_17872_9_non_const_j;

for (__cuda_local_var_17872_6_non_const_i = 0; (__cuda_local_var_17872_6_non_const_i < nrow); __cuda_local_var_17872_6_non_const_i++) {
for (__cuda_local_var_17872_9_non_const_j = 0; (__cuda_local_var_17872_9_non_const_j < ncol); __cuda_local_var_17872_9_non_const_j++) {
fscanf(fp, ((const char *)"%f"), ((ary + (Size * __cuda_local_var_17872_6_non_const_i)) + __cuda_local_var_17872_9_non_const_j));
}
} 
}





void _Z8PrintMatPfii( float *ary,  int nrow,  int ncol)
{
 int __cuda_local_var_17887_6_non_const_i;
# 350 "gaussian.cu"
 int __cuda_local_var_17887_9_non_const_j;

for (__cuda_local_var_17887_6_non_const_i = 0; (__cuda_local_var_17887_6_non_const_i < nrow); __cuda_local_var_17887_6_non_const_i++) {
for (__cuda_local_var_17887_9_non_const_j = 0; (__cuda_local_var_17887_9_non_const_j < ncol); __cuda_local_var_17887_9_non_const_j++) {
printf(((const char *)"%8.2f "), ((double)(*((ary + (Size * __cuda_local_var_17887_6_non_const_i)) + __cuda_local_var_17887_9_non_const_j))));
}
printf(((const char *)"\n"));
}
printf(((const char *)"\n")); 
}
# 366 "gaussian.cu"
void _Z7InitAryPfi( float *ary,  int ary_size)
{
 int __cuda_local_var_17905_6_non_const_i;

for (__cuda_local_var_17905_6_non_const_i = 0; (__cuda_local_var_17905_6_non_const_i < ary_size); __cuda_local_var_17905_6_non_const_i++) {
fscanf(fp, ((const char *)"%f"), (ary + __cuda_local_var_17905_6_non_const_i));
} 
}





void _Z8PrintAryPfi( float *ary,  int ary_size)
{
 int __cuda_local_var_17918_6_non_const_i;
for (__cuda_local_var_17918_6_non_const_i = 0; (__cuda_local_var_17918_6_non_const_i < ary_size); __cuda_local_var_17918_6_non_const_i++) {
printf(((const char *)"%.2f "), ((double)(ary[__cuda_local_var_17918_6_non_const_i])));
}
printf(((const char *)"\n\n")); 
}
void _Z14checkCUDAErrorPKc( const char *msg)
{
 cudaError_t __cuda_local_var_17926_17_non_const_err;
# 389 "gaussian.cu"
__cuda_local_var_17926_17_non_const_err = (cudaGetLastError());
if (0 != ((int)__cuda_local_var_17926_17_non_const_err))
{
fprintf(stderr, ((const char *)"Cuda error: %s: %s.\n"), msg, (cudaGetErrorString(__cuda_local_var_17926_17_non_const_err)));

exit(1);
} 
}
static void __sti___16_gaussian_cpp1_ii_bd85c056(void) {   }

#include "gaussian.cudafe1.stub.c"
