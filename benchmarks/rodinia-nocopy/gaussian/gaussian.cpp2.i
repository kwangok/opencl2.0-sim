# 1 "gaussian.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "gaussian.cudafe1.gpu"
typedef char __nv_bool;
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv};
# 271 "/usr/include/libio.h" 3
struct _IO_FILE;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval;
# 203 "/usr/include/math.h" 3
enum _ZUt_ {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL};
# 296 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_};
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone;
# 93 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {
# 96 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_REAL,
# 99 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_VIRTUAL,
# 103 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_PROF};
# 195 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUipcMem_flags_enum {
# 196 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1};
# 204 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUctx_flags_enum {
# 205 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_SCHED_AUTO,
# 206 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_SCHED_SPIN,
# 207 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_SCHED_YIELD,
# 208 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_SCHED_BLOCKING_SYNC = 4,
# 209 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_BLOCKING_SYNC = 4,
# 212 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_SCHED_MASK = 7,
# 213 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_MAP_HOST,
# 214 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 215 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CTX_FLAGS_MASK = 31};
# 221 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUevent_flags_enum {
# 222 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_EVENT_DEFAULT,
# 223 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 224 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_EVENT_DISABLE_TIMING,
# 225 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_EVENT_INTERPROCESS = 4};
# 231 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUarray_format_enum {
# 232 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 233 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 234 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 235 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 236 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 237 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 238 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 239 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_AD_FORMAT_FLOAT = 32};
# 245 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUaddress_mode_enum {
# 246 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 247 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 248 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 249 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER};
# 255 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfilter_mode_enum {
# 256 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 257 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TR_FILTER_MODE_LINEAR};
# 263 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUdevice_attribute_enum {
# 264 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 265 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 266 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 267 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 268 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 269 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 270 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 271 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 272 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 273 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 274 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 275 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 276 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 277 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 278 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 279 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 280 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 281 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 282 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 283 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 284 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 285 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 286 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 287 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 288 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 289 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 290 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 291 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 292 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH,
# 293 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT,
# 294 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS,
# 295 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27,
# 296 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 297 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 298 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 299 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 300 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 302 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 303 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER,
# 304 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE,
# 305 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH,
# 306 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE,
# 307 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR,
# 308 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT,
# 309 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING,
# 310 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH,
# 311 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS,
# 312 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER,
# 313 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH,
# 314 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT,
# 315 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE,
# 316 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE,
# 317 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE,
# 318 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID,
# 319 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT,
# 320 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH,
# 321 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH,
# 322 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS,
# 323 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH,
# 324 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH,
# 325 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT,
# 326 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH,
# 327 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT,
# 328 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH,
# 329 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH,
# 330 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS,
# 331 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH,
# 332 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT,
# 333 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS,
# 334 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH,
# 335 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH,
# 336 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS,
# 337 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH,
# 338 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH,
# 339 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT,
# 340 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH};
# 362 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUpointer_attribute_enum {
# 363 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_POINTER_ATTRIBUTE_CONTEXT = 1,
# 364 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_POINTER_ATTRIBUTE_MEMORY_TYPE,
# 365 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_POINTER_ATTRIBUTE_DEVICE_POINTER,
# 366 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_POINTER_ATTRIBUTE_HOST_POINTER};
# 372 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfunction_attribute_enum {
# 378 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 385 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 391 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 396 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 401 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 410 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 419 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 421 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX};
# 427 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfunc_cache_enum {
# 428 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 429 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 430 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_CACHE_PREFER_L1,
# 431 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_CACHE_PREFER_EQUAL};
# 437 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUsharedconfig_enum {
# 438 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE,
# 439 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE,
# 440 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE};
# 446 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUmemorytype_enum {
# 447 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 448 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 449 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_MEMORYTYPE_ARRAY,
# 450 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_MEMORYTYPE_UNIFIED};
# 456 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUcomputemode_enum {
# 457 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 458 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 459 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_COMPUTEMODE_PROHIBITED,
# 460 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
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
# 560 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_10,
# 561 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_11,
# 562 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_12,
# 563 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_13,
# 564 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_20,
# 565 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_21,
# 566 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_TARGET_COMPUTE_30};
# 572 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUjit_fallback_enum {
# 574 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_PREFER_PTX,
# 576 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_PREFER_BINARY};
# 583 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 584 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE,
# 585 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY,
# 586 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD,
# 587 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4,
# 588 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8};
# 594 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 595 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 596 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 597 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD};
# 603 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUarray_cubemap_face_enum {
# 604 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 605 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 606 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 607 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 608 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 609 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z};
# 615 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUlimit_enum {
# 616 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 617 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 618 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
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
# 653 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 659 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PROFILER_DISABLED,
# 664 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PROFILER_NOT_INITIALIZED,
# 669 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STARTED,
# 674 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STOPPED,
# 679 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 685 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 692 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 702 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 711 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 716 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 721 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 727 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 732 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 740 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 745 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 750 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
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
# 786 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 791 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 796 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 801 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 806 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
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
# 927 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_UNKNOWN = 999};
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_voidIvE7__valueE = 1};
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIbE7__valueE = 1};
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIcE7__valueE = 1};
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIaE7__valueE = 1};
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIhE7__valueE = 1};
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIwE7__valueE = 1};
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIsE7__valueE = 1};
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerItE7__valueE = 1};
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIiE7__valueE = 1};
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIjE7__valueE = 1};
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIlE7__valueE = 1};
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerImE7__valueE = 1};
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIxE7__valueE = 1};
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIyE7__valueE = 1};
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIfE7__valueE = 1};
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIdE7__valueE = 1};
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIeE7__valueE = 1};
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_charIcE7__valueE = 1};
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_charIwE7__valueE = 1};
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIcE7__valueE = 1};
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIaE7__valueE = 1};
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIhE7__valueE = 1};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 1 3
# 38 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/host_defines.h" 1 3
# 39 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 2 3




