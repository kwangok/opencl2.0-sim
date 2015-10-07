# 1 "nn_cuda.cu"
struct __C1; struct __C2; struct __C3; struct __type_info; struct __C5; struct __C6; union __C7; struct __C8;
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
# 22 "nn_cuda.cu"
struct latLong;
# 28 "nn_cuda.cu"
struct record;
# 59 "/usr/include/c++/4.4/exception" 3
struct _ZSt9exception;
# 54 "/usr/include/c++/4.4/new" 3
struct _ZSt9bad_alloc;
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
# 65 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
enum _ZStUt_ { _ZSt11_S_word_bit = 64};
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 86 "/usr/include/c++/4.4/bits/allocator.h" 3
struct _ZSaI6recordE;
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE;
# 69 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6recordSaIS0_EE;
# 170 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt6vectorI6recordSaIS0_EE;
# 86 "/usr/include/c++/4.4/bits/allocator.h" 3
struct _ZSaI7latLongE;
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE;
# 69 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI7latLongSaIS0_EE;
# 170 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt6vectorI7latLongSaIS0_EE;
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIPmEUt_E { _ZNSt20__is_normal_iteratorIPmE7__valueE};
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIiEUt_E { _ZNSt13__is_floatingIiE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEEUt_E { _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEE7__valueE = 1};
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIiEUt_E { _ZNSt12__is_pointerIiE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEEUt_E { _ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEE7__valueE = 1};
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIP6recordEUt_E { _ZNSt18__is_move_iteratorIP6recordE7__valueE};
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP6recordEUt_E { _ZNSt20__is_normal_iteratorIP6recordE7__valueE};
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIP6recordEUt_E { _ZNSt12__is_pointerIP6recordE7__valueE = 1};
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI6recordS0_EUt_E { _ZNSt10__are_sameI6recordS0_E7__valueE = 1}; enum _ZNSt10__are_sameIP6recordS1_EUt_E { _ZNSt10__are_sameIP6recordS1_E7__valueE = 1};
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIP7latLongEUt_E { _ZNSt18__is_move_iteratorIP7latLongE7__valueE};
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP7latLongEUt_E { _ZNSt20__is_normal_iteratorIP7latLongE7__valueE};
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIP7latLongEUt_E { _ZNSt12__is_pointerIP7latLongE7__valueE = 1};
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI7latLongS0_EUt_E { _ZNSt10__are_sameI7latLongS0_E7__valueE = 1}; enum _ZNSt10__are_sameIP7latLongS1_EUt_E { _ZNSt10__are_sameIP7latLongS1_E7__valueE = 1};
# 51 "/usr/include/c++/4.4/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI6recordEE; struct _ZN9__gnu_cxx13new_allocatorI7latLongEE;
# 668 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
struct __C3 { struct __C2 *regions; void **obj_table; struct __C1 *array_table; unsigned short saved_region_number;char __nv_no_debug_dummy_end_padding_0[6];}; struct __C5 { const struct __type_info *tinfo; unsigned char flags; unsigned char *ptr_flags;}; struct __C6 { long setjmp_buffer[25]; struct __C5 *catch_entries; void *rtinfo; unsigned short region_number;char __nv_no_debug_dummy_end_padding_0[6];}; union __C7 { struct __C6 try_block; struct __C3 function; struct __C5 *throw_spec;}; struct __C8 { struct __C8 *next; unsigned char kind; union __C7 variant;};
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 22 "nn_cuda.cu"
struct latLong {

float lat;
float lng;};
typedef struct latLong LatLong;

struct record {

char recString[49];
float distance;};
typedef struct record Record;
# 59 "/usr/include/c++/4.4/exception" 3
struct _ZSt9exception { const long *__vptr;};
# 54 "/usr/include/c++/4.4/new" 3
struct _ZSt9bad_alloc { struct _ZSt9exception __b_St9exception;};
# 91 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef Record *_ZNSaI6recordE7pointerE;

typedef Record *_ZNSaI6recordE9referenceE;
# 99 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef struct _ZSaI6recordE _ZNSaI6recordE6rebindIS_E5otherE;
# 86 "/usr/include/c++/4.4/bits/allocator.h" 3
struct _ZSaI6recordE {char __nv_no_debug_dummy_end_padding_0;};
# 71 "/usr/include/c++/4.4/bits/stl_vector.h" 3
typedef _ZNSaI6recordE6rebindIS_E5otherE _ZNSt12_Vector_baseI6recordSaIS0_EE14_Tp_alloc_typeE;

struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE {


_ZNSaI6recordE7pointerE _M_start;
_ZNSaI6recordE7pointerE _M_finish;
_ZNSaI6recordE7pointerE _M_end_of_storage;};
# 69 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6recordSaIS0_EE {
# 136 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE _M_impl;};
# 181 "/usr/include/c++/4.4/bits/stl_vector.h" 3
typedef Record _ZNSt6vectorI6recordSaIS0_EE10value_typeE;
typedef _ZNSaI6recordE7pointerE _ZNSt6vectorI6recordSaIS0_EE7pointerE;

typedef _ZNSaI6recordE9referenceE _ZNSt6vectorI6recordSaIS0_EE9referenceE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6recordSaIS0_EE8iteratorE;




typedef size_t _ZNSt6vectorI6recordSaIS0_EE9size_typeE;
# 170 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt6vectorI6recordSaIS0_EE { struct _ZSt12_Vector_baseI6recordSaIS0_EE __b_St12_Vector_baseI6recordSaIS0_EE;};
# 91 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef LatLong *_ZNSaI7latLongE7pointerE;

typedef LatLong *_ZNSaI7latLongE9referenceE;
# 99 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef struct _ZSaI7latLongE _ZNSaI7latLongE6rebindIS_E5otherE;
# 86 "/usr/include/c++/4.4/bits/allocator.h" 3
struct _ZSaI7latLongE {char __nv_no_debug_dummy_end_padding_0;};
# 71 "/usr/include/c++/4.4/bits/stl_vector.h" 3
typedef _ZNSaI7latLongE6rebindIS_E5otherE _ZNSt12_Vector_baseI7latLongSaIS0_EE14_Tp_alloc_typeE;

struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE {


_ZNSaI7latLongE7pointerE _M_start;
_ZNSaI7latLongE7pointerE _M_finish;
_ZNSaI7latLongE7pointerE _M_end_of_storage;};
# 69 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI7latLongSaIS0_EE {
# 136 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE _M_impl;};
# 181 "/usr/include/c++/4.4/bits/stl_vector.h" 3
typedef LatLong _ZNSt6vectorI7latLongSaIS0_EE10value_typeE;
typedef _ZNSaI7latLongE7pointerE _ZNSt6vectorI7latLongSaIS0_EE7pointerE;

typedef _ZNSaI7latLongE9referenceE _ZNSt6vectorI7latLongSaIS0_EE9referenceE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE _ZNSt6vectorI7latLongSaIS0_EE8iteratorE;




typedef size_t _ZNSt6vectorI7latLongSaIS0_EE9size_typeE;
# 170 "/usr/include/c++/4.4/bits/stl_vector.h" 3
struct _ZSt6vectorI7latLongSaIS0_EE { struct _ZSt12_Vector_baseI7latLongSaIS0_EE __b_St12_Vector_baseI7latLongSaIS0_EE;};
# 54 "/usr/include/c++/4.4/ext/new_allocator.h" 3
typedef size_t _ZN9__gnu_cxx13new_allocatorI6recordE9size_typeE;

typedef Record *_ZN9__gnu_cxx13new_allocatorI6recordE7pointerE;
# 51 "/usr/include/c++/4.4/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI6recordEE {char __nv_no_debug_dummy_end_padding_0;};


typedef size_t _ZN9__gnu_cxx13new_allocatorI7latLongE9size_typeE;

typedef LatLong *_ZN9__gnu_cxx13new_allocatorI7latLongE7pointerE;
# 51 "/usr/include/c++/4.4/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI7latLongEE {char __nv_no_debug_dummy_end_padding_0;};
# 668 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6recordSaIS0_EE7pointerE _M_current;};
# 668 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI7latLongSaIS0_EE7pointerE _M_current;};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 138 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((visibility("default"))) void *_Znwm(size_t);

extern __attribute__((visibility("default"))) void _ZdlPv(void *);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 71 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern void *memcpy(void *__restrict__, const void *__restrict__, size_t);
# 131 "/usr/include/string.h" 3
extern char *strncpy(char *__restrict__, const char *__restrict__, size_t);
# 234 "/usr/include/stdio.h" 3
extern int fclose(FILE *);
# 269 "/usr/include/stdio.h" 3
extern FILE *fopen(const char *__restrict__, const char *__restrict__);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern int sprintf(char *__restrict__, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 533 "/usr/include/stdio.h" 3
extern int fgetc(FILE *);
# 624 "/usr/include/stdio.h" 3
extern char *fgets(char *__restrict__, int, FILE *__restrict__);
# 821 "/usr/include/stdio.h" 3
extern int feof(FILE *);
# 165 "/usr/include/stdlib.h" 3
extern double strtod(const char *__restrict__, char **__restrict__);
# 184 "/usr/include/stdlib.h" 3
extern long strtol(const char *__restrict__, char **__restrict__, int);
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
# 16 "nn_cuda.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 61 "nn_cuda.cu"
extern int main(int, char **);
# 146 "nn_cuda.cu"
extern int _Z8loadDataPcRSt6vectorI6recordSaIS1_EERS0_I7latLongSaIS5_EE(char *, struct _ZSt6vectorI6recordSaIS0_EE *, struct _ZSt6vectorI7latLongSaIS0_EE *);
# 211 "nn_cuda.cu"
extern void _Z10findLowestRSt6vectorI6recordSaIS0_EEPfii(struct _ZSt6vectorI6recordSaIS0_EE *, float *, int, int);
# 238 "nn_cuda.cu"
extern int _Z16parseCommandlineiPPcS_PiPfS2_S1_S1_S1_S1_(int, char **, char *, int *, float *, float *, int *, int *, int *, int *);
# 287 "nn_cuda.cu"
extern void _Z10printUsagev(void);
extern int setjmp();
extern void __exception_caught();
extern __attribute__((__noreturn__)) void __rethrow();
extern void __suppress_optim_on_vars_in_try();
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
# 101 "/usr/include/c++/4.4/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordEC1Ev */ __inline__ void _ZNSaI6recordEC1Ev(struct _ZSaI6recordE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordEC2Ev */ __inline__ void _ZNSaI6recordEC2Ev(struct _ZSaI6recordE *const);
# 109 "/usr/include/c++/4.4/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordED1Ev */ __inline__ void _ZNSaI6recordED1Ev(struct _ZSaI6recordE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordED2Ev */ __inline__ void _ZNSaI6recordED2Ev(struct _ZSaI6recordE *const);
# 104 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev(struct _ZSt12_Vector_baseI6recordSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EEC2Ev(struct _ZSt12_Vector_baseI6recordSaIS0_EE *const);
# 131 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev(struct _ZSt12_Vector_baseI6recordSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EED2Ev(struct _ZSt12_Vector_baseI6recordSaIS0_EE *const);
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE *const);
# 207 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EEC1Ev(struct _ZSt6vectorI6recordSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EEC2Ev(struct _ZSt6vectorI6recordSaIS0_EE *const);
# 312 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EED1Ev(struct _ZSt6vectorI6recordSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EED2Ev(struct _ZSt6vectorI6recordSaIS0_EE *const);
# 610 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEixEm */ __inline__ _ZNSt6vectorI6recordSaIS0_EE9referenceE _ZNSt6vectorI6recordSaIS0_EEixEm(struct _ZSt6vectorI6recordSaIS0_EE *const, _ZNSt6vectorI6recordSaIS0_EE9size_typeE);
# 733 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EE9push_backERKS0_ */ __inline__ void _ZNSt6vectorI6recordSaIS0_EE9push_backERKS0_(struct _ZSt6vectorI6recordSaIS0_EE *const, const _ZNSt6vectorI6recordSaIS0_EE10value_typeE *);
# 296 "/usr/include/c++/4.4/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI6recordSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct _ZSt6vectorI6recordSaIS0_EE *const, _ZNSt6vectorI6recordSaIS0_EE8iteratorE, const _ZNSt6vectorI6recordSaIS0_EE10value_typeE *);
# 101 "/usr/include/c++/4.4/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongEC1Ev */ __inline__ void _ZNSaI7latLongEC1Ev(struct _ZSaI7latLongE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongEC2Ev */ __inline__ void _ZNSaI7latLongEC2Ev(struct _ZSaI7latLongE *const);
# 109 "/usr/include/c++/4.4/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongED1Ev */ __inline__ void _ZNSaI7latLongED1Ev(struct _ZSaI7latLongE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongED2Ev */ __inline__ void _ZNSaI7latLongED2Ev(struct _ZSaI7latLongE *const);
# 104 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev(struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EEC2Ev(struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const);
# 131 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev(struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EED2Ev(struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const);
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE *const);
# 207 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EEC1Ev(struct _ZSt6vectorI7latLongSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EEC2Ev(struct _ZSt6vectorI7latLongSaIS0_EE *const);
# 312 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EED1Ev(struct _ZSt6vectorI7latLongSaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EED2Ev(struct _ZSt6vectorI7latLongSaIS0_EE *const);
# 610 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEixEm */ __inline__ _ZNSt6vectorI7latLongSaIS0_EE9referenceE _ZNSt6vectorI7latLongSaIS0_EEixEm(struct _ZSt6vectorI7latLongSaIS0_EE *const, _ZNSt6vectorI7latLongSaIS0_EE9size_typeE);
# 733 "/usr/include/c++/4.4/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EE9push_backERKS0_ */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EE9push_backERKS0_(struct _ZSt6vectorI7latLongSaIS0_EE *const, const _ZNSt6vectorI7latLongSaIS0_EE10value_typeE *);
# 296 "/usr/include/c++/4.4/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI7latLongSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct _ZSt6vectorI7latLongSaIS0_EE *const, _ZNSt6vectorI7latLongSaIS0_EE8iteratorE, const _ZNSt6vectorI7latLongSaIS0_EE10value_typeE *);
# 66 "/usr/include/c++/4.4/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev(struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordEC2Ev(struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const);





extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordED1Ev(struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordED2Ev(struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const);
# 66 "/usr/include/c++/4.4/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev(struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongEC2Ev(struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const);





extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev(struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongED2Ev(struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const);
# 47 "/usr/include/c++/4.4/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt17__throw_bad_allocv(void);
# 67 "/usr/include/c++/4.4/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt20__throw_length_errorPKc(const char *);
# 112 "/usr/include/c++/4.4/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6recordEvT_S2_ */ __inline__ void _ZSt8_DestroyIP6recordEvT_S2_(Record *, Record *);
# 582 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP6recordS1_ET1_T0_S3_S2_ */ __inline__ Record *_ZSt22__copy_move_backward_aILb0EP6recordS1_ET1_T0_S3_S2_(Record *, Record *, Record *);
# 209 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt3maxImERKT_S2_S2_ */ __inline__ const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *_ZSt3maxImERKT_S2_S2_(const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *, const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *);
# 107 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_ */ __inline__ Record *_ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_(Record *, Record *, Record *);
# 386 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP6recordS1_ET1_T0_S3_S2_ */ __inline__ Record *_ZSt13__copy_move_aILb0EP6recordS1_ET1_T0_S3_S2_(Record *, Record *, Record *);
# 112 "/usr/include/c++/4.4/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP7latLongEvT_S2_ */ __inline__ void _ZSt8_DestroyIP7latLongEvT_S2_(LatLong *, LatLong *);
# 582 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP7latLongS1_ET1_T0_S3_S2_ */ __inline__ LatLong *_ZSt22__copy_move_backward_aILb0EP7latLongS1_ET1_T0_S3_S2_(LatLong *, LatLong *, LatLong *);
# 107 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_ */ __inline__ LatLong *_ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_(LatLong *, LatLong *, LatLong *);
# 386 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP7latLongS1_ET1_T0_S3_S2_ */ __inline__ LatLong *_ZSt13__copy_move_aILb0EP7latLongS1_ET1_T0_S3_S2_(LatLong *, LatLong *, LatLong *);
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___15_nn_cuda_cpp1_ii_4c3be9ae(void) __attribute__((__constructor__));
# 167 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
extern struct __C8 *__curr_eh_stack_entry;
extern unsigned short __eh_curr_region;
extern int __catch_clause_number;
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
# 61 "nn_cuda.cu"
int main( int argc,  char **argv)
{  unsigned __T20;
 unsigned __T21;
# 63 "nn_cuda.cu"
 int __cuda_local_var_22171_6_non_const_i;
 float __cuda_local_var_22172_8_non_const_lat;
# 64 "nn_cuda.cu"
 float __cuda_local_var_22172_13_non_const_lng;
 int __cuda_local_var_22173_6_non_const_quiet;
# 65 "nn_cuda.cu"
 int __cuda_local_var_22173_14_non_const_timing;
# 65 "nn_cuda.cu"
 int __cuda_local_var_22173_23_non_const_platform;
# 65 "nn_cuda.cu"
 int __cuda_local_var_22173_34_non_const_device;

 struct _ZSt6vectorI6recordSaIS0_EE __cuda_local_var_22175_25_non_const_records;
 struct _ZSt6vectorI7latLongSaIS0_EE __cuda_local_var_22176_23_non_const_vlocations;
 char __cuda_local_var_22177_7_non_const_filename[512];
 int __cuda_local_var_22178_6_non_const_resultsCount;
# 79 "nn_cuda.cu"
 int __cuda_local_var_22187_9_non_const_numRecords;
# 87 "nn_cuda.cu"
 float *__cuda_local_var_22195_9_non_const_distances;
# 96 "nn_cuda.cu"
 LatLong *__cuda_local_var_22204_12_non_const_locations;
# 116 "nn_cuda.cu"
 int __cuda_local_var_22214_9_non_const_block_size;
 dim3 __cuda_local_var_22215_10_non_const_dimBlock;
 dim3 __cuda_local_var_22216_10_non_const_dimGrid;
# 63 "nn_cuda.cu"
__cuda_local_var_22171_6_non_const_i = 0;

__cuda_local_var_22173_6_non_const_quiet = 0; __cuda_local_var_22173_14_non_const_timing = 0; __cuda_local_var_22173_23_non_const_platform = 0; __cuda_local_var_22173_34_non_const_device = 0;

_ZNSt6vectorI6recordSaIS0_EEC1Ev((&__cuda_local_var_22175_25_non_const_records));
_ZNSt6vectorI7latLongSaIS0_EEC1Ev((&__cuda_local_var_22176_23_non_const_vlocations));

__cuda_local_var_22178_6_non_const_resultsCount = 10;


if (_Z16parseCommandlineiPPcS_PiPfS2_S1_S1_S1_S1_(argc, argv, (__cuda_local_var_22177_7_non_const_filename), (&__cuda_local_var_22178_6_non_const_resultsCount), (&__cuda_local_var_22172_8_non_const_lat), (&__cuda_local_var_22172_13_non_const_lng), (&__cuda_local_var_22173_6_non_const_quiet), (&__cuda_local_var_22173_14_non_const_timing), (&__cuda_local_var_22173_23_non_const_platform), (&__cuda_local_var_22173_34_non_const_device)))
{
_Z10printUsagev(); {
_ZNSt6vectorI7latLongSaIS0_EED1Ev((&__cuda_local_var_22176_23_non_const_vlocations)); _ZNSt6vectorI6recordSaIS0_EED1Ev((&__cuda_local_var_22175_25_non_const_records)); return 0; }
}

__cuda_local_var_22187_9_non_const_numRecords = (_Z8loadDataPcRSt6vectorI6recordSaIS1_EERS0_I7latLongSaIS5_EE((__cuda_local_var_22177_7_non_const_filename), (&__cuda_local_var_22175_25_non_const_records), (&__cuda_local_var_22176_23_non_const_vlocations)));
if (__cuda_local_var_22178_6_non_const_resultsCount > __cuda_local_var_22187_9_non_const_numRecords) { __cuda_local_var_22178_6_non_const_resultsCount = __cuda_local_var_22187_9_non_const_numRecords; }
# 95 "nn_cuda.cu"
__cuda_local_var_22195_9_non_const_distances = ((float *)(malloc((4UL * ((unsigned long)__cuda_local_var_22187_9_non_const_numRecords)))));
__cuda_local_var_22204_12_non_const_locations = ((LatLong *)(malloc((8UL * ((unsigned long)__cuda_local_var_22187_9_non_const_numRecords)))));



memcpy(((void *)__cuda_local_var_22204_12_non_const_locations), ((const void *)(_ZNSt6vectorI7latLongSaIS0_EEixEm((&__cuda_local_var_22176_23_non_const_vlocations), 0UL))), (8UL * ((unsigned long)__cuda_local_var_22187_9_non_const_numRecords)));



m5_work_begin(0UL, 0UL);
# 116 "nn_cuda.cu"
__cuda_local_var_22214_9_non_const_block_size = 16;
{ __T20 = ((unsigned)__cuda_local_var_22214_9_non_const_block_size); { (__cuda_local_var_22215_10_non_const_dimBlock.x) = __T20; (__cuda_local_var_22215_10_non_const_dimBlock.y) = 1U; (__cuda_local_var_22215_10_non_const_dimBlock.z) = 1U; } }
{ __T21 = ((((unsigned)__cuda_local_var_22187_9_non_const_numRecords) / (__cuda_local_var_22215_10_non_const_dimBlock.x)) + ((unsigned)((!(((unsigned)__cuda_local_var_22187_9_non_const_numRecords) % (__cuda_local_var_22215_10_non_const_dimBlock.x))) ? 0 : 1))); { (__cuda_local_var_22216_10_non_const_dimGrid.x) = __T21; (__cuda_local_var_22216_10_non_const_dimGrid.y) = 1U; (__cuda_local_var_22216_10_non_const_dimGrid.z) = 1U; } }


(cudaConfigureCall(__cuda_local_var_22216_10_non_const_dimGrid, __cuda_local_var_22215_10_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z6euclidP7latLongPfiff(__cuda_local_var_22204_12_non_const_locations, __cuda_local_var_22195_9_non_const_distances, __cuda_local_var_22187_9_non_const_numRecords, __cuda_local_var_22172_8_non_const_lat, __cuda_local_var_22172_13_non_const_lng));
cudaThreadSynchronize();
# 128 "nn_cuda.cu"
m5_work_end(0UL, 0UL);



_Z10findLowestRSt6vectorI6recordSaIS0_EEPfii((&__cuda_local_var_22175_25_non_const_records), __cuda_local_var_22195_9_non_const_distances, __cuda_local_var_22187_9_non_const_numRecords, __cuda_local_var_22178_6_non_const_resultsCount);


if (!(__cuda_local_var_22173_6_non_const_quiet)) {
for (__cuda_local_var_22171_6_non_const_i = 0; (__cuda_local_var_22171_6_non_const_i < __cuda_local_var_22178_6_non_const_resultsCount); __cuda_local_var_22171_6_non_const_i++) {
printf(((const char *)"%s --> Distance=%f\n"), (((_ZNSt6vectorI6recordSaIS0_EEixEm((&__cuda_local_var_22175_25_non_const_records), ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22171_6_non_const_i)))->recString)), ((double)((_ZNSt6vectorI6recordSaIS0_EEixEm((&__cuda_local_var_22175_25_non_const_records), ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22171_6_non_const_i)))->distance)));
} }
free(((void *)__cuda_local_var_22195_9_non_const_distances)); { _ZNSt6vectorI7latLongSaIS0_EED1Ev((&__cuda_local_var_22176_23_non_const_vlocations)); _ZNSt6vectorI6recordSaIS0_EED1Ev((&__cuda_local_var_22175_25_non_const_records)); return 0; }




}

int _Z8loadDataPcRSt6vectorI6recordSaIS1_EERS0_I7latLongSaIS5_EE( char *filename,  struct _ZSt6vectorI6recordSaIS0_EE *records,  struct _ZSt6vectorI7latLongSaIS0_EE *locations) {
 FILE *__cuda_local_var_22245_11_non_const_flist;
# 147 "nn_cuda.cu"
 FILE *__cuda_local_var_22245_18_non_const_fp;
 int __cuda_local_var_22246_6_non_const_i;
 char __cuda_local_var_22247_7_non_const_dbfilename[512];

 int __cuda_local_var_22249_6_non_const_start_index;
# 159 "nn_cuda.cu"
 char __cuda_local_var_22257_7_non_const_dbname[64];
 int __cuda_local_var_22258_6_non_const_recNum;
# 148 "nn_cuda.cu"
__cuda_local_var_22246_6_non_const_i = 0;

sprintf((__cuda_local_var_22247_7_non_const_dbfilename), ((const char *)"%s"), filename);
__cuda_local_var_22249_6_non_const_start_index = 0;
for (__cuda_local_var_22246_6_non_const_i = 0; (__cuda_local_var_22246_6_non_const_i < 512); __cuda_local_var_22246_6_non_const_i++) {
if (((int)((__cuda_local_var_22247_7_non_const_dbfilename)[__cuda_local_var_22246_6_non_const_i])) == 47) {
__cuda_local_var_22249_6_non_const_start_index = (__cuda_local_var_22246_6_non_const_i + 1);
} else  { if (((int)((__cuda_local_var_22247_7_non_const_dbfilename)[__cuda_local_var_22246_6_non_const_i])) == 0) {
goto __T22;
} }
} __T22:;

__cuda_local_var_22258_6_non_const_recNum = 0;



__cuda_local_var_22245_11_non_const_flist = (fopen(((const char *)filename), ((const char *)"r")));
while (!(feof(__cuda_local_var_22245_11_non_const_flist))) {
# 171 "nn_cuda.cu"
if ((fscanf(__cuda_local_var_22245_11_non_const_flist, ((const char *)"%s\n"), (__cuda_local_var_22257_7_non_const_dbname))) != 1) {
fprintf(stderr, ((const char *)"error reading filelist\n"));
exit(0);
}
sprintf(((__cuda_local_var_22247_7_non_const_dbfilename) + __cuda_local_var_22249_6_non_const_start_index), ((const char *)"%s"), (__cuda_local_var_22257_7_non_const_dbname));
__cuda_local_var_22245_18_non_const_fp = (fopen(((const char *)(__cuda_local_var_22247_7_non_const_dbfilename)), ((const char *)"r")));
if (!(__cuda_local_var_22245_18_non_const_fp)) {
printf(((const char *)"error opening a db: %s\n"), (__cuda_local_var_22247_7_non_const_dbfilename));
exit(1);
}

while (!(feof(__cuda_local_var_22245_18_non_const_fp))) {
 Record __cuda_local_var_22281_20_non_const_record;
 LatLong __cuda_local_var_22282_21_non_const_latLong;





 char __cuda_local_var_22288_18_non_const_substr[6];
# 185 "nn_cuda.cu"
fgets(((__cuda_local_var_22281_20_non_const_record.recString)), 49, __cuda_local_var_22245_18_non_const_fp);
fgetc(__cuda_local_var_22245_18_non_const_fp);
if (feof(__cuda_local_var_22245_18_non_const_fp)) { goto __T23; }




for (__cuda_local_var_22246_6_non_const_i = 0; (__cuda_local_var_22246_6_non_const_i < 5); __cuda_local_var_22246_6_non_const_i++) { ((__cuda_local_var_22288_18_non_const_substr)[__cuda_local_var_22246_6_non_const_i]) = (*((((__cuda_local_var_22281_20_non_const_record.recString)) + __cuda_local_var_22246_6_non_const_i) + 28)); }
((__cuda_local_var_22288_18_non_const_substr)[5]) = ((char)0);
(__cuda_local_var_22282_21_non_const_latLong.lat) = ((float)(strtod(((const char *)(__cuda_local_var_22288_18_non_const_substr)), ((char **)0LL))));

for (__cuda_local_var_22246_6_non_const_i = 0; (__cuda_local_var_22246_6_non_const_i < 5); __cuda_local_var_22246_6_non_const_i++) { ((__cuda_local_var_22288_18_non_const_substr)[__cuda_local_var_22246_6_non_const_i]) = (*((((__cuda_local_var_22281_20_non_const_record.recString)) + __cuda_local_var_22246_6_non_const_i) + 33)); }
((__cuda_local_var_22288_18_non_const_substr)[5]) = ((char)0);
(__cuda_local_var_22282_21_non_const_latLong.lng) = ((float)(strtod(((const char *)(__cuda_local_var_22288_18_non_const_substr)), ((char **)0LL))));

_ZNSt6vectorI7latLongSaIS0_EE9push_backERKS0_(locations, (((const _ZNSt6vectorI7latLongSaIS0_EE10value_typeE *)&__cuda_local_var_22282_21_non_const_latLong)));
_ZNSt6vectorI6recordSaIS0_EE9push_backERKS0_(records, (((const _ZNSt6vectorI6recordSaIS0_EE10value_typeE *)&__cuda_local_var_22281_20_non_const_record)));
__cuda_local_var_22258_6_non_const_recNum++;
} __T23:;
fclose(__cuda_local_var_22245_18_non_const_fp);
}
fclose(__cuda_local_var_22245_11_non_const_flist);

return __cuda_local_var_22258_6_non_const_recNum;
}

void _Z10findLowestRSt6vectorI6recordSaIS0_EEPfii( struct _ZSt6vectorI6recordSaIS0_EE *records,  float *distances,  int numRecords,  int topN) {
 int __cuda_local_var_22310_7_non_const_i;
# 212 "nn_cuda.cu"
 int __cuda_local_var_22310_9_non_const_j;
 float __cuda_local_var_22311_9_non_const_val;
 int __cuda_local_var_22312_7_non_const_minLoc;
 Record *__cuda_local_var_22313_11_non_const_tempRec;
 float __cuda_local_var_22314_9_non_const_tempDist;

for (__cuda_local_var_22310_7_non_const_i = 0; (__cuda_local_var_22310_7_non_const_i < topN); __cuda_local_var_22310_7_non_const_i++) {
__cuda_local_var_22312_7_non_const_minLoc = __cuda_local_var_22310_7_non_const_i;
for (__cuda_local_var_22310_9_non_const_j = __cuda_local_var_22310_7_non_const_i; (__cuda_local_var_22310_9_non_const_j < numRecords); __cuda_local_var_22310_9_non_const_j++) {
__cuda_local_var_22311_9_non_const_val = (distances[__cuda_local_var_22310_9_non_const_j]);
if (__cuda_local_var_22311_9_non_const_val < (distances[__cuda_local_var_22312_7_non_const_minLoc])) { __cuda_local_var_22312_7_non_const_minLoc = __cuda_local_var_22310_9_non_const_j; }
}

__cuda_local_var_22313_11_non_const_tempRec = (_ZNSt6vectorI6recordSaIS0_EEixEm(records, ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22310_7_non_const_i)));
(*(_ZNSt6vectorI6recordSaIS0_EEixEm(records, ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22310_7_non_const_i)))) = (*(_ZNSt6vectorI6recordSaIS0_EEixEm(records, ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22312_7_non_const_minLoc))));
(*(_ZNSt6vectorI6recordSaIS0_EEixEm(records, ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22312_7_non_const_minLoc)))) = (*__cuda_local_var_22313_11_non_const_tempRec);

