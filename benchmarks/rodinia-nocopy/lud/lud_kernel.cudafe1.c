# 1 "lud_kernel.cu"
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
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
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 103 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((__malloc__)) void *malloc(size_t);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 184 "lud_kernel.cu"
extern void _Z8lud_cudaPfi(float *, int);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___18_lud_kernel_cpp1_ii_a8a59389(void) __attribute__((__constructor__));
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
# 184 "lud_kernel.cu"
void _Z8lud_cudaPfi( float *m,  int matrix_dim)
{  dim3 __T20;
 dim3 __T21;
# 186 "lud_kernel.cu"
 int __cuda_local_var_17569_7_non_const_i;
 dim3 __cuda_local_var_17570_8_non_const_dimBlock;
 float *__cuda_local_var_17571_10_non_const_m_debug;
# 186 "lud_kernel.cu"
__cuda_local_var_17569_7_non_const_i = 0;
{ (__cuda_local_var_17570_8_non_const_dimBlock.x) = 16U; (__cuda_local_var_17570_8_non_const_dimBlock.y) = 16U; (__cuda_local_var_17570_8_non_const_dimBlock.z) = 1U; }
__cuda_local_var_17571_10_non_const_m_debug = ((float *)(malloc((((unsigned long)(matrix_dim * matrix_dim)) * 4UL))));

for (__cuda_local_var_17569_7_non_const_i = 0; (__cuda_local_var_17569_7_non_const_i < (matrix_dim - 16)); __cuda_local_var_17569_7_non_const_i += 16) {  dim3 __T22;
 dim3 __T23;
 dim3 __T24;
 unsigned __T25;
 dim3 __T26;
 unsigned __T27;
 unsigned __T28;
# 195 "lud_kernel.cu"
 dim3 __cuda_local_var_17578_12_non_const_dimGrid;
# 191 "lud_kernel.cu"
(cudaConfigureCall((((void)((((__T22.x) = 1U) , (void)((__T22.y) = 1U)) , (void)((__T22.z) = 1U))) , __T22), (((void)((((__T23.x) = 16U) , (void)((__T23.y) = 1U)) , (void)((__T23.z) = 1U))) , __T23), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z12lud_diagonalPfii(m, matrix_dim, __cuda_local_var_17569_7_non_const_i));
cudaThreadSynchronize();
(cudaConfigureCall((((void)((__T25 = ((unsigned)(((matrix_dim - __cuda_local_var_17569_7_non_const_i) / 16) - 1))) , (void)((((__T24.x) = __T25) , (void)((__T24.y) = 1U)) , ((__T24.z) = 1U)))) , __T24), (((void)((((__T26.x) = 32U) , (void)((__T26.y) = 1U)) , (void)((__T26.z) = 1U))) , __T26), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z13lud_perimeterPfii(m, matrix_dim, __cuda_local_var_17569_7_non_const_i));
cudaThreadSynchronize();
{ __T27 = ((unsigned)(((matrix_dim - __cuda_local_var_17569_7_non_const_i) / 16) - 1)); __T28 = ((unsigned)(((matrix_dim - __cuda_local_var_17569_7_non_const_i) / 16) - 1)); { (__cuda_local_var_17578_12_non_const_dimGrid.x) = __T27; (__cuda_local_var_17578_12_non_const_dimGrid.y) = __T28; (__cuda_local_var_17578_12_non_const_dimGrid.z) = 1U; } }
(cudaConfigureCall(__cuda_local_var_17578_12_non_const_dimGrid, __cuda_local_var_17570_8_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z12lud_internalPfii(m, matrix_dim, __cuda_local_var_17569_7_non_const_i));
cudaThreadSynchronize();
}
(cudaConfigureCall((((void)((((__T20.x) = 1U) , (void)((__T20.y) = 1U)) , (void)((__T20.z) = 1U))) , __T20), (((void)((((__T21.x) = 16U) , (void)((__T21.y) = 1U)) , (void)((__T21.z) = 1U))) , __T21), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z12lud_diagonalPfii(m, matrix_dim, __cuda_local_var_17569_7_non_const_i));
cudaThreadSynchronize(); 
}
static void __sti___18_lud_kernel_cpp1_ii_a8a59389(void) {   }

#include "lud_kernel.cudafe1.stub.c"
