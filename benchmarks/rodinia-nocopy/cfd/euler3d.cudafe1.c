# 1 "euler3d.cu"
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct;
# 87 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E;
# 84 "/usr/include/wchar.h" 3
struct __mbstate_t;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 271 "/usr/include/libio.h" 3
struct _IO_FILE;
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE;
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t;
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
# 60 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
enum CUTBoolean {

CUTFalse,
CUTTrue};
# 28 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
enum _ZUt0_ {
__LC_CTYPE,
__LC_NUMERIC,
__LC_TIME,
__LC_COLLATE,
__LC_MONETARY,
__LC_MESSAGES,
__LC_ALL,
__LC_PAPER,
__LC_NAME,
__LC_ADDRESS,
__LC_TELEPHONE,
__LC_MEASUREMENT,
__LC_IDENTIFICATION};
# 49 "/usr/include/ctype.h" 3
enum _ZUt1_ {
_ISupper = 256,
_ISlower = 512,
_ISalpha = 1024,
_ISdigit = 2048,
_ISxdigit = 4096,
_ISspace = 8192,
_ISprint = 16384,
_ISgraph = 32768,
_ISblank = 1,
_IScntrl,
_ISpunct = 4,
_ISalnum = 8};
# 35 "/usr/include/pthread.h" 3
enum _ZUt2_ {
PTHREAD_CREATE_JOINABLE,

PTHREAD_CREATE_DETACHED};
# 45 "/usr/include/pthread.h" 3
enum _ZUt3_ {
PTHREAD_MUTEX_TIMED_NP,
PTHREAD_MUTEX_RECURSIVE_NP,
PTHREAD_MUTEX_ERRORCHECK_NP,
PTHREAD_MUTEX_ADAPTIVE_NP,


PTHREAD_MUTEX_NORMAL = 0,
PTHREAD_MUTEX_RECURSIVE,
PTHREAD_MUTEX_ERRORCHECK,
PTHREAD_MUTEX_DEFAULT = 0,



PTHREAD_MUTEX_FAST_NP = 0};
# 67 "/usr/include/pthread.h" 3
enum _ZUt4_ {
PTHREAD_MUTEX_STALLED,
PTHREAD_MUTEX_STALLED_NP = 0,
PTHREAD_MUTEX_ROBUST,
PTHREAD_MUTEX_ROBUST_NP = 1};
# 79 "/usr/include/pthread.h" 3
enum _ZUt5_ {
PTHREAD_PRIO_NONE,
PTHREAD_PRIO_INHERIT,
PTHREAD_PRIO_PROTECT};
# 116 "/usr/include/pthread.h" 3
enum _ZUt6_ {
PTHREAD_RWLOCK_PREFER_READER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
PTHREAD_RWLOCK_DEFAULT_NP = 0};
# 148 "/usr/include/pthread.h" 3
enum _ZUt7_ {
PTHREAD_INHERIT_SCHED,

PTHREAD_EXPLICIT_SCHED};
# 158 "/usr/include/pthread.h" 3
enum _ZUt8_ {
PTHREAD_SCOPE_SYSTEM,

PTHREAD_SCOPE_PROCESS};
# 168 "/usr/include/pthread.h" 3
enum _ZUt9_ {
PTHREAD_PROCESS_PRIVATE,

PTHREAD_PROCESS_SHARED};
# 192 "/usr/include/pthread.h" 3
enum _ZUt10_ {
PTHREAD_CANCEL_ENABLE,

PTHREAD_CANCEL_DISABLE};



enum _ZUt11_ {
PTHREAD_CANCEL_DEFERRED,

PTHREAD_CANCEL_ASYNCHRONOUS};
# 27 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt12_ {
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
enum _ZUt13_ {
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
enum _ZUt14_ {
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
# 73 "/usr/include/wctype.h" 3
enum _ZUt15_ {
__ISwupper,
__ISwlower,
__ISwalpha,
__ISwdigit,
__ISwxdigit,
__ISwspace,
__ISwprint,
__ISwgraph,
__ISwblank,
__ISwcntrl,
__ISwpunct,
__ISwalnum,

_ISwupper = 16777216,
_ISwlower = 33554432,
_ISwalpha = 67108864,
_ISwdigit = 134217728,
_ISwxdigit = 268435456,
_ISwspace = 536870912,
_ISwprint = 1073741824,
_ISwgraph = (-2147483647-1),
_ISwblank = 65536,
_ISwcntrl = 131072,
_ISwpunct = 262144,
_ISwalnum = 524288};
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
# 237 "/usr/include/c++/4.4/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE;
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5facetE; struct __SO__NSt6locale5facetE;
# 465 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE;
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E { _ZNSt6locale18_S_categories_sizeE = 12};
# 61 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZSt6locale;
# 60 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt13_Ios_Fmtflags {

_ZSt12_S_boolalpha = 1,
_ZSt6_S_dec,
_ZSt8_S_fixed = 4,
_ZSt6_S_hex = 8,
_ZSt11_S_internal = 16,
_ZSt7_S_left = 32,
_ZSt6_S_oct = 64,
_ZSt8_S_right = 128,
_ZSt13_S_scientific = 256,
_ZSt11_S_showbase = 512,
_ZSt12_S_showpoint = 1024,
_ZSt10_S_showpos = 2048,
_ZSt9_S_skipws = 4096,
_ZSt10_S_unitbuf = 8192,
_ZSt12_S_uppercase = 16384,
_ZSt14_S_adjustfield = 176,
_ZSt12_S_basefield = 74,
_ZSt13_S_floatfield = 260,
_ZSt19_S_ios_fmtflags_end = 65536};
# 112 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt13_Ios_Openmode {

_ZSt6_S_app = 1,
_ZSt6_S_ate,
_ZSt6_S_bin = 4,
_ZSt5_S_in = 8,
_ZSt6_S_out = 16,
_ZSt8_S_trunc = 32,
_ZSt19_S_ios_openmode_end = 65536};
# 152 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt12_Ios_Iostate {

_ZSt10_S_goodbit,
_ZSt9_S_badbit,
_ZSt9_S_eofbit,
_ZSt10_S_failbit = 4,
_ZSt18_S_ios_iostate_end = 65536};
# 189 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt12_Ios_Seekdir {

_ZSt6_S_beg,
_ZSt6_S_cur,
_ZSt6_S_end,
_ZSt18_S_ios_seekdir_end = 65536};
# 427 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZNSt8ios_base5eventE {

_ZNSt8ios_base11erase_eventE,
_ZNSt8ios_base11imbue_eventE,
_ZNSt8ios_base13copyfmt_eventE};
# 473 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE;
# 503 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE;
# 515 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E { _ZNSt8ios_base18_S_local_word_sizeE = 8};
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt8ios_base;
# 90 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt19istreambuf_iteratorIcSt11char_traitsIcEE;


struct _ZSt19ostreambuf_iteratorIcSt11char_traitsIcEE;
# 50 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE;
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
struct _ZSt10ctype_base;
# 674 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE;
# 1521 "/usr/include/c++/4.4/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt_E {
_ZNSt10__num_base9_S_ominusE,
_ZNSt10__num_base8_S_oplusE,
_ZNSt10__num_base5_S_oxE,
_ZNSt10__num_base5_S_oXE,
_ZNSt10__num_base10_S_odigitsE,
_ZNSt10__num_base14_S_odigits_endE = 20,
_ZNSt10__num_base11_S_oudigitsE = 20,
_ZNSt10__num_base15_S_oudigits_endE = 36,
_ZNSt10__num_base5_S_oeE = 18,
_ZNSt10__num_base5_S_oEE = 34,
_ZNSt10__num_base7_S_oendE = 36};
# 1547 "/usr/include/c++/4.4/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt0_E {
_ZNSt10__num_base9_S_iminusE,
_ZNSt10__num_base8_S_iplusE,
_ZNSt10__num_base5_S_ixE,
_ZNSt10__num_base5_S_iXE,
_ZNSt10__num_base8_S_izeroE,
_ZNSt10__num_base5_S_ieE = 18,
_ZNSt10__num_base5_S_iEE = 24,
_ZNSt10__num_base7_S_iendE = 26};
# 1908 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE;
# 2245 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE;
# 47 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE;
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSo; struct __SO__So;
# 53 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSi; struct __SO__Si;
# 48 "/usr/include/c++/4.4/bits/codecvt.h" 3
enum _ZNSt12codecvt_base6resultE {

_ZNSt12codecvt_base2okE,
_ZNSt12codecvt_base7partialE,
_ZNSt12codecvt_base5errorE,
_ZNSt12codecvt_base6noconvE};
# 330 "/usr/include/c++/4.4/bits/codecvt.h" 3
struct _ZSt7codecvtIcc11__mbstate_tE;
# 52 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE;
# 78 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE;


struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE;


struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE;
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 40 "/usr/include/xlocale.h" 3
typedef struct __locale_struct *__locale_t;
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 87 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E {

unsigned __wch;



char __wchb[4];};
# 84 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;
# 94 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E __value;};
typedef struct __mbstate_t __mbstate_t;
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

struct __pthread_internal_list *__prev;
struct __pthread_internal_list *__next;};
typedef struct __pthread_internal_list __pthread_list_t;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;};
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t {
# 101 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE __data;
char __size[40];
long __align;};
typedef union pthread_mutex_t pthread_mutex_t;
# 106 "/usr/include/wchar.h" 3
typedef __mbstate_t mbstate_t;
# 47 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/gthr-default.h" 3
typedef pthread_mutex_t __gthread_mutex_t;
# 32 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/atomic_word.h" 3
typedef int _Atomic_word;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 59 "/usr/include/c++/4.4/exception" 3
struct _ZSt9exception { const long *__vptr;};
# 54 "/usr/include/c++/4.4/new" 3
struct _ZSt9bad_alloc { struct _ZSt9exception __b_St9exception;};
# 98 "/usr/include/c++/4.4/bits/postypes.h" 3
typedef ptrdiff_t _ZSt10streamsize;
# 130 "/usr/include/c++/4.4/iosfwd" 3
typedef struct _ZSo _ZSt7ostream;
# 137 "/usr/include/c++/4.4/iosfwd" 3
typedef struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE _ZSt8ifstream;
typedef struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE _ZSt8ofstream;
# 243 "/usr/include/c++/4.4/bits/char_traits.h" 3
typedef mbstate_t _ZNSt11char_traitsIcE10state_typeE;
# 237 "/usr/include/c++/4.4/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE {char __nv_no_debug_dummy_end_padding_0;};
# 59 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/c++locale.h" 3
typedef __locale_t _ZSt10__c_locale;
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5facetE { const long *__vptr;
# 341 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_Atomic_word _M_refcount;char __nv_no_debug_dummy_end_padding_0[4];};
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct __SO__NSt6locale5facetE { const long *__vptr;
# 341 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_Atomic_word _M_refcount;};
# 61 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZSt6locale {
# 278 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE *_M_impl;};
# 263 "/usr/include/c++/4.4/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Fmtflags _ZNSt8ios_base8fmtflagsE;
# 338 "/usr/include/c++/4.4/bits/ios_base.h" 3
typedef enum _ZSt12_Ios_Iostate _ZNSt8ios_base7iostateE;
# 369 "/usr/include/c++/4.4/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Openmode _ZNSt8ios_base8openmodeE;
# 503 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE {

void *_M_pword;
long _M_iword;};
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy_end_padding_0;};
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt8ios_base { const long *__vptr;
# 464 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10streamsize _M_precision;
_ZSt10streamsize _M_width;
_ZNSt8ios_base8fmtflagsE _M_flags;
_ZNSt8ios_base7iostateE _M_exception;
_ZNSt8ios_base7iostateE _M_streambuf_state;
# 494 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE *_M_callbacks;
# 511 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_word_zero;




struct _ZNSt8ios_base6_WordsE _M_local_word[8];


int _M_word_size;
struct _ZNSt8ios_base6_WordsE *_M_word;
# 526 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt6locale _M_ios_locale;};
# 123 "/usr/include/c++/4.4/streambuf" 3
typedef char _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE;
typedef struct _ZSt11char_traitsIcE _ZNSt15basic_streambufIcSt11char_traitsIcEE11traits_typeE;
# 50 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE { const long *__vptr;
# 179 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_end;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_end;


struct _ZSt6locale _M_buf_locale;};
# 43 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
typedef const int *_ZNSt10ctype_base9__to_typeE;



typedef unsigned short _ZNSt10ctype_base4maskE;
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
struct _ZSt10ctype_base {char __nv_no_debug_dummy_end_padding_0;};
# 679 "/usr/include/c++/4.4/bits/locale_facets.h" 3
typedef char _ZNSt5ctypeIcE9char_typeE;
# 674 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE {  const long *__b_NSt6locale5facetE___vptr;
# 341 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_Atomic_word __b_NSt6locale5facetE__M_refcount;
# 683 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZSt10__c_locale _M_c_locale_ctype;
char _M_del;
_ZNSt10ctype_base9__to_typeE _M_toupper;
_ZNSt10ctype_base9__to_typeE _M_tolower;
const _ZNSt10ctype_base4maskE *_M_table;
char _M_widen_ok;
char _M_widen[256];
char _M_narrow[256];
char _M_narrow_ok;char __nv_no_debug_dummy_end_padding_0[6];};
# 71 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef char _ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE;
# 82 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef struct _ZSt5ctypeIcE _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE;

typedef struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE;

typedef struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE;
# 47 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE { struct _ZSt8ios_base __b_St8ios_base;
# 91 "/usr/include/c++/4.4/bits/basic_ios.h" 3
struct _ZSo *_M_tie;
_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE _M_fill;
char _M_fill_init;
struct _ZSt15basic_streambufIcSt11char_traitsIcEE *_M_streambuf;


const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *_M_ctype;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *_M_num_put;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *_M_num_get;};
# 59 "/usr/include/c++/4.4/ostream" 3
typedef char _ZNSo9char_typeE;
# 68 "/usr/include/c++/4.4/ostream" 3
typedef struct _ZSo _ZNSo14__ostream_typeE;
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSo { const long *__vptr; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;}; struct __SO__So { const long *__vptr;};
# 68 "/usr/include/c++/4.4/istream" 3
typedef struct _ZSi _ZNSi14__istream_typeE;
# 53 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSi { const long *__vptr;
# 79 "/usr/include/c++/4.4/istream" 3
_ZSt10streamsize _M_gcount; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 53 "/usr/include/c++/4.4/iosfwd" 3
struct __SO__Si { const long *__vptr;
# 79 "/usr/include/c++/4.4/istream" 3
_ZSt10streamsize _M_gcount;};
# 42 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/c++io.h" 3
typedef __gthread_mutex_t _ZSt8__c_lock;


typedef FILE _ZSt8__c_file;
# 52 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE {


_ZSt8__c_file *_M_cfile;


char _M_cfile_created;char __nv_no_debug_dummy_end_padding_0[7];};
# 71 "/usr/include/c++/4.4/fstream" 3
typedef char _ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE;
# 78 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE;
typedef struct _ZSt12__basic_fileIcE _ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE;
typedef _ZNSt11char_traitsIcE10state_typeE _ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE;
typedef struct _ZSt7codecvtIcc11__mbstate_tE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE;
# 78 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE { struct _ZSt15basic_streambufIcSt11char_traitsIcEE __b_St15basic_streambufIcSt11char_traitsIcEE;
# 88 "/usr/include/c++/4.4/fstream" 3
_ZSt8__c_lock _M_lock;


_ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE _M_file;


_ZNSt8ios_base8openmodeE _M_mode;


_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_beg;




_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_cur;



_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_last;


_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_buf;
# 116 "/usr/include/c++/4.4/fstream" 3
size_t _M_buf_size;


char _M_buf_allocated;
# 128 "/usr/include/c++/4.4/fstream" 3
char _M_reading;
char _M_writing;
# 137 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE _M_pback;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_cur_save;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_end_save;
char _M_pback_init;



