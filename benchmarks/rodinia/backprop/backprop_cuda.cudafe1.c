# 1 "backprop_cuda.cu"
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
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
# 16 "./backprop.h"
struct BPNN;
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
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __time_t;

typedef long __suseconds_t;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;};
# 63 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
typedef struct timezone *__restrict__ __timezone_ptr_t;
# 16 "./backprop.h"
struct BPNN {
int input_n;
int hidden_n;
int output_n;

float *input_units;
float *hidden_units;
float *output_units;

float *hidden_delta;
float *output_delta;

float *target;

float **input_weights;
float **hidden_weights;


float **input_prev_weights;
float **hidden_prev_weights;};
typedef struct BPNN BPNN;
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
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2189 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 2870 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);

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
# 18 "backprop_cuda.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 26 "backprop_cuda.cu"
extern void bpnn_layerforward(float *, float *, float **, int, int);


extern void bpnn_output_error(float *, float *, float *, int, float *);


extern void bpnn_hidden_error(float *, int, float *, int, float **, float *, float *);


extern void bpnn_adjust_weights(float *, int, float *, int, float **, float **);



extern int setup(int, char **);
# 47 "backprop_cuda.cu"
extern double _Z7gettimev(void);
# 60 "backprop_cuda.cu"
extern int main(int, char **);
# 67 "backprop_cuda.cu"
extern void bpnn_train_cuda(BPNN *, float *, float *);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___21_backprop_cuda_cpp1_ii_5f684aae(void) __attribute__((__constructor__));
# 53 "backprop_cuda.cu"
extern unsigned num_threads;
extern unsigned num_blocks;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 53 "backprop_cuda.cu"
unsigned num_threads = 0U;
unsigned num_blocks = 0U;
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
# 47 "backprop_cuda.cu"
double _Z7gettimev(void) {
 struct timeval __cuda_local_var_17757_18_non_const_t;
gettimeofday((&__cuda_local_var_17757_18_non_const_t), ((struct timezone *)0LL));
return ((double)(__cuda_local_var_17757_18_non_const_t.tv_sec)) + (((double)(__cuda_local_var_17757_18_non_const_t.tv_usec)) * (9.999999999999999547e-07));
}
# 60 "backprop_cuda.cu"
int main( int argc,  char **argv)
{
setup(argc, argv); return 0;
}