typedef __attribute__((device_builtin_texture_type)) const void *__texture_type__;
typedef __attribute__((device_builtin_surface_type)) const void *__surface_type__;
# 129 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 3
extern __attribute__((device)) void* malloc(size_t);
extern __attribute__((device)) void free(void*);

extern __attribute__((device)) void __assertfail(
  const void *message,
  const void *file,
  unsigned int line,
  const void *function,
  size_t charsize);
# 154 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 3
static __attribute__((device)) void __assert_fail(
  const char *__assertion,
  const char *__file,
  unsigned int __line,
  const char *__function)
{
  __assertfail(
    (const void *)__assertion,
    (const void *)__file,
                  __line,
    (const void *)__function,
    sizeof(char));
}
# 184 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 1 3
# 56 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/device_types.h" 1 3
# 53 "/home/bachelor/deicide218/cuda-4.2/include/device_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/host_defines.h" 1 3
# 54 "/home/bachelor/deicide218/cuda-4.2/include/device_types.h" 2 3







enum __attribute__((device_builtin)) cudaRoundMode
{
    cudaRoundNearest,
    cudaRoundZero,
    cudaRoundPosInf,
    cudaRoundMinInf
};
# 57 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 1 3
# 126 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
enum __attribute__((device_builtin)) cudaError
{





    cudaSuccess = 0,





    cudaErrorMissingConfiguration = 1,





    cudaErrorMemoryAllocation = 2,





    cudaErrorInitializationError = 3,
# 161 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorLaunchFailure = 4,
# 170 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorPriorLaunchFailure = 5,
# 180 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorLaunchTimeout = 6,
# 189 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorLaunchOutOfResources = 7,





    cudaErrorInvalidDeviceFunction = 8,
# 204 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorInvalidConfiguration = 9,





    cudaErrorInvalidDevice = 10,





    cudaErrorInvalidValue = 11,





    cudaErrorInvalidPitchValue = 12,





    cudaErrorInvalidSymbol = 13,




    cudaErrorMapBufferObjectFailed = 14,




    cudaErrorUnmapBufferObjectFailed = 15,





    cudaErrorInvalidHostPointer = 16,





    cudaErrorInvalidDevicePointer = 17,





    cudaErrorInvalidTexture = 18,





    cudaErrorInvalidTextureBinding = 19,






    cudaErrorInvalidChannelDescriptor = 20,





    cudaErrorInvalidMemcpyDirection = 21,
# 285 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorAddressOfConstant = 22,
# 294 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorTextureFetchFailed = 23,
# 303 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorTextureNotBound = 24,
# 312 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorSynchronizationError = 25,





    cudaErrorInvalidFilterSetting = 26,





    cudaErrorInvalidNormSetting = 27,







    cudaErrorMixedDeviceExecution = 28,