const _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE *_M_codecvt;
# 151 "/usr/include/c++/4.4/fstream" 3
char *_M_ext_buf;




_ZSt10streamsize _M_ext_buf_size;
# 163 "/usr/include/c++/4.4/fstream" 3
const char *_M_ext_next;
char *_M_ext_end;};
# 425 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt14basic_ifstreamIcSt11char_traitsIcEE14__filebuf_typeE;
# 81 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE { struct __SO__Si __b_Si;
# 429 "/usr/include/c++/4.4/fstream" 3
_ZNSt14basic_ifstreamIcSt11char_traitsIcEE14__filebuf_typeE _M_filebuf; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 593 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt14basic_ofstreamIcSt11char_traitsIcEE14__filebuf_typeE;
# 84 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE { struct __SO__So __b_So;
# 597 "/usr/include/c++/4.4/fstream" 3
_ZNSt14basic_ofstreamIcSt11char_traitsIcEE14__filebuf_typeE _M_filebuf; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 140 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((visibility("default"))) void _ZdlPv(void *);
# 139 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((visibility("default"))) void *_Znam(size_t);

extern __attribute__((visibility("default"))) void _ZdaPv(void *);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 958 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(void);
# 1013 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t);
# 1246 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *, int);
# 1298 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int);
# 1315 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int *);
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 3653 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void *, int, size_t);
# 71 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern void *memcpy(void *__restrict__, const void *__restrict__, size_t);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);

extern __attribute__((__malloc__)) void *malloc(size_t);
# 544 "/usr/include/stdlib.h" 3
extern __attribute__((__noreturn__)) void exit(int);
# 2242 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern float sqrtf(float);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 681 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
extern enum CUTBoolean cutCreateTimer(unsigned *);
# 698 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
extern enum CUTBoolean cutStartTimer(const unsigned);
# 706 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
extern enum CUTBoolean cutStopTimer(const unsigned);
# 734 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
extern float cutGetAverageTimerValue(const unsigned);
# 46 "euler3d.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 87 "euler3d.cu"
extern void _Z4dumpPfii(float *, int, int);
# 133 "euler3d.cu"
extern void _Z20initialize_variablesiPfS_(int, float *, float *);
# 203 "euler3d.cu"
extern void _Z19compute_step_factoriPfS_S_(int, float *, float *, float *);
# 344 "euler3d.cu"
extern void _Z12compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(int, int *, float *, float *, float *, float *, float3 *, float3 *, float3 *, float3 *);
# 363 "euler3d.cu"
extern void _Z9time_stepiiPfS_S_S_(int, int, float *, float *, float *, float *);
# 373 "euler3d.cu"
extern int main(int, char **);
# 56 "euler3d.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z5allocIfEPT_i */ float *_Z5allocIfEPT_i(int);
# 56 "euler3d.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z5allocIiEPT_i */ int *_Z5allocIiEPT_i(int);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
# 179 "/usr/include/c++/4.4/bits/locale_classes.h" 3
extern __attribute__((visibility("default"))) void _ZNSt6localeD1Ev(struct _ZSt6locale *const);
# 782 "/usr/include/c++/4.4/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD2Ev(struct _ZSt8ios_base *const);

extern __attribute__((visibility("default"))) void _ZNSt8ios_baseC1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseC2Ev(struct _ZSt8ios_base *const);
# 541 "/usr/include/c++/4.4/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitC1Ev(struct _ZNSt8ios_base4InitE *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitD1Ev(struct _ZNSt8ios_base4InitE *const);
# 192 "/usr/include/c++/4.4/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 865 "/usr/include/c++/4.4/bits/locale_facets.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNKSt5ctypeIcE5widenEc */ __inline__ __attribute__((visibility("default"))) _ZNSt5ctypeIcE9char_typeE _ZNKSt5ctypeIcE5widenEc(const struct _ZSt5ctypeIcE *const, char);
# 1159 "/usr/include/c++/4.4/bits/locale_facets.h" 3
extern __attribute__((visibility("default"))) void _ZNKSt5ctypeIcE13_M_widen_initEv(const struct _ZSt5ctypeIcE *const);
# 138 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, _ZNSt8ios_base7iostateE);
# 272 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 450 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 462 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, struct _ZSt15basic_streambufIcSt11char_traitsIcEE *);
# 91 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD2Ev(struct _ZSo *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD0Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSoD0Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD1Ev(struct _ZSo *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSoD1Ev(struct _ZSo *const);
# 108 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEPFRSoS_E(struct _ZSo *const, _ZNSo14__ostream_typeE *(*)(_ZNSo14__ostream_typeE *));
# 188 "/usr/include/c++/4.4/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEi(struct _ZSo *const, int);
# 209 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEd(struct _ZSo *const, double);



extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEf(struct _ZSo *const, float);
# 283 "/usr/include/c++/4.4/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSo3putEc(struct _ZSo *const, _ZNSo9char_typeE);
# 324 "/usr/include/c++/4.4/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSo5flushEv(struct _ZSo *const);
# 366 "/usr/include/c++/4.4/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSo9_M_insertIdEERSoT_(struct _ZSo *const, double);
# 101 "/usr/include/c++/4.4/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev(struct _ZSi *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD1Ev(struct _ZSi *const);
# 177 "/usr/include/c++/4.4/istream" 3
extern __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSirsERi(struct _ZSi *const, int *);
# 202 "/usr/include/c++/4.4/istream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSirsERf(struct _ZSi *const, float *);
# 587 "/usr/include/c++/4.4/istream" 3
extern __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSi10_M_extractIfEERSiRT_(struct _ZSi *const, float *);
# 84 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
extern __attribute__((visibility("default"))) void _ZNSt12__basic_fileIcED1Ev(struct _ZSt12__basic_fileIcE *const);
# 208 "/usr/include/c++/4.4/fstream" 3
extern __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);





extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 265 "/usr/include/c++/4.4/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 291 "/usr/include/c++/4.4/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 454 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const long *const *, const char *, _ZNSt8ios_base8openmodeE);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 485 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ifstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
# 623 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const long *const *, const char *, _ZNSt8ios_base8openmodeE);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 656 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ofstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
extern __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const);
# 51 "/usr/include/c++/4.4/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt16__throw_bad_castv(void);
# 74 "/usr/include/c++/4.4/bits/ostream_insert.h" 3
extern struct _ZSo *_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(struct _ZSo *, const char *, _ZSt10streamsize);
# 538 "/usr/include/c++/4.4/ostream" 3
extern __inline__ struct _ZSo *_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(struct _ZSo *);
# 505 "/usr/include/c++/4.4/ostream" 3
extern __inline__ struct _ZSo *_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct _ZSo *, const char *);
# 186 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt3minIiERKT_S2_S2_ */ __inline__ const int *_ZSt3minIiERKT_S2_S2_(const int *, const int *);
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___15_euler3d_cpp1_ii_fd6503f5(void) __attribute__((__constructor__));
extern int __cxa_atexit();
# 167 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 59 "/usr/include/c++/4.4/iostream" 3
extern _ZSt7ostream _ZSt4cout __attribute__((visibility("default")));
# 72 "/usr/include/c++/4.4/iostream" 3
static struct _ZNSt8ios_base4InitE _ZSt8__ioinit __attribute__((visibility("default"))) = {0};
extern void *__dso_handle __attribute__((visibility("hidden")));
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
# 87 "euler3d.cu"
void _Z4dumpPfii( float *h_variables,  int nel,  int nelr)
{



{
 _ZSt8ofstream __cuda_local_var_35676_17_non_const_file;
# 93 "euler3d.cu"
_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_35676_17_non_const_file), ((const char *)"density"), ((enum _ZSt13_Ios_Openmode)(((int)_ZSt6_S_out) | ((int)_ZSt8_S_trunc))));
_ZNSolsEPFRSoS_E((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((((struct _ZSo *)&__cuda_local_var_35676_17_non_const_file)), nel)), ((const char *)" "))), nelr)), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); {
 int i;
# 95 "euler3d.cu"
i = 0; for (; (i < nel); i++) { _ZNSolsEPFRSoS_E((_ZNSolsEf((((struct _ZSo *)&__cuda_local_var_35676_17_non_const_file)), (h_variables[(i + (0 * nelr))]))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); } }
_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_35676_17_non_const_file)); }


