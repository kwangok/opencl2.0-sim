# 1 "srad.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "srad.cudafe1.gpu"
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
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIfE7__valueE};
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
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ {
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
long double __l;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __i[3];};
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
# 131 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) void __syncthreads(void);
# 5 "./srad_kernel.cu"
__attribute__((global)) extern void _Z11srad_cuda_1PfS_S_S_S_S_iif(float *, float *, float *, float *, float *, float *, int, int, float);
# 170 "./srad_kernel.cu"
__attribute__((global)) extern void _Z11srad_cuda_2PfS_S_S_S_S_iiff(float *, float *, float *, float *, float *, float *, int, int, float, float);
# 1 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 1
# 159 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 1 3
# 7730 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 2 3
# 160 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 2
# 172 "./srad_kernel.cu" 2
# 5 "./srad_kernel.cu"
__attribute__((global)) void _Z11srad_cuda_1PfS_S_S_S_S_iif(
# 6 "./srad_kernel.cu"
float *E_C,
# 7 "./srad_kernel.cu"
float *W_C,
# 8 "./srad_kernel.cu"
float *N_C,
# 9 "./srad_kernel.cu"
float *S_C,
# 10 "./srad_kernel.cu"
float *J_cuda,
# 11 "./srad_kernel.cu"
float *C_cuda,
# 12 "./srad_kernel.cu"
int cols,
# 13 "./srad_kernel.cu"
int rows,
# 14 "./srad_kernel.cu"
float q0sqr){
# 16 "./srad_kernel.cu"
{
# 19 "./srad_kernel.cu"
 int __cuda_local_var_17448_7_non_const_bx;
# 20 "./srad_kernel.cu"
 int __cuda_local_var_17449_7_non_const_by;
# 23 "./srad_kernel.cu"
 int __cuda_local_var_17452_7_non_const_tx;
# 24 "./srad_kernel.cu"
 int __cuda_local_var_17453_7_non_const_ty;
# 27 "./srad_kernel.cu"
 int __cuda_local_var_17456_7_non_const_index;
# 28 "./srad_kernel.cu"
 int __cuda_local_var_17457_7_non_const_index_n;
# 29 "./srad_kernel.cu"
 int __cuda_local_var_17458_7_non_const_index_s;
# 30 "./srad_kernel.cu"
 int __cuda_local_var_17459_7_non_const_index_w;
# 31 "./srad_kernel.cu"
 int __cuda_local_var_17460_7_non_const_index_e;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_9_non_const_n;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_12_non_const_w;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_15_non_const_e;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_18_non_const_s;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_21_non_const_jc;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_25_non_const_g2;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_29_non_const_l;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_32_non_const_num;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_37_non_const_den;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_42_non_const_qsqr;
# 33 "./srad_kernel.cu"
 float __cuda_local_var_17462_48_non_const_c;
# 36 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17465_33_non_const_temp[16][16];
# 37 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17466_33_non_const_temp_result[16][16];
# 39 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17468_33_non_const_north[16][16];
# 40 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17469_33_non_const_south[16][16];
# 41 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17470_33_non_const_east[16][16];
# 42 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17471_33_non_const_west[16][16];
# 19 "./srad_kernel.cu"
__cuda_local_var_17448_7_non_const_bx = ((int)(blockIdx.x));
# 20 "./srad_kernel.cu"
__cuda_local_var_17449_7_non_const_by = ((int)(blockIdx.y));
# 23 "./srad_kernel.cu"
__cuda_local_var_17452_7_non_const_tx = ((int)(threadIdx.x));
# 24 "./srad_kernel.cu"
__cuda_local_var_17453_7_non_const_ty = ((int)(threadIdx.y));
# 27 "./srad_kernel.cu"
__cuda_local_var_17456_7_non_const_index = (((((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (16 * __cuda_local_var_17448_7_non_const_bx)) + (cols * __cuda_local_var_17453_7_non_const_ty)) + __cuda_local_var_17452_7_non_const_tx);
# 28 "./srad_kernel.cu"
__cuda_local_var_17457_7_non_const_index_n = (((((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (16 * __cuda_local_var_17448_7_non_const_bx)) + __cuda_local_var_17452_7_non_const_tx) - cols);
# 29 "./srad_kernel.cu"
__cuda_local_var_17458_7_non_const_index_s = (((((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (16 * __cuda_local_var_17448_7_non_const_bx)) + (cols * 16)) + __cuda_local_var_17452_7_non_const_tx);
# 30 "./srad_kernel.cu"
__cuda_local_var_17459_7_non_const_index_w = (((((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (16 * __cuda_local_var_17448_7_non_const_bx)) + (cols * __cuda_local_var_17453_7_non_const_ty)) - 1);
# 31 "./srad_kernel.cu"
__cuda_local_var_17460_7_non_const_index_e = (((((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (16 * __cuda_local_var_17448_7_non_const_bx)) + (cols * __cuda_local_var_17453_7_non_const_ty)) + 16);
# 47 "./srad_kernel.cu"
if (__cuda_local_var_17449_7_non_const_by == 0)
# 47 "./srad_kernel.cu"
{
# 48 "./srad_kernel.cu"
((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[((16 * __cuda_local_var_17448_7_non_const_bx) + __cuda_local_var_17452_7_non_const_tx)]);
# 49 "./srad_kernel.cu"
((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17458_7_non_const_index_s]);
# 50 "./srad_kernel.cu"
} else {
# 51 "./srad_kernel.cu"
if (((unsigned)__cuda_local_var_17449_7_non_const_by) == ((gridDim.y) - 1U))
# 51 "./srad_kernel.cu"
{
# 52 "./srad_kernel.cu"
((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17457_7_non_const_index_n]);
# 53 "./srad_kernel.cu"
((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[((((((unsigned)(cols * 16)) * ((gridDim.y) - 1U)) + ((unsigned)(16 * __cuda_local_var_17448_7_non_const_bx))) + ((unsigned)(cols * 15))) + ((unsigned)__cuda_local_var_17452_7_non_const_tx))]);
# 54 "./srad_kernel.cu"
}
# 54 "./srad_kernel.cu"
else
# 54 "./srad_kernel.cu"
{
# 55 "./srad_kernel.cu"
((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17457_7_non_const_index_n]);
# 56 "./srad_kernel.cu"
((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17458_7_non_const_index_s]);
# 57 "./srad_kernel.cu"
} }
# 58 "./srad_kernel.cu"
__syncthreads();
# 63 "./srad_kernel.cu"
if (__cuda_local_var_17448_7_non_const_bx == 0)
# 63 "./srad_kernel.cu"
{
# 64 "./srad_kernel.cu"
((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17460_7_non_const_index_e]);
# 65 "./srad_kernel.cu"
((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[(((cols * 16) * __cuda_local_var_17449_7_non_const_by) + (cols * __cuda_local_var_17453_7_non_const_ty))]);
# 66 "./srad_kernel.cu"
} else {
# 67 "./srad_kernel.cu"
if (((unsigned)__cuda_local_var_17448_7_non_const_bx) == ((gridDim.x) - 1U))
# 67 "./srad_kernel.cu"
{
# 68 "./srad_kernel.cu"
((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17459_7_non_const_index_w]);
# 69 "./srad_kernel.cu"
((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[((((((unsigned)((cols * 16) * __cuda_local_var_17449_7_non_const_by)) + (16U * ((gridDim.x) - 1U))) + ((unsigned)(cols * __cuda_local_var_17453_7_non_const_ty))) + 16U) - 1U)]);
# 70 "./srad_kernel.cu"
}
# 70 "./srad_kernel.cu"
else
# 70 "./srad_kernel.cu"
{
# 71 "./srad_kernel.cu"
((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17459_7_non_const_index_w]);
# 72 "./srad_kernel.cu"
((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17460_7_non_const_index_e]);
# 73 "./srad_kernel.cu"
} }
# 75 "./srad_kernel.cu"
__syncthreads();
# 79 "./srad_kernel.cu"
((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (J_cuda[__cuda_local_var_17456_7_non_const_index]);
# 81 "./srad_kernel.cu"
__syncthreads();
# 83 "./srad_kernel.cu"
__cuda_local_var_17462_21_non_const_jc = ((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]);
# 85 "./srad_kernel.cu"
if ((__cuda_local_var_17453_7_non_const_ty == 0) && (__cuda_local_var_17452_7_non_const_tx == 0))
# 85 "./srad_kernel.cu"
{
# 86 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 87 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 88 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 89 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 90 "./srad_kernel.cu"
} else {
# 91 "./srad_kernel.cu"
if ((__cuda_local_var_17453_7_non_const_ty == 0) && (__cuda_local_var_17452_7_non_const_tx == 15))
# 91 "./srad_kernel.cu"
{
# 92 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 93 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 94 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 95 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 96 "./srad_kernel.cu"
} else {
# 97 "./srad_kernel.cu"
if ((__cuda_local_var_17453_7_non_const_ty == 15) && (__cuda_local_var_17452_7_non_const_tx == 15))
# 97 "./srad_kernel.cu"
{
# 98 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 99 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 100 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 101 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 102 "./srad_kernel.cu"
} else {
# 103 "./srad_kernel.cu"
if ((__cuda_local_var_17453_7_non_const_ty == 15) && (__cuda_local_var_17452_7_non_const_tx == 0))
# 103 "./srad_kernel.cu"
{
# 104 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 105 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 106 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 107 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 108 "./srad_kernel.cu"
} else {
# 110 "./srad_kernel.cu"
if (__cuda_local_var_17453_7_non_const_ty == 0)
# 110 "./srad_kernel.cu"
{
# 111 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17468_33_non_const_north)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 112 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 113 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 114 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 115 "./srad_kernel.cu"
} else {
# 116 "./srad_kernel.cu"
if (__cuda_local_var_17452_7_non_const_tx == 15)
# 116 "./srad_kernel.cu"
{
# 117 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 118 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 119 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 120 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17470_33_non_const_east)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 121 "./srad_kernel.cu"
} else {
# 122 "./srad_kernel.cu"
if (__cuda_local_var_17453_7_non_const_ty == 15)
# 122 "./srad_kernel.cu"
{
# 123 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 124 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17469_33_non_const_south)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 125 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 126 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 127 "./srad_kernel.cu"
} else {
# 128 "./srad_kernel.cu"
if (__cuda_local_var_17452_7_non_const_tx == 0)
# 128 "./srad_kernel.cu"
{
# 129 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 130 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 131 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17471_33_non_const_west)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 132 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 133 "./srad_kernel.cu"
}
# 134 "./srad_kernel.cu"
else
# 134 "./srad_kernel.cu"
{
# 135 "./srad_kernel.cu"
__cuda_local_var_17462_9_non_const_n = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty - 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 136 "./srad_kernel.cu"
__cuda_local_var_17462_18_non_const_s = (((((__cuda_local_var_17465_33_non_const_temp)[(__cuda_local_var_17453_7_non_const_ty + 1)]))[__cuda_local_var_17452_7_non_const_tx]) - __cuda_local_var_17462_21_non_const_jc);
# 137 "./srad_kernel.cu"
__cuda_local_var_17462_12_non_const_w = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx - 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 138 "./srad_kernel.cu"
__cuda_local_var_17462_15_non_const_e = (((((__cuda_local_var_17465_33_non_const_temp)[__cuda_local_var_17453_7_non_const_ty]))[(__cuda_local_var_17452_7_non_const_tx + 1)]) - __cuda_local_var_17462_21_non_const_jc);
# 139 "./srad_kernel.cu"
} } } } } } } }
# 142 "./srad_kernel.cu"
__cuda_local_var_17462_25_non_const_g2 = ( fdividef(((((__cuda_local_var_17462_9_non_const_n * __cuda_local_var_17462_9_non_const_n) + (__cuda_local_var_17462_18_non_const_s * __cuda_local_var_17462_18_non_const_s)) + (__cuda_local_var_17462_12_non_const_w * __cuda_local_var_17462_12_non_const_w)) + (__cuda_local_var_17462_15_non_const_e * __cuda_local_var_17462_15_non_const_e)) , (__cuda_local_var_17462_21_non_const_jc * __cuda_local_var_17462_21_non_const_jc)));
# 144 "./srad_kernel.cu"
__cuda_local_var_17462_29_non_const_l = ( fdividef((((__cuda_local_var_17462_9_non_const_n + __cuda_local_var_17462_18_non_const_s) + __cuda_local_var_17462_12_non_const_w) + __cuda_local_var_17462_15_non_const_e) , __cuda_local_var_17462_21_non_const_jc));
# 146 "./srad_kernel.cu"
__cuda_local_var_17462_32_non_const_num = ((float)(((0.5) * ((double)__cuda_local_var_17462_25_non_const_g2)) - ((0.0625) * ((double)(__cuda_local_var_17462_29_non_const_l * __cuda_local_var_17462_29_non_const_l)))));
# 147 "./srad_kernel.cu"
__cuda_local_var_17462_37_non_const_den = ((float)((1.0) + ((0.25) * ((double)__cuda_local_var_17462_29_non_const_l))));
# 148 "./srad_kernel.cu"
__cuda_local_var_17462_42_non_const_qsqr = ( fdividef(__cuda_local_var_17462_32_non_const_num , (__cuda_local_var_17462_37_non_const_den * __cuda_local_var_17462_37_non_const_den)));
# 151 "./srad_kernel.cu"
__cuda_local_var_17462_37_non_const_den = ( fdividef((__cuda_local_var_17462_42_non_const_qsqr - q0sqr) , (q0sqr * ((1.0F) + q0sqr))));
# 152 "./srad_kernel.cu"
__cuda_local_var_17462_48_non_const_c = ((float)((1.0) / ((1.0) + ((double)__cuda_local_var_17462_37_non_const_den))));
# 155 "./srad_kernel.cu"
if (__cuda_local_var_17462_48_non_const_c < (0.0F))
# 155 "./srad_kernel.cu"
{
# 155 "./srad_kernel.cu"
((((__cuda_local_var_17466_33_non_const_temp_result)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (0.0F);
# 155 "./srad_kernel.cu"
} else {
# 156 "./srad_kernel.cu"
if (__cuda_local_var_17462_48_non_const_c > (1.0F))
# 156 "./srad_kernel.cu"
{
# 156 "./srad_kernel.cu"
((((__cuda_local_var_17466_33_non_const_temp_result)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = (1.0F);
# 156 "./srad_kernel.cu"
}
# 157 "./srad_kernel.cu"
else
# 157 "./srad_kernel.cu"
{
# 157 "./srad_kernel.cu"
((((__cuda_local_var_17466_33_non_const_temp_result)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]) = __cuda_local_var_17462_48_non_const_c;
# 157 "./srad_kernel.cu"
} }
# 159 "./srad_kernel.cu"
__syncthreads();
# 161 "./srad_kernel.cu"
(C_cuda[__cuda_local_var_17456_7_non_const_index]) = ((((__cuda_local_var_17466_33_non_const_temp_result)[__cuda_local_var_17453_7_non_const_ty]))[__cuda_local_var_17452_7_non_const_tx]);
# 162 "./srad_kernel.cu"
(E_C[__cuda_local_var_17456_7_non_const_index]) = __cuda_local_var_17462_15_non_const_e;
# 163 "./srad_kernel.cu"
(W_C[__cuda_local_var_17456_7_non_const_index]) = __cuda_local_var_17462_12_non_const_w;
# 164 "./srad_kernel.cu"
(S_C[__cuda_local_var_17456_7_non_const_index]) = __cuda_local_var_17462_18_non_const_s;
# 165 "./srad_kernel.cu"
(N_C[__cuda_local_var_17456_7_non_const_index]) = __cuda_local_var_17462_9_non_const_n;
# 167 "./srad_kernel.cu"
}}
# 170 "./srad_kernel.cu"
__attribute__((global)) void _Z11srad_cuda_2PfS_S_S_S_S_iiff(
# 171 "./srad_kernel.cu"
float *E_C,
# 172 "./srad_kernel.cu"
float *W_C,
# 173 "./srad_kernel.cu"
float *N_C,
# 174 "./srad_kernel.cu"
float *S_C,
# 175 "./srad_kernel.cu"
float *J_cuda,
# 176 "./srad_kernel.cu"
float *C_cuda,
# 177 "./srad_kernel.cu"
int cols,
# 178 "./srad_kernel.cu"
int rows,
# 179 "./srad_kernel.cu"
float lambda,
# 180 "./srad_kernel.cu"
float q0sqr){
# 182 "./srad_kernel.cu"
{
# 184 "./srad_kernel.cu"
 int __cuda_local_var_17613_7_non_const_bx;
# 185 "./srad_kernel.cu"
 int __cuda_local_var_17614_9_non_const_by;
# 188 "./srad_kernel.cu"
 int __cuda_local_var_17617_9_non_const_tx;
# 189 "./srad_kernel.cu"
 int __cuda_local_var_17618_9_non_const_ty;
# 192 "./srad_kernel.cu"
 int __cuda_local_var_17621_9_non_const_index;
# 193 "./srad_kernel.cu"
 int __cuda_local_var_17622_7_non_const_index_s;
# 194 "./srad_kernel.cu"
 int __cuda_local_var_17623_9_non_const_index_e;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_9_non_const_cc;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_13_non_const_cn;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_17_non_const_cs;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_21_non_const_ce;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_25_non_const_cw;
# 195 "./srad_kernel.cu"
 float __cuda_local_var_17624_29_non_const_d_sum;
# 198 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17627_33_non_const_south_c[16][16];
# 199 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17628_35_non_const_east_c[16][16];
# 201 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17630_35_non_const_c_cuda_temp[16][16];
# 202 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17631_35_non_const_c_cuda_result[16][16];
# 203 "./srad_kernel.cu"
 __attribute__((shared)) float __cuda_local_var_17632_35_non_const_temp[16][16];
# 184 "./srad_kernel.cu"
__cuda_local_var_17613_7_non_const_bx = ((int)(blockIdx.x));
# 185 "./srad_kernel.cu"
__cuda_local_var_17614_9_non_const_by = ((int)(blockIdx.y));
# 188 "./srad_kernel.cu"
__cuda_local_var_17617_9_non_const_tx = ((int)(threadIdx.x));
# 189 "./srad_kernel.cu"
__cuda_local_var_17618_9_non_const_ty = ((int)(threadIdx.y));
# 192 "./srad_kernel.cu"
__cuda_local_var_17621_9_non_const_index = (((((cols * 16) * __cuda_local_var_17614_9_non_const_by) + (16 * __cuda_local_var_17613_7_non_const_bx)) + (cols * __cuda_local_var_17618_9_non_const_ty)) + __cuda_local_var_17617_9_non_const_tx);
# 193 "./srad_kernel.cu"
__cuda_local_var_17622_7_non_const_index_s = (((((cols * 16) * __cuda_local_var_17614_9_non_const_by) + (16 * __cuda_local_var_17613_7_non_const_bx)) + (cols * 16)) + __cuda_local_var_17617_9_non_const_tx);
# 194 "./srad_kernel.cu"
__cuda_local_var_17623_9_non_const_index_e = (((((cols * 16) * __cuda_local_var_17614_9_non_const_by) + (16 * __cuda_local_var_17613_7_non_const_bx)) + (cols * __cuda_local_var_17618_9_non_const_ty)) + 16);
# 206 "./srad_kernel.cu"
((((__cuda_local_var_17632_35_non_const_temp)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (J_cuda[__cuda_local_var_17621_9_non_const_index]);
# 208 "./srad_kernel.cu"
__syncthreads();
# 212 "./srad_kernel.cu"
if (((unsigned)__cuda_local_var_17614_9_non_const_by) == ((gridDim.y) - 1U))
# 212 "./srad_kernel.cu"
{
# 213 "./srad_kernel.cu"
((((__cuda_local_var_17627_33_non_const_south_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (C_cuda[((((((unsigned)(cols * 16)) * ((gridDim.y) - 1U)) + ((unsigned)(16 * __cuda_local_var_17613_7_non_const_bx))) + ((unsigned)(cols * 15))) + ((unsigned)__cuda_local_var_17617_9_non_const_tx))]);
# 214 "./srad_kernel.cu"
}
# 214 "./srad_kernel.cu"
else
# 214 "./srad_kernel.cu"
{
# 215 "./srad_kernel.cu"
((((__cuda_local_var_17627_33_non_const_south_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (C_cuda[__cuda_local_var_17622_7_non_const_index_s]);
# 216 "./srad_kernel.cu"
}
# 217 "./srad_kernel.cu"
__syncthreads();
# 222 "./srad_kernel.cu"
if (((unsigned)__cuda_local_var_17613_7_non_const_bx) == ((gridDim.x) - 1U))
# 222 "./srad_kernel.cu"
{
# 223 "./srad_kernel.cu"
((((__cuda_local_var_17628_35_non_const_east_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (C_cuda[((((((unsigned)((cols * 16) * __cuda_local_var_17614_9_non_const_by)) + (16U * ((gridDim.x) - 1U))) + ((unsigned)(cols * __cuda_local_var_17618_9_non_const_ty))) + 16U) - 1U)]);
# 224 "./srad_kernel.cu"
}
# 224 "./srad_kernel.cu"
else
# 224 "./srad_kernel.cu"
{
# 225 "./srad_kernel.cu"
((((__cuda_local_var_17628_35_non_const_east_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (C_cuda[__cuda_local_var_17623_9_non_const_index_e]);
# 226 "./srad_kernel.cu"
}
# 228 "./srad_kernel.cu"
__syncthreads();
# 230 "./srad_kernel.cu"
((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = (C_cuda[__cuda_local_var_17621_9_non_const_index]);
# 232 "./srad_kernel.cu"
__syncthreads();
# 234 "./srad_kernel.cu"
__cuda_local_var_17624_9_non_const_cc = ((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 236 "./srad_kernel.cu"
if ((__cuda_local_var_17618_9_non_const_ty == 15) && (__cuda_local_var_17617_9_non_const_tx == 15))
# 236 "./srad_kernel.cu"
{
# 237 "./srad_kernel.cu"
__cuda_local_var_17624_13_non_const_cn = __cuda_local_var_17624_9_non_const_cc;
# 238 "./srad_kernel.cu"
__cuda_local_var_17624_17_non_const_cs = ((((__cuda_local_var_17627_33_non_const_south_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 239 "./srad_kernel.cu"
__cuda_local_var_17624_25_non_const_cw = __cuda_local_var_17624_9_non_const_cc;
# 240 "./srad_kernel.cu"
__cuda_local_var_17624_21_non_const_ce = ((((__cuda_local_var_17628_35_non_const_east_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 241 "./srad_kernel.cu"
} else {
# 242 "./srad_kernel.cu"
if (__cuda_local_var_17617_9_non_const_tx == 15)
# 242 "./srad_kernel.cu"
{
# 243 "./srad_kernel.cu"
__cuda_local_var_17624_13_non_const_cn = __cuda_local_var_17624_9_non_const_cc;
# 244 "./srad_kernel.cu"
__cuda_local_var_17624_17_non_const_cs = ((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[(__cuda_local_var_17618_9_non_const_ty + 1)]))[__cuda_local_var_17617_9_non_const_tx]);
# 245 "./srad_kernel.cu"
__cuda_local_var_17624_25_non_const_cw = __cuda_local_var_17624_9_non_const_cc;
# 246 "./srad_kernel.cu"
__cuda_local_var_17624_21_non_const_ce = ((((__cuda_local_var_17628_35_non_const_east_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 247 "./srad_kernel.cu"
} else {
# 248 "./srad_kernel.cu"
if (__cuda_local_var_17618_9_non_const_ty == 15)
# 248 "./srad_kernel.cu"
{
# 249 "./srad_kernel.cu"
__cuda_local_var_17624_13_non_const_cn = __cuda_local_var_17624_9_non_const_cc;
# 250 "./srad_kernel.cu"
__cuda_local_var_17624_17_non_const_cs = ((((__cuda_local_var_17627_33_non_const_south_c)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 251 "./srad_kernel.cu"
__cuda_local_var_17624_25_non_const_cw = __cuda_local_var_17624_9_non_const_cc;
# 252 "./srad_kernel.cu"
__cuda_local_var_17624_21_non_const_ce = ((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[__cuda_local_var_17618_9_non_const_ty]))[(__cuda_local_var_17617_9_non_const_tx + 1)]);
# 253 "./srad_kernel.cu"
}
# 254 "./srad_kernel.cu"
else
# 254 "./srad_kernel.cu"
{
# 255 "./srad_kernel.cu"
__cuda_local_var_17624_13_non_const_cn = __cuda_local_var_17624_9_non_const_cc;
# 256 "./srad_kernel.cu"
__cuda_local_var_17624_17_non_const_cs = ((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[(__cuda_local_var_17618_9_non_const_ty + 1)]))[__cuda_local_var_17617_9_non_const_tx]);
# 257 "./srad_kernel.cu"
__cuda_local_var_17624_25_non_const_cw = __cuda_local_var_17624_9_non_const_cc;
# 258 "./srad_kernel.cu"
__cuda_local_var_17624_21_non_const_ce = ((((__cuda_local_var_17630_35_non_const_c_cuda_temp)[__cuda_local_var_17618_9_non_const_ty]))[(__cuda_local_var_17617_9_non_const_tx + 1)]);
# 259 "./srad_kernel.cu"
} } }
# 262 "./srad_kernel.cu"
__cuda_local_var_17624_29_non_const_d_sum = ((((__cuda_local_var_17624_13_non_const_cn * (N_C[__cuda_local_var_17621_9_non_const_index])) + (__cuda_local_var_17624_17_non_const_cs * (S_C[__cuda_local_var_17621_9_non_const_index]))) + (__cuda_local_var_17624_25_non_const_cw * (W_C[__cuda_local_var_17621_9_non_const_index]))) + (__cuda_local_var_17624_21_non_const_ce * (E_C[__cuda_local_var_17621_9_non_const_index])));
# 265 "./srad_kernel.cu"
((((__cuda_local_var_17631_35_non_const_c_cuda_result)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]) = ((float)(((double)((((__cuda_local_var_17632_35_non_const_temp)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx])) + (((0.25) * ((double)lambda)) * ((double)__cuda_local_var_17624_29_non_const_d_sum))));
# 267 "./srad_kernel.cu"
__syncthreads();
# 269 "./srad_kernel.cu"
(J_cuda[__cuda_local_var_17621_9_non_const_index]) = ((((__cuda_local_var_17631_35_non_const_c_cuda_result)[__cuda_local_var_17618_9_non_const_ty]))[__cuda_local_var_17617_9_non_const_tx]);
# 271 "./srad_kernel.cu"
}}
