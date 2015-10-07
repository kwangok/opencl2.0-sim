# 1 "main.cu"
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
# 194 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
enum __pid_type {

F_OWNER_TID,
F_OWNER_PID,
F_OWNER_PGRP,
F_OWNER_GID = 2};
# 27 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt0_ {
_PC_LINK_MAX,

_PC_MAX_CANON,

_PC_MAX_INPUT,

_PC_NAME_MAX,

_PC_PATH_MAX,

_PC_PIPE_BUF,

_PC_CHOWN_RESTRICTED,

_PC_NO_TRUNC,

_PC_VDISABLE,

_PC_SYNC_IO,

_PC_ASYNC_IO,

_PC_PRIO_IO,

_PC_SOCK_MAXBUF,

_PC_FILESIZEBITS,

_PC_REC_INCR_XFER_SIZE,

_PC_REC_MAX_XFER_SIZE,

_PC_REC_MIN_XFER_SIZE,

_PC_REC_XFER_ALIGN,

_PC_ALLOC_SIZE_MIN,

_PC_SYMLINK_MAX,

_PC_2_SYMLINKS};
# 74 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt1_ {
_SC_ARG_MAX,

_SC_CHILD_MAX,

_SC_CLK_TCK,

_SC_NGROUPS_MAX,

_SC_OPEN_MAX,

_SC_STREAM_MAX,

_SC_TZNAME_MAX,

_SC_JOB_CONTROL,

_SC_SAVED_IDS,

_SC_REALTIME_SIGNALS,

_SC_PRIORITY_SCHEDULING,

_SC_TIMERS,

_SC_ASYNCHRONOUS_IO,

_SC_PRIORITIZED_IO,

_SC_SYNCHRONIZED_IO,

_SC_FSYNC,

_SC_MAPPED_FILES,

_SC_MEMLOCK,

_SC_MEMLOCK_RANGE,

_SC_MEMORY_PROTECTION,

_SC_MESSAGE_PASSING,

_SC_SEMAPHORES,

_SC_SHARED_MEMORY_OBJECTS,

_SC_AIO_LISTIO_MAX,

_SC_AIO_MAX,

_SC_AIO_PRIO_DELTA_MAX,

_SC_DELAYTIMER_MAX,

_SC_MQ_OPEN_MAX,

_SC_MQ_PRIO_MAX,

_SC_VERSION,

_SC_PAGESIZE,


_SC_RTSIG_MAX,

_SC_SEM_NSEMS_MAX,

_SC_SEM_VALUE_MAX,

_SC_SIGQUEUE_MAX,

_SC_TIMER_MAX,




_SC_BC_BASE_MAX,

_SC_BC_DIM_MAX,

_SC_BC_SCALE_MAX,

_SC_BC_STRING_MAX,

_SC_COLL_WEIGHTS_MAX,

_SC_EQUIV_CLASS_MAX,

_SC_EXPR_NEST_MAX,

_SC_LINE_MAX,

_SC_RE_DUP_MAX,

_SC_CHARCLASS_NAME_MAX,


_SC_2_VERSION,

_SC_2_C_BIND,

_SC_2_C_DEV,

_SC_2_FORT_DEV,

_SC_2_FORT_RUN,

_SC_2_SW_DEV,

_SC_2_LOCALEDEF,


_SC_PII,

_SC_PII_XTI,

_SC_PII_SOCKET,

_SC_PII_INTERNET,

_SC_PII_OSI,

_SC_POLL,

_SC_SELECT,

_SC_UIO_MAXIOV,

_SC_IOV_MAX = 60,

_SC_PII_INTERNET_STREAM,

_SC_PII_INTERNET_DGRAM,

_SC_PII_OSI_COTS,

_SC_PII_OSI_CLTS,

_SC_PII_OSI_M,

_SC_T_IOV_MAX,



_SC_THREADS,

_SC_THREAD_SAFE_FUNCTIONS,

_SC_GETGR_R_SIZE_MAX,

_SC_GETPW_R_SIZE_MAX,

_SC_LOGIN_NAME_MAX,

_SC_TTY_NAME_MAX,

_SC_THREAD_DESTRUCTOR_ITERATIONS,

_SC_THREAD_KEYS_MAX,

_SC_THREAD_STACK_MIN,

_SC_THREAD_THREADS_MAX,

_SC_THREAD_ATTR_STACKADDR,

_SC_THREAD_ATTR_STACKSIZE,

_SC_THREAD_PRIORITY_SCHEDULING,

_SC_THREAD_PRIO_INHERIT,

_SC_THREAD_PRIO_PROTECT,

_SC_THREAD_PROCESS_SHARED,


_SC_NPROCESSORS_CONF,

_SC_NPROCESSORS_ONLN,

_SC_PHYS_PAGES,

_SC_AVPHYS_PAGES,

_SC_ATEXIT_MAX,

_SC_PASS_MAX,


_SC_XOPEN_VERSION,

_SC_XOPEN_XCU_VERSION,

_SC_XOPEN_UNIX,

_SC_XOPEN_CRYPT,

_SC_XOPEN_ENH_I18N,

_SC_XOPEN_SHM,


_SC_2_CHAR_TERM,

_SC_2_C_VERSION,

_SC_2_UPE,


_SC_XOPEN_XPG2,

_SC_XOPEN_XPG3,

_SC_XOPEN_XPG4,


_SC_CHAR_BIT,

_SC_CHAR_MAX,

_SC_CHAR_MIN,

_SC_INT_MAX,

_SC_INT_MIN,

_SC_LONG_BIT,

_SC_WORD_BIT,

_SC_MB_LEN_MAX,

_SC_NZERO,

_SC_SSIZE_MAX,