{
 _ZSt8ofstream __cuda_local_var_35683_17_non_const_file;
# 100 "euler3d.cu"
_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_35683_17_non_const_file), ((const char *)"momentum"), ((enum _ZSt13_Ios_Openmode)(((int)_ZSt6_S_out) | ((int)_ZSt8_S_trunc))));
_ZNSolsEPFRSoS_E((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((((struct _ZSo *)&__cuda_local_var_35683_17_non_const_file)), nel)), ((const char *)" "))), nelr)), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); {
 int i;
# 102 "euler3d.cu"
i = 0; for (; (i < nel); i++)
{ {
 int j;
# 104 "euler3d.cu"
j = 0; for (; (j != 3); j++) {
_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEf((((struct _ZSo *)&__cuda_local_var_35683_17_non_const_file)), (h_variables[(i + ((1 + j) * nelr))]))), ((const char *)" ")); } }
_ZNSolsEPFRSoS_E((((struct _ZSo *)&__cuda_local_var_35683_17_non_const_file)), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
} }
_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_35683_17_non_const_file)); }

{
 _ZSt8ofstream __cuda_local_var_35694_17_non_const_file;
# 111 "euler3d.cu"
_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_35694_17_non_const_file), ((const char *)"density_energy"), ((enum _ZSt13_Ios_Openmode)(((int)_ZSt6_S_out) | ((int)_ZSt8_S_trunc))));
_ZNSolsEPFRSoS_E((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((((struct _ZSo *)&__cuda_local_var_35694_17_non_const_file)), nel)), ((const char *)" "))), nelr)), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); {
 int i;
# 113 "euler3d.cu"
i = 0; for (; (i < nel); i++) { _ZNSolsEPFRSoS_E((_ZNSolsEf((((struct _ZSo *)&__cuda_local_var_35694_17_non_const_file)), (h_variables[(i + (4 * nelr))]))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); } }
_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_35694_17_non_const_file)); }
_ZdaPv(((void *)h_variables)); 
}
# 133 "euler3d.cu"
void _Z20initialize_variablesiPfS_( int nelr,  float *variables,  float *ff_variable)
{  unsigned __T20;
 dim3 __cuda_local_var_35709_7_non_const_Dg;
# 135 "euler3d.cu"
 dim3 __cuda_local_var_35709_23_non_const_Db;
# 135 "euler3d.cu"
{ __T20 = ((unsigned)(nelr / 192)); { (__cuda_local_var_35709_7_non_const_Dg.x) = __T20; (__cuda_local_var_35709_7_non_const_Dg.y) = 1U; (__cuda_local_var_35709_7_non_const_Dg.z) = 1U; } } { (__cuda_local_var_35709_23_non_const_Db.x) = 192U; (__cuda_local_var_35709_23_non_const_Db.y) = 1U; (__cuda_local_var_35709_23_non_const_Db.z) = 1U; }
(cudaConfigureCall(__cuda_local_var_35709_7_non_const_Dg, __cuda_local_var_35709_23_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z25cuda_initialize_variablesiPfS_(nelr, variables, ff_variable));
{  cudaError_t __cuda_local_var_35711_16_non_const_err;
# 137 "euler3d.cu"
__cuda_local_var_35711_16_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_35711_16_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("initialize_variables failed")), ((const char *)("euler3d.cu")), 137, (cudaGetErrorString(__cuda_local_var_35711_16_non_const_err))); exit(1); } } ; 
}
# 203 "euler3d.cu"
void _Z19compute_step_factoriPfS_S_( int nelr,  float *variables,  float *areas,  float *step_factors)
{  unsigned __T21;
 dim3 __cuda_local_var_35779_7_non_const_Dg;
# 205 "euler3d.cu"
 dim3 __cuda_local_var_35779_23_non_const_Db;
# 205 "euler3d.cu"
{ __T21 = ((unsigned)(nelr / 192)); { (__cuda_local_var_35779_7_non_const_Dg.x) = __T21; (__cuda_local_var_35779_7_non_const_Dg.y) = 1U; (__cuda_local_var_35779_7_non_const_Dg.z) = 1U; } } { (__cuda_local_var_35779_23_non_const_Db.x) = 192U; (__cuda_local_var_35779_23_non_const_Db.y) = 1U; (__cuda_local_var_35779_23_non_const_Db.z) = 1U; }
(cudaConfigureCall(__cuda_local_var_35779_7_non_const_Dg, __cuda_local_var_35779_23_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z24cuda_compute_step_factoriPfS_S_(nelr, variables, areas, step_factors));
{  cudaError_t __cuda_local_var_35781_16_non_const_err;
# 207 "euler3d.cu"
__cuda_local_var_35781_16_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_35781_16_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("compute_step_factor failed")), ((const char *)("euler3d.cu")), 207, (cudaGetErrorString(__cuda_local_var_35781_16_non_const_err))); exit(1); } } ; 
}
# 344 "euler3d.cu"
void _Z12compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_( int nelr,  int *elements_surrounding_elements,  float *normals,  float *variables,  float *fluxes,  float *ff_variable,  float3 *ff_flux_contribution_momentum_x,  float3 *ff_flux_contribution_momentum_y,  float3 *ff_flux_contribution_momentum_z,  float3 *ff_flux_contribution_density_energy)
{  unsigned __T22;
 dim3 __cuda_local_var_35920_7_non_const_Dg;
# 346 "euler3d.cu"
 dim3 __cuda_local_var_35920_23_non_const_Db;
# 346 "euler3d.cu"
{ __T22 = ((unsigned)(nelr / 192)); { (__cuda_local_var_35920_7_non_const_Dg.x) = __T22; (__cuda_local_var_35920_7_non_const_Dg.y) = 1U; (__cuda_local_var_35920_7_non_const_Dg.z) = 1U; } } { (__cuda_local_var_35920_23_non_const_Db.x) = 192U; (__cuda_local_var_35920_23_non_const_Db.y) = 1U; (__cuda_local_var_35920_23_non_const_Db.z) = 1U; }
(cudaConfigureCall(__cuda_local_var_35920_7_non_const_Dg, __cuda_local_var_35920_23_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(nelr, elements_surrounding_elements, normals, variables, fluxes, ff_variable, ff_flux_contribution_momentum_x, ff_flux_contribution_momentum_y, ff_flux_contribution_momentum_z, ff_flux_contribution_density_energy));
{  cudaError_t __cuda_local_var_35922_16_non_const_err;
# 348 "euler3d.cu"
__cuda_local_var_35922_16_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_35922_16_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("compute_flux failed")), ((const char *)("euler3d.cu")), 348, (cudaGetErrorString(__cuda_local_var_35922_16_non_const_err))); exit(1); } } ; 
}
# 363 "euler3d.cu"
void _Z9time_stepiiPfS_S_S_( int j,  int nelr,  float *old_variables,  float *variables,  float *step_factors,  float *fluxes)
{  unsigned __T23;
 dim3 __cuda_local_var_35939_7_non_const_Dg;
# 365 "euler3d.cu"
 dim3 __cuda_local_var_35939_23_non_const_Db;
# 365 "euler3d.cu"
{ __T23 = ((unsigned)(nelr / 192)); { (__cuda_local_var_35939_7_non_const_Dg.x) = __T23; (__cuda_local_var_35939_7_non_const_Dg.y) = 1U; (__cuda_local_var_35939_7_non_const_Dg.z) = 1U; } } { (__cuda_local_var_35939_23_non_const_Db.x) = 192U; (__cuda_local_var_35939_23_non_const_Db.y) = 1U; (__cuda_local_var_35939_23_non_const_Db.z) = 1U; }
(cudaConfigureCall(__cuda_local_var_35939_7_non_const_Dg, __cuda_local_var_35939_23_non_const_Db, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z14cuda_time_stepiiPfS_S_S_(j, nelr, old_variables, variables, step_factors, fluxes));
{  cudaError_t __cuda_local_var_35941_16_non_const_err;
# 367 "euler3d.cu"
__cuda_local_var_35941_16_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_35941_16_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("update failed")), ((const char *)("euler3d.cu")), 367, (cudaGetErrorString(__cuda_local_var_35941_16_non_const_err))); exit(1); } } ; 
}




