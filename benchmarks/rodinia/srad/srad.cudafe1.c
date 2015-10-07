# 1 "srad.cu"
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
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2189 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 2870 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 165 "/usr/include/stdlib.h" 3
extern double strtod(const char *__restrict__, char **__restrict__);
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
# 18 "srad.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);





extern void _Z5usageiPPc(int, char **);
# 43 "srad.cu"
extern int main(int, char **);
# 52 "srad.cu"
extern void _Z7runTestiPPc(int, char **);
# 291 "srad.cu"
extern void _Z13random_matrixPfii(float *, int, int);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___12_srad_cpp1_ii_73102f0c(void) __attribute__((__constructor__));
# 167 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
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
# 25 "srad.cu"
void _Z5usageiPPc( int argc,  char **argv)
{
fprintf(stderr, ((const char *)"Usage: %s <rows> <cols> <y1> <y2> <x1> <x2> <lamda> <no. of iter>\n"), (argv[0]));
fprintf(stderr, ((const char *)"\t<rows>   - number of rows\n"));
fprintf(stderr, ((const char *)"\t<cols>    - number of cols\n"));
fprintf(stderr, ((const char *)"\t<y1> \t - y1 value of the speckle\n"));
fprintf(stderr, ((const char *)"\t<y2>      - y2 value of the speckle\n"));
fprintf(stderr, ((const char *)"\t<x1>       - x1 value of the speckle\n"));
fprintf(stderr, ((const char *)"\t<x2>       - x2 value of the speckle\n"));
fprintf(stderr, ((const char *)"\t<lamda>   - lambda (0,1)\n"));
fprintf(stderr, ((const char *)"\t<no. of iter>   - number of iterations\n"));

exit(1); 
}




int main( int argc,  char **argv)
{
_Z7runTestiPPc(argc, argv);

return 0;
}