_SC_SCHAR_MAX,

_SC_SCHAR_MIN,

_SC_SHRT_MAX,

_SC_SHRT_MIN,

_SC_UCHAR_MAX,

_SC_UINT_MAX,

_SC_ULONG_MAX,

_SC_USHRT_MAX,


_SC_NL_ARGMAX,

_SC_NL_LANGMAX,

_SC_NL_MSGMAX,

_SC_NL_NMAX,

_SC_NL_SETMAX,

_SC_NL_TEXTMAX,


_SC_XBS5_ILP32_OFF32,

_SC_XBS5_ILP32_OFFBIG,

_SC_XBS5_LP64_OFF64,

_SC_XBS5_LPBIG_OFFBIG,


_SC_XOPEN_LEGACY,

_SC_XOPEN_REALTIME,

_SC_XOPEN_REALTIME_THREADS,


_SC_ADVISORY_INFO,

_SC_BARRIERS,

_SC_BASE,

_SC_C_LANG_SUPPORT,

_SC_C_LANG_SUPPORT_R,

_SC_CLOCK_SELECTION,

_SC_CPUTIME,

_SC_THREAD_CPUTIME,

_SC_DEVICE_IO,

_SC_DEVICE_SPECIFIC,

_SC_DEVICE_SPECIFIC_R,

_SC_FD_MGMT,

_SC_FIFO,

_SC_PIPE,

_SC_FILE_ATTRIBUTES,

_SC_FILE_LOCKING,

_SC_FILE_SYSTEM,

_SC_MONOTONIC_CLOCK,

_SC_MULTI_PROCESS,

_SC_SINGLE_PROCESS,

_SC_NETWORKING,

_SC_READER_WRITER_LOCKS,

_SC_SPIN_LOCKS,

_SC_REGEXP,

_SC_REGEX_VERSION,

_SC_SHELL,

_SC_SIGNALS,

_SC_SPAWN,

_SC_SPORADIC_SERVER,

_SC_THREAD_SPORADIC_SERVER,

_SC_SYSTEM_DATABASE,

_SC_SYSTEM_DATABASE_R,

_SC_TIMEOUTS,

_SC_TYPED_MEMORY_OBJECTS,

_SC_USER_GROUPS,

_SC_USER_GROUPS_R,

_SC_2_PBS,

_SC_2_PBS_ACCOUNTING,

_SC_2_PBS_LOCATE,

_SC_2_PBS_MESSAGE,

_SC_2_PBS_TRACK,

_SC_SYMLOOP_MAX,

_SC_STREAMS,

_SC_2_PBS_CHECKPOINT,


_SC_V6_ILP32_OFF32,

_SC_V6_ILP32_OFFBIG,

_SC_V6_LP64_OFF64,

_SC_V6_LPBIG_OFFBIG,


_SC_HOST_NAME_MAX,

_SC_TRACE,

_SC_TRACE_EVENT_FILTER,

_SC_TRACE_INHERIT,

_SC_TRACE_LOG,


_SC_LEVEL1_ICACHE_SIZE,

_SC_LEVEL1_ICACHE_ASSOC,

_SC_LEVEL1_ICACHE_LINESIZE,

_SC_LEVEL1_DCACHE_SIZE,

_SC_LEVEL1_DCACHE_ASSOC,

_SC_LEVEL1_DCACHE_LINESIZE,

_SC_LEVEL2_CACHE_SIZE,

_SC_LEVEL2_CACHE_ASSOC,

_SC_LEVEL2_CACHE_LINESIZE,

_SC_LEVEL3_CACHE_SIZE,

_SC_LEVEL3_CACHE_ASSOC,

_SC_LEVEL3_CACHE_LINESIZE,

_SC_LEVEL4_CACHE_SIZE,

_SC_LEVEL4_CACHE_ASSOC,

_SC_LEVEL4_CACHE_LINESIZE,



_SC_IPV6 = 235,

_SC_RAW_SOCKETS,


_SC_V7_ILP32_OFF32,

_SC_V7_ILP32_OFFBIG,

_SC_V7_LP64_OFF64,

_SC_V7_LPBIG_OFFBIG,


_SC_SS_REPL_MAX,


_SC_TRACE_EVENT_NAME_MAX,

_SC_TRACE_NAME_MAX,

_SC_TRACE_SYS_MAX,

_SC_TRACE_USER_EVENT_MAX,


_SC_XOPEN_STREAMS,


_SC_THREAD_ROBUST_PRIO_INHERIT,

_SC_THREAD_ROBUST_PRIO_PROTECT};
# 536 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt2_ {
_CS_PATH,


_CS_V6_WIDTH_RESTRICTED_ENVS,



_CS_GNU_LIBC_VERSION,

_CS_GNU_LIBPTHREAD_VERSION,


_CS_V5_WIDTH_RESTRICTED_ENVS,



_CS_V7_WIDTH_RESTRICTED_ENVS,



_CS_LFS_CFLAGS = 1000,

_CS_LFS_LDFLAGS,

_CS_LFS_LIBS,

_CS_LFS_LINTFLAGS,

_CS_LFS64_CFLAGS,

_CS_LFS64_LDFLAGS,

_CS_LFS64_LIBS,

_CS_LFS64_LINTFLAGS,


_CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

_CS_XBS5_ILP32_OFF32_LDFLAGS,

_CS_XBS5_ILP32_OFF32_LIBS,

_CS_XBS5_ILP32_OFF32_LINTFLAGS,

_CS_XBS5_ILP32_OFFBIG_CFLAGS,

_CS_XBS5_ILP32_OFFBIG_LDFLAGS,

_CS_XBS5_ILP32_OFFBIG_LIBS,