int main( int argc,  char **argv)
{  float __T24;
 float __T25;
 int __T26;
 int __T27;


 const char *__cuda_local_var_35954_14_non_const_data_file_name;

 struct cudaDeviceProp __cuda_local_var_35956_17_non_const_prop;
 int __cuda_local_var_35957_6_non_const_dev;
# 393 "euler3d.cu"
 float __cuda_local_var_35967_9_non_const_h_ff_variable[5];
 float __cuda_local_var_35968_15_const_angle_of_attack;



 float __cuda_local_var_35972_9_non_const_ff_pressure;
 float __cuda_local_var_35973_9_non_const_ff_speed_of_sound;
 float __cuda_local_var_35974_9_non_const_ff_speed;

 float3 __cuda_local_var_35976_10_non_const_ff_velocity;
# 413 "euler3d.cu"
 float3 __cuda_local_var_35987_10_non_const_h_ff_momentum;



 float3 __cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x;
 float3 __cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y;
 float3 __cuda_local_var_35993_10_non_const_h_ff_flux_contribution_momentum_z;
 float3 __cuda_local_var_35994_10_non_const_h_ff_flux_contribution_density_energy;



 int __cuda_local_var_35998_6_non_const_nel;
 int __cuda_local_var_35999_6_non_const_nelr;


 float *__cuda_local_var_36002_9_non_const_areas;
 int *__cuda_local_var_36003_7_non_const_elements_surrounding_elements;
 float *__cuda_local_var_36004_9_non_const_normals;

 _ZSt8ifstream __cuda_local_var_36006_17_non_const_file;




 float *__cuda_local_var_36011_10_non_const_h_areas;
 int *__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements;
 float *__cuda_local_var_36013_10_non_const_h_normals;
# 462 "euler3d.cu"
 int __cuda_local_var_36036_7_non_const_last;
# 493 "euler3d.cu"
 float *__cuda_local_var_36067_9_non_const_variables;
 float __cuda_local_var_36068_8_non_const_ff_variable[5];
# 501 "euler3d.cu"
 float *__cuda_local_var_36075_9_non_const_old_variables;
 float *__cuda_local_var_36076_9_non_const_fluxes;
 float *__cuda_local_var_36077_9_non_const_step_factors;
# 528 "euler3d.cu"
 unsigned __cuda_local_var_36102_15_non_const_timer;
# 375 "euler3d.cu"
if (argc < 2)
{
_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"specify data file name"))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
return 0;
}
__cuda_local_var_35954_14_non_const_data_file_name = ((const char *)(argv[1]));