__cuda_local_var_22314_9_non_const_tempDist = (distances[__cuda_local_var_22310_7_non_const_i]);
(distances[__cuda_local_var_22310_7_non_const_i]) = (distances[__cuda_local_var_22312_7_non_const_minLoc]);
(distances[__cuda_local_var_22312_7_non_const_minLoc]) = __cuda_local_var_22314_9_non_const_tempDist;


((_ZNSt6vectorI6recordSaIS0_EEixEm(records, ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)__cuda_local_var_22310_7_non_const_i)))->distance) = (distances[__cuda_local_var_22310_7_non_const_i]);
} 
}

int _Z16parseCommandlineiPPcS_PiPfS2_S1_S1_S1_S1_( int argc,  char **argv,  char *filename,  int *r,  float *lat,  float *lng, 
int *q,  int *t,  int *p,  int *d) {  const char *__T24;
 const char *__T25;
# 240 "nn_cuda.cu"
 int __cuda_local_var_22338_9_non_const_i;


 char __cuda_local_var_22341_10_non_const_flag;
# 241 "nn_cuda.cu"
if (argc < 2) { return 1; }
strncpy(filename, ((const char *)(argv[1])), 100UL);


for (__cuda_local_var_22338_9_non_const_i = 1; (__cuda_local_var_22338_9_non_const_i < argc); __cuda_local_var_22338_9_non_const_i++) {
if (((int)((argv[__cuda_local_var_22338_9_non_const_i])[0])) == 45) {
__cuda_local_var_22341_10_non_const_flag = ((argv[__cuda_local_var_22338_9_non_const_i])[1]);
switch ((int)__cuda_local_var_22341_10_non_const_flag) {  const char *__T26;
 const char *__T27;
 const char *__T28;
# 249 "nn_cuda.cu"
case 114:
__cuda_local_var_22338_9_non_const_i++;
(*r) = ((__T26 = ((const char *)(argv[__cuda_local_var_22338_9_non_const_i]))) , ((int)(strtol(__T26, ((char **)0LL), 10))));
goto __T29;
case 108:
if (((int)((argv[__cuda_local_var_22338_9_non_const_i])[2])) == 97) {
(*lat) = ((float)((__T24 = ((const char *)(argv[(__cuda_local_var_22338_9_non_const_i + 1)]))) , (strtod(__T24, ((char **)0LL)))));
}
else  {
(*lng) = ((float)((__T25 = ((const char *)(argv[(__cuda_local_var_22338_9_non_const_i + 1)]))) , (strtod(__T25, ((char **)0LL)))));
}
__cuda_local_var_22338_9_non_const_i++;
goto __T29;
case 104:
return 1;
goto __T29;
case 113:
(*q) = 1;
goto __T29;
case 116:
(*t) = 1;
goto __T29;
case 112:
__cuda_local_var_22338_9_non_const_i++;
(*p) = ((__T27 = ((const char *)(argv[__cuda_local_var_22338_9_non_const_i]))) , ((int)(strtol(__T27, ((char **)0LL), 10))));
goto __T29;
case 100:
__cuda_local_var_22338_9_non_const_i++;
(*d) = ((__T28 = ((const char *)(argv[__cuda_local_var_22338_9_non_const_i]))) , ((int)(strtol(__T28, ((char **)0LL), 10))));
goto __T29;
} __T29:;
}
}
if ((((*d) >= 0) && ((*p) < 0)) || (((*p) >= 0) && ((*d) < 0))) {
return 1; }
return 0;
}

