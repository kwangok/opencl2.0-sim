# 1 "bfs.cu"
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
# 39 "bfs.cu"
struct Node;
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
enum _ZNSt12__is_integerIdEUt_E { _ZNSt12__is_integerIdE7__valueE};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 39 "bfs.cu"
struct Node {

int starting;
int no_of_edges;};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 234 "/usr/include/stdio.h" 3
extern int fclose(FILE *);
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
# 1048 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern __attribute__((__const__)) double ceil(double);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 29 "bfs.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 53 "bfs.cu"
extern int main(int, char **);
# 60 "bfs.cu"
extern void _Z5UsageiPPc(int, char **);
# 68 "bfs.cu"
extern void _Z8BFSGraphiPPc(int, char **);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___11_bfs_cpp1_ii_ad18112b(void) __attribute__((__constructor__));
# 167 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
# 34 "bfs.cu"
int no_of_nodes = 0;
int edge_list_size = 0;
FILE *fp = 0;
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
# 53 "bfs.cu"
int main( int argc,  char **argv)
{
no_of_nodes = 0;
edge_list_size = 0;
_Z8BFSGraphiPPc(argc, argv); return 0;
}

void _Z5UsageiPPc( int argc,  char **argv) {

fprintf(stderr, ((const char *)"Usage: %s <input_file>\n"), (argv[0])); 

}