_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

_CS_XBS5_LP64_OFF64_CFLAGS,

_CS_XBS5_LP64_OFF64_LDFLAGS,

_CS_XBS5_LP64_OFF64_LIBS,

_CS_XBS5_LP64_OFF64_LINTFLAGS,

_CS_XBS5_LPBIG_OFFBIG_CFLAGS,

_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

_CS_XBS5_LPBIG_OFFBIG_LIBS,

_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


_CS_POSIX_V6_ILP32_OFF32_CFLAGS,

_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

_CS_POSIX_V6_ILP32_OFF32_LIBS,

_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

_CS_POSIX_V6_ILP32_OFFBIG_LIBS,

_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

_CS_POSIX_V6_LP64_OFF64_CFLAGS,

_CS_POSIX_V6_LP64_OFF64_LDFLAGS,

_CS_POSIX_V6_LP64_OFF64_LIBS,

_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


_CS_POSIX_V7_ILP32_OFF32_CFLAGS,

_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

_CS_POSIX_V7_ILP32_OFF32_LIBS,

_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

_CS_POSIX_V7_ILP32_OFFBIG_LIBS,

_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

_CS_POSIX_V7_LP64_OFF64_CFLAGS,

_CS_POSIX_V7_LP64_OFF64_LDFLAGS,

_CS_POSIX_V7_LP64_OFF64_LIBS,

_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


_CS_V6_ENV,

_CS_V7_ENV};
# 88 "./avilib.h"
struct avi_t;
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
# 21 "define.c"
struct params_common_change;
# 38 "define.c"
struct params_common;
# 270 "define.c"
struct params_unique;
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
# 126 "./avilib.h"
typedef struct avi_t avi_t;
# 21 "define.c"
struct params_common_change {
# 27 "define.c"
float *d_frame;
int frame_no;char __nv_no_debug_dummy_end_padding_0[4];};

typedef struct params_common_change params_common_change;
# 38 "define.c"
struct params_common {
# 48 "define.c"
int sSize;
int tSize;
int maxMove;
float alpha;
# 57 "define.c"
int no_frames;
int frame_rows;
int frame_cols;
int frame_elem;
int frame_mem;
# 67 "define.c"
int endoPoints;
int endo_mem;

int *endoRow;
int *endoCol;
int *tEndoRowLoc;
int *tEndoColLoc;

int *d_endoRow;
int *d_endoCol;
int *d_tEndoRowLoc;
int *d_tEndoColLoc;

float *d_endoT;




int epiPoints;
int epi_mem;

int *epiRow;
int *epiCol;
int *tEpiRowLoc;
int *tEpiColLoc;

int *d_epiRow;
int *d_epiCol;
int *d_tEpiRowLoc;
int *d_tEpiColLoc;

float *d_epiT;
# 104 "define.c"
int allPoints;
# 110 "define.c"
int in_rows;
int in_cols;
int in_elem;
int in_mem;
# 119 "define.c"
int in2_rows;
int in2_cols;
int in2_elem;
int in2_mem;
# 128 "define.c"
int conv_rows;
int conv_cols;
int conv_elem;
int conv_mem;
int ioffset;
int joffset;
# 143 "define.c"
int in2_pad_add_rows;
int in2_pad_add_cols;
int in2_pad_cumv_rows;
int in2_pad_cumv_cols;
int in2_pad_cumv_elem;
int in2_pad_cumv_mem;
# 154 "define.c"
int in2_pad_cumv_sel_rows;
int in2_pad_cumv_sel_cols;
int in2_pad_cumv_sel_elem;
int in2_pad_cumv_sel_mem;
int in2_pad_cumv_sel_rowlow;
int in2_pad_cumv_sel_rowhig;
int in2_pad_cumv_sel_collow;
int in2_pad_cumv_sel_colhig;
# 167 "define.c"
int in2_pad_cumv_sel2_rowlow;
int in2_pad_cumv_sel2_rowhig;
int in2_pad_cumv_sel2_collow;
int in2_pad_cumv_sel2_colhig;
int in2_sub_cumh_rows;
int in2_sub_cumh_cols;
int in2_sub_cumh_elem;
int in2_sub_cumh_mem;
# 180 "define.c"
int in2_sub_cumh_sel_rows;
int in2_sub_cumh_sel_cols;
int in2_sub_cumh_sel_elem;
int in2_sub_cumh_sel_mem;
int in2_sub_cumh_sel_rowlow;
int in2_sub_cumh_sel_rowhig;
int in2_sub_cumh_sel_collow;
int in2_sub_cumh_sel_colhig;
# 193 "define.c"
int in2_sub_cumh_sel2_rowlow;
int in2_sub_cumh_sel2_rowhig;
int in2_sub_cumh_sel2_collow;
int in2_sub_cumh_sel2_colhig;
int in2_sub2_rows;
int in2_sub2_cols;
int in2_sub2_elem;
int in2_sub2_mem;
# 210 "define.c"
int in2_sqr_rows;
int in2_sqr_cols;
int in2_sqr_elem;
int in2_sqr_mem;
# 219 "define.c"
int in2_sqr_sub2_rows;
int in2_sqr_sub2_cols;
int in2_sqr_sub2_elem;
int in2_sqr_sub2_mem;
# 228 "define.c"
int in_sqr_rows;
int in_sqr_cols;
int in_sqr_elem;
int in_sqr_mem;
# 237 "define.c"
int tMask_rows;
int tMask_cols;
int tMask_elem;
int tMask_mem;
# 246 "define.c"
int mask_rows;
int mask_cols;
int mask_elem;
int mask_mem;
# 255 "define.c"
int mask_conv_rows;
int mask_conv_cols;
int mask_conv_elem;
int mask_conv_mem;
int mask_conv_ioffset;
int mask_conv_joffset;char __nv_no_debug_dummy_end_padding_0[4];};

