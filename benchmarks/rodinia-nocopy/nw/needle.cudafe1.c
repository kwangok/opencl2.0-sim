# 1 "needle.cu"
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
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone;
# 93 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {


ITIMER_REAL,


ITIMER_VIRTUAL,



ITIMER_PROF};
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
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 239 "/usr/include/stdio.h" 3
extern int fflush(FILE *);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 184 "/usr/include/stdlib.h" 3
extern long strtol(const char *__restrict__, char **__restrict__, int);
# 380 "/usr/include/stdlib.h" 3
extern int rand(void);

extern void srand(unsigned);
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
# 9 "./needle_kernel.cu"
extern int _Z7maximumiii(int, int, int);
# 17 "needle.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 54 "needle.cu"
extern double _Z7gettimev(void);
# 64 "needle.cu"
extern int main(int, char **);
# 71 "needle.cu"
extern void _Z5usageiPPc(int, char **);
# 79 "needle.cu"
extern void _Z7runTestiPPc(int, char **);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___14_needle_cpp1_ii_734a7458(void) __attribute__((__constructor__));
# 166 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 27 "needle.cu"
extern int blosum62[24][24];
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 27 "needle.cu"
int blosum62[24][24] = {{4,(-1),(-2),(-2),0,(-1),(-1),0,(-2),(-1),(-1),(-1),(-1),(-2),(-1),1,0,(-3),(-2),0,(-2),(-1),0,(-4)},{(-1),5,0,(-2),(-3),1,0,(-2),0,(-3),(-2),2,(-1),(-3),(-2),(-1),(-1),(-3),(-2),(-3),(-1),0,(-1),(-4)},{(-2),0,6,1,(-3),0,0,0,1,(-3),(-3),0,(-2),(-3),(-2),1,0,(-4),(-2),(-3),3,0,(-1),(-4)},{(-2),(-2),1,6,(-3),0,2,(-1),(-1),(-3),(-4),(-1),(-3),(-3),(-1),0,(-1),(-4),(-3),(-3),4,1,(-1),(-4)},{0,(-3),(-3),(-3),9,(-3),(-4),(-3),(-3),(-1),(-1),(-3),(-1),(-2),(-3),(-1),(-1),(-2),(-2),(-1),(-3),(-3),(-2),(-4)},{(-1),1,0,0,(-3),5,2,(-2),0,(-3),(-2),1,0,(-3),(-1),0,(-1),(-2),(-1),(-2),0,3,(-1),(-4)},{(-1),0,0,2,(-4),2,5,(-2),0,(-3),(-3),1,(-2),(-3),(-1),0,(-1),(-3),(-2),(-2),1,4,(-1),(-4)},{0,(-2),0,(-1),(-3),(-2),(-2),6,(-2),(-4),(-4),(-2),(-3),(-3),(-2),0,(-2),(-2),(-3),(-3),(-1),(-2),(-1),(-4)},{(-2),0,1,(-1),(-3),0,0,(-2),8,(-3),(-3),(-1),(-2),(-1),(-2),(-1),(-2),(-2),2,(-3),0,0,(-1),(-4)},{(-1),(-3),(-3),(-3),(-1),(-3),(-3),(-4),(-3),4,2,(-3),1,0,(-3),(-2),(-1),(-3),(-1),3,(-3),(-3),(-1),(-4)},{(-1),(-2),(-3),(-4),(-1),(-2),(-3),(-4),(-3),2,4,(-2),2,0,(-3),(-2),(-1),(-2),(-1),1,(-4),(-3),(-1),(-4)},{(-1),2,0,(-1),(-3),1,1,(-2),(-1),(-3),(-2),5,(-1),(-3),(-1),0,(-1),(-3),(-2),(-2),0,1,(-1),(-4)},{(-1),(-1),(-2),(-3),(-1),0,(-2),(-3),(-2),1,2,(-1),5,0,(-2),(-1),(-1),(-1),(-1),1,(-3),(-1),(-1),(-4)},{(-2),(-3),(-3),(-3),(-2),(-3),(-3),(-3),(-1),0,0,(-3),0,6,(-4),(-2),(-2),1,3,(-1),(-3),(-3),(-1),(-4)},{(-1),(-2),(-2),(-1),(-3),(-1),(-1),(-2),(-2),(-3),(-3),(-1),(-2),(-4),7,(-1),(-1),(-4),(-3),(-2),(-2),(-1),(-2),(-4)},{1,(-1),1,0,(-1),0,0,0,(-1),(-2),(-2),0,(-1),(-2),(-1),4,1,(-3),(-2),(-2),0,0,0,(-4)},{0,(-1),0,(-1),(-1),(-1),(-1),(-2),(-2),(-1),(-1),(-1),(-1),(-2),(-1),1,5,(-2),(-2),0,(-1),(-1),0,(-4)},{(-3),(-3),(-4),(-4),(-2),(-2),(-3),(-2),(-2),(-3),(-2),(-3),(-1),1,(-4),(-3),(-2),11,2,(-3),(-4),(-3),(-2),(-4)},{(-2),(-2),(-2),(-3),(-2),(-1),(-2),(-3),2,(-1),(-1),(-2),(-1),3,(-3),(-2),(-2),2,7,(-1),(-3),(-2),(-1),(-4)},{0,(-3),(-3),(-3),(-1),(-2),(-2),(-3),(-3),3,1,(-2),1,(-1),(-2),(-2),0,(-3),(-1),4,(-3),(-2),(-1),(-4)},{(-2),(-1),3,4,(-3),0,1,(-1),0,(-3),(-4),0,(-3),(-3),(-2),0,(-1),(-4),(-3),(-3),4,1,(-1),(-4)},{(-1),0,0,1,(-3),3,4,(-2),0,(-3),(-3),1,(-1),(-3),(-1),0,(-1),(-3),(-2),(-2),1,4,(-1),(-4)},{0,(-1),(-1),(-1),(-2),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-2),0,0,(-2),(-1),(-1),(-1),(-1),(-1),(-4)},{(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),(-4),1}};
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
# 9 "./needle_kernel.cu"
int _Z7maximumiii( int a, 
int b, 
int c) {

 int __cuda_local_var_17543_5_non_const_k;
if (a <= b) {
__cuda_local_var_17543_5_non_const_k = b; } else  {

__cuda_local_var_17543_5_non_const_k = a; }

if (__cuda_local_var_17543_5_non_const_k <= c) {
return c; } else  {

return __cuda_local_var_17543_5_non_const_k; }

}
# 54 "needle.cu"
double _Z7gettimev(void) {
 struct timeval __cuda_local_var_17817_18_non_const_t;
gettimeofday((&__cuda_local_var_17817_18_non_const_t), ((struct timezone *)0LL));
return ((double)(__cuda_local_var_17817_18_non_const_t.tv_sec)) + (((double)(__cuda_local_var_17817_18_non_const_t.tv_usec)) * (9.999999999999999547e-07));
}