void _Z8BFSGraphiPPc( int argc,  char **argv)
{  unsigned __T20;
 unsigned __T21;
 char *__cuda_local_var_17553_11_non_const_input_f;
# 87 "bfs.cu"
 int __cuda_local_var_17569_6_non_const_source;



 int __cuda_local_var_17573_6_non_const_num_of_blocks;
 int __cuda_local_var_17574_6_non_const_num_of_threads_per_block;
# 103 "bfs.cu"
 struct Node *__cuda_local_var_17585_8_non_const_h_graph_nodes;
 char *__cuda_local_var_17586_8_non_const_h_graph_mask;
 char *__cuda_local_var_17587_8_non_const_h_updating_graph_mask;
 char *__cuda_local_var_17588_8_non_const_h_graph_visited;

 int __cuda_local_var_17590_6_non_const_start;
# 108 "bfs.cu"
 int __cuda_local_var_17590_13_non_const_edgeno;
# 130 "bfs.cu"
 int __cuda_local_var_17612_6_non_const_id;
# 130 "bfs.cu"
 int __cuda_local_var_17612_9_non_const_cost;
 int *__cuda_local_var_17613_7_non_const_h_graph_edges;
# 169 "bfs.cu"
 int *__cuda_local_var_17626_7_non_const_h_cost;
# 192 "bfs.cu"
 dim3 __cuda_local_var_17639_7_non_const_grid;
 dim3 __cuda_local_var_17640_7_non_const_threads;

 int __cuda_local_var_17642_6_non_const_k;

 char __cuda_local_var_17644_7_non_const_stop;
# 226 "bfs.cu"
 FILE *__cuda_local_var_17673_8_non_const_fpo;
# 72 "bfs.cu"
if (argc != 2) {
_Z5UsageiPPc(argc, argv);
exit(0);
}

__cuda_local_var_17553_11_non_const_input_f = (argv[1]);
printf(((const char *)"Reading File\n"));

fp = (fopen(((const char *)__cuda_local_var_17553_11_non_const_input_f), ((const char *)"r")));
if (!(fp))
{
printf(((const char *)"Error Reading graph file\n"));
return;
}

__cuda_local_var_17569_6_non_const_source = 0;

fscanf(fp, ((const char *)"%d"), (&no_of_nodes));

__cuda_local_var_17573_6_non_const_num_of_blocks = 1;
__cuda_local_var_17574_6_non_const_num_of_threads_per_block = no_of_nodes;



if (no_of_nodes > 512)
{
__cuda_local_var_17573_6_non_const_num_of_blocks = ((int)(ceil((((double)no_of_nodes) / (512.0)))));
__cuda_local_var_17574_6_non_const_num_of_threads_per_block = 512;
}


__cuda_local_var_17585_8_non_const_h_graph_nodes = ((struct Node *)(malloc((8UL * ((unsigned long)no_of_nodes)))));
__cuda_local_var_17586_8_non_const_h_graph_mask = ((char *)(malloc((1UL * ((unsigned long)no_of_nodes)))));
__cuda_local_var_17587_8_non_const_h_updating_graph_mask = ((char *)(malloc((1UL * ((unsigned long)no_of_nodes)))));
__cuda_local_var_17588_8_non_const_h_graph_visited = ((char *)(malloc((1UL * ((unsigned long)no_of_nodes))))); {



 unsigned i;
# 110 "bfs.cu"
i = 0U; for (; (i < ((unsigned)no_of_nodes)); i++)
{
fscanf(fp, ((const char *)"%d %d"), (&__cuda_local_var_17590_6_non_const_start), (&__cuda_local_var_17590_13_non_const_edgeno));
((__cuda_local_var_17585_8_non_const_h_graph_nodes[i]).starting) = __cuda_local_var_17590_6_non_const_start;
((__cuda_local_var_17585_8_non_const_h_graph_nodes[i]).no_of_edges) = __cuda_local_var_17590_13_non_const_edgeno;
(__cuda_local_var_17586_8_non_const_h_graph_mask[i]) = ((char)0);
(__cuda_local_var_17587_8_non_const_h_updating_graph_mask[i]) = ((char)0);
(__cuda_local_var_17588_8_non_const_h_graph_visited[i]) = ((char)0);
} }


fscanf(fp, ((const char *)"%d"), (&__cuda_local_var_17569_6_non_const_source));
__cuda_local_var_17569_6_non_const_source = 0;


(__cuda_local_var_17586_8_non_const_h_graph_mask[__cuda_local_var_17569_6_non_const_source]) = ((char)1);
(__cuda_local_var_17588_8_non_const_h_graph_visited[__cuda_local_var_17569_6_non_const_source]) = ((char)1);

fscanf(fp, ((const char *)"%d"), (&edge_list_size));


__cuda_local_var_17613_7_non_const_h_graph_edges = ((int *)(malloc((4UL * ((unsigned long)edge_list_size))))); {
 int i;
# 132 "bfs.cu"
i = 0; for (; (i < edge_list_size); i++)
{
fscanf(fp, ((const char *)"%d"), (&__cuda_local_var_17612_6_non_const_id));
fscanf(fp, ((const char *)"%d"), (&__cuda_local_var_17612_9_non_const_cost));
(__cuda_local_var_17613_7_non_const_h_graph_edges[i]) = __cuda_local_var_17612_6_non_const_id;
} }

if (fp) {
fclose(fp); }

printf(((const char *)"Read File\n"));
# 169 "bfs.cu"
__cuda_local_var_17626_7_non_const_h_cost = ((int *)(malloc((4UL * ((unsigned long)no_of_nodes))))); {
 int i;
# 170 "bfs.cu"
i = 0; for (; (i < no_of_nodes); i++) {
(__cuda_local_var_17626_7_non_const_h_cost[i]) = (-1); } }
(__cuda_local_var_17626_7_non_const_h_cost[__cuda_local_var_17569_6_non_const_source]) = 0;
# 184 "bfs.cu"
m5_work_begin(0UL, 0UL);




printf(((const char *)"Copied Everything to GPU memory\n"));


{ __T20 = ((unsigned)__cuda_local_var_17573_6_non_const_num_of_blocks); { (__cuda_local_var_17639_7_non_const_grid.x) = __T20; (__cuda_local_var_17639_7_non_const_grid.y) = 1U; (__cuda_local_var_17639_7_non_const_grid.z) = 1U; } }
{ __T21 = ((unsigned)__cuda_local_var_17574_6_non_const_num_of_threads_per_block); { (__cuda_local_var_17640_7_non_const_threads.x) = __T21; (__cuda_local_var_17640_7_non_const_threads.y) = 1U; (__cuda_local_var_17640_7_non_const_threads.z) = 1U; } }

__cuda_local_var_17642_6_non_const_k = 0;
printf(((const char *)"Start traversing the tree\n"));


do
{

__cuda_local_var_17644_7_non_const_stop = ((char)0);
(cudaConfigureCall(__cuda_local_var_17639_7_non_const_grid, __cuda_local_var_17640_7_non_const_threads, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z6KernelP4NodePiPbS2_S2_S1_i(__cuda_local_var_17585_8_non_const_h_graph_nodes, __cuda_local_var_17613_7_non_const_h_graph_edges, __cuda_local_var_17586_8_non_const_h_graph_mask, __cuda_local_var_17587_8_non_const_h_updating_graph_mask, __cuda_local_var_17588_8_non_const_h_graph_visited, __cuda_local_var_17626_7_non_const_h_cost, no_of_nodes));


cudaThreadSynchronize();

(cudaConfigureCall(__cuda_local_var_17639_7_non_const_grid, __cuda_local_var_17640_7_non_const_threads, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z7Kernel2PbS_S_S_i(__cuda_local_var_17586_8_non_const_h_graph_mask, __cuda_local_var_17587_8_non_const_h_updating_graph_mask, __cuda_local_var_17588_8_non_const_h_graph_visited, (&__cuda_local_var_17644_7_non_const_stop), no_of_nodes));

cudaThreadSynchronize();
__cuda_local_var_17642_6_non_const_k++;
} while (__cuda_local_var_17644_7_non_const_stop);



printf(((const char *)"Kernel Executed %d times\n"), __cuda_local_var_17642_6_non_const_k);
# 222 "bfs.cu"
m5_work_end(0UL, 0UL);



__cuda_local_var_17673_8_non_const_fpo = (fopen(((const char *)"result.txt"), ((const char *)"w"))); {
 int i;
# 227 "bfs.cu"
i = 0; for (; (i < no_of_nodes); i++) {
fprintf(__cuda_local_var_17673_8_non_const_fpo, ((const char *)"%d) cost:%d\n"), i, (__cuda_local_var_17626_7_non_const_h_cost[i])); } }
fclose(__cuda_local_var_17673_8_non_const_fpo);
printf(((const char *)"Result stored in result.txt\n"));



free(((void *)__cuda_local_var_17585_8_non_const_h_graph_nodes));
free(((void *)__cuda_local_var_17613_7_non_const_h_graph_edges));
free(((void *)__cuda_local_var_17586_8_non_const_h_graph_mask));
free(((void *)__cuda_local_var_17587_8_non_const_h_updating_graph_mask));
free(((void *)__cuda_local_var_17588_8_non_const_h_graph_visited));
free(((void *)__cuda_local_var_17626_7_non_const_h_cost)); 
# 246 "bfs.cu"
}
static void __sti___11_bfs_cpp1_ii_ad18112b(void) {   }

#include "bfs.cudafe1.stub.c"