typedef struct params_common params_common;
# 270 "define.c"
struct params_unique {
# 276 "define.c"
int *d_Row;
int *d_Col;
int *d_tRowLoc;
int *d_tColLoc;
float *d_T;
# 286 "define.c"
int point_no;
# 292 "define.c"
int in_pointer;
# 298 "define.c"
float *d_in2;
# 304 "define.c"
float *d_conv;
float *d_in_mod;
# 315 "define.c"
float *d_in2_pad_cumv;
# 321 "define.c"
float *d_in2_pad_cumv_sel;
# 327 "define.c"
float *d_in2_sub_cumh;
# 333 "define.c"
float *d_in2_sub_cumh_sel;
# 339 "define.c"
float *d_in2_sub2;
# 349 "define.c"
float *d_in2_sqr;
# 355 "define.c"
float *d_in2_sqr_sub2;
# 361 "define.c"
float *d_in_sqr;
# 367 "define.c"
float *d_tMask;
# 373 "define.c"
float *d_mask;
# 379 "define.c"
float *d_mask_conv;};

typedef struct params_unique params_unique;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2189 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 2870 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 3206 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 239 "/usr/include/stdio.h" 3
extern int fflush(FILE *);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
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
# 206 "./avilib.h"
extern avi_t *AVI_open_input_file(char *, int);



extern long AVI_video_frames(avi_t *);
extern int AVI_video_width(avi_t *);
extern int AVI_video_height(avi_t *);
# 246 "./avilib.h"
extern void AVI_print_error(char *);
# 23 "./avimod.h"
extern float *get_frame(avi_t *, int, int, int, int);
# 23 "main.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 55 "main.cu"
extern int main(int, char **);
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI13params_commonE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI13params_commonE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const params_common *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA51_13params_uniqueE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA51_13params_uniqueE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const params_unique (*)[51], const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI20params_common_changeE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI20params_common_changeE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const params_common_change *, const void *, size_t, size_t, enum cudaMemcpyKind);
extern int __cudaLaunch();
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
extern int __cudaRegisterVariable();
static void __sti___12_main_cpp1_ii_b81a68a1(void) __attribute__((__constructor__));
# 34 "main.cu"
params_common_change common_change = {0};


params_common common = {0};