    cudaErrorCudartUnloading = 29,




    cudaErrorUnknown = 30,







    cudaErrorNotYetImplemented = 31,
# 361 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorMemoryValueTooLarge = 32,






    cudaErrorInvalidResourceHandle = 33,







    cudaErrorNotReady = 34,






    cudaErrorInsufficientDriver = 35,
# 396 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorSetOnActiveProcess = 36,





    cudaErrorInvalidSurface = 37,





    cudaErrorNoDevice = 38,





    cudaErrorECCUncorrectable = 39,




    cudaErrorSharedObjectSymbolNotFound = 40,




    cudaErrorSharedObjectInitFailed = 41,





    cudaErrorUnsupportedLimit = 42,





    cudaErrorDuplicateVariableName = 43,





    cudaErrorDuplicateTextureName = 44,





    cudaErrorDuplicateSurfaceName = 45,
# 458 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorDevicesUnavailable = 46,




    cudaErrorInvalidKernelImage = 47,







    cudaErrorNoKernelImageForDevice = 48,
# 484 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    cudaErrorIncompatibleDriverContext = 49,






    cudaErrorPeerAccessAlreadyEnabled = 50,






    cudaErrorPeerAccessNotEnabled = 51,





    cudaErrorDeviceAlreadyInUse = 54,







    cudaErrorProfilerDisabled = 55,






    cudaErrorProfilerNotInitialized = 56,






    cudaErrorProfilerAlreadyStarted = 57,





     cudaErrorProfilerAlreadyStopped = 58,







    cudaErrorAssert = 59,






    cudaErrorTooManyPeers = 60,





    cudaErrorHostMemoryAlreadyRegistered = 61,





    cudaErrorHostMemoryNotRegistered = 62,




    cudaErrorOperatingSystem = 63,




    cudaErrorStartupFailure = 0x7f,







    cudaErrorApiFailureBase = 10000
};




enum __attribute__((device_builtin)) cudaChannelFormatKind
{
    cudaChannelFormatKindSigned = 0,
    cudaChannelFormatKindUnsigned = 1,
    cudaChannelFormatKindFloat = 2,
    cudaChannelFormatKindNone = 3
};




struct __attribute__((device_builtin)) cudaChannelFormatDesc
{
    int x;
    int y;
    int z;
    int w;
    enum cudaChannelFormatKind f;
};




struct cudaArray;




enum __attribute__((device_builtin)) cudaMemoryType
{
    cudaMemoryTypeHost = 1,
    cudaMemoryTypeDevice = 2
};




enum __attribute__((device_builtin)) cudaMemcpyKind
{
    cudaMemcpyHostToHost = 0,
    cudaMemcpyHostToDevice = 1,
    cudaMemcpyDeviceToHost = 2,
    cudaMemcpyDeviceToDevice = 3,
    cudaMemcpyDefault = 4
};





struct __attribute__((device_builtin)) cudaPitchedPtr
{
    void *ptr;
    size_t pitch;
    size_t xsize;
    size_t ysize;
};





struct __attribute__((device_builtin)) cudaExtent
{
    size_t width;
    size_t height;
    size_t depth;
};





struct __attribute__((device_builtin)) cudaPos
{
    size_t x;
    size_t y;
    size_t z;
};




struct __attribute__((device_builtin)) cudaMemcpy3DParms
{
    struct cudaArray *srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;

    struct cudaArray *dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;

    struct cudaExtent extent;
    enum cudaMemcpyKind kind;
};




struct __attribute__((device_builtin)) cudaMemcpy3DPeerParms
{
    struct cudaArray *srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;
    int srcDevice;

    struct cudaArray *dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;
    int dstDevice;

    struct cudaExtent extent;
};




struct cudaGraphicsResource;




enum __attribute__((device_builtin)) cudaGraphicsRegisterFlags
{
    cudaGraphicsRegisterFlagsNone = 0,
    cudaGraphicsRegisterFlagsReadOnly = 1,
    cudaGraphicsRegisterFlagsWriteDiscard = 2,
    cudaGraphicsRegisterFlagsSurfaceLoadStore = 4,
    cudaGraphicsRegisterFlagsTextureGather = 8
};




enum __attribute__((device_builtin)) cudaGraphicsMapFlags
{
    cudaGraphicsMapFlagsNone = 0,
    cudaGraphicsMapFlagsReadOnly = 1,
    cudaGraphicsMapFlagsWriteDiscard = 2
};