void _Z10printUsagev(void) {
printf(((const char *)"Nearest Neighbor Usage\n"));
printf(((const char *)"\n"));
printf(((const char *)"nearestNeighbor [filename] -r [int] -lat [float] -lng [float] [-hqt] [-p [int] -d [int]]\n"));
printf(((const char *)"\n"));
printf(((const char *)"example:\n"));
printf(((const char *)"$ ./nearestNeighbor filelist.txt -r 5 -lat 30 -lng 90\n"));
printf(((const char *)"\n"));
printf(((const char *)"filename     the filename that lists the data input files\n"));
printf(((const char *)"-r [int]     the number of records to return (default: 10)\n"));
printf(((const char *)"-lat [float] the latitude for nearest neighbors (default: 0)\n"));
printf(((const char *)"-lng [float] the longitude for nearest neighbors (default: 0)\n"));
printf(((const char *)"\n"));
printf(((const char *)"-h, --help   Display the help file\n"));
printf(((const char *)"-q           Quiet mode. Suppress all text output.\n"));
printf(((const char *)"-t           Print timing information.\n"));
printf(((const char *)"\n"));
printf(((const char *)"-p [int]     Choose the platform (must choose both platform and device)\n"));
printf(((const char *)"-d [int]     Choose the device (must choose both platform and device)\n"));
printf(((const char *)"\n"));
printf(((const char *)"\n"));
printf(((const char *)"Notes: 1. The filename is required as the first parameter.\n"));
printf(((const char *)"       2. If you declare either the device or the platform,\n"));
printf(((const char *)"          you must declare both.\n\n")); 
}
__asm__(".align 2");
# 101 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordEC1Ev */ __inline__ void _ZNSaI6recordEC1Ev( struct _ZSaI6recordE *const this) { { _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6recordEE *)this)); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordEC2Ev */ __inline__ void _ZNSaI6recordEC2Ev( struct _ZSaI6recordE *const this) {  _ZNSaI6recordEC1Ev(this);  }
__asm__(".align 2");




 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordED1Ev */ __inline__ void _ZNSaI6recordED1Ev( struct _ZSaI6recordE *const this) {  { { _ZN9__gnu_cxx13new_allocatorI6recordED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6recordEE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6recordED2Ev */ __inline__ void _ZNSaI6recordED2Ev( struct _ZSaI6recordE *const this) {  _ZNSaI6recordED1Ev(this);  }
__asm__(".align 2");
# 104 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev( struct _ZSt12_Vector_baseI6recordSaIS0_EE *const this)
{ { { _ZNSaI6recordEC1Ev(((struct _ZSaI6recordE *)(&(this->_M_impl)))); } ((this->_M_impl)._M_start) = ((_ZNSaI6recordE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSaI6recordE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSaI6recordE7pointerE)0LL); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EEC2Ev( struct _ZSt12_Vector_baseI6recordSaIS0_EE *const this) {  _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 131 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev( struct _ZSt12_Vector_baseI6recordSaIS0_EE *const this)
{  _ZNSaI6recordE7pointerE __T211;
 size_t __T212;
# 132 "/usr/include/c++/4.4/bits/stl_vector.h" 3
{ __T211 = ((this->_M_impl)._M_start); __T212 = ((size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T211) { { _ZdlPv(((void *)__T211)); } } } } {
{ _ZNSaI6recordED1Ev(((struct _ZSaI6recordE *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EED2Ev( struct _ZSt12_Vector_baseI6recordSaIS0_EE *const this) {  _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI6recordED1Ev(((struct _ZSaI6recordE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI6recordSaIS0_EE12_Vector_implE *const this) {  _ZNSaI6recordED1Ev(((struct _ZSaI6recordE *)this));  }
__asm__(".align 2");
# 207 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EEC1Ev( struct _ZSt6vectorI6recordSaIS0_EE *const this)
{ { _ZNSt12_Vector_baseI6recordSaIS0_EEC1Ev((&(this->__b_St12_Vector_baseI6recordSaIS0_EE))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EEC2Ev( struct _ZSt6vectorI6recordSaIS0_EE *const this) {  _ZNSt6vectorI6recordSaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 312 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EED1Ev( struct _ZSt6vectorI6recordSaIS0_EE *const this)
{  Record *__T213;
 Record *__T214;
# 313 "/usr/include/c++/4.4/bits/stl_vector.h" 3
{ __T213 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start); __T214 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6recordEvT_S2_(__T213, __T214); } } {
{ _ZNSt12_Vector_baseI6recordSaIS0_EED1Ev((&(this->__b_St12_Vector_baseI6recordSaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6recordSaIS0_EED2Ev( struct _ZSt6vectorI6recordSaIS0_EE *const this) {  _ZNSt6vectorI6recordSaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 610 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EEixEm */ __inline__ _ZNSt6vectorI6recordSaIS0_EE9referenceE _ZNSt6vectorI6recordSaIS0_EEixEm( struct _ZSt6vectorI6recordSaIS0_EE *const this,  _ZNSt6vectorI6recordSaIS0_EE9size_typeE __n)
{ return (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start) + __n; }
__asm__(".align 2");
# 733 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EE9push_backERKS0_ */ __inline__ void _ZNSt6vectorI6recordSaIS0_EE9push_backERKS0_( struct _ZSt6vectorI6recordSaIS0_EE *const this,  const _ZNSt6vectorI6recordSaIS0_EE10value_typeE *__x)
{  _ZN9__gnu_cxx13new_allocatorI6recordE7pointerE __T215;
 void *__T216;
 void *__T217;
 struct record *__T218;
 _ZNSt6vectorI6recordSaIS0_EE8iteratorE __T219;
# 735 "/usr/include/c++/4.4/bits/stl_vector.h" 3
if ((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_end_of_storage))
{
{ __T215 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish); { (Record *)((__T218 = ((struct record *)((__T217 = (__T216 = ((void *)__T215))) , __T217))) ? (((*__T218) = ((*(Record *)__x))) , __T218) : ((struct record *)0LL)); } }
++(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish);
} else  {

_ZNSt6vectorI6recordSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(this, (((void)((__T219._M_current) = (*(((const _ZNSt6vectorI6recordSaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish)))))) , __T219), __x); } 
}
__asm__(".align 2");
# 296 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6recordSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI6recordSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_( struct _ZSt6vectorI6recordSaIS0_EE *const this,  _ZNSt6vectorI6recordSaIS0_EE8iteratorE __position,  const _ZNSt6vectorI6recordSaIS0_EE10value_typeE *__x)

{
if ((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_end_of_storage))
{  _ZN9__gnu_cxx13new_allocatorI6recordE7pointerE __T220;
 const Record *__T221;
 void *__T222;
 void *__T223;
 struct record *__T224;
 Record *__T225;
 Record *__T226;
 Record *__T227;
# 306 "/usr/include/c++/4.4/bits/vector.tcc" 3
 Record __cuda_local_var_20573_8_non_const___x_copy;
# 301 "/usr/include/c++/4.4/bits/vector.tcc" 3
{ __T220 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish); __T221 = ((const Record *)((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - 1)); { (Record *)((__T224 = ((struct record *)((__T223 = (__T222 = ((void *)__T220))) , __T223))) ? (((*__T224) = ((*(Record *)__T221))) , __T224) : ((struct record *)0LL)); } }


++(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish);

__cuda_local_var_20573_8_non_const___x_copy = ((*(Record *)__x));

{ __T225 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))); __T226 = ((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - 2); __T227 = ((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - 1); { ; (Record *)(_ZSt22__copy_move_backward_aILb0EP6recordS1_ET1_T0_S3_S2_(__T225, __T226, __T227)); } }



(*(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current)) = __cuda_local_var_20573_8_non_const___x_copy;



}

else  { static struct __C5 __T228[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 _ZNSt6vectorI6recordSaIS0_EE9size_typeE __T229;
 const char *__T230;
 _ZNSt6vectorI6recordSaIS0_EE9size_typeE __T231;
 _ZNSt6vectorI6recordSaIS0_EE9size_typeE __T232;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE __T233;
 _ZNSt6vectorI6recordSaIS0_EE8iteratorE __T234;
 _ZNSt6vectorI6recordSaIS0_EE8iteratorE __T235;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *__T236;
 struct __C8 __T237;
 void *__T238;
 void *__T239;
 struct record *__T240;
 Record *__T241;
 Record *__T242;
 Record *__T243;
 Record *__T244;
 Record *__T245;
 Record *__T246;
 _ZNSaI6recordE7pointerE __T247;
 size_t __T248;
# 319 "/usr/include/c++/4.4/bits/vector.tcc" 3
 _ZNSt6vectorI6recordSaIS0_EE9size_typeE __cuda_local_var_20586_20_non_const___len;

 _ZNSt6vectorI6recordSaIS0_EE9size_typeE __cuda_local_var_20588_20_non_const___elems_before;
 _ZNSt6vectorI6recordSaIS0_EE7pointerE __cuda_local_var_20589_12_non_const___new_start;
 _ZNSt6vectorI6recordSaIS0_EE7pointerE __cuda_local_var_20590_12_non_const___new_finish;
# 319 "/usr/include/c++/4.4/bits/vector.tcc" 3
__cuda_local_var_20586_20_non_const___len = (((__T229 = 1UL) , (void)(__T230 = ((const char *)"vector::_M_insert_aux"))) , ((((((((const struct _ZN9__gnu_cxx13new_allocatorI6recordEE *)0LL) , 329406144173384850UL) - ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start)))) < __T229) ? (_ZSt20__throw_length_errorPKc(__T230)) : ((void)0)) , (void)(__T232 = (((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start))) + (*(_ZSt3maxImERKT_S2_S2_(((__T231 = ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start)))) , (((const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *)&__T231))), (((const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *)&__T229)))))))) , (((__T232 < ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6recordSaIS0_EE *)this)->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start)))) || (__T232 > (((const struct _ZN9__gnu_cxx13new_allocatorI6recordEE *)0LL) , 329406144173384850UL))) ? (((const struct _ZN9__gnu_cxx13new_allocatorI6recordEE *)0LL) , 329406144173384850UL) : __T232)));

__cuda_local_var_20588_20_non_const___elems_before = ((_ZNSt6vectorI6recordSaIS0_EE9size_typeE)((__T236 = ((__T233 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)((__T234 = (((void)((__T235._M_current) = (*(((const _ZNSt6vectorI6recordSaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start)))))) , __T235)) , (&__T234))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__T233))) , ((*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))) - (*(&(__T236->_M_current))))));
__cuda_local_var_20589_12_non_const___new_start = ((__cuda_local_var_20586_20_non_const___len != 0UL) ? (((__builtin_expect(((long)(__cuda_local_var_20586_20_non_const___len > 329406144173384850UL)), 0L)) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((Record *)(_Znwm((__cuda_local_var_20586_20_non_const___len * 56UL))))) : ((_ZN9__gnu_cxx13new_allocatorI6recordE7pointerE)0LL));
__cuda_local_var_20590_12_non_const___new_finish = __cuda_local_var_20589_12_non_const___new_start; { (__T237.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T237); (__T237.kind) = ((unsigned char)5U); (((__T237.variant).try_block).catch_entries) = (__T228); (((__T237.variant).try_block).rtinfo) = ((void *)0LL); (((__T237.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T237.variant).try_block).setjmp_buffer)))) == 0)
{ __T249:;




{ (Record *)((__T240 = ((struct record *)((__T239 = (__T238 = ((void *)(__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20588_20_non_const___elems_before)))) , __T239))) ? (((*__T240) = ((*(Record *)__x))) , __T240) : ((struct record *)0LL)); }
# 336 "/usr/include/c++/4.4/bits/vector.tcc" 3
__cuda_local_var_20590_12_non_const___new_finish = ((_ZNSt6vectorI6recordSaIS0_EE7pointerE)0LL);

__cuda_local_var_20590_12_non_const___new_finish = (((__T241 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start)) , (void)(__T242 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))))) , (_ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_(__T241, __T242, __cuda_local_var_20589_12_non_const___new_start)));



++__cuda_local_var_20590_12_non_const___new_finish;

__cuda_local_var_20590_12_non_const___new_finish = (((__T243 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6recordSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current)))) , (void)(__T244 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish))) , (_ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_(__T243, __T244, __cuda_local_var_20590_12_non_const___new_finish)));




}
else  if (__catch_clause_number == 1)
{ __exception_caught();
if (!(__cuda_local_var_20590_12_non_const___new_finish)) {
{ (void)(__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20588_20_non_const___elems_before); } } else  {

{ _ZSt8_DestroyIP6recordEvT_S2_(__cuda_local_var_20589_12_non_const___new_start, __cuda_local_var_20590_12_non_const___new_finish); } }
{ if (__cuda_local_var_20589_12_non_const___new_start) { { _ZdlPv(((void *)__cuda_local_var_20589_12_non_const___new_start)); } } }
__rethrow();
} else  { __suppress_optim_on_vars_in_try((&__cuda_local_var_20590_12_non_const___new_finish)); goto __T249; } __curr_eh_stack_entry = (__T237.next); }
{ __T245 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start); __T246 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6recordEvT_S2_(__T245, __T246); } }