params_unique unique[51];
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
# 55 "main.cu"
int main( int argc,  char **argv) {  const char *__T20;
# 62 "main.cu"
 dim3 __cuda_local_var_21257_7_non_const_threads;
 dim3 __cuda_local_var_21258_7_non_const_blocks;


 int __cuda_local_var_21261_6_non_const_i;
 int __cuda_local_var_21262_6_non_const_frames_processed;


 char *__cuda_local_var_21265_8_non_const_video_file_name;
 avi_t *__cuda_local_var_21266_9_non_const_frames;
 float *__cuda_local_var_21267_9_non_const_frame;
# 62 "main.cu"
{ (__cuda_local_var_21257_7_non_const_threads.x) = 1U; (__cuda_local_var_21257_7_non_const_threads.y) = 1U; (__cuda_local_var_21257_7_non_const_threads.z) = 1U; }
{ (__cuda_local_var_21258_7_non_const_blocks.x) = 1U; (__cuda_local_var_21258_7_non_const_blocks.y) = 1U; (__cuda_local_var_21258_7_non_const_blocks.z) = 1U; }
# 78 "main.cu"
if (argc != 3) {
printf(((const char *)"ERROR: usage: heartwall <inputfile> <num of frames>\n"));
exit(1);
}


__cuda_local_var_21265_8_non_const_video_file_name = (argv[1]);
__cuda_local_var_21266_9_non_const_frames = ((avi_t *)(AVI_open_input_file(__cuda_local_var_21265_8_non_const_video_file_name, 1)));
if (__cuda_local_var_21266_9_non_const_frames == ((avi_t *)0LL)) {
AVI_print_error("Error with AVI_open_input_file");
return (-1);
}


(common.no_frames) = ((int)(AVI_video_frames(__cuda_local_var_21266_9_non_const_frames)));
(common.frame_rows) = (AVI_video_height(__cuda_local_var_21266_9_non_const_frames));
(common.frame_cols) = (AVI_video_width(__cuda_local_var_21266_9_non_const_frames));
(common.frame_elem) = ((common.frame_rows) * (common.frame_cols));
(common.frame_mem) = ((int)(4UL * ((unsigned long)(common.frame_elem))));


cudaMalloc(((void **)(&(common_change.d_frame))), ((size_t)(common.frame_mem)));
# 105 "main.cu"
__cuda_local_var_21262_6_non_const_frames_processed = ((__T20 = ((const char *)(argv[2]))) , ((int)(strtol(__T20, ((char **)0LL), 10))));
if ((__cuda_local_var_21262_6_non_const_frames_processed < 0) || (__cuda_local_var_21262_6_non_const_frames_processed > (common.no_frames))) {
printf(((const char *)"ERROR: %d is an incorrect number of frames specified, select in the range of 0-%d\n"), __cuda_local_var_21262_6_non_const_frames_processed, (common.no_frames));
return 0;
}
# 120 "main.cu"
(common.sSize) = 40;
(common.tSize) = 25;
(common.maxMove) = 10;
(common.alpha) = (0.8700000048F);
# 129 "main.cu"
(common.endoPoints) = 20;
(common.endo_mem) = ((int)(4UL * ((unsigned long)(common.endoPoints))));

(common.endoRow) = ((int *)(malloc(((size_t)(common.endo_mem)))));
((common.endoRow)[0]) = 369;
((common.endoRow)[1]) = 400;
((common.endoRow)[2]) = 429;
((common.endoRow)[3]) = 452;
((common.endoRow)[4]) = 476;
((common.endoRow)[5]) = 486;
((common.endoRow)[6]) = 479;
((common.endoRow)[7]) = 458;
((common.endoRow)[8]) = 433;
((common.endoRow)[9]) = 404;
((common.endoRow)[10]) = 374;
((common.endoRow)[11]) = 346;
((common.endoRow)[12]) = 318;
((common.endoRow)[13]) = 294;
((common.endoRow)[14]) = 277;
((common.endoRow)[15]) = 269;
((common.endoRow)[16]) = 275;
((common.endoRow)[17]) = 287;
((common.endoRow)[18]) = 311;
((common.endoRow)[19]) = 339;
cudaMalloc(((void **)(&(common.d_endoRow))), ((size_t)(common.endo_mem)));

(common.endoCol) = ((int *)(malloc(((size_t)(common.endo_mem)))));
((common.endoCol)[0]) = 408;
((common.endoCol)[1]) = 406;
((common.endoCol)[2]) = 397;
((common.endoCol)[3]) = 383;
((common.endoCol)[4]) = 354;
((common.endoCol)[5]) = 322;
((common.endoCol)[6]) = 294;
((common.endoCol)[7]) = 270;
((common.endoCol)[8]) = 250;
((common.endoCol)[9]) = 237;
((common.endoCol)[10]) = 235;
((common.endoCol)[11]) = 241;
((common.endoCol)[12]) = 254;
((common.endoCol)[13]) = 273;
((common.endoCol)[14]) = 300;
((common.endoCol)[15]) = 328;
((common.endoCol)[16]) = 356;
((common.endoCol)[17]) = 383;
((common.endoCol)[18]) = 401;
((common.endoCol)[19]) = 411;
cudaMalloc(((void **)(&(common.d_endoCol))), ((size_t)(common.endo_mem)));

(common.tEndoRowLoc) = ((int *)(malloc(((size_t)((common.endo_mem) * (common.no_frames))))));
cudaMalloc(((void **)(&(common.d_tEndoRowLoc))), ((size_t)((common.endo_mem) * (common.no_frames))));

(common.tEndoColLoc) = ((int *)(malloc(((size_t)((common.endo_mem) * (common.no_frames))))));
cudaMalloc(((void **)(&(common.d_tEndoColLoc))), ((size_t)((common.endo_mem) * (common.no_frames))));
# 188 "main.cu"
(common.epiPoints) = 31;
(common.epi_mem) = ((int)(4UL * ((unsigned long)(common.epiPoints))));

(common.epiRow) = ((int *)(malloc(((size_t)(common.epi_mem)))));
((common.epiRow)[0]) = 390;
((common.epiRow)[1]) = 419;
((common.epiRow)[2]) = 448;
((common.epiRow)[3]) = 474;
((common.epiRow)[4]) = 501;
((common.epiRow)[5]) = 519;
((common.epiRow)[6]) = 535;
((common.epiRow)[7]) = 542;
((common.epiRow)[8]) = 543;
((common.epiRow)[9]) = 538;
((common.epiRow)[10]) = 528;
((common.epiRow)[11]) = 511;
((common.epiRow)[12]) = 491;
((common.epiRow)[13]) = 466;
((common.epiRow)[14]) = 438;
((common.epiRow)[15]) = 406;
((common.epiRow)[16]) = 376;
((common.epiRow)[17]) = 347;
((common.epiRow)[18]) = 318;
((common.epiRow)[19]) = 291;
((common.epiRow)[20]) = 275;
((common.epiRow)[21]) = 259;
((common.epiRow)[22]) = 256;
((common.epiRow)[23]) = 252;
((common.epiRow)[24]) = 252;
((common.epiRow)[25]) = 257;
((common.epiRow)[26]) = 266;
((common.epiRow)[27]) = 283;
((common.epiRow)[28]) = 305;
((common.epiRow)[29]) = 331;
((common.epiRow)[30]) = 360;
cudaMalloc(((void **)(&(common.d_epiRow))), ((size_t)(common.epi_mem)));

(common.epiCol) = ((int *)(malloc(((size_t)(common.epi_mem)))));
((common.epiCol)[0]) = 457;
((common.epiCol)[1]) = 454;
((common.epiCol)[2]) = 446;
((common.epiCol)[3]) = 431;
((common.epiCol)[4]) = 411;
((common.epiCol)[5]) = 388;
((common.epiCol)[6]) = 361;
((common.epiCol)[7]) = 331;
((common.epiCol)[8]) = 301;
((common.epiCol)[9]) = 273;
((common.epiCol)[10]) = 243;
((common.epiCol)[11]) = 218;
((common.epiCol)[12]) = 196;
((common.epiCol)[13]) = 178;
((common.epiCol)[14]) = 166;
((common.epiCol)[15]) = 157;
((common.epiCol)[16]) = 155;
((common.epiCol)[17]) = 165;
((common.epiCol)[18]) = 177;
((common.epiCol)[19]) = 197;
((common.epiCol)[20]) = 218;
((common.epiCol)[21]) = 248;
((common.epiCol)[22]) = 276;
((common.epiCol)[23]) = 304;
((common.epiCol)[24]) = 333;
((common.epiCol)[25]) = 361;
((common.epiCol)[26]) = 391;
((common.epiCol)[27]) = 415;
((common.epiCol)[28]) = 434;
((common.epiCol)[29]) = 448;
((common.epiCol)[30]) = 455;
cudaMalloc(((void **)(&(common.d_epiCol))), ((size_t)(common.epi_mem)));

(common.tEpiRowLoc) = ((int *)(malloc(((size_t)((common.epi_mem) * (common.no_frames))))));
cudaMalloc(((void **)(&(common.d_tEpiRowLoc))), ((size_t)((common.epi_mem) * (common.no_frames))));

(common.tEpiColLoc) = ((int *)(malloc(((size_t)((common.epi_mem) * (common.no_frames))))));
cudaMalloc(((void **)(&(common.d_tEpiColLoc))), ((size_t)((common.epi_mem) * (common.no_frames))));
# 269 "main.cu"
(common.allPoints) = 51;
# 276 "main.cu"
(common.in_rows) = (((common.tSize) + 1) + (common.tSize));
(common.in_cols) = (common.in_rows);
(common.in_elem) = ((common.in_rows) * (common.in_cols));
(common.in_mem) = ((int)(4UL * ((unsigned long)(common.in_elem))));
# 286 "main.cu"
cudaMalloc(((void **)(&(common.d_endoT))), ((size_t)((common.in_mem) * (common.endoPoints))));
cudaMalloc(((void **)(&(common.d_epiT))), ((size_t)((common.in_mem) * (common.epiPoints))));
# 293 "main.cu"
for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.endoPoints)); __cuda_local_var_21261_6_non_const_i++) {
(((unique)[__cuda_local_var_21261_6_non_const_i]).point_no) = __cuda_local_var_21261_6_non_const_i;
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_Row) = (common.d_endoRow);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_Col) = (common.d_endoCol);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tRowLoc) = (common.d_tEndoRowLoc);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tColLoc) = (common.d_tEndoColLoc);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_T) = (common.d_endoT);
}
for (__cuda_local_var_21261_6_non_const_i = (common.endoPoints); (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
(((unique)[__cuda_local_var_21261_6_non_const_i]).point_no) = (__cuda_local_var_21261_6_non_const_i - (common.endoPoints));
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_Row) = (common.d_epiRow);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_Col) = (common.d_epiCol);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tRowLoc) = (common.d_tEpiRowLoc);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tColLoc) = (common.d_tEpiColLoc);
(((unique)[__cuda_local_var_21261_6_non_const_i]).d_T) = (common.d_epiT);
}
# 315 "main.cu"
for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
(((unique)[__cuda_local_var_21261_6_non_const_i]).in_pointer) = ((((unique)[__cuda_local_var_21261_6_non_const_i]).point_no) * (common.in_elem));
}
# 324 "main.cu"
(common.in2_rows) = ((2 * (common.sSize)) + 1);
(common.in2_cols) = ((2 * (common.sSize)) + 1);
(common.in2_elem) = ((common.in2_rows) * (common.in2_cols));
(common.in2_mem) = ((int)(4UL * ((unsigned long)(common.in2_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2))), ((size_t)(common.in2_mem)));
}
# 339 "main.cu"
(common.conv_rows) = (((common.in_rows) + (common.in2_rows)) - 1);
(common.conv_cols) = (((common.in_cols) + (common.in2_cols)) - 1);
(common.conv_elem) = ((common.conv_rows) * (common.conv_cols));
(common.conv_mem) = ((int)(4UL * ((unsigned long)(common.conv_elem))));
(common.ioffset) = 0;
(common.joffset) = 0;


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_conv))), ((size_t)(common.conv_mem)));
}
# 360 "main.cu"
(common.in2_pad_add_rows) = (common.in_rows);
(common.in2_pad_add_cols) = (common.in_cols);