void bpnn_train_cuda( BPNN *net,  float *eo,  float *eh)
{  unsigned __T20;
 int __cuda_local_var_17778_7_non_const_in;
# 69 "backprop_cuda.cu"
 int __cuda_local_var_17778_11_non_const_hid;
# 69 "backprop_cuda.cu"
 int __cuda_local_var_17778_16_non_const_out;
 float __cuda_local_var_17779_9_non_const_out_err;
# 70 "backprop_cuda.cu"
 float __cuda_local_var_17779_18_non_const_hid_err;
# 77 "backprop_cuda.cu"
 int __cuda_local_var_17786_7_non_const_m;
 float *__cuda_local_var_17787_10_non_const_input_hidden_cuda;
 float *__cuda_local_var_17788_10_non_const_input_cuda;
 float *__cuda_local_var_17789_10_non_const_output_hidden_cuda;
 float *__cuda_local_var_17790_10_non_const_partial_sum;
 float *__cuda_local_var_17791_10_non_const_hidden_partial_sum;
 float *__cuda_local_var_17792_10_non_const_hidden_delta_cuda;
 float *__cuda_local_var_17793_10_non_const_input_prev_weights_cuda;
 float __cuda_local_var_17794_9_non_const_sum;
 float *__cuda_local_var_17795_10_non_const_input_weights_one_dim;
 float *__cuda_local_var_17796_10_non_const_input_weights_prev_one_dim;

 dim3 __cuda_local_var_17798_8_non_const_grid;
 dim3 __cuda_local_var_17799_8_non_const_threads;
# 144 "backprop_cuda.cu"
 cudaError_t __cuda_local_var_17843_15_non_const_error;
# 72 "backprop_cuda.cu"
__cuda_local_var_17778_7_non_const_in = (net->input_n);
__cuda_local_var_17778_11_non_const_hid = (net->hidden_n);
__cuda_local_var_17778_16_non_const_out = (net->output_n);


__cuda_local_var_17786_7_non_const_m = 0;
# 88 "backprop_cuda.cu"
num_blocks = ((unsigned)(__cuda_local_var_17778_7_non_const_in / 16));
{ __T20 = num_blocks; { (__cuda_local_var_17798_8_non_const_grid.x) = 1U; (__cuda_local_var_17798_8_non_const_grid.y) = __T20; (__cuda_local_var_17798_8_non_const_grid.z) = 1U; } }
{ (__cuda_local_var_17799_8_non_const_threads.x) = 16U; (__cuda_local_var_17799_8_non_const_threads.y) = 16U; (__cuda_local_var_17799_8_non_const_threads.z) = 1U; }

__cuda_local_var_17795_10_non_const_input_weights_one_dim = ((float *)(malloc((((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL))));
__cuda_local_var_17796_10_non_const_input_weights_prev_one_dim = ((float *)(malloc((((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL))));
__cuda_local_var_17790_10_non_const_partial_sum = ((float *)(malloc((((unsigned long)(num_blocks * 16U)) * 4UL)))); {


 int k;
# 97 "backprop_cuda.cu"
k = 0; for (; (k <= __cuda_local_var_17778_7_non_const_in); k++) { {
 int j;
# 98 "backprop_cuda.cu"
j = 0; for (; (j <= __cuda_local_var_17778_11_non_const_hid); j++) {
(__cuda_local_var_17795_10_non_const_input_weights_one_dim[__cuda_local_var_17786_7_non_const_m]) = (((net->input_weights)[k])[j]);
(__cuda_local_var_17796_10_non_const_input_weights_prev_one_dim[__cuda_local_var_17786_7_non_const_m]) = (((net->input_prev_weights)[k])[j]);
__cuda_local_var_17786_7_non_const_m++;
} }
} }

cudaMalloc(((void **)(&__cuda_local_var_17788_10_non_const_input_cuda)), (((unsigned long)(__cuda_local_var_17778_7_non_const_in + 1)) * 4UL));
cudaMalloc(((void **)(&__cuda_local_var_17789_10_non_const_output_hidden_cuda)), (((unsigned long)(__cuda_local_var_17778_11_non_const_hid + 1)) * 4UL));
cudaMalloc(((void **)(&__cuda_local_var_17787_10_non_const_input_hidden_cuda)), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL));
cudaMalloc(((void **)(&__cuda_local_var_17791_10_non_const_hidden_partial_sum)), (((unsigned long)(num_blocks * 16U)) * 4UL));
# 114 "backprop_cuda.cu"
m5_work_begin(0UL, 0UL);
# 126 "backprop_cuda.cu"
printf(((const char *)"Performing GPU computation\n"));



cudaMemcpy(((void *)__cuda_local_var_17788_10_non_const_input_cuda), ((const void *)(net->input_units)), (((unsigned long)(__cuda_local_var_17778_7_non_const_in + 1)) * 4UL), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_17787_10_non_const_input_hidden_cuda), ((const void *)__cuda_local_var_17795_10_non_const_input_weights_one_dim), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL), cudaMemcpyHostToDevice);



(cudaConfigureCall(__cuda_local_var_17798_8_non_const_grid, __cuda_local_var_17799_8_non_const_threads, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z22bpnn_layerforward_CUDAPfS_S_S_ii(__cuda_local_var_17788_10_non_const_input_cuda, __cuda_local_var_17789_10_non_const_output_hidden_cuda, __cuda_local_var_17787_10_non_const_input_hidden_cuda, __cuda_local_var_17791_10_non_const_hidden_partial_sum, __cuda_local_var_17778_7_non_const_in, __cuda_local_var_17778_11_non_const_hid));
# 142 "backprop_cuda.cu"
cudaThreadSynchronize();

__cuda_local_var_17843_15_non_const_error = (cudaGetLastError());
if (((int)__cuda_local_var_17843_15_non_const_error) != 0) {
printf(((const char *)"bpnn kernel error: %s\n"), (cudaGetErrorString(__cuda_local_var_17843_15_non_const_error)));
exit(1);
}

cudaMemcpy(((void *)__cuda_local_var_17790_10_non_const_partial_sum), ((const void *)__cuda_local_var_17791_10_non_const_hidden_partial_sum), (((unsigned long)(num_blocks * 16U)) * 4UL), cudaMemcpyDeviceToHost); {  float __T21;

 int j;
# 152 "backprop_cuda.cu"
j = 1; for (; (j <= __cuda_local_var_17778_11_non_const_hid); j++) {
__cuda_local_var_17794_9_non_const_sum = (0.0F); {
 int k;
# 154 "backprop_cuda.cu"
k = 0; for (; (((unsigned)k) < num_blocks); k++) {
__cuda_local_var_17794_9_non_const_sum += (__cuda_local_var_17790_10_non_const_partial_sum[(((k * __cuda_local_var_17778_11_non_const_hid) + j) - 1)]);
} }
__cuda_local_var_17794_9_non_const_sum += (((net->input_weights)[0])[j]);
((net->hidden_units)[j]) = ((float)((1.0) / ((1.0) + ((double)((__T21 = (-__cuda_local_var_17794_9_non_const_sum)) , (__builtin_expf(__T21)))))));
} }


bpnn_layerforward((net->hidden_units), (net->output_units), (net->hidden_weights), __cuda_local_var_17778_11_non_const_hid, __cuda_local_var_17778_16_non_const_out);
bpnn_output_error((net->output_delta), (net->target), (net->output_units), __cuda_local_var_17778_16_non_const_out, (&__cuda_local_var_17779_9_non_const_out_err));
bpnn_hidden_error((net->hidden_delta), __cuda_local_var_17778_11_non_const_hid, (net->output_delta), __cuda_local_var_17778_16_non_const_out, (net->hidden_weights), (net->hidden_units), (&__cuda_local_var_17779_18_non_const_hid_err));
bpnn_adjust_weights((net->output_delta), __cuda_local_var_17778_16_non_const_out, (net->hidden_units), __cuda_local_var_17778_11_non_const_hid, (net->hidden_weights), (net->hidden_prev_weights));
# 176 "backprop_cuda.cu"
cudaMalloc(((void **)(&__cuda_local_var_17792_10_non_const_hidden_delta_cuda)), (((unsigned long)(__cuda_local_var_17778_11_non_const_hid + 1)) * 4UL));
cudaMalloc(((void **)(&__cuda_local_var_17793_10_non_const_input_prev_weights_cuda)), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL));

cudaMemcpy(((void *)__cuda_local_var_17792_10_non_const_hidden_delta_cuda), ((const void *)(net->hidden_delta)), (((unsigned long)(__cuda_local_var_17778_11_non_const_hid + 1)) * 4UL), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_17793_10_non_const_input_prev_weights_cuda), ((const void *)__cuda_local_var_17796_10_non_const_input_weights_prev_one_dim), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_17787_10_non_const_input_hidden_cuda), ((const void *)__cuda_local_var_17795_10_non_const_input_weights_one_dim), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL), cudaMemcpyHostToDevice);