enum __attribute__((device_builtin)) cudaGraphicsCubeFace
{
    cudaGraphicsCubeFacePositiveX = 0x00,
    cudaGraphicsCubeFaceNegativeX = 0x01,
    cudaGraphicsCubeFacePositiveY = 0x02,
    cudaGraphicsCubeFaceNegativeY = 0x03,
    cudaGraphicsCubeFacePositiveZ = 0x04,
    cudaGraphicsCubeFaceNegativeZ = 0x05
};




struct __attribute__((device_builtin)) cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 758 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;
};




struct __attribute__((device_builtin)) cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;
};




enum __attribute__((device_builtin)) cudaFuncCache
{
    cudaFuncCachePreferNone = 0,
    cudaFuncCachePreferShared = 1,
    cudaFuncCachePreferL1 = 2,
    cudaFuncCachePreferEqual = 3
};





enum __attribute__((device_builtin)) cudaSharedMemConfig
{
    cudaSharedMemBankSizeDefault = 0,
    cudaSharedMemBankSizeFourByte = 1,
    cudaSharedMemBankSizeEightByte = 2
};




enum __attribute__((device_builtin)) cudaComputeMode
{
    cudaComputeModeDefault = 0,
    cudaComputeModeExclusive = 1,
    cudaComputeModeProhibited = 2,
    cudaComputeModeExclusiveProcess = 3
};




enum __attribute__((device_builtin)) cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};




enum __attribute__((device_builtin)) cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};




struct __attribute__((device_builtin)) cudaDeviceProp
{
    char name[256];
    size_t totalGlobalMem;
    size_t sharedMemPerBlock;
    int regsPerBlock;
    int warpSize;
    size_t memPitch;
    int maxThreadsPerBlock;
    int maxThreadsDim[3];
    int maxGridSize[3];
    int clockRate;
    size_t totalConstMem;
    int major;
    int minor;
    size_t textureAlignment;
    size_t texturePitchAlignment;
    int deviceOverlap;
    int multiProcessorCount;
    int kernelExecTimeoutEnabled;
    int integrated;
    int canMapHostMemory;
    int computeMode;
    int maxTexture1D;
    int maxTexture1DLinear;
    int maxTexture2D[2];
    int maxTexture2DLinear[3];
    int maxTexture2DGather[2];
    int maxTexture3D[3];
    int maxTextureCubemap;
    int maxTexture1DLayered[2];
    int maxTexture2DLayered[3];
    int maxTextureCubemapLayered[2];
    int maxSurface1D;
    int maxSurface2D[2];
    int maxSurface3D[3];
    int maxSurface1DLayered[2];
    int maxSurface2DLayered[3];
    int maxSurfaceCubemap;
    int maxSurfaceCubemapLayered[2];
    size_t surfaceAlignment;
    int concurrentKernels;
    int ECCEnabled;
    int pciBusID;
    int pciDeviceID;
    int pciDomainID;
    int tccDriver;
    int asyncEngineCount;
    int unifiedAddressing;
    int memoryClockRate;
    int memoryBusWidth;
    int l2CacheSize;
    int maxThreadsPerMultiProcessor;
};
# 993 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
struct __attribute__((device_builtin)) cudaIpcEventHandle_st
{
    char reserved[64];
};

struct __attribute__((device_builtin)) cudaIpcMemHandle_st
{
    char reserved[64];
};
# 1012 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h" 3
typedef __attribute__((device_builtin)) enum cudaError cudaError_t;




typedef __attribute__((device_builtin)) struct CUstream_st *cudaStream_t;




typedef __attribute__((device_builtin)) struct CUevent_st *cudaEvent_t;




typedef __attribute__((device_builtin)) struct cudaGraphicsResource *cudaGraphicsResource_t;




typedef __attribute__((device_builtin)) struct CUuuid_st cudaUUID_t;




typedef __attribute__((device_builtin)) struct cudaIpcEventHandle_st cudaIpcEventHandle_t;
typedef __attribute__((device_builtin)) struct cudaIpcMemHandle_st cudaIpcMemHandle_t;




typedef __attribute__((device_builtin)) enum cudaOutputMode cudaOutputMode_t;
# 58 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/surface_types.h" 1 3
# 84 "/home/bachelor/deicide218/cuda-4.2/include/surface_types.h" 3
enum __attribute__((device_builtin)) cudaSurfaceBoundaryMode
{
    cudaBoundaryModeZero = 0,
    cudaBoundaryModeClamp = 1,
    cudaBoundaryModeTrap = 2
};