{  enum cudaError __cuda_local_var_35959_14_non_const_err;
# 385 "euler3d.cu"
__cuda_local_var_35959_14_non_const_err = (cudaSetDevice(0)); if (0 != ((int)__cuda_local_var_35959_14_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error in file \'%s\' in line %i : %s.\n"), ((const char *)("euler3d.cu")), 385, (cudaGetErrorString(__cuda_local_var_35959_14_non_const_err))); exit(1); } } ; ;
{  enum cudaError __cuda_local_var_35960_14_non_const_err;
# 386 "euler3d.cu"
__cuda_local_var_35960_14_non_const_err = (cudaGetDevice((&__cuda_local_var_35957_6_non_const_dev))); if (0 != ((int)__cuda_local_var_35960_14_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error in file \'%s\' in line %i : %s.\n"), ((const char *)("euler3d.cu")), 386, (cudaGetErrorString(__cuda_local_var_35960_14_non_const_err))); exit(1); } } ; ;
{  enum cudaError __cuda_local_var_35961_14_non_const_err;
# 387 "euler3d.cu"
__cuda_local_var_35961_14_non_const_err = (cudaGetDeviceProperties((&__cuda_local_var_35956_17_non_const_prop), __cuda_local_var_35957_6_non_const_dev)); if (0 != ((int)__cuda_local_var_35961_14_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error in file \'%s\' in line %i : %s.\n"), ((const char *)("euler3d.cu")), 387, (cudaGetErrorString(__cuda_local_var_35961_14_non_const_err))); exit(1); } } ; ;

printf(((const char *)"Name:                     %s\n"), ((__cuda_local_var_35956_17_non_const_prop.name)));




__cuda_local_var_35968_15_const_angle_of_attack = (0.0F);

((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]) = (1.399999976F);

__cuda_local_var_35972_9_non_const_ff_pressure = (1.0F);
__cuda_local_var_35973_9_non_const_ff_speed_of_sound = ((__T24 = (((1.399999976F) * __cuda_local_var_35972_9_non_const_ff_pressure) / ((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]))) , (__builtin_sqrtf(__T24)));
__cuda_local_var_35974_9_non_const_ff_speed = ((1.200000048F) * __cuda_local_var_35973_9_non_const_ff_speed_of_sound);


(__cuda_local_var_35976_10_non_const_ff_velocity.x) = (__cuda_local_var_35974_9_non_const_ff_speed * ((float)(__builtin_cosf((0.0F)))));
(__cuda_local_var_35976_10_non_const_ff_velocity.y) = (__cuda_local_var_35974_9_non_const_ff_speed * ((float)(__builtin_sinf((0.0F)))));
(__cuda_local_var_35976_10_non_const_ff_velocity.z) = (0.0F);

((__cuda_local_var_35967_9_non_const_h_ff_variable)[1]) = (((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]) * (__cuda_local_var_35976_10_non_const_ff_velocity.x));
((__cuda_local_var_35967_9_non_const_h_ff_variable)[2]) = (((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]) * (__cuda_local_var_35976_10_non_const_ff_velocity.y));
((__cuda_local_var_35967_9_non_const_h_ff_variable)[3]) = (((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]) * (__cuda_local_var_35976_10_non_const_ff_velocity.z));

((__cuda_local_var_35967_9_non_const_h_ff_variable)[4]) = ((((__cuda_local_var_35967_9_non_const_h_ff_variable)[0]) * ((0.5F) * (__cuda_local_var_35974_9_non_const_ff_speed * __cuda_local_var_35974_9_non_const_ff_speed))) + (__cuda_local_var_35972_9_non_const_ff_pressure / (0.3999999762F)));


(__cuda_local_var_35987_10_non_const_h_ff_momentum.x) = (*(((__cuda_local_var_35967_9_non_const_h_ff_variable) + 1) + 0));
(__cuda_local_var_35987_10_non_const_h_ff_momentum.y) = (*(((__cuda_local_var_35967_9_non_const_h_ff_variable) + 1) + 1));
(__cuda_local_var_35987_10_non_const_h_ff_momentum.z) = (*(((__cuda_local_var_35967_9_non_const_h_ff_variable) + 1) + 2));




{ (__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x.x) = (((__cuda_local_var_35976_10_non_const_ff_velocity.x) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.x)) + __cuda_local_var_35972_9_non_const_ff_pressure); (__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x.y) = ((__cuda_local_var_35976_10_non_const_ff_velocity.x) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.y)); (__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x.z) = ((__cuda_local_var_35976_10_non_const_ff_velocity.x) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.z)); (__cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y.x) = (__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x.y); (__cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y.y) = (((__cuda_local_var_35976_10_non_const_ff_velocity.y) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.y)) + __cuda_local_var_35972_9_non_const_ff_pressure); (__cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y.z) = ((__cuda_local_var_35976_10_non_const_ff_velocity.y) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.z)); (__cuda_local_var_35993_10_non_const_h_ff_flux_contribution_momentum_z.x) = (__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x.z); (__cuda_local_var_35993_10_non_const_h_ff_flux_contribution_momentum_z.y) = (__cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y.z); (__cuda_local_var_35993_10_non_const_h_ff_flux_contribution_momentum_z.z) = (((__cuda_local_var_35976_10_non_const_ff_velocity.z) * (__cuda_local_var_35987_10_non_const_h_ff_momentum.z)) + __cuda_local_var_35972_9_non_const_ff_pressure); __T25 = ((*((__cuda_local_var_35967_9_non_const_h_ff_variable) + 4)) + __cuda_local_var_35972_9_non_const_ff_pressure); (__cuda_local_var_35994_10_non_const_h_ff_flux_contribution_density_energy.x) = ((__cuda_local_var_35976_10_non_const_ff_velocity.x) * __T25); (__cuda_local_var_35994_10_non_const_h_ff_flux_contribution_density_energy.y) = ((__cuda_local_var_35976_10_non_const_ff_velocity.y) * __T25); (__cuda_local_var_35994_10_non_const_h_ff_flux_contribution_density_energy.z) = ((__cuda_local_var_35976_10_non_const_ff_velocity.z) * __T25); }
# 432 "euler3d.cu"
_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_36006_17_non_const_file), __cuda_local_var_35954_14_non_const_data_file_name, ((_ZNSt8ios_base8openmodeE)8));

_ZNSirsERi((((struct _ZSi *)&__cuda_local_var_36006_17_non_const_file)), (&__cuda_local_var_35998_6_non_const_nel));
__cuda_local_var_35999_6_non_const_nelr = (192 * ((__cuda_local_var_35998_6_non_const_nel / 192) + (*(_ZSt3minIiERKT_S2_S2_(((__T26 = 1) , (((const int *)&__T26))), ((__T27 = (__cuda_local_var_35998_6_non_const_nel % 192)) , (((const int *)&__T27))))))));

__cuda_local_var_36011_10_non_const_h_areas = ((float *)(_Znam((((unsigned long)__cuda_local_var_35999_6_non_const_nelr) * 4UL))));
__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements = ((int *)(_Znam((((unsigned long)(__cuda_local_var_35999_6_non_const_nelr * 4)) * 4UL))));
__cuda_local_var_36013_10_non_const_h_normals = ((float *)(_Znam((((unsigned long)((__cuda_local_var_35999_6_non_const_nelr * 3) * 4)) * 4UL))));

_ZNSolsEPFRSoS_E((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEi((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Elements: "))), __cuda_local_var_35998_6_non_const_nel)), ((const char *)" nelr: "))), __cuda_local_var_35999_6_non_const_nelr)), ((const char *)" NNB: "))), 4)), ((const char *)" NDIM: "))), 3)), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); {

 int i;
# 443 "euler3d.cu"
i = 0; for (; (i < __cuda_local_var_35998_6_non_const_nel); i++)
{
_ZNSirsERf((((struct _ZSi *)&__cuda_local_var_36006_17_non_const_file)), (__cuda_local_var_36011_10_non_const_h_areas + i)); {
 int j;
# 446 "euler3d.cu"
j = 0; for (; (j < 4); j++)
{
_ZNSirsERi((((struct _ZSi *)&__cuda_local_var_36006_17_non_const_file)), (__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements + (i + (j * __cuda_local_var_35999_6_non_const_nelr))));
if ((__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements[(i + (j * __cuda_local_var_35999_6_non_const_nelr))]) < 0) { (__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements[(i + (j * __cuda_local_var_35999_6_non_const_nelr))]) = (-1); }
(__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements[(i + (j * __cuda_local_var_35999_6_non_const_nelr))])--; {

 int k;
# 452 "euler3d.cu"
k = 0; for (; (k < 3); k++)
{
_ZNSirsERf((((struct _ZSi *)&__cuda_local_var_36006_17_non_const_file)), (__cuda_local_var_36013_10_non_const_h_normals + (i + ((j + (k * 4)) * __cuda_local_var_35999_6_non_const_nelr))));
(__cuda_local_var_36013_10_non_const_h_normals[(i + ((j + (k * 4)) * __cuda_local_var_35999_6_non_const_nelr))]) = (-(__cuda_local_var_36013_10_non_const_h_normals[(i + ((j + (k * 4)) * __cuda_local_var_35999_6_non_const_nelr))]));
} }
} }
} }
_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Read in data..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);


__cuda_local_var_36036_7_non_const_last = (__cuda_local_var_35998_6_non_const_nel - 1); {
 int i;
# 463 "euler3d.cu"
i = __cuda_local_var_35998_6_non_const_nel; for (; (i < __cuda_local_var_35999_6_non_const_nelr); i++)
{
(__cuda_local_var_36011_10_non_const_h_areas[i]) = (__cuda_local_var_36011_10_non_const_h_areas[__cuda_local_var_36036_7_non_const_last]); {
 int j;
# 466 "euler3d.cu"
j = 0; for (; (j < 4); j++)
{

(__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements[(i + (j * __cuda_local_var_35999_6_non_const_nelr))]) = (__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements[(__cuda_local_var_36036_7_non_const_last + (j * __cuda_local_var_35999_6_non_const_nelr))]); {
 int k;
# 470 "euler3d.cu"
k = 0; for (; (k < 3); k++) { (__cuda_local_var_36013_10_non_const_h_normals[(__cuda_local_var_36036_7_non_const_last + ((j + (k * 4)) * __cuda_local_var_35999_6_non_const_nelr))]) = (__cuda_local_var_36013_10_non_const_h_normals[(__cuda_local_var_36036_7_non_const_last + ((j + (k * 4)) * __cuda_local_var_35999_6_non_const_nelr))]); } }
} }
} }
_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Filled in the rest..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);

__cuda_local_var_36002_9_non_const_areas = (_Z5allocIfEPT_i(__cuda_local_var_35999_6_non_const_nelr));

__cuda_local_var_36003_7_non_const_elements_surrounding_elements = (_Z5allocIiEPT_i((__cuda_local_var_35999_6_non_const_nelr * 4)));

__cuda_local_var_36004_9_non_const_normals = (_Z5allocIfEPT_i(((__cuda_local_var_35999_6_non_const_nelr * 3) * 4)));

_ZdaPv(((void *)__cuda_local_var_36011_10_non_const_h_areas));
_ZdaPv(((void *)__cuda_local_var_36012_8_non_const_h_elements_surrounding_elements));
_ZdaPv(((void *)__cuda_local_var_36013_10_non_const_h_normals));




m5_work_begin(0UL, 0UL);




__cuda_local_var_36067_9_non_const_variables = ((float *)(malloc(((4UL * ((unsigned long)__cuda_local_var_35999_6_non_const_nelr)) * 5UL))));

_Z20initialize_variablesiPfS_(__cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36067_9_non_const_variables, (__cuda_local_var_36068_8_non_const_ff_variable));
# 501 "euler3d.cu"
__cuda_local_var_36075_9_non_const_old_variables = ((float *)(malloc(((4UL * ((unsigned long)__cuda_local_var_35999_6_non_const_nelr)) * 5UL))));
__cuda_local_var_36076_9_non_const_fluxes = ((float *)(malloc(((4UL * ((unsigned long)__cuda_local_var_35999_6_non_const_nelr)) * 5UL))));
__cuda_local_var_36077_9_non_const_step_factors = ((float *)(malloc((4UL * ((unsigned long)__cuda_local_var_35999_6_non_const_nelr)))));


_Z20initialize_variablesiPfS_(__cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36075_9_non_const_old_variables, (__cuda_local_var_36068_8_non_const_ff_variable));
_Z20initialize_variablesiPfS_(__cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36076_9_non_const_fluxes, (__cuda_local_var_36068_8_non_const_ff_variable));
cudaMemset(((void *)__cuda_local_var_36077_9_non_const_step_factors), 0, (4UL * ((unsigned long)__cuda_local_var_35999_6_non_const_nelr)));

cudaThreadSynchronize();


_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Starting..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
# 521 "euler3d.cu"
memcpy(((void *)(__cuda_local_var_36068_8_non_const_ff_variable)), ((const void *)(__cuda_local_var_35967_9_non_const_h_ff_variable)), 20UL);
# 528 "euler3d.cu"
__cuda_local_var_36102_15_non_const_timer = 0U;
if (1 != ((int)(cutCreateTimer((&__cuda_local_var_36102_15_non_const_timer))))) { fprintf(stderr, ((const char *)"Cut error in file \'%s\' in line %i.\n"), ((const char *)("euler3d.cu")), 529); exit(1); } ;
if (1 != ((int)(cutStartTimer(__cuda_local_var_36102_15_non_const_timer)))) { fprintf(stderr, ((const char *)"Cut error in file \'%s\' in line %i.\n"), ((const char *)("euler3d.cu")), 530); exit(1); } ; {


 int i;
# 533 "euler3d.cu"
i = 0; for (; (i < 2000); i++)
{

memcpy(((void *)__cuda_local_var_36075_9_non_const_old_variables), ((const void *)__cuda_local_var_36067_9_non_const_variables), ((size_t)(__cuda_local_var_35999_6_non_const_nelr * 5)));


_Z19compute_step_factoriPfS_S_(__cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36067_9_non_const_variables, __cuda_local_var_36011_10_non_const_h_areas, __cuda_local_var_36077_9_non_const_step_factors);
{  cudaError_t __cuda_local_var_36114_17_non_const_err;
# 540 "euler3d.cu"
__cuda_local_var_36114_17_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_36114_17_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("compute_step_factor failed")), ((const char *)("euler3d.cu")), 540, (cudaGetErrorString(__cuda_local_var_36114_17_non_const_err))); exit(1); } } ; {

 int j;
# 542 "euler3d.cu"
j = 0; for (; (j < 3); j++)
{
_Z12compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(__cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36012_8_non_const_h_elements_surrounding_elements, __cuda_local_var_36013_10_non_const_h_normals, __cuda_local_var_36067_9_non_const_variables, __cuda_local_var_36076_9_non_const_fluxes, (__cuda_local_var_36068_8_non_const_ff_variable), (&__cuda_local_var_35991_10_non_const_h_ff_flux_contribution_momentum_x), (&__cuda_local_var_35992_10_non_const_h_ff_flux_contribution_momentum_y), (&__cuda_local_var_35993_10_non_const_h_ff_flux_contribution_momentum_z), (&__cuda_local_var_35994_10_non_const_h_ff_flux_contribution_density_energy));
{  cudaError_t __cuda_local_var_36119_18_non_const_err;
# 545 "euler3d.cu"
__cuda_local_var_36119_18_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_36119_18_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("compute_flux failed")), ((const char *)("euler3d.cu")), 545, (cudaGetErrorString(__cuda_local_var_36119_18_non_const_err))); exit(1); } } ;
_Z9time_stepiiPfS_S_S_(j, __cuda_local_var_35999_6_non_const_nelr, __cuda_local_var_36075_9_non_const_old_variables, __cuda_local_var_36067_9_non_const_variables, __cuda_local_var_36077_9_non_const_step_factors, __cuda_local_var_36076_9_non_const_fluxes);
{  cudaError_t __cuda_local_var_36121_18_non_const_err;
# 547 "euler3d.cu"
__cuda_local_var_36121_18_non_const_err = (cudaGetLastError()); if (0 != ((int)__cuda_local_var_36121_18_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error: %s in file \'%s\' in line %i : %s.\n"), ((const char *)("time_step failed")), ((const char *)("euler3d.cu")), 547, (cudaGetErrorString(__cuda_local_var_36121_18_non_const_err))); exit(1); } } ;
} }
} }