{ __T247 = (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start); __T248 = ((size_t)((((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start))); { if (__T247) { { _ZdlPv(((void *)__T247)); } } } }


(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_start) = __cuda_local_var_20589_12_non_const___new_start;
(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_finish) = __cuda_local_var_20590_12_non_const___new_finish;
(((this->__b_St12_Vector_baseI6recordSaIS0_EE)._M_impl)._M_end_of_storage) = (__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20586_20_non_const___len);
} 
}
__asm__(".align 2");
# 101 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongEC1Ev */ __inline__ void _ZNSaI7latLongEC1Ev( struct _ZSaI7latLongE *const this) { { _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *)this)); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongEC2Ev */ __inline__ void _ZNSaI7latLongEC2Ev( struct _ZSaI7latLongE *const this) {  _ZNSaI7latLongEC1Ev(this);  }
__asm__(".align 2");




 __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongED1Ev */ __inline__ void _ZNSaI7latLongED1Ev( struct _ZSaI7latLongE *const this) {  { { _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI7latLongED2Ev */ __inline__ void _ZNSaI7latLongED2Ev( struct _ZSaI7latLongE *const this) {  _ZNSaI7latLongED1Ev(this);  }
__asm__(".align 2");
# 104 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev( struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const this)
{ { { _ZNSaI7latLongEC1Ev(((struct _ZSaI7latLongE *)(&(this->_M_impl)))); } ((this->_M_impl)._M_start) = ((_ZNSaI7latLongE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSaI7latLongE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSaI7latLongE7pointerE)0LL); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EEC2Ev( struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const this) {  _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 131 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev( struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const this)
{  _ZNSaI7latLongE7pointerE __T250;
 size_t __T251;
# 132 "/usr/include/c++/4.4/bits/stl_vector.h" 3
{ __T250 = ((this->_M_impl)._M_start); __T251 = ((size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T250) { { _ZdlPv(((void *)__T250)); } } } } {
{ _ZNSaI7latLongED1Ev(((struct _ZSaI7latLongE *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EED2Ev( struct _ZSt12_Vector_baseI7latLongSaIS0_EE *const this) {  _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 73 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI7latLongED1Ev(((struct _ZSaI7latLongE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI7latLongSaIS0_EE12_Vector_implE *const this) {  _ZNSaI7latLongED1Ev(((struct _ZSaI7latLongE *)this));  }
__asm__(".align 2");
# 207 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EEC1Ev( struct _ZSt6vectorI7latLongSaIS0_EE *const this)
{ { _ZNSt12_Vector_baseI7latLongSaIS0_EEC1Ev((&(this->__b_St12_Vector_baseI7latLongSaIS0_EE))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EEC2Ev( struct _ZSt6vectorI7latLongSaIS0_EE *const this) {  _ZNSt6vectorI7latLongSaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 312 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EED1Ev( struct _ZSt6vectorI7latLongSaIS0_EE *const this)
{  LatLong *__T252;
 LatLong *__T253;
# 313 "/usr/include/c++/4.4/bits/stl_vector.h" 3
{ __T252 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start); __T253 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP7latLongEvT_S2_(__T252, __T253); } } {
{ _ZNSt12_Vector_baseI7latLongSaIS0_EED1Ev((&(this->__b_St12_Vector_baseI7latLongSaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EED2Ev( struct _ZSt6vectorI7latLongSaIS0_EE *const this) {  _ZNSt6vectorI7latLongSaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 610 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EEixEm */ __inline__ _ZNSt6vectorI7latLongSaIS0_EE9referenceE _ZNSt6vectorI7latLongSaIS0_EEixEm( struct _ZSt6vectorI7latLongSaIS0_EE *const this,  _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __n)
{ return (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start) + __n; }
__asm__(".align 2");
# 733 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EE9push_backERKS0_ */ __inline__ void _ZNSt6vectorI7latLongSaIS0_EE9push_backERKS0_( struct _ZSt6vectorI7latLongSaIS0_EE *const this,  const _ZNSt6vectorI7latLongSaIS0_EE10value_typeE *__x)
{  _ZN9__gnu_cxx13new_allocatorI7latLongE7pointerE __T254;
 void *__T255;
 void *__T256;
 struct latLong *__T257;
 _ZNSt6vectorI7latLongSaIS0_EE8iteratorE __T258;
# 735 "/usr/include/c++/4.4/bits/stl_vector.h" 3
if ((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_end_of_storage))
{
{ __T254 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish); { (LatLong *)((__T257 = ((struct latLong *)((__T256 = (__T255 = ((void *)__T254))) , __T256))) ? (((*__T257) = ((*(LatLong *)__x))) , __T257) : ((struct latLong *)0LL)); } }
++(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish);
} else  {

_ZNSt6vectorI7latLongSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(this, (((void)((__T258._M_current) = (*(((const _ZNSt6vectorI7latLongSaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish)))))) , __T258), __x); } 
}
__asm__(".align 2");
# 296 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI7latLongSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI7latLongSaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_( struct _ZSt6vectorI7latLongSaIS0_EE *const this,  _ZNSt6vectorI7latLongSaIS0_EE8iteratorE __position,  const _ZNSt6vectorI7latLongSaIS0_EE10value_typeE *__x)

{
if ((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_end_of_storage))
{  _ZN9__gnu_cxx13new_allocatorI7latLongE7pointerE __T259;
 const LatLong *__T260;
 void *__T261;
 void *__T262;
 struct latLong *__T263;
 LatLong *__T264;
 LatLong *__T265;
 LatLong *__T266;
# 306 "/usr/include/c++/4.4/bits/vector.tcc" 3
 LatLong __cuda_local_var_20573_8_non_const___x_copy;
# 301 "/usr/include/c++/4.4/bits/vector.tcc" 3
{ __T259 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish); __T260 = ((const LatLong *)((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - 1)); { (LatLong *)((__T263 = ((struct latLong *)((__T262 = (__T261 = ((void *)__T259))) , __T262))) ? (((*__T263) = ((*(LatLong *)__T260))) , __T263) : ((struct latLong *)0LL)); } }


++(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish);

__cuda_local_var_20573_8_non_const___x_copy = ((*(LatLong *)__x));

{ __T264 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))); __T265 = ((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - 2); __T266 = ((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - 1); { ; (LatLong *)(_ZSt22__copy_move_backward_aILb0EP7latLongS1_ET1_T0_S3_S2_(__T264, __T265, __T266)); } }



(*(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current)) = __cuda_local_var_20573_8_non_const___x_copy;



}

else  { static struct __C5 __T267[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __T268;
 const char *__T269;
 _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __T270;
 _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __T271;
 struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE __T272;
 _ZNSt6vectorI7latLongSaIS0_EE8iteratorE __T273;
 _ZNSt6vectorI7latLongSaIS0_EE8iteratorE __T274;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *__T275;
 struct __C8 __T276;
 void *__T277;
 void *__T278;
 struct latLong *__T279;
 LatLong *__T280;
 LatLong *__T281;
 LatLong *__T282;
 LatLong *__T283;
 LatLong *__T284;
 LatLong *__T285;
 _ZNSaI7latLongE7pointerE __T286;
 size_t __T287;
# 319 "/usr/include/c++/4.4/bits/vector.tcc" 3
 _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __cuda_local_var_20586_20_non_const___len;

 _ZNSt6vectorI7latLongSaIS0_EE9size_typeE __cuda_local_var_20588_20_non_const___elems_before;
 _ZNSt6vectorI7latLongSaIS0_EE7pointerE __cuda_local_var_20589_12_non_const___new_start;
 _ZNSt6vectorI7latLongSaIS0_EE7pointerE __cuda_local_var_20590_12_non_const___new_finish;
# 319 "/usr/include/c++/4.4/bits/vector.tcc" 3
__cuda_local_var_20586_20_non_const___len = (((__T268 = 1UL) , (void)(__T269 = ((const char *)"vector::_M_insert_aux"))) , ((((((((const struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *)0LL) , 2305843009213693951UL) - ((_ZNSt6vectorI7latLongSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start)))) < __T268) ? (_ZSt20__throw_length_errorPKc(__T269)) : ((void)0)) , (void)(__T271 = (((_ZNSt6vectorI7latLongSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start))) + (*(_ZSt3maxImERKT_S2_S2_(((__T270 = ((_ZNSt6vectorI7latLongSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start)))) , (((const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *)&__T270))), (((const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *)&__T268)))))))) , (((__T271 < ((_ZNSt6vectorI7latLongSaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI7latLongSaIS0_EE *)this)->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start)))) || (__T271 > (((const struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *)0LL) , 2305843009213693951UL))) ? (((const struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *)0LL) , 2305843009213693951UL) : __T271)));

__cuda_local_var_20588_20_non_const___elems_before = ((_ZNSt6vectorI7latLongSaIS0_EE9size_typeE)((__T275 = ((__T272 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)((__T273 = (((void)((__T274._M_current) = (*(((const _ZNSt6vectorI7latLongSaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start)))))) , __T274)) , (&__T273))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__T272))) , ((*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))) - (*(&(__T275->_M_current))))));
__cuda_local_var_20589_12_non_const___new_start = ((__cuda_local_var_20586_20_non_const___len != 0UL) ? (((__builtin_expect(((long)(__cuda_local_var_20586_20_non_const___len > 2305843009213693951UL)), 0L)) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((LatLong *)(_Znwm((__cuda_local_var_20586_20_non_const___len * 8UL))))) : ((_ZN9__gnu_cxx13new_allocatorI7latLongE7pointerE)0LL));
__cuda_local_var_20590_12_non_const___new_finish = __cuda_local_var_20589_12_non_const___new_start; { (__T276.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T276); (__T276.kind) = ((unsigned char)5U); (((__T276.variant).try_block).catch_entries) = (__T267); (((__T276.variant).try_block).rtinfo) = ((void *)0LL); (((__T276.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T276.variant).try_block).setjmp_buffer)))) == 0)
{ __T288:;




{ (LatLong *)((__T279 = ((struct latLong *)((__T278 = (__T277 = ((void *)(__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20588_20_non_const___elems_before)))) , __T278))) ? (((*__T279) = ((*(LatLong *)__x))) , __T279) : ((struct latLong *)0LL)); }
# 336 "/usr/include/c++/4.4/bits/vector.tcc" 3
__cuda_local_var_20590_12_non_const___new_finish = ((_ZNSt6vectorI7latLongSaIS0_EE7pointerE)0LL);

__cuda_local_var_20590_12_non_const___new_finish = (((__T280 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start)) , (void)(__T281 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current))))) , (_ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_(__T280, __T281, __cuda_local_var_20589_12_non_const___new_start)));



++__cuda_local_var_20590_12_non_const___new_finish;

__cuda_local_var_20590_12_non_const___new_finish = (((__T282 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP7latLongSt6vectorIS1_SaIS1_EEEE *)&__position))._M_current)))) , (void)(__T283 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish))) , (_ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_(__T282, __T283, __cuda_local_var_20590_12_non_const___new_finish)));




}
else  if (__catch_clause_number == 1)
{ __exception_caught();
if (!(__cuda_local_var_20590_12_non_const___new_finish)) {
{ (void)(__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20588_20_non_const___elems_before); } } else  {

{ _ZSt8_DestroyIP7latLongEvT_S2_(__cuda_local_var_20589_12_non_const___new_start, __cuda_local_var_20590_12_non_const___new_finish); } }
{ if (__cuda_local_var_20589_12_non_const___new_start) { { _ZdlPv(((void *)__cuda_local_var_20589_12_non_const___new_start)); } } }
__rethrow();
} else  { __suppress_optim_on_vars_in_try((&__cuda_local_var_20590_12_non_const___new_finish)); goto __T288; } __curr_eh_stack_entry = (__T276.next); }
{ __T284 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start); __T285 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP7latLongEvT_S2_(__T284, __T285); } }