enum __attribute__((device_builtin)) cudaSurfaceFormatMode
{
    cudaFormatModeForced = 0,
    cudaFormatModeAuto = 1
};




struct __attribute__((device_builtin)) surfaceReference
{



    struct cudaChannelFormatDesc channelDesc;
};
# 59 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h" 1 3
# 84 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h" 3
enum __attribute__((device_builtin)) cudaTextureAddressMode
{
    cudaAddressModeWrap = 0,
    cudaAddressModeClamp = 1,
    cudaAddressModeMirror = 2,
    cudaAddressModeBorder = 3
};




enum __attribute__((device_builtin)) cudaTextureFilterMode
{
    cudaFilterModePoint = 0,
    cudaFilterModeLinear = 1
};




enum __attribute__((device_builtin)) cudaTextureReadMode
{
    cudaReadModeElementType = 0,
    cudaReadModeNormalizedFloat = 1
};




struct __attribute__((device_builtin)) textureReference
{



    int normalized;



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureAddressMode addressMode[3];



    struct cudaChannelFormatDesc channelDesc;



    int sRGB;
    int __cudaReserved[15];
};
# 60 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 1 3
# 59 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 1 3
# 60 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 1 3
# 60 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 60 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 2 3
# 94 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 3
struct __attribute__((device_builtin)) char1
{
    signed char x;
};

struct __attribute__((device_builtin)) uchar1
{
    unsigned char x;
};


struct __attribute__((device_builtin)) __attribute__((aligned(2))) char2
{
    signed char x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(2))) uchar2
{
    unsigned char x, y;
};

struct __attribute__((device_builtin)) char3
{
    signed char x, y, z;
};

struct __attribute__((device_builtin)) uchar3
{
    unsigned char x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) char4
{
    signed char x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) uchar4
{
    unsigned char x, y, z, w;
};

struct __attribute__((device_builtin)) short1
{
    short x;
};

struct __attribute__((device_builtin)) ushort1
{
    unsigned short x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) short2
{
    short x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) ushort2
{
    unsigned short x, y;
};

struct __attribute__((device_builtin)) short3
{
    short x, y, z;
};

struct __attribute__((device_builtin)) ushort3
{
    unsigned short x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };
struct __attribute__((device_builtin)) __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };

struct __attribute__((device_builtin)) int1
{
    int x;
};

struct __attribute__((device_builtin)) uint1
{
    unsigned int x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(8))) int2 { int x; int y; };
struct __attribute__((device_builtin)) __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };

struct __attribute__((device_builtin)) int3
{
    int x, y, z;
};

struct __attribute__((device_builtin)) uint3
{
    unsigned int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) int4
{
    int x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) uint4
{
    unsigned int x, y, z, w;
};

struct __attribute__((device_builtin)) long1
{
    long int x;
};

struct __attribute__((device_builtin)) ulong1
{
    unsigned long x;
};






struct __attribute__((device_builtin)) __attribute__((aligned(2*sizeof(long int)))) long2
{
    long int x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
    unsigned long int x, y;
};



struct __attribute__((device_builtin)) long3
{
    long int x, y, z;
};

struct __attribute__((device_builtin)) ulong3
{
    unsigned long int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) long4
{
    long int x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulong4
{
    unsigned long int x, y, z, w;
};

struct __attribute__((device_builtin)) float1
{
    float x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(8))) float2 { float x; float y; };

struct __attribute__((device_builtin)) float3
{
    float x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) float4
{
    float x, y, z, w;
};

struct __attribute__((device_builtin)) longlong1
{
    long long int x;
};