(cudaConfigureCall(__cuda_local_var_17798_8_non_const_grid, __cuda_local_var_17799_8_non_const_threads, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z24bpnn_adjust_weights_cudaPfiS_iS_S_(__cuda_local_var_17792_10_non_const_hidden_delta_cuda, __cuda_local_var_17778_11_non_const_hid, __cuda_local_var_17788_10_non_const_input_cuda, __cuda_local_var_17778_7_non_const_in, __cuda_local_var_17787_10_non_const_input_hidden_cuda, __cuda_local_var_17793_10_non_const_input_prev_weights_cuda));
# 192 "backprop_cuda.cu"
cudaMemcpy(((void *)(net->input_units)), ((const void *)__cuda_local_var_17788_10_non_const_input_cuda), (((unsigned long)(__cuda_local_var_17778_7_non_const_in + 1)) * 4UL), cudaMemcpyDeviceToHost);
cudaMemcpy(((void *)__cuda_local_var_17795_10_non_const_input_weights_one_dim), ((const void *)__cuda_local_var_17787_10_non_const_input_hidden_cuda), (((unsigned long)((__cuda_local_var_17778_7_non_const_in + 1) * (__cuda_local_var_17778_11_non_const_hid + 1))) * 4UL), cudaMemcpyDeviceToHost);




m5_work_end(0UL, 0UL);



cudaFree(((void *)__cuda_local_var_17788_10_non_const_input_cuda));
cudaFree(((void *)__cuda_local_var_17789_10_non_const_output_hidden_cuda));
cudaFree(((void *)__cuda_local_var_17787_10_non_const_input_hidden_cuda));
cudaFree(((void *)__cuda_local_var_17791_10_non_const_hidden_partial_sum));
cudaFree(((void *)__cuda_local_var_17793_10_non_const_input_prev_weights_cuda));
cudaFree(((void *)__cuda_local_var_17792_10_non_const_hidden_delta_cuda));




printf(((const char *)"Partial Sums:\n")); {
 int j;
# 213 "backprop_cuda.cu"
j = 1; for (; ((j <= __cuda_local_var_17778_11_non_const_hid) && (j < 100)); j++) { {
 int k;
# 214 "backprop_cuda.cu"
k = 0; for (; (((unsigned)k) < num_blocks); k++) {
printf(((const char *)"%f "), ((double)(__cuda_local_var_17790_10_non_const_partial_sum[(((k * __cuda_local_var_17778_11_non_const_hid) + j) - 1)])));
} }
printf(((const char *)"\n"));
} }
printf(((const char *)"\n"));


printf(((const char *)"Input Weights:\n"));
__cuda_local_var_17786_7_non_const_m = 0; {
 int k;
# 224 "backprop_cuda.cu"
k = 0; for (; ((k <= __cuda_local_var_17778_7_non_const_in) && (k < 100)); k++) { {
 int j;
# 225 "backprop_cuda.cu"
j = 0; for (; (j <= __cuda_local_var_17778_11_non_const_hid); j++) {
printf(((const char *)"%f "), ((double)(__cuda_local_var_17795_10_non_const_input_weights_one_dim[(__cuda_local_var_17786_7_non_const_m++)])));
} }
} }
printf(((const char *)"\n"));


printf(((const char *)"Net Inputs:\n")); {
 int k;
# 233 "backprop_cuda.cu"
k = 0; for (; ((k < __cuda_local_var_17778_7_non_const_in) && (k < 100)); k++) {
printf(((const char *)"%f "), ((double)((net->input_units)[k])));
} }
printf(((const char *)"\n"));


free(((void *)__cuda_local_var_17790_10_non_const_partial_sum));
free(((void *)__cuda_local_var_17795_10_non_const_input_weights_one_dim));
free(((void *)__cuda_local_var_17796_10_non_const_input_weights_prev_one_dim)); 




}
static void __sti___21_backprop_cuda_cpp1_ii_5f684aae(void) {   }

#include "backprop_cuda.cudafe1.stub.c"