int main( int argc,  char **argv)
{
_Z7runTestiPPc(argc, argv);

return 0;
}

void _Z5usageiPPc( int argc,  char **argv)
{
fprintf(stderr, ((const char *)"Usage: %s <max_rows/max_cols> <penalty> \n"), (argv[0]));
fprintf(stderr, ((const char *)"\t<dimension>  - x and y dimensions\n"));
fprintf(stderr, ((const char *)"\t<penalty> - penalty(positive integer)\n"));
exit(1); 
}

void _Z7runTestiPPc( int argc,  char **argv)
{  const char *__T20;
 const char *__T21;
 const char *__T22;
 const char *__T23;
# 81 "needle.cu"
 int __cuda_local_var_17843_9_non_const_max_rows;
# 81 "needle.cu"
 int __cuda_local_var_17843_19_non_const_max_cols;
# 81 "needle.cu"
 int __cuda_local_var_17843_29_non_const_penalty;
 int *__cuda_local_var_17844_10_non_const_input_itemsets;
# 82 "needle.cu"
 int *__cuda_local_var_17844_27_non_const_output_itemsets;
# 82 "needle.cu"
 int *__cuda_local_var_17844_45_non_const_referrence;
# 159 "needle.cu"
 dim3 __cuda_local_var_17913_10_non_const_dimGrid;
 dim3 __cuda_local_var_17914_7_non_const_dimBlock;
 int __cuda_local_var_17915_6_non_const_block_width;
# 197 "needle.cu"
 FILE *__cuda_local_var_17951_8_non_const_fpo;
# 89 "needle.cu"
if (argc == 3)
{
__cuda_local_var_17843_9_non_const_max_rows = ((__T20 = ((const char *)(argv[1]))) , ((int)(strtol(__T20, ((char **)0LL), 10))));
__cuda_local_var_17843_19_non_const_max_cols = ((__T21 = ((const char *)(argv[1]))) , ((int)(strtol(__T21, ((char **)0LL), 10))));
__cuda_local_var_17843_29_non_const_penalty = ((__T22 = ((const char *)(argv[2]))) , ((int)(strtol(__T22, ((char **)0LL), 10))));
}
else  {
_Z5usageiPPc(argc, argv);
}

if ((((__T23 = ((const char *)(argv[1]))) , ((int)(strtol(__T23, ((char **)0LL), 10)))) % 16) != 0) {
fprintf(stderr, ((const char *)"The dimension values must be a multiple of 16\n"));
exit(1);
}


__cuda_local_var_17843_9_non_const_max_rows = (__cuda_local_var_17843_9_non_const_max_rows + 1);
__cuda_local_var_17843_19_non_const_max_cols = (__cuda_local_var_17843_19_non_const_max_cols + 1);
__cuda_local_var_17844_45_non_const_referrence = ((int *)(malloc((((unsigned long)(__cuda_local_var_17843_9_non_const_max_rows * __cuda_local_var_17843_19_non_const_max_cols)) * 4UL))));
__cuda_local_var_17844_10_non_const_input_itemsets = ((int *)(malloc((((unsigned long)(__cuda_local_var_17843_9_non_const_max_rows * __cuda_local_var_17843_19_non_const_max_cols)) * 4UL))));
__cuda_local_var_17844_27_non_const_output_itemsets = ((int *)(malloc((((unsigned long)(__cuda_local_var_17843_9_non_const_max_rows * __cuda_local_var_17843_19_non_const_max_cols)) * 4UL))));


if (!(__cuda_local_var_17844_10_non_const_input_itemsets)) {
fprintf(stderr, ((const char *)"error: can not allocate memory")); }

srand(7U); {


 int i;
# 118 "needle.cu"
i = 0; for (; (i < __cuda_local_var_17843_19_non_const_max_cols); i++) { {
 int j;
# 119 "needle.cu"
j = 0; for (; (j < __cuda_local_var_17843_9_non_const_max_rows); j++) {
(__cuda_local_var_17844_10_non_const_input_itemsets[((i * __cuda_local_var_17843_19_non_const_max_cols) + j)]) = 0;
} }
} }

printf(((const char *)"Start Needleman-Wunsch\n")); {

 int i;
# 126 "needle.cu"
i = 1; for (; (i < __cuda_local_var_17843_9_non_const_max_rows); i++) {
(__cuda_local_var_17844_10_non_const_input_itemsets[(i * __cuda_local_var_17843_19_non_const_max_cols)]) = (((rand()) % 10) + 1);
} } {
 int j;
# 129 "needle.cu"
j = 1; for (; (j < __cuda_local_var_17843_19_non_const_max_cols); j++) {
(__cuda_local_var_17844_10_non_const_input_itemsets[j]) = (((rand()) % 10) + 1);
} } {


 int i;
# 134 "needle.cu"
i = 1; for (; (i < __cuda_local_var_17843_19_non_const_max_cols); i++) { {
 int j;
# 135 "needle.cu"
j = 1; for (; (j < __cuda_local_var_17843_9_non_const_max_rows); j++) {
(__cuda_local_var_17844_45_non_const_referrence[((i * __cuda_local_var_17843_19_non_const_max_cols) + j)]) = ((((blosum62)[(__cuda_local_var_17844_10_non_const_input_itemsets[(i * __cuda_local_var_17843_19_non_const_max_cols)])]))[(__cuda_local_var_17844_10_non_const_input_itemsets[j])]);
} }
} } {

 int i;
# 140 "needle.cu"
i = 1; for (; (i < __cuda_local_var_17843_9_non_const_max_rows); i++) {
(__cuda_local_var_17844_10_non_const_input_itemsets[(i * __cuda_local_var_17843_19_non_const_max_cols)]) = ((-i) * __cuda_local_var_17843_29_non_const_penalty); } } {
 int j;
# 142 "needle.cu"
j = 1; for (; (j < __cuda_local_var_17843_19_non_const_max_cols); j++) {
(__cuda_local_var_17844_10_non_const_input_itemsets[j]) = ((-j) * __cuda_local_var_17843_29_non_const_penalty); } }
# 153 "needle.cu"
m5_work_begin(0UL, 0UL);
# 159 "needle.cu"
{ (__cuda_local_var_17913_10_non_const_dimGrid.x) = 1U; (__cuda_local_var_17913_10_non_const_dimGrid.y) = 1U; (__cuda_local_var_17913_10_non_const_dimGrid.z) = 1U; }
{ (__cuda_local_var_17914_7_non_const_dimBlock.x) = 16U; (__cuda_local_var_17914_7_non_const_dimBlock.y) = 1U; (__cuda_local_var_17914_7_non_const_dimBlock.z) = 1U; }
__cuda_local_var_17915_6_non_const_block_width = ((__cuda_local_var_17843_19_non_const_max_cols - 1) / 16);

printf(((const char *)"Processing top-left matrix\n")); {

 int i;
# 165 "needle.cu"
i = 1; for (; (i <= __cuda_local_var_17915_6_non_const_block_width); i++) {
(__cuda_local_var_17913_10_non_const_dimGrid.x) = ((unsigned)i);
(__cuda_local_var_17913_10_non_const_dimGrid.y) = 1U;
(cudaConfigureCall(__cuda_local_var_17913_10_non_const_dimGrid, __cuda_local_var_17914_7_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z20needle_cuda_shared_1PiS_S_iiii(__cuda_local_var_17844_45_non_const_referrence, __cuda_local_var_17844_10_non_const_input_itemsets, __cuda_local_var_17844_27_non_const_output_itemsets, __cuda_local_var_17843_19_non_const_max_cols, __cuda_local_var_17843_29_non_const_penalty, i, __cuda_local_var_17915_6_non_const_block_width));

cudaThreadSynchronize();
} }
printf(((const char *)"Processing bottom-right matrix\n")); {

 int i;
# 174 "needle.cu"
i = (__cuda_local_var_17915_6_non_const_block_width - 1); for (; (i >= 1); i--) {
(__cuda_local_var_17913_10_non_const_dimGrid.x) = ((unsigned)i);
(__cuda_local_var_17913_10_non_const_dimGrid.y) = 1U;
(cudaConfigureCall(__cuda_local_var_17913_10_non_const_dimGrid, __cuda_local_var_17914_7_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z20needle_cuda_shared_2PiS_S_iiii(__cuda_local_var_17844_45_non_const_referrence, __cuda_local_var_17844_10_non_const_input_itemsets, __cuda_local_var_17844_27_non_const_output_itemsets, __cuda_local_var_17843_19_non_const_max_cols, __cuda_local_var_17843_29_non_const_penalty, i, __cuda_local_var_17915_6_non_const_block_width));

cudaThreadSynchronize();
} }



__cuda_local_var_17844_27_non_const_output_itemsets = __cuda_local_var_17844_10_non_const_input_itemsets;


m5_work_end(0UL, 0UL);
# 194 "needle.cu"
m5_work_begin(1UL, 0UL);


__cuda_local_var_17951_8_non_const_fpo = stdout;
fprintf(__cuda_local_var_17951_8_non_const_fpo, ((const char *)"print traceback value GPU:\n")); {

 int i;
# 200 "needle.cu"
 int j;
# 200 "needle.cu"
i = (__cuda_local_var_17843_9_non_const_max_rows - 2); j = (__cuda_local_var_17843_9_non_const_max_rows - 2); for (; (((char)(i >= 0)) , (j >= 0)); ) { {
 int __cuda_local_var_17955_7_non_const_nw;
# 201 "needle.cu"
 int __cuda_local_var_17955_11_non_const_n;
# 201 "needle.cu"
 int __cuda_local_var_17955_14_non_const_w;
# 201 "needle.cu"
 int __cuda_local_var_17955_17_non_const_traceback;
# 223 "needle.cu"
 int __cuda_local_var_17977_7_non_const_new_nw;
# 223 "needle.cu"
 int __cuda_local_var_17977_15_non_const_new_w;
# 223 "needle.cu"
 int __cuda_local_var_17977_22_non_const_new_n;
# 202 "needle.cu"
if ((i == (__cuda_local_var_17843_9_non_const_max_rows - 2)) && (j == (__cuda_local_var_17843_9_non_const_max_rows - 2))) {
fprintf(__cuda_local_var_17951_8_non_const_fpo, ((const char *)"%d "), (__cuda_local_var_17844_27_non_const_output_itemsets[((i * __cuda_local_var_17843_19_non_const_max_cols) + j)])); }
if ((i == 0) && (j == 0)) {
goto __T24; }
if ((i > 0) && (j > 0)) {
__cuda_local_var_17955_7_non_const_nw = (__cuda_local_var_17844_27_non_const_output_itemsets[((((i - 1) * __cuda_local_var_17843_19_non_const_max_cols) + j) - 1)]);
__cuda_local_var_17955_14_non_const_w = (__cuda_local_var_17844_27_non_const_output_itemsets[(((i * __cuda_local_var_17843_19_non_const_max_cols) + j) - 1)]);
__cuda_local_var_17955_11_non_const_n = (__cuda_local_var_17844_27_non_const_output_itemsets[(((i - 1) * __cuda_local_var_17843_19_non_const_max_cols) + j)]);
} else  {
if (i == 0) {
__cuda_local_var_17955_7_non_const_nw = (__cuda_local_var_17955_11_non_const_n = (-999));
__cuda_local_var_17955_14_non_const_w = (__cuda_local_var_17844_27_non_const_output_itemsets[(((i * __cuda_local_var_17843_19_non_const_max_cols) + j) - 1)]);
} else  {
if (j == 0) {
__cuda_local_var_17955_7_non_const_nw = (__cuda_local_var_17955_14_non_const_w = (-999));
__cuda_local_var_17955_11_non_const_n = (__cuda_local_var_17844_27_non_const_output_itemsets[(((i - 1) * __cuda_local_var_17843_19_non_const_max_cols) + j)]);
}
else  {
} } }



__cuda_local_var_17977_7_non_const_new_nw = (__cuda_local_var_17955_7_non_const_nw + (__cuda_local_var_17844_45_non_const_referrence[((i * __cuda_local_var_17843_19_non_const_max_cols) + j)]));
__cuda_local_var_17977_15_non_const_new_w = (__cuda_local_var_17955_14_non_const_w - __cuda_local_var_17843_29_non_const_penalty);
__cuda_local_var_17977_22_non_const_new_n = (__cuda_local_var_17955_11_non_const_n - __cuda_local_var_17843_29_non_const_penalty);

__cuda_local_var_17955_17_non_const_traceback = (_Z7maximumiii(__cuda_local_var_17977_7_non_const_new_nw, __cuda_local_var_17977_15_non_const_new_w, __cuda_local_var_17977_22_non_const_new_n));
if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17977_7_non_const_new_nw) {
__cuda_local_var_17955_17_non_const_traceback = __cuda_local_var_17955_7_non_const_nw; }
if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17977_15_non_const_new_w) {
__cuda_local_var_17955_17_non_const_traceback = __cuda_local_var_17955_14_non_const_w; }
if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17977_22_non_const_new_n) {
__cuda_local_var_17955_17_non_const_traceback = __cuda_local_var_17955_11_non_const_n; }

fprintf(__cuda_local_var_17951_8_non_const_fpo, ((const char *)"%d "), __cuda_local_var_17955_17_non_const_traceback);

if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17955_7_non_const_nw)
{ i--; j--; goto __T25; } else  {

if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17955_14_non_const_w)
{ j--; goto __T25; } else  {

if (__cuda_local_var_17955_17_non_const_traceback == __cuda_local_var_17955_11_non_const_n)
{ i--; goto __T25; } else  {


; } } }
} __T25:; } } __T24:;
fprintf(__cuda_local_var_17951_8_non_const_fpo, ((const char *)"\n"));
fflush(__cuda_local_var_17951_8_non_const_fpo);



m5_work_end(1UL, 0UL);
# 264 "needle.cu"
free(((void *)__cuda_local_var_17844_45_non_const_referrence));
free(((void *)__cuda_local_var_17844_10_non_const_input_itemsets)); 


}
static void __sti___14_needle_cpp1_ii_734a7458(void) {   }

#include "needle.cudafe1.stub.c"