cudaThreadSynchronize();
if (1 != ((int)(cutStopTimer(__cuda_local_var_36102_15_non_const_timer)))) { fprintf(stderr, ((const char *)"Cut error in file \'%s\' in line %i.\n"), ((const char *)("euler3d.cu")), 552); exit(1); } ;


m5_work_end(0UL, 0UL);


_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((_ZNSolsEd((&_ZSt4cout), ((((double)(cutGetAverageTimerValue(__cuda_local_var_36102_15_non_const_timer))) / (1000.0)) / (2000.0)))), ((const char *)" seconds per iteration"))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);

_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Saving solution..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
_Z4dumpPfii(__cuda_local_var_36067_9_non_const_variables, __cuda_local_var_35998_6_non_const_nel, __cuda_local_var_35999_6_non_const_nelr);
_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Saved solution..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);


_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Cleaning up..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_);
# 575 "euler3d.cu"
_ZNSolsEPFRSoS_E((_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc((&_ZSt4cout), ((const char *)"Done..."))), _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_); {

_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_36006_17_non_const_file)); return 0; }
}
# 56 "euler3d.cu"
 __attribute__((__weak__)) /* COMDAT group: _Z5allocIfEPT_i */ float *_Z5allocIfEPT_i( int N)
{
 float *__cuda_local_var_35641_5_non_const_t;
{  enum cudaError __cuda_local_var_35642_14_non_const_err;
# 59 "euler3d.cu"
__cuda_local_var_35642_14_non_const_err = (cudaMalloc(((void **)(&__cuda_local_var_35641_5_non_const_t)), (4UL * ((unsigned long)N)))); if (0 != ((int)__cuda_local_var_35642_14_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error in file \'%s\' in line %i : %s.\n"), ((const char *)("euler3d.cu")), 59, (cudaGetErrorString(__cuda_local_var_35642_14_non_const_err))); exit(1); } } ; ;
return __cuda_local_var_35641_5_non_const_t;
}
# 56 "euler3d.cu"
 __attribute__((__weak__)) /* COMDAT group: _Z5allocIiEPT_i */ int *_Z5allocIiEPT_i( int N)
{
 int *__cuda_local_var_35641_5_non_const_t;
{  enum cudaError __cuda_local_var_35642_14_non_const_err;
# 59 "euler3d.cu"
__cuda_local_var_35642_14_non_const_err = (cudaMalloc(((void **)(&__cuda_local_var_35641_5_non_const_t)), (4UL * ((unsigned long)N)))); if (0 != ((int)__cuda_local_var_35642_14_non_const_err)) { fprintf(stderr, ((const char *)"Cuda error in file \'%s\' in line %i : %s.\n"), ((const char *)("euler3d.cu")), 59, (cudaGetErrorString(__cuda_local_var_35642_14_non_const_err))); exit(1); } } ; ;
return __cuda_local_var_35641_5_non_const_t;
}
__asm__(".align 2");
# 192 "/usr/include/c++/4.4/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this)
{  (this->__vptr) = (_ZTVSt15basic_streambufIcSt11char_traitsIcEE + 2); { _ZNSt6localeD1Ev((&(this->_M_buf_locale))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 865 "/usr/include/c++/4.4/bits/locale_facets.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNKSt5ctypeIcE5widenEc */ __inline__ __attribute__((visibility("default"))) _ZNSt5ctypeIcE9char_typeE _ZNKSt5ctypeIcE5widenEc( const struct _ZSt5ctypeIcE *const this,  char __c)
{
if (((struct _ZSt5ctypeIcE *)this)->_M_widen_ok) {
return ((((struct _ZSt5ctypeIcE *)this)->_M_widen))[((unsigned char)__c)]; }
_ZNKSt5ctypeIcE13_M_widen_initEv(this);
return (*((_ZNSt5ctypeIcE9char_typeE (**)(const struct _ZSt5ctypeIcE *const, char))((((*(struct __SO__NSt6locale5facetE *)&(this->__b_NSt6locale5facetE___vptr))).__vptr) + 6)))(this, __c);
}
__asm__(".align 2");
# 272 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); { _ZNSt8ios_baseD2Ev((&(this->__b_St8ios_base))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 450 "/usr/include/c++/4.4/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this)


{ _ZNSt8ios_baseC2Ev((&(this->__b_St8ios_base))); ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); (this->_M_tie) = ((struct _ZSo *)0LL); (this->_M_fill) = ((_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE)0); (this->_M_fill_init) = ((char)0); (this->_M_streambuf) = ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL); (this->_M_ctype) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *)0LL); (this->_M_num_put) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *)0LL); (this->_M_num_get) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *)0LL);  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(this);  }
__asm__(".align 2");
# 91 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD2Ev( struct _ZSo *const this,  const long *const *__T210) {  (this->__vptr) = (*__T210); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T210 + 1UL));  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD0Ev( struct _ZSo *const this) {  const long *const *__T211;
if (this) { ((__T211 = (_ZTTSo)) , (void)(_ZNSoD2Ev(this, __T211))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSoD1Ev( struct _ZSo *const this) {  const long *const *__T212;
__T212 = (_ZTTSo); _ZNSoD2Ev(this, __T212);
# 91 "/usr/include/c++/4.4/ostream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
# 108 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEPFRSoS_E( struct _ZSo *const this,  _ZNSo14__ostream_typeE *(*__pf)(_ZNSo14__ostream_typeE *))
{



return __pf(this);
}
__asm__(".align 2");
# 209 "/usr/include/c++/4.4/ostream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEd( struct _ZSo *const this,  double __f)
{ return _ZNSo9_M_insertIdEERSoT_(this, __f); }
__asm__(".align 2");

extern __inline__ __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEf( struct _ZSo *const this,  float __f)
{


return _ZNSo9_M_insertIdEERSoT_(this, ((double)__f));
}
__asm__(".align 2");
# 101 "/usr/include/c++/4.4/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev( struct _ZSi *const this,  const long *const *__T213)
{  (this->__vptr) = (*__T213); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T213 + 1UL)); (this->_M_gcount) = 0L;  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev( struct _ZSi *const this) {  const long *const *__T214;
if (this) { ((__T214 = (_ZTTSi)) , (void)(_ZNSiD2Ev(this, __T214))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev( struct _ZSi *const this) {  const long *const *__T215;
__T215 = (_ZTTSi); _ZNSiD2Ev(this, __T215);
# 102 "/usr/include/c++/4.4/istream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
# 202 "/usr/include/c++/4.4/istream" 3
extern __inline__ __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSirsERf( struct _ZSi *const this,  float *__f)
{ return _ZNSi10_M_extractIfEERSiRT_(this, __f); }
__asm__(".align 2");
# 214 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this)
{  ((this->__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(this); { _ZNSt12__basic_fileIcED1Ev((&(this->_M_file))); { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))); } }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 454 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const long *const *__T216,  const char *__s,  _ZNSt8ios_base8openmodeE __mode)

{  struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T217;
# 456 "/usr/include/c++/4.4/fstream" 3
{ (((struct _ZSi *)this)->__vptr) = (*(__T216 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T216 + 1UL) + 1UL)); (((struct _ZSi *)this)->_M_gcount) = 0L; _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)]))), ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL)); } ((this->__b_Si).__vptr) = (*__T216); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T216 + 3UL)); _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev((&(this->_M_filebuf)));
_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))), (&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE)));
{ if (!(_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&(this->_M_filebuf)), __s, ((enum _ZSt13_Ios_Openmode)(((int)__mode) | ((int)_ZSt5_S_in)))))) { { __T217 = ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))); { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T217, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T217)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)4))))); } } } else  { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)0)); } } 
}
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const char *__T218,  _ZNSt8ios_base8openmodeE __T219) {  const long *const *__T220;
__T220 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE); ((this->__b_Si).__vptr) = (*__T220);
# 456 "/usr/include/c++/4.4/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); } _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(this, __T220, __T218, __T219);  }
__asm__(".align 2");
# 485 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const long *const *__T221)
{  ((this->__b_Si).__vptr) = (*__T221); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T221 + 3UL)); { { (((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv((&(this->_M_filebuf))); { _ZNSt12__basic_fileIcED1Ev((&((this->_M_filebuf)._M_file))); { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev((&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE))); } } } { (((struct _ZSi *)this)->__vptr) = (*(__T221 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T221 + 1UL) + 1UL)); (((struct _ZSi *)this)->_M_gcount) = 0L; } }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED0Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T222;
if (this) { ((__T222 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE)) , (void)(_ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(this, __T222))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T223;
__T223 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE); _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(this, __T223);
# 486 "/usr/include/c++/4.4/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
# 623 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const long *const *__T224,  const char *__s, 
_ZNSt8ios_base8openmodeE __mode)