void _Z7runTestiPPc( int argc,  char **argv)
{  const char *__T20;
 const char *__T21;
 const char *__T22;
 const char *__T23;
 const char *__T24;
 const char *__T25;
 const char *__T26;
 const char *__T27;
# 54 "srad.cu"
 int __cuda_local_var_17795_9_non_const_rows;
# 54 "srad.cu"
 int __cuda_local_var_17795_15_non_const_cols;
# 54 "srad.cu"
 int __cuda_local_var_17795_21_non_const_size_I;
# 54 "srad.cu"
 int __cuda_local_var_17795_29_non_const_size_R;
# 54 "srad.cu"
 int __cuda_local_var_17795_37_non_const_niter;
# 54 "srad.cu"
 int __cuda_local_var_17795_49_non_const_iter;
 float *__cuda_local_var_17796_12_non_const_I;
# 55 "srad.cu"
 float *__cuda_local_var_17796_16_non_const_J;
# 55 "srad.cu"
 float __cuda_local_var_17796_19_non_const_lambda;
# 55 "srad.cu"
 float __cuda_local_var_17796_27_non_const_q0sqr;
# 55 "srad.cu"
 float __cuda_local_var_17796_34_non_const_sum;
# 55 "srad.cu"
 float __cuda_local_var_17796_39_non_const_sum2;
# 55 "srad.cu"
 float __cuda_local_var_17796_45_non_const_tmp;
# 55 "srad.cu"
 float __cuda_local_var_17796_50_non_const_meanROI;
# 55 "srad.cu"
 float __cuda_local_var_17796_58_non_const_varROI;
# 66 "srad.cu"
 float *__cuda_local_var_17798_9_non_const_J_cuda;
 float *__cuda_local_var_17799_12_non_const_C_cuda;
 float *__cuda_local_var_17800_9_non_const_E_C;
# 68 "srad.cu"
 float *__cuda_local_var_17800_15_non_const_W_C;
# 68 "srad.cu"
 float *__cuda_local_var_17800_21_non_const_N_C;
# 68 "srad.cu"
 float *__cuda_local_var_17800_27_non_const_S_C;



 unsigned __cuda_local_var_17804_15_non_const_r1;
# 72 "srad.cu"
 unsigned __cuda_local_var_17804_19_non_const_r2;
# 72 "srad.cu"
 unsigned __cuda_local_var_17804_23_non_const_c1;
# 72 "srad.cu"
 unsigned __cuda_local_var_17804_27_non_const_c2;
 float *__cuda_local_var_17805_9_non_const_c;
# 54 "srad.cu"
__cuda_local_var_17795_37_non_const_niter = 10;
# 77 "srad.cu"
if (argc == 9)
{
__cuda_local_var_17795_9_non_const_rows = ((__T20 = ((const char *)(argv[1]))) , ((int)(strtol(__T20, ((char **)0LL), 10))));
__cuda_local_var_17795_15_non_const_cols = ((__T21 = ((const char *)(argv[2]))) , ((int)(strtol(__T21, ((char **)0LL), 10))));
if (((__cuda_local_var_17795_9_non_const_rows % 16) != 0) || ((__cuda_local_var_17795_15_non_const_cols % 16) != 0)) {
fprintf(stderr, ((const char *)"rows and cols must be multiples of 16\n"));
exit(1);
}
__cuda_local_var_17804_15_non_const_r1 = ((unsigned)((__T22 = ((const char *)(argv[3]))) , ((int)(strtol(__T22, ((char **)0LL), 10)))));
__cuda_local_var_17804_19_non_const_r2 = ((unsigned)((__T23 = ((const char *)(argv[4]))) , ((int)(strtol(__T23, ((char **)0LL), 10)))));
__cuda_local_var_17804_23_non_const_c1 = ((unsigned)((__T24 = ((const char *)(argv[5]))) , ((int)(strtol(__T24, ((char **)0LL), 10)))));
__cuda_local_var_17804_27_non_const_c2 = ((unsigned)((__T25 = ((const char *)(argv[6]))) , ((int)(strtol(__T25, ((char **)0LL), 10)))));
__cuda_local_var_17796_19_non_const_lambda = ((float)((__T26 = ((const char *)(argv[7]))) , (strtod(__T26, ((char **)0LL)))));
__cuda_local_var_17795_37_non_const_niter = ((__T27 = ((const char *)(argv[8]))) , ((int)(strtol(__T27, ((char **)0LL), 10))));

}
else  {
_Z5usageiPPc(argc, argv);
}



__cuda_local_var_17795_21_non_const_size_I = (__cuda_local_var_17795_15_non_const_cols * __cuda_local_var_17795_9_non_const_rows);
__cuda_local_var_17795_29_non_const_size_R = ((int)(((__cuda_local_var_17804_19_non_const_r2 - __cuda_local_var_17804_15_non_const_r1) + 1U) * ((__cuda_local_var_17804_27_non_const_c2 - __cuda_local_var_17804_23_non_const_c1) + 1U)));

__cuda_local_var_17796_12_non_const_I = ((float *)(malloc((((unsigned long)__cuda_local_var_17795_21_non_const_size_I) * 4UL))));
__cuda_local_var_17796_16_non_const_J = ((float *)(malloc((((unsigned long)__cuda_local_var_17795_21_non_const_size_I) * 4UL))));
__cuda_local_var_17805_9_non_const_c = ((float *)(malloc((4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)))));
# 139 "srad.cu"
cudaMalloc(((void **)(&__cuda_local_var_17798_9_non_const_J_cuda)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));
cudaMalloc(((void **)(&__cuda_local_var_17799_12_non_const_C_cuda)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));
cudaMalloc(((void **)(&__cuda_local_var_17800_9_non_const_E_C)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));
cudaMalloc(((void **)(&__cuda_local_var_17800_15_non_const_W_C)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));
cudaMalloc(((void **)(&__cuda_local_var_17800_27_non_const_S_C)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));
cudaMalloc(((void **)(&__cuda_local_var_17800_21_non_const_N_C)), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)));




printf(((const char *)"Randomizing the input matrix\n"));