struct __attribute__((device_builtin)) ulonglong1
{
    unsigned long long int x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) longlong2
{
    long long int x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulonglong2
{
    unsigned long long int x, y;
};

struct __attribute__((device_builtin)) longlong3
{
    long long int x, y, z;
};

struct __attribute__((device_builtin)) ulonglong3
{
    unsigned long long int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) longlong4
{
    long long int x, y, z ,w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulonglong4
{
    unsigned long long int x, y, z, w;
};

struct __attribute__((device_builtin)) double1
{
    double x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) double2
{
    double x, y;
};

struct __attribute__((device_builtin)) double3
{
    double x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) double4
{
    double x, y, z, w;
};
# 338 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h" 3
typedef __attribute__((device_builtin)) struct char1 char1;
typedef __attribute__((device_builtin)) struct uchar1 uchar1;
typedef __attribute__((device_builtin)) struct char2 char2;
typedef __attribute__((device_builtin)) struct uchar2 uchar2;
typedef __attribute__((device_builtin)) struct char3 char3;
typedef __attribute__((device_builtin)) struct uchar3 uchar3;
typedef __attribute__((device_builtin)) struct char4 char4;
typedef __attribute__((device_builtin)) struct uchar4 uchar4;
typedef __attribute__((device_builtin)) struct short1 short1;
typedef __attribute__((device_builtin)) struct ushort1 ushort1;
typedef __attribute__((device_builtin)) struct short2 short2;
typedef __attribute__((device_builtin)) struct ushort2 ushort2;
typedef __attribute__((device_builtin)) struct short3 short3;
typedef __attribute__((device_builtin)) struct ushort3 ushort3;
typedef __attribute__((device_builtin)) struct short4 short4;
typedef __attribute__((device_builtin)) struct ushort4 ushort4;
typedef __attribute__((device_builtin)) struct int1 int1;
typedef __attribute__((device_builtin)) struct uint1 uint1;
typedef __attribute__((device_builtin)) struct int2 int2;
typedef __attribute__((device_builtin)) struct uint2 uint2;
typedef __attribute__((device_builtin)) struct int3 int3;
typedef __attribute__((device_builtin)) struct uint3 uint3;
typedef __attribute__((device_builtin)) struct int4 int4;
typedef __attribute__((device_builtin)) struct uint4 uint4;
typedef __attribute__((device_builtin)) struct long1 long1;
typedef __attribute__((device_builtin)) struct ulong1 ulong1;
typedef __attribute__((device_builtin)) struct long2 long2;
typedef __attribute__((device_builtin)) struct ulong2 ulong2;
typedef __attribute__((device_builtin)) struct long3 long3;
typedef __attribute__((device_builtin)) struct ulong3 ulong3;
typedef __attribute__((device_builtin)) struct long4 long4;
typedef __attribute__((device_builtin)) struct ulong4 ulong4;
typedef __attribute__((device_builtin)) struct float1 float1;
typedef __attribute__((device_builtin)) struct float2 float2;
typedef __attribute__((device_builtin)) struct float3 float3;
typedef __attribute__((device_builtin)) struct float4 float4;
typedef __attribute__((device_builtin)) struct longlong1 longlong1;
typedef __attribute__((device_builtin)) struct ulonglong1 ulonglong1;
typedef __attribute__((device_builtin)) struct longlong2 longlong2;
typedef __attribute__((device_builtin)) struct ulonglong2 ulonglong2;
typedef __attribute__((device_builtin)) struct longlong3 longlong3;
typedef __attribute__((device_builtin)) struct ulonglong3 ulonglong3;
typedef __attribute__((device_builtin)) struct longlong4 longlong4;
typedef __attribute__((device_builtin)) struct ulonglong4 ulonglong4;
typedef __attribute__((device_builtin)) struct double1 double1;
typedef __attribute__((device_builtin)) struct double2 double2;
typedef __attribute__((device_builtin)) struct double3 double3;
typedef __attribute__((device_builtin)) struct double4 double4;







struct __attribute__((device_builtin)) dim3
{
    unsigned int x, y, z;





};

typedef __attribute__((device_builtin)) struct dim3 dim3;
# 60 "/home/bachelor/deicide218/cuda-4.2/include/builtin_types.h" 2 3
# 185 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/device_launch_parameters.h" 1 3
# 66 "/home/bachelor/deicide218/cuda-4.2/include/device_launch_parameters.h" 3
uint3 __attribute__((device_builtin)) extern const threadIdx;
uint3 __attribute__((device_builtin)) extern const blockIdx;
dim3 __attribute__((device_builtin)) extern const blockDim;
dim3 __attribute__((device_builtin)) extern const gridDim;
int __attribute__((device_builtin)) extern const warpSize;
# 186 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/crt/storage_class.h" 1 3
# 186 "/home/bachelor/deicide218/cuda-4.2/include/crt/device_runtime.h" 2 3
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 2 3
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __time_t;
# 151 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __suseconds_t;
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {
# 77 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__suseconds_t tv_usec;};
# 63 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
typedef struct timezone *__restrict__ __timezone_ptr_t;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ {
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
long double __l;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __i[3];};
# 70 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) void *memset(void *, int, size_t);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) int printf(const char *__restrict__, ...);
# 103 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) __attribute__((__malloc__)) void *malloc(size_t);
# 104 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) void free(void *);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitl(long double);
# 225 "gaussian.cu"
__attribute__((global)) extern void _Z4Fan1PfS_ii(float *, float *, int, int);
# 239 "gaussian.cu"
__attribute__((global)) extern void _Z4Fan2PfS_S_iii(float *, float *, float *, int, int, int);
# 1 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 1
# 159 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 1 3
# 7730 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 2 3
# 160 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 2
# 241 "gaussian.cu" 2
# 225 "gaussian.cu"
__attribute__((global)) void _Z4Fan1PfS_ii(
# 225 "gaussian.cu"
float *m_cuda,
# 225 "gaussian.cu"
float *a_cuda,
# 225 "gaussian.cu"
int Size,
# 225 "gaussian.cu"
int t){
# 226 "gaussian.cu"
{
# 230 "gaussian.cu"
if (((threadIdx.x) + ((blockIdx.x) * (blockDim.x))) >= ((unsigned)((Size - 1) - t))) {
# 230 "gaussian.cu"
return; }
# 231 "gaussian.cu"
(*((m_cuda + (((unsigned)Size) * (((((blockDim.x) * (blockIdx.x)) + (threadIdx.x)) + ((unsigned)t)) + 1U))) + t)) = ( fdividef((*((a_cuda + (((unsigned)Size) * (((((blockDim.x) * (blockIdx.x)) + (threadIdx.x)) + ((unsigned)t)) + 1U))) + t)) , (*((a_cuda + (Size * t)) + t))));
# 232 "gaussian.cu"
}}
# 239 "gaussian.cu"
__attribute__((global)) void _Z4Fan2PfS_S_iii(
# 239 "gaussian.cu"
float *m_cuda,
# 239 "gaussian.cu"
float *a_cuda,
# 239 "gaussian.cu"
float *b_cuda,
# 239 "gaussian.cu"
int Size,
# 239 "gaussian.cu"
int j1,
# 239 "gaussian.cu"
int t){
# 240 "gaussian.cu"
{
# 244 "gaussian.cu"
 int __cuda_local_var_17781_6_non_const_xidx;
# 245 "gaussian.cu"
 int __cuda_local_var_17782_6_non_const_yidx;
# 241 "gaussian.cu"
if (((threadIdx.x) + ((blockIdx.x) * (blockDim.x))) >= ((unsigned)((Size - 1) - t))) {
# 241 "gaussian.cu"
return; }
# 242 "gaussian.cu"
if (((threadIdx.y) + ((blockIdx.y) * (blockDim.y))) >= ((unsigned)(Size - t))) {
# 242 "gaussian.cu"
return; }
# 244 "gaussian.cu"
__cuda_local_var_17781_6_non_const_xidx = ((int)(((blockIdx.x) * (blockDim.x)) + (threadIdx.x)));
# 245 "gaussian.cu"
__cuda_local_var_17782_6_non_const_yidx = ((int)(((blockIdx.y) * (blockDim.y)) + (threadIdx.y)));
# 248 "gaussian.cu"
(a_cuda[((Size * ((__cuda_local_var_17781_6_non_const_xidx + 1) + t)) + (__cuda_local_var_17782_6_non_const_yidx + t))]) -= ((m_cuda[((Size * ((__cuda_local_var_17781_6_non_const_xidx + 1) + t)) + t)]) * (a_cuda[((Size * t) + (__cuda_local_var_17782_6_non_const_yidx + t))]));
# 250 "gaussian.cu"
if (__cuda_local_var_17782_6_non_const_yidx == 0)
# 250 "gaussian.cu"
{
# 253 "gaussian.cu"
(b_cuda[((__cuda_local_var_17781_6_non_const_xidx + 1) + t)]) -= ((m_cuda[((Size * ((__cuda_local_var_17781_6_non_const_xidx + 1) + t)) + (__cuda_local_var_17782_6_non_const_yidx + t))]) * (b_cuda[t]));
# 254 "gaussian.cu"
}
# 255 "gaussian.cu"
}}