(common.in2_pad_cumv_rows) = ((common.in2_rows) + (2 * (common.in2_pad_add_rows)));
(common.in2_pad_cumv_cols) = ((common.in2_cols) + (2 * (common.in2_pad_add_cols)));
(common.in2_pad_cumv_elem) = ((common.in2_pad_cumv_rows) * (common.in2_pad_cumv_cols));
(common.in2_pad_cumv_mem) = ((int)(4UL * ((unsigned long)(common.in2_pad_cumv_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_pad_cumv))), ((size_t)(common.in2_pad_cumv_mem)));
}
# 378 "main.cu"
(common.in2_pad_cumv_sel_rowlow) = (1 + (common.in_rows));
(common.in2_pad_cumv_sel_rowhig) = ((common.in2_pad_cumv_rows) - 1);
(common.in2_pad_cumv_sel_collow) = 1;
(common.in2_pad_cumv_sel_colhig) = (common.in2_pad_cumv_cols);
(common.in2_pad_cumv_sel_rows) = (((common.in2_pad_cumv_sel_rowhig) - (common.in2_pad_cumv_sel_rowlow)) + 1);
(common.in2_pad_cumv_sel_cols) = (((common.in2_pad_cumv_sel_colhig) - (common.in2_pad_cumv_sel_collow)) + 1);
(common.in2_pad_cumv_sel_elem) = ((common.in2_pad_cumv_sel_rows) * (common.in2_pad_cumv_sel_cols));
(common.in2_pad_cumv_sel_mem) = ((int)(4UL * ((unsigned long)(common.in2_pad_cumv_sel_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_pad_cumv_sel))), ((size_t)(common.in2_pad_cumv_sel_mem)));
}
# 397 "main.cu"
(common.in2_pad_cumv_sel2_rowlow) = 1;
(common.in2_pad_cumv_sel2_rowhig) = (((common.in2_pad_cumv_rows) - (common.in_rows)) - 1);
(common.in2_pad_cumv_sel2_collow) = 1;
(common.in2_pad_cumv_sel2_colhig) = (common.in2_pad_cumv_cols);
(common.in2_sub_cumh_rows) = (((common.in2_pad_cumv_sel2_rowhig) - (common.in2_pad_cumv_sel2_rowlow)) + 1);
(common.in2_sub_cumh_cols) = (((common.in2_pad_cumv_sel2_colhig) - (common.in2_pad_cumv_sel2_collow)) + 1);
(common.in2_sub_cumh_elem) = ((common.in2_sub_cumh_rows) * (common.in2_sub_cumh_cols));
(common.in2_sub_cumh_mem) = ((int)(4UL * ((unsigned long)(common.in2_sub_cumh_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub_cumh))), ((size_t)(common.in2_sub_cumh_mem)));
}
# 416 "main.cu"
(common.in2_sub_cumh_sel_rowlow) = 1;
(common.in2_sub_cumh_sel_rowhig) = (common.in2_sub_cumh_rows);
(common.in2_sub_cumh_sel_collow) = (1 + (common.in_cols));
(common.in2_sub_cumh_sel_colhig) = ((common.in2_sub_cumh_cols) - 1);
(common.in2_sub_cumh_sel_rows) = (((common.in2_sub_cumh_sel_rowhig) - (common.in2_sub_cumh_sel_rowlow)) + 1);
(common.in2_sub_cumh_sel_cols) = (((common.in2_sub_cumh_sel_colhig) - (common.in2_sub_cumh_sel_collow)) + 1);
(common.in2_sub_cumh_sel_elem) = ((common.in2_sub_cumh_sel_rows) * (common.in2_sub_cumh_sel_cols));
(common.in2_sub_cumh_sel_mem) = ((int)(4UL * ((unsigned long)(common.in2_sub_cumh_sel_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub_cumh_sel))), ((size_t)(common.in2_sub_cumh_sel_mem)));
}
# 435 "main.cu"
(common.in2_sub_cumh_sel2_rowlow) = 1;
(common.in2_sub_cumh_sel2_rowhig) = (common.in2_sub_cumh_rows);
(common.in2_sub_cumh_sel2_collow) = 1;
(common.in2_sub_cumh_sel2_colhig) = (((common.in2_sub_cumh_cols) - (common.in_cols)) - 1);
(common.in2_sub2_rows) = (((common.in2_sub_cumh_sel2_rowhig) - (common.in2_sub_cumh_sel2_rowlow)) + 1);
(common.in2_sub2_cols) = (((common.in2_sub_cumh_sel2_colhig) - (common.in2_sub_cumh_sel2_collow)) + 1);
(common.in2_sub2_elem) = ((common.in2_sub2_rows) * (common.in2_sub2_cols));
(common.in2_sub2_mem) = ((int)(4UL * ((unsigned long)(common.in2_sub2_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub2))), ((size_t)(common.in2_sub2_mem)));
}
# 458 "main.cu"
(common.in2_sqr_rows) = (common.in2_rows);
(common.in2_sqr_cols) = (common.in2_cols);
(common.in2_sqr_elem) = (common.in2_elem);
(common.in2_sqr_mem) = (common.in2_mem);


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sqr))), ((size_t)(common.in2_sqr_mem)));
}
# 473 "main.cu"
(common.in2_sqr_sub2_rows) = (common.in2_sub2_rows);
(common.in2_sqr_sub2_cols) = (common.in2_sub2_cols);
(common.in2_sqr_sub2_elem) = (common.in2_sub2_elem);
(common.in2_sqr_sub2_mem) = (common.in2_sub2_mem);


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sqr_sub2))), ((size_t)(common.in2_sqr_sub2_mem)));
}
# 488 "main.cu"
(common.in_sqr_rows) = (common.in_rows);
(common.in_sqr_cols) = (common.in_cols);
(common.in_sqr_elem) = (common.in_elem);
(common.in_sqr_mem) = (common.in_mem);


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in_sqr))), ((size_t)(common.in_sqr_mem)));
}
# 503 "main.cu"
(common.tMask_rows) = (((common.in_rows) + (((common.sSize) + 1) + (common.sSize))) - 1);
(common.tMask_cols) = (common.tMask_rows);
(common.tMask_elem) = ((common.tMask_rows) * (common.tMask_cols));
(common.tMask_mem) = ((int)(4UL * ((unsigned long)(common.tMask_elem))));


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tMask))), ((size_t)(common.tMask_mem)));
}
# 518 "main.cu"
(common.mask_rows) = (common.maxMove);
(common.mask_cols) = (common.mask_rows);
(common.mask_elem) = ((common.mask_rows) * (common.mask_cols));
(common.mask_mem) = ((int)(4UL * ((unsigned long)(common.mask_elem))));
# 528 "main.cu"
(common.mask_conv_rows) = (common.tMask_rows);
(common.mask_conv_cols) = (common.tMask_cols);
(common.mask_conv_elem) = ((common.mask_conv_rows) * (common.mask_conv_cols));
(common.mask_conv_mem) = ((int)(4UL * ((unsigned long)(common.mask_conv_elem))));
(common.mask_conv_ioffset) = (((common.mask_rows) - 1) / 2);
if (((double)(((common.mask_rows) - 1) % 2)) > (0.5)) {
(common.mask_conv_ioffset) = ((common.mask_conv_ioffset) + 1);
}
(common.mask_conv_joffset) = (((common.mask_cols) - 1) / 2);
if (((double)(((common.mask_cols) - 1) % 2)) > (0.5)) {
(common.mask_conv_joffset) = ((common.mask_conv_joffset) + 1);
}