_Z13random_matrixPfii(__cuda_local_var_17796_12_non_const_I, __cuda_local_var_17795_9_non_const_rows, __cuda_local_var_17795_15_non_const_cols); {

 int k;
# 153 "srad.cu"
k = 0; for (; (k < __cuda_local_var_17795_21_non_const_size_I); k++) {  float __T28;
(__cuda_local_var_17796_16_non_const_J[k]) = ((float)((__T28 = (__cuda_local_var_17796_12_non_const_I[k])) , (__builtin_expf(__T28))));
} }
printf(((const char *)"Start the SRAD main loop\n"));

m5_work_begin(0UL, 0UL);

for (__cuda_local_var_17795_49_non_const_iter = 0; (__cuda_local_var_17795_49_non_const_iter < __cuda_local_var_17795_37_non_const_niter); __cuda_local_var_17795_49_non_const_iter++) {  unsigned __T29;
 unsigned __T210;
# 233 "srad.cu"
 int __cuda_local_var_17872_6_non_const_block_x;
 int __cuda_local_var_17873_9_non_const_block_y;

 dim3 __cuda_local_var_17875_10_non_const_dimBlock;
 dim3 __cuda_local_var_17876_7_non_const_dimGrid;
# 161 "srad.cu"
__cuda_local_var_17796_34_non_const_sum = (0.0F); __cuda_local_var_17796_39_non_const_sum2 = (0.0F); {
 int i;
# 162 "srad.cu"
i = ((int)__cuda_local_var_17804_15_non_const_r1); for (; (((unsigned)i) <= __cuda_local_var_17804_19_non_const_r2); i++) { {
 int j;
# 163 "srad.cu"
j = ((int)__cuda_local_var_17804_23_non_const_c1); for (; (((unsigned)j) <= __cuda_local_var_17804_27_non_const_c2); j++) {
__cuda_local_var_17796_45_non_const_tmp = (__cuda_local_var_17796_16_non_const_J[((i * __cuda_local_var_17795_15_non_const_cols) + j)]);
__cuda_local_var_17796_34_non_const_sum += __cuda_local_var_17796_45_non_const_tmp;
__cuda_local_var_17796_39_non_const_sum2 += (__cuda_local_var_17796_45_non_const_tmp * __cuda_local_var_17796_45_non_const_tmp);
} }
} }
__cuda_local_var_17796_50_non_const_meanROI = (__cuda_local_var_17796_34_non_const_sum / ((float)__cuda_local_var_17795_29_non_const_size_R));
__cuda_local_var_17796_58_non_const_varROI = ((__cuda_local_var_17796_39_non_const_sum2 / ((float)__cuda_local_var_17795_29_non_const_size_R)) - (__cuda_local_var_17796_50_non_const_meanROI * __cuda_local_var_17796_50_non_const_meanROI));
__cuda_local_var_17796_27_non_const_q0sqr = (__cuda_local_var_17796_58_non_const_varROI / (__cuda_local_var_17796_50_non_const_meanROI * __cuda_local_var_17796_50_non_const_meanROI));
# 233 "srad.cu"
__cuda_local_var_17872_6_non_const_block_x = (__cuda_local_var_17795_15_non_const_cols / 16);
__cuda_local_var_17873_9_non_const_block_y = (__cuda_local_var_17795_9_non_const_rows / 16);

{ (__cuda_local_var_17875_10_non_const_dimBlock.x) = 16U; (__cuda_local_var_17875_10_non_const_dimBlock.y) = 16U; (__cuda_local_var_17875_10_non_const_dimBlock.z) = 1U; }
{ __T29 = ((unsigned)__cuda_local_var_17872_6_non_const_block_x); __T210 = ((unsigned)__cuda_local_var_17873_9_non_const_block_y); { (__cuda_local_var_17876_7_non_const_dimGrid.x) = __T29; (__cuda_local_var_17876_7_non_const_dimGrid.y) = __T210; (__cuda_local_var_17876_7_non_const_dimGrid.z) = 1U; } }



cudaMemcpy(((void *)__cuda_local_var_17798_9_non_const_J_cuda), ((const void *)__cuda_local_var_17796_16_non_const_J), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)), cudaMemcpyHostToDevice);