{  struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T225;
# 626 "/usr/include/c++/4.4/fstream" 3
{ (((struct _ZSo *)this)->__vptr) = (*(__T224 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSo *)this)) + ((((struct _ZSo *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T224 + 1UL) + 1UL)); _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSo *)this)) + ((((struct _ZSo *)this)->__vptr)[(-3L)]))), ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL)); } ((this->__b_So).__vptr) = (*__T224); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T224 + 3UL)); _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev((&(this->_M_filebuf)));
_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), (&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE)));
{ if (!(_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&(this->_M_filebuf)), __s, ((enum _ZSt13_Ios_Openmode)(((int)__mode) | ((int)_ZSt6_S_out)))))) { { __T225 = ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))); { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T225, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T225)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)4))))); } } } else  { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)0)); } } 
}
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const char *__T226,  _ZNSt8ios_base8openmodeE __T227) {  const long *const *__T228;
__T228 = (_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE); ((this->__b_So).__vptr) = (*__T228);
# 626 "/usr/include/c++/4.4/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); } _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(this, __T228, __T226, __T227);  }
__asm__(".align 2");
# 656 "/usr/include/c++/4.4/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this,  const long *const *__T229)
{  ((this->__b_So).__vptr) = (*__T229); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_So).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T229 + 3UL)); { { (((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv((&(this->_M_filebuf))); { _ZNSt12__basic_fileIcED1Ev((&((this->_M_filebuf)._M_file))); { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev((&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE))); } } } { (((struct _ZSo *)this)->__vptr) = (*(__T229 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSo *)this)) + ((((struct _ZSo *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T229 + 1UL) + 1UL)); } }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED0Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T230;
if (this) { ((__T230 = (_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE)) , (void)(_ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev(this, __T230))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev( struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T231;
__T231 = (_ZTTSt14basic_ofstreamIcSt11char_traitsIcEE); _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev(this, __T231);
# 657 "/usr/include/c++/4.4/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
# 538 "/usr/include/c++/4.4/ostream" 3
extern __inline__ struct _ZSo *_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_( struct _ZSo *__os)
{  const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T232;
 const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *__T233;
 struct _ZSo *__T234;
# 539 "/usr/include/c++/4.4/ostream" 3
return (__T234 = (_ZNSo3putEc(__os, ((__T232 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((__os) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__os) + ((__os->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , (_ZNKSt5ctypeIcE5widenEc(((__T233 = (__T232->_M_ctype)) , (((!(__T233)) ? (_ZSt16__throw_bad_castv()) : ((void)0)) , __T233)), ((char)10))))))) , (_ZNSo5flushEv(__T234)); }
# 505 "/usr/include/c++/4.4/ostream" 3
extern __inline__ struct _ZSo *_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc( struct _ZSo *__out,  const char *__s)
{  struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T235;
if (!(__s)) {
{ __T235 = ((__out) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__out) + ((__out->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)); { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T235, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T235)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))); } } } else  {

_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__out, __s, ((_ZSt10streamsize)(__builtin_strlen(__s)))); }

return __out;
}
# 186 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt3minIiERKT_S2_S2_ */ __inline__ const int *_ZSt3minIiERKT_S2_S2_( const int *__a,  const int *__b)
{



if ((*__b) < (*__a)) {
return __b; }
return __a;
}
static void __sti___15_euler3d_cpp1_ii_fd6503f5(void) {
# 72 "/usr/include/c++/4.4/iostream" 3
_ZNSt8ios_base4InitC1Ev((&_ZSt8__ioinit)); __cxa_atexit(_ZNSt8ios_base4InitD1Ev, ((void *)(&_ZSt8__ioinit)), (&__dso_handle));  }

#include "euler3d.cudafe1.stub.c"