for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaMalloc(((void **)(&(((unique)[__cuda_local_var_21261_6_non_const_i]).d_mask_conv))), ((size_t)(common.mask_conv_mem)));
}
# 555 "main.cu"
(__cuda_local_var_21257_7_non_const_threads.x) = 512U;
(__cuda_local_var_21257_7_non_const_threads.y) = 1U;
(__cuda_local_var_21258_7_non_const_blocks.x) = ((unsigned)(common.allPoints));
(__cuda_local_var_21258_7_non_const_blocks.y) = 1U;
# 564 "main.cu"
printf(((const char *)"frame progress: "));
fflush(((FILE *)0LL));
# 572 "main.cu"
m5_work_begin(0UL, 0UL);


cudaMemcpy(((void *)(common.d_endoRow)), ((const void *)(common.endoRow)), ((size_t)(common.endo_mem)), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)(common.d_endoCol)), ((const void *)(common.endoCol)), ((size_t)(common.endo_mem)), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)(common.d_epiRow)), ((const void *)(common.epiRow)), ((size_t)(common.epi_mem)), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)(common.d_epiCol)), ((const void *)(common.epiCol)), ((size_t)(common.epi_mem)), cudaMemcpyHostToDevice);
_Z18cudaMemcpyToSymbolI13params_commonE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const params_common *)&d_common)), ((const void *)(&common)), 520UL, 0UL, cudaMemcpyHostToDevice);
_Z18cudaMemcpyToSymbolIA51_13params_uniqueE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const params_unique ( *)[51])&d_unique)), ((const void *)(&unique)), 8160UL, 0UL, cudaMemcpyHostToDevice);
# 586 "main.cu"
for ((common_change.frame_no) = 0; ((common_change.frame_no) < __cuda_local_var_21262_6_non_const_frames_processed); (common_change.frame_no)++) {


__cuda_local_var_21267_9_non_const_frame = (get_frame(__cuda_local_var_21266_9_non_const_frames, (common_change.frame_no), 0, 0, 1));
# 596 "main.cu"
cudaMemcpy(((void *)(common_change.d_frame)), ((const void *)__cuda_local_var_21267_9_non_const_frame), ((size_t)(common.frame_mem)), cudaMemcpyHostToDevice);
_Z18cudaMemcpyToSymbolI20params_common_changeE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const params_common_change *)&d_common_change)), ((const void *)(&common_change)), 16UL, 0UL, cudaMemcpyHostToDevice);