(cudaConfigureCall(__cuda_local_var_17876_7_non_const_dimGrid, __cuda_local_var_17875_10_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z11srad_cuda_1PfS_S_S_S_S_iif(__cuda_local_var_17800_9_non_const_E_C, __cuda_local_var_17800_15_non_const_W_C, __cuda_local_var_17800_21_non_const_N_C, __cuda_local_var_17800_27_non_const_S_C, __cuda_local_var_17798_9_non_const_J_cuda, __cuda_local_var_17799_12_non_const_C_cuda, __cuda_local_var_17795_15_non_const_cols, __cuda_local_var_17795_9_non_const_rows, __cuda_local_var_17796_27_non_const_q0sqr));
(cudaConfigureCall(__cuda_local_var_17876_7_non_const_dimGrid, __cuda_local_var_17875_10_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z11srad_cuda_2PfS_S_S_S_S_iiff(__cuda_local_var_17800_9_non_const_E_C, __cuda_local_var_17800_15_non_const_W_C, __cuda_local_var_17800_21_non_const_N_C, __cuda_local_var_17800_27_non_const_S_C, __cuda_local_var_17798_9_non_const_J_cuda, __cuda_local_var_17799_12_non_const_C_cuda, __cuda_local_var_17795_15_non_const_cols, __cuda_local_var_17795_9_non_const_rows, __cuda_local_var_17796_19_non_const_lambda, __cuda_local_var_17796_27_non_const_q0sqr));


cudaMemcpy(((void *)__cuda_local_var_17796_16_non_const_J), ((const void *)__cuda_local_var_17798_9_non_const_J_cuda), (4UL * ((unsigned long)__cuda_local_var_17795_21_non_const_size_I)), cudaMemcpyDeviceToHost);


}


m5_work_end(0UL, 0UL);


cudaThreadSynchronize();



printf(((const char *)"Printing Output:\n")); {
 int i;
# 262 "srad.cu"
i = 0; for (; (i < __cuda_local_var_17795_9_non_const_rows); i++) { {
 int j;
# 263 "srad.cu"
j = 0; for (; (j < __cuda_local_var_17795_15_non_const_cols); j++) {
printf(((const char *)"%.5f "), ((double)(__cuda_local_var_17796_16_non_const_J[((i * __cuda_local_var_17795_15_non_const_cols) + j)])));
} }
printf(((const char *)"\n"));
} }


printf(((const char *)"Computation Done\n"));

free(((void *)__cuda_local_var_17796_12_non_const_I));
free(((void *)__cuda_local_var_17796_16_non_const_J));
# 279 "srad.cu"
cudaFree(((void *)__cuda_local_var_17799_12_non_const_C_cuda));
cudaFree(((void *)__cuda_local_var_17798_9_non_const_J_cuda));
cudaFree(((void *)__cuda_local_var_17800_9_non_const_E_C));
cudaFree(((void *)__cuda_local_var_17800_15_non_const_W_C));
cudaFree(((void *)__cuda_local_var_17800_21_non_const_N_C));
cudaFree(((void *)__cuda_local_var_17800_27_non_const_S_C));

free(((void *)__cuda_local_var_17805_9_non_const_c)); 

}


void _Z13random_matrixPfii( float *I,  int rows,  int cols) {

srand(7U); {

 int i;
# 295 "srad.cu"
i = 0; for (; (i < rows); i++) { {
 int j;
# 296 "srad.cu"
j = 0; for (; (j < cols); j++) {
(I[((i * cols) + j)]) = (((float)(rand())) / (2147483648.0F));
} }
} } 

}
static void __sti___12_srad_cpp1_ii_73102f0c(void) {   }

#include "srad.cudafe1.stub.c"