{ __T286 = (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start); __T287 = ((size_t)((((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start))); { if (__T286) { { _ZdlPv(((void *)__T286)); } } } }


(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_start) = __cuda_local_var_20589_12_non_const___new_start;
(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_finish) = __cuda_local_var_20590_12_non_const___new_finish;
(((this->__b_St12_Vector_baseI7latLongSaIS0_EE)._M_impl)._M_end_of_storage) = (__cuda_local_var_20589_12_non_const___new_start + __cuda_local_var_20586_20_non_const___len);
} 
}
__asm__(".align 2");
# 66 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev( struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordEC2Ev( struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const this) {  _ZN9__gnu_cxx13new_allocatorI6recordEC1Ev(this);  }
__asm__(".align 2");



 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordED1Ev( struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6recordED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6recordED2Ev( struct _ZN9__gnu_cxx13new_allocatorI6recordEE *const this) {  _ZN9__gnu_cxx13new_allocatorI6recordED1Ev(this);  }
__asm__(".align 2");
# 66 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev( struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongEC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongEC2Ev( struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const this) {  _ZN9__gnu_cxx13new_allocatorI7latLongEC1Ev(this);  }
__asm__(".align 2");



 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev( struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI7latLongED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI7latLongED2Ev( struct _ZN9__gnu_cxx13new_allocatorI7latLongEE *const this) {  _ZN9__gnu_cxx13new_allocatorI7latLongED1Ev(this);  }
# 112 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6recordEvT_S2_ */ __inline__ void _ZSt8_DestroyIP6recordEvT_S2_( Record *__first,  Record *__last)
{


{ } 

}
# 582 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP6recordS1_ET1_T0_S3_S2_ */ __inline__ Record *_ZSt22__copy_move_backward_aILb0EP6recordS1_ET1_T0_S3_S2_( Record *__first,  Record *__last,  Record *__result)
{  ptrdiff_t __T289;



 char __cuda_local_var_17819_18_const___simple;
# 587 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
__cuda_local_var_17819_18_const___simple = ((char)1);




return ((__T289 = (((const Record *)__last) - ((const Record *)__first))) , (void)(__builtin_memmove(((void *)(__result - __T289)), ((const void *)((const Record *)__first)), (56UL * ((unsigned long)__T289))))) , (__result - __T289);



}
# 209 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt3maxImERKT_S2_S2_ */ __inline__ const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *_ZSt3maxImERKT_S2_S2_( const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *__a,  const _ZNSt6vectorI6recordSaIS0_EE9size_typeE *__b)
{



if ((*__a) < (*__b)) {
return __b; }
return __a;
}
# 107 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_ */ __inline__ Record *_ZSt18uninitialized_copyIP6recordS1_ET0_T_S3_S2_( Record *__first,  Record *__last, 
Record *__result)
{
# 115 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
return (Record *)(_ZSt13__copy_move_aILb0EP6recordS1_ET1_T0_S3_S2_(__first, __last, __result));


}
# 386 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP6recordS1_ET1_T0_S3_S2_ */ __inline__ Record *_ZSt13__copy_move_aILb0EP6recordS1_ET1_T0_S3_S2_( Record *__first,  Record *__last,  Record *__result)
{



 char __cuda_local_var_17709_18_const___simple;
# 391 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
__cuda_local_var_17709_18_const___simple = ((char)1);




return (__builtin_memmove(((void *)__result), ((const void *)((const Record *)__first)), (56UL * ((unsigned long)(((const Record *)__last) - ((const Record *)__first)))))) , (__result + (((const Record *)__last) - ((const Record *)__first)));

}
# 112 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP7latLongEvT_S2_ */ __inline__ void _ZSt8_DestroyIP7latLongEvT_S2_( LatLong *__first,  LatLong *__last)
{


{ } 

}
# 582 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP7latLongS1_ET1_T0_S3_S2_ */ __inline__ LatLong *_ZSt22__copy_move_backward_aILb0EP7latLongS1_ET1_T0_S3_S2_( LatLong *__first,  LatLong *__last,  LatLong *__result)
{  ptrdiff_t __T290;



 char __cuda_local_var_17819_18_const___simple;
# 587 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
__cuda_local_var_17819_18_const___simple = ((char)1);




return ((__T290 = (((const LatLong *)__last) - ((const LatLong *)__first))) , (void)(__builtin_memmove(((void *)(__result - __T290)), ((const void *)((const LatLong *)__first)), (8UL * ((unsigned long)__T290))))) , (__result - __T290);



}
# 107 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_ */ __inline__ LatLong *_ZSt18uninitialized_copyIP7latLongS1_ET0_T_S3_S2_( LatLong *__first,  LatLong *__last, 
LatLong *__result)
{
# 115 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
return (LatLong *)(_ZSt13__copy_move_aILb0EP7latLongS1_ET1_T0_S3_S2_(__first, __last, __result));


}
# 386 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP7latLongS1_ET1_T0_S3_S2_ */ __inline__ LatLong *_ZSt13__copy_move_aILb0EP7latLongS1_ET1_T0_S3_S2_( LatLong *__first,  LatLong *__last,  LatLong *__result)
{



 char __cuda_local_var_17709_18_const___simple;
# 391 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
__cuda_local_var_17709_18_const___simple = ((char)1);




return (__builtin_memmove(((void *)__result), ((const void *)((const LatLong *)__first)), (8UL * ((unsigned long)(((const LatLong *)__last) - ((const LatLong *)__first)))))) , (__result + (((const LatLong *)__last) - ((const LatLong *)__first)));

}
static void __sti___15_nn_cuda_cpp1_ii_4c3be9ae(void) {   }

#include "nn_cuda.cudafe1.stub.c"