(cudaConfigureCall(__cuda_local_var_21258_7_non_const_blocks, __cuda_local_var_21257_7_non_const_threads, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z6kernelv());


free(((void *)__cuda_local_var_21267_9_non_const_frame));


printf(((const char *)"%d "), (common_change.frame_no));
fflush(((FILE *)0LL));

}
# 615 "main.cu"
printf(((const char *)"\n"));
fflush(((FILE *)0LL));
# 622 "main.cu"
cudaMemcpy(((void *)(common.tEndoRowLoc)), ((const void *)(common.d_tEndoRowLoc)), ((size_t)((common.endo_mem) * (common.no_frames))), cudaMemcpyDeviceToHost);
cudaMemcpy(((void *)(common.tEndoColLoc)), ((const void *)(common.d_tEndoColLoc)), ((size_t)((common.endo_mem) * (common.no_frames))), cudaMemcpyDeviceToHost);

cudaMemcpy(((void *)(common.tEpiRowLoc)), ((const void *)(common.d_tEpiRowLoc)), ((size_t)((common.epi_mem) * (common.no_frames))), cudaMemcpyDeviceToHost);
cudaMemcpy(((void *)(common.tEpiColLoc)), ((const void *)(common.d_tEpiColLoc)), ((size_t)((common.epi_mem) * (common.no_frames))), cudaMemcpyDeviceToHost);


m5_work_end(0UL, 0UL);
# 662 "main.cu"
cudaFree(((void *)(common_change.d_frame)));


free(((void *)(common.endoRow)));
free(((void *)(common.endoCol)));
free(((void *)(common.tEndoRowLoc)));
free(((void *)(common.tEndoColLoc)));

cudaFree(((void *)(common.d_endoRow)));
cudaFree(((void *)(common.d_endoCol)));
cudaFree(((void *)(common.d_tEndoRowLoc)));
cudaFree(((void *)(common.d_tEndoColLoc)));

cudaFree(((void *)(common.d_endoT)));


free(((void *)(common.epiRow)));
free(((void *)(common.epiCol)));
free(((void *)(common.tEpiRowLoc)));
free(((void *)(common.tEpiColLoc)));

cudaFree(((void *)(common.d_epiRow)));
cudaFree(((void *)(common.d_epiCol)));
cudaFree(((void *)(common.d_tEpiRowLoc)));
cudaFree(((void *)(common.d_tEpiColLoc)));

cudaFree(((void *)(common.d_epiT)));
# 694 "main.cu"
for (__cuda_local_var_21261_6_non_const_i = 0; (__cuda_local_var_21261_6_non_const_i < (common.allPoints)); __cuda_local_var_21261_6_non_const_i++) {
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2)));

cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_conv)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_pad_cumv)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_pad_cumv_sel)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub_cumh)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub_cumh_sel)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sub2)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sqr)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in2_sqr_sub2)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_in_sqr)));

cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_tMask)));
cudaFree(((void *)(((unique)[__cuda_local_var_21261_6_non_const_i]).d_mask_conv)));
} return 0;

}
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI13params_commonE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI13params_commonE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const params_common *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA51_13params_uniqueE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA51_13params_uniqueE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const params_unique (*symbol)[51], 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI20params_common_changeE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI20params_common_changeE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const params_common_change *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
static void __sti___12_main_cpp1_ii_b81a68a1(void) {   }

#include "main.cudafe1.stub.c"
