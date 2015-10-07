# 1 "euler3d.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "euler3d.cudafe1.gpu"
typedef char __nv_bool;
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
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE;
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t;
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
# 60 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
enum CUTBoolean {
# 62 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
CUTFalse,
# 63 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK-4.2.9/C/common/inc/cutil.h"
CUTTrue};
# 28 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
enum _ZUt0_ {
# 29 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_CTYPE,
# 30 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_NUMERIC,
# 31 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_TIME,
# 32 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_COLLATE,
# 33 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_MONETARY,
# 34 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_MESSAGES,
# 35 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_ALL,
# 36 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_PAPER,
# 37 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_NAME,
# 38 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_ADDRESS,
# 39 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_TELEPHONE,
# 40 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_MEASUREMENT,
# 41 "/usr/include/x86_64-linux-gnu/bits/locale.h" 3
__LC_IDENTIFICATION};
# 49 "/usr/include/ctype.h" 3
enum _ZUt1_ {
# 50 "/usr/include/ctype.h" 3
_ISupper = 256,
# 51 "/usr/include/ctype.h" 3
_ISlower = 512,
# 52 "/usr/include/ctype.h" 3
_ISalpha = 1024,
# 53 "/usr/include/ctype.h" 3
_ISdigit = 2048,
# 54 "/usr/include/ctype.h" 3
_ISxdigit = 4096,
# 55 "/usr/include/ctype.h" 3
_ISspace = 8192,
# 56 "/usr/include/ctype.h" 3
_ISprint = 16384,
# 57 "/usr/include/ctype.h" 3
_ISgraph = 32768,
# 58 "/usr/include/ctype.h" 3
_ISblank = 1,
# 59 "/usr/include/ctype.h" 3
_IScntrl,
# 60 "/usr/include/ctype.h" 3
_ISpunct = 4,
# 61 "/usr/include/ctype.h" 3
_ISalnum = 8};
# 35 "/usr/include/pthread.h" 3
enum _ZUt2_ {
# 36 "/usr/include/pthread.h" 3
PTHREAD_CREATE_JOINABLE,
# 38 "/usr/include/pthread.h" 3
PTHREAD_CREATE_DETACHED};
# 45 "/usr/include/pthread.h" 3
enum _ZUt3_ {
# 46 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_TIMED_NP,
# 47 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_RECURSIVE_NP,
# 48 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ERRORCHECK_NP,
# 49 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ADAPTIVE_NP,
# 52 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_NORMAL = 0,
# 53 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_RECURSIVE,
# 54 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ERRORCHECK,
# 55 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_DEFAULT = 0,
# 59 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_FAST_NP = 0};
# 67 "/usr/include/pthread.h" 3
enum _ZUt4_ {
# 68 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_STALLED,
# 69 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_STALLED_NP = 0,
# 70 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ROBUST,
# 71 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ROBUST_NP = 1};
# 79 "/usr/include/pthread.h" 3
enum _ZUt5_ {
# 80 "/usr/include/pthread.h" 3
PTHREAD_PRIO_NONE,
# 81 "/usr/include/pthread.h" 3
PTHREAD_PRIO_INHERIT,
# 82 "/usr/include/pthread.h" 3
PTHREAD_PRIO_PROTECT};
# 116 "/usr/include/pthread.h" 3
enum _ZUt6_ {
# 117 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_READER_NP,
# 118 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_WRITER_NP,
# 119 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
# 120 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_DEFAULT_NP = 0};
# 148 "/usr/include/pthread.h" 3
enum _ZUt7_ {
# 149 "/usr/include/pthread.h" 3
PTHREAD_INHERIT_SCHED,
# 151 "/usr/include/pthread.h" 3
PTHREAD_EXPLICIT_SCHED};
# 158 "/usr/include/pthread.h" 3
enum _ZUt8_ {
# 159 "/usr/include/pthread.h" 3
PTHREAD_SCOPE_SYSTEM,
# 161 "/usr/include/pthread.h" 3
PTHREAD_SCOPE_PROCESS};
# 168 "/usr/include/pthread.h" 3
enum _ZUt9_ {
# 169 "/usr/include/pthread.h" 3
PTHREAD_PROCESS_PRIVATE,
# 171 "/usr/include/pthread.h" 3
PTHREAD_PROCESS_SHARED};
# 192 "/usr/include/pthread.h" 3
enum _ZUt10_ {
# 193 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_ENABLE,
# 195 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_DISABLE};
# 199 "/usr/include/pthread.h" 3
enum _ZUt11_ {
# 200 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_DEFERRED,
# 202 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_ASYNCHRONOUS};
# 27 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt12_ {
# 28 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_LINK_MAX,
# 30 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_MAX_CANON,
# 32 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_MAX_INPUT,
# 34 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_NAME_MAX,
# 36 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_PATH_MAX,
# 38 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_PIPE_BUF,
# 40 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_CHOWN_RESTRICTED,
# 42 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_NO_TRUNC,
# 44 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_VDISABLE,
# 46 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_SYNC_IO,
# 48 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_ASYNC_IO,
# 50 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_PRIO_IO,
# 52 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_SOCK_MAXBUF,
# 54 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_FILESIZEBITS,
# 56 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_REC_INCR_XFER_SIZE,
# 58 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_REC_MAX_XFER_SIZE,
# 60 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_REC_MIN_XFER_SIZE,
# 62 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_REC_XFER_ALIGN,
# 64 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_ALLOC_SIZE_MIN,
# 66 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_SYMLINK_MAX,
# 68 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_PC_2_SYMLINKS};
# 74 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt13_ {
# 75 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_ARG_MAX,
# 77 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CHILD_MAX,
# 79 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CLK_TCK,
# 81 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NGROUPS_MAX,
# 83 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_OPEN_MAX,
# 85 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_STREAM_MAX,
# 87 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TZNAME_MAX,
# 89 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_JOB_CONTROL,
# 91 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SAVED_IDS,
# 93 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_REALTIME_SIGNALS,
# 95 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PRIORITY_SCHEDULING,
# 97 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TIMERS,
# 99 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_ASYNCHRONOUS_IO,
# 101 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PRIORITIZED_IO,
# 103 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SYNCHRONIZED_IO,
# 105 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FSYNC,
# 107 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MAPPED_FILES,
# 109 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MEMLOCK,
# 111 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MEMLOCK_RANGE,
# 113 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MEMORY_PROTECTION,
# 115 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MESSAGE_PASSING,
# 117 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SEMAPHORES,
# 119 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SHARED_MEMORY_OBJECTS,
# 121 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_AIO_LISTIO_MAX,
# 123 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_AIO_MAX,
# 125 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_AIO_PRIO_DELTA_MAX,
# 127 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_DELAYTIMER_MAX,
# 129 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MQ_OPEN_MAX,
# 131 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MQ_PRIO_MAX,
# 133 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_VERSION,
# 135 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PAGESIZE,
# 138 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_RTSIG_MAX,
# 140 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SEM_NSEMS_MAX,
# 142 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SEM_VALUE_MAX,
# 144 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SIGQUEUE_MAX,
# 146 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TIMER_MAX,
# 151 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BC_BASE_MAX,
# 153 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BC_DIM_MAX,
# 155 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BC_SCALE_MAX,
# 157 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BC_STRING_MAX,
# 159 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_COLL_WEIGHTS_MAX,
# 161 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_EQUIV_CLASS_MAX,
# 163 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_EXPR_NEST_MAX,
# 165 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LINE_MAX,
# 167 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_RE_DUP_MAX,
# 169 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CHARCLASS_NAME_MAX,
# 172 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_VERSION,
# 174 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_C_BIND,
# 176 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_C_DEV,
# 178 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_FORT_DEV,
# 180 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_FORT_RUN,
# 182 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_SW_DEV,
# 184 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_LOCALEDEF,
# 187 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII,
# 189 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_XTI,
# 191 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_SOCKET,
# 193 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_INTERNET,
# 195 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_OSI,
# 197 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_POLL,
# 199 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SELECT,
# 201 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_UIO_MAXIOV,
# 203 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_IOV_MAX = 60,
# 205 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_INTERNET_STREAM,
# 207 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_INTERNET_DGRAM,
# 209 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_OSI_COTS,
# 211 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_OSI_CLTS,
# 213 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PII_OSI_M,
# 215 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_T_IOV_MAX,
# 219 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREADS,
# 221 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_SAFE_FUNCTIONS,
# 223 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_GETGR_R_SIZE_MAX,
# 225 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_GETPW_R_SIZE_MAX,
# 227 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LOGIN_NAME_MAX,
# 229 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TTY_NAME_MAX,
# 231 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_DESTRUCTOR_ITERATIONS,
# 233 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_KEYS_MAX,
# 235 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_STACK_MIN,
# 237 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_THREADS_MAX,
# 239 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_ATTR_STACKADDR,
# 241 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_ATTR_STACKSIZE,
# 243 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_PRIORITY_SCHEDULING,
# 245 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_PRIO_INHERIT,
# 247 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_PRIO_PROTECT,
# 249 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_PROCESS_SHARED,
# 252 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NPROCESSORS_CONF,
# 254 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NPROCESSORS_ONLN,
# 256 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PHYS_PAGES,
# 258 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_AVPHYS_PAGES,
# 260 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_ATEXIT_MAX,
# 262 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PASS_MAX,
# 265 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_VERSION,
# 267 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_XCU_VERSION,
# 269 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_UNIX,
# 271 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_CRYPT,
# 273 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_ENH_I18N,
# 275 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_SHM,
# 278 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_CHAR_TERM,
# 280 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_C_VERSION,
# 282 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_UPE,
# 285 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_XPG2,
# 287 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_XPG3,
# 289 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_XPG4,
# 292 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CHAR_BIT,
# 294 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CHAR_MAX,
# 296 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CHAR_MIN,
# 298 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_INT_MAX,
# 300 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_INT_MIN,
# 302 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LONG_BIT,
# 304 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_WORD_BIT,
# 306 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MB_LEN_MAX,
# 308 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NZERO,
# 310 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SSIZE_MAX,
# 312 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SCHAR_MAX,
# 314 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SCHAR_MIN,
# 316 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SHRT_MAX,
# 318 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SHRT_MIN,
# 320 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_UCHAR_MAX,
# 322 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_UINT_MAX,
# 324 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_ULONG_MAX,
# 326 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_USHRT_MAX,
# 329 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_ARGMAX,
# 331 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_LANGMAX,
# 333 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_MSGMAX,
# 335 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_NMAX,
# 337 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_SETMAX,
# 339 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NL_TEXTMAX,
# 342 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XBS5_ILP32_OFF32,
# 344 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XBS5_ILP32_OFFBIG,
# 346 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XBS5_LP64_OFF64,
# 348 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XBS5_LPBIG_OFFBIG,
# 351 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_LEGACY,
# 353 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_REALTIME,
# 355 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_REALTIME_THREADS,
# 358 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_ADVISORY_INFO,
# 360 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BARRIERS,
# 362 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_BASE,
# 364 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_C_LANG_SUPPORT,
# 366 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_C_LANG_SUPPORT_R,
# 368 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CLOCK_SELECTION,
# 370 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_CPUTIME,
# 372 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_CPUTIME,
# 374 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_DEVICE_IO,
# 376 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_DEVICE_SPECIFIC,
# 378 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_DEVICE_SPECIFIC_R,
# 380 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FD_MGMT,
# 382 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FIFO,
# 384 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_PIPE,
# 386 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FILE_ATTRIBUTES,
# 388 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FILE_LOCKING,
# 390 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_FILE_SYSTEM,
# 392 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MONOTONIC_CLOCK,
# 394 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_MULTI_PROCESS,
# 396 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SINGLE_PROCESS,
# 398 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_NETWORKING,
# 400 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_READER_WRITER_LOCKS,
# 402 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SPIN_LOCKS,
# 404 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_REGEXP,
# 406 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_REGEX_VERSION,
# 408 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SHELL,
# 410 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SIGNALS,
# 412 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SPAWN,
# 414 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SPORADIC_SERVER,
# 416 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_SPORADIC_SERVER,
# 418 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SYSTEM_DATABASE,
# 420 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SYSTEM_DATABASE_R,
# 422 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TIMEOUTS,
# 424 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TYPED_MEMORY_OBJECTS,
# 426 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_USER_GROUPS,
# 428 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_USER_GROUPS_R,
# 430 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS,
# 432 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS_ACCOUNTING,
# 434 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS_LOCATE,
# 436 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS_MESSAGE,
# 438 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS_TRACK,
# 440 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SYMLOOP_MAX,
# 442 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_STREAMS,
# 444 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_2_PBS_CHECKPOINT,
# 447 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V6_ILP32_OFF32,
# 449 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V6_ILP32_OFFBIG,
# 451 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V6_LP64_OFF64,
# 453 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V6_LPBIG_OFFBIG,
# 456 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_HOST_NAME_MAX,
# 458 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE,
# 460 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_EVENT_FILTER,
# 462 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_INHERIT,
# 464 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_LOG,
# 467 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_ICACHE_SIZE,
# 469 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_ICACHE_ASSOC,
# 471 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_ICACHE_LINESIZE,
# 473 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_DCACHE_SIZE,
# 475 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_DCACHE_ASSOC,
# 477 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL1_DCACHE_LINESIZE,
# 479 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL2_CACHE_SIZE,
# 481 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL2_CACHE_ASSOC,
# 483 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL2_CACHE_LINESIZE,
# 485 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL3_CACHE_SIZE,
# 487 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL3_CACHE_ASSOC,
# 489 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL3_CACHE_LINESIZE,
# 491 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL4_CACHE_SIZE,
# 493 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL4_CACHE_ASSOC,
# 495 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_LEVEL4_CACHE_LINESIZE,
# 499 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_IPV6 = 235,
# 501 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_RAW_SOCKETS,
# 504 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V7_ILP32_OFF32,
# 506 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V7_ILP32_OFFBIG,
# 508 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V7_LP64_OFF64,
# 510 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_V7_LPBIG_OFFBIG,
# 513 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_SS_REPL_MAX,
# 516 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_EVENT_NAME_MAX,
# 518 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_NAME_MAX,
# 520 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_SYS_MAX,
# 522 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_TRACE_USER_EVENT_MAX,
# 525 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_XOPEN_STREAMS,
# 528 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_INHERIT,
# 530 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_PROTECT};
# 536 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt14_ {
# 537 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_PATH,
# 540 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_V6_WIDTH_RESTRICTED_ENVS,
# 544 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_GNU_LIBC_VERSION,
# 546 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_GNU_LIBPTHREAD_VERSION,
# 549 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_V5_WIDTH_RESTRICTED_ENVS,
# 553 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_V7_WIDTH_RESTRICTED_ENVS,
# 557 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS_CFLAGS = 1000,
# 559 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS_LDFLAGS,
# 561 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS_LIBS,
# 563 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS_LINTFLAGS,
# 565 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS64_CFLAGS,
# 567 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS64_LDFLAGS,
# 569 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS64_LIBS,
# 571 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_LFS64_LINTFLAGS,
# 574 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
# 576 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LDFLAGS,
# 578 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LIBS,
# 580 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LINTFLAGS,
# 582 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_CFLAGS,
# 584 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LDFLAGS,
# 586 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LIBS,
# 588 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
# 590 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_CFLAGS,
# 592 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LDFLAGS,
# 594 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LIBS,
# 596 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LINTFLAGS,
# 598 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_CFLAGS,
# 600 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
# 602 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LIBS,
# 604 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
# 607 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_CFLAGS,
# 609 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
# 611 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LIBS,
# 613 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
# 615 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
# 617 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
# 619 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LIBS,
# 621 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
# 623 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_CFLAGS,
# 625 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LDFLAGS,
# 627 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LIBS,
# 629 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
# 631 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
# 633 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
# 635 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
# 637 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
# 640 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_CFLAGS,
# 642 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
# 644 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LIBS,
# 646 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
# 648 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
# 650 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
# 652 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LIBS,
# 654 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
# 656 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_CFLAGS,
# 658 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LDFLAGS,
# 660 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LIBS,
# 662 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
# 664 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
# 666 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
# 668 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
# 670 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
# 673 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_V6_ENV,
# 675 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
_CS_V7_ENV};
# 73 "/usr/include/wctype.h" 3
enum _ZUt15_ {
# 74 "/usr/include/wctype.h" 3
__ISwupper,
# 75 "/usr/include/wctype.h" 3
__ISwlower,
# 76 "/usr/include/wctype.h" 3
__ISwalpha,
# 77 "/usr/include/wctype.h" 3
__ISwdigit,
# 78 "/usr/include/wctype.h" 3
__ISwxdigit,
# 79 "/usr/include/wctype.h" 3
__ISwspace,
# 80 "/usr/include/wctype.h" 3
__ISwprint,
# 81 "/usr/include/wctype.h" 3
__ISwgraph,
# 82 "/usr/include/wctype.h" 3
__ISwblank,
# 83 "/usr/include/wctype.h" 3
__ISwcntrl,
# 84 "/usr/include/wctype.h" 3
__ISwpunct,
# 85 "/usr/include/wctype.h" 3
__ISwalnum,
# 87 "/usr/include/wctype.h" 3
_ISwupper = 16777216,
# 88 "/usr/include/wctype.h" 3
_ISwlower = 33554432,
# 89 "/usr/include/wctype.h" 3
_ISwalpha = 67108864,
# 90 "/usr/include/wctype.h" 3
_ISwdigit = 134217728,
# 91 "/usr/include/wctype.h" 3
_ISwxdigit = 268435456,
# 92 "/usr/include/wctype.h" 3
_ISwspace = 536870912,
# 93 "/usr/include/wctype.h" 3
_ISwprint = 1073741824,
# 94 "/usr/include/wctype.h" 3
_ISwgraph = (-2147483647-1),
# 95 "/usr/include/wctype.h" 3
_ISwblank = 65536,
# 96 "/usr/include/wctype.h" 3
_ISwcntrl = 131072,
# 97 "/usr/include/wctype.h" 3
_ISwpunct = 262144,
# 98 "/usr/include/wctype.h" 3
_ISwalnum = 524288};
# 59 "/usr/include/c++/4.4/exception" 3
struct _ZSt9exception;
# 54 "/usr/include/c++/4.4/new" 3
struct _ZSt9bad_alloc;
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
# 237 "/usr/include/c++/4.4/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE;
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5facetE;
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct __SO__NSt6locale5facetE;
# 465 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE;
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E {
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_ZNSt6locale18_S_categories_sizeE = 12};
# 61 "/usr/include/c++/4.4/bits/locale_classes.h" 3
struct _ZSt6locale;
# 60 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt13_Ios_Fmtflags {
# 62 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt12_S_boolalpha = 1,
# 63 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_dec,
# 64 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt8_S_fixed = 4,
# 65 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_hex = 8,
# 66 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt11_S_internal = 16,
# 67 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt7_S_left = 32,
# 68 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_oct = 64,
# 69 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt8_S_right = 128,
# 70 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt13_S_scientific = 256,
# 71 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt11_S_showbase = 512,
# 72 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt12_S_showpoint = 1024,
# 73 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10_S_showpos = 2048,
# 74 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt9_S_skipws = 4096,
# 75 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10_S_unitbuf = 8192,
# 76 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt12_S_uppercase = 16384,
# 77 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt14_S_adjustfield = 176,
# 78 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt12_S_basefield = 74,
# 79 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt13_S_floatfield = 260,
# 80 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt19_S_ios_fmtflags_end = 65536};
# 112 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt13_Ios_Openmode {
# 114 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_app = 1,
# 115 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_ate,
# 116 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_bin = 4,
# 117 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt5_S_in = 8,
# 118 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_out = 16,
# 119 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt8_S_trunc = 32,
# 120 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt19_S_ios_openmode_end = 65536};
# 152 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt12_Ios_Iostate {
# 154 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10_S_goodbit,
# 155 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt9_S_badbit,
# 156 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt9_S_eofbit,
# 157 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10_S_failbit = 4,
# 158 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt18_S_ios_iostate_end = 65536};
# 189 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZSt12_Ios_Seekdir {
# 191 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_beg,
# 192 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_cur,
# 193 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt6_S_end,
# 194 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt18_S_ios_seekdir_end = 65536};
# 427 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZNSt8ios_base5eventE {
# 429 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base11erase_eventE,
# 430 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base11imbue_eventE,
# 431 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base13copyfmt_eventE};
# 473 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE;
# 503 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE;
# 515 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E {
# 515 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base18_S_local_word_sizeE = 8};
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt8ios_base;
# 90 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt19istreambuf_iteratorIcSt11char_traitsIcEE;
# 93 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt19ostreambuf_iteratorIcSt11char_traitsIcEE;
# 50 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE;
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
struct _ZSt10ctype_base;
# 674 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE;
# 1521 "/usr/include/c++/4.4/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt_E {
# 1522 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base9_S_ominusE,
# 1523 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_oplusE,
# 1524 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oxE,
# 1525 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oXE,
# 1526 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base10_S_odigitsE,
# 1527 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base14_S_odigits_endE = 20,
# 1528 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base11_S_oudigitsE = 20,
# 1529 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base15_S_oudigits_endE = 36,
# 1530 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oeE = 18,
# 1531 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oEE = 34,
# 1532 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base7_S_oendE = 36};
# 1547 "/usr/include/c++/4.4/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt0_E {
# 1548 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base9_S_iminusE,
# 1549 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_iplusE,
# 1550 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_ixE,
# 1551 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_iXE,
# 1552 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_izeroE,
# 1553 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_ieE = 18,
# 1554 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_iEE = 24,
# 1555 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10__num_base7_S_iendE = 26};
# 1908 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE;
# 2245 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE;
# 47 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE;
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSo;
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct __SO__So;
# 53 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSi;
# 53 "/usr/include/c++/4.4/iosfwd" 3
struct __SO__Si;
# 48 "/usr/include/c++/4.4/bits/codecvt.h" 3
enum _ZNSt12codecvt_base6resultE {
# 50 "/usr/include/c++/4.4/bits/codecvt.h" 3
_ZNSt12codecvt_base2okE,
# 51 "/usr/include/c++/4.4/bits/codecvt.h" 3
_ZNSt12codecvt_base7partialE,
# 52 "/usr/include/c++/4.4/bits/codecvt.h" 3
_ZNSt12codecvt_base5errorE,
# 53 "/usr/include/c++/4.4/bits/codecvt.h" 3
_ZNSt12codecvt_base6noconvE};
# 330 "/usr/include/c++/4.4/bits/codecvt.h" 3
struct _ZSt7codecvtIcc11__mbstate_tE;
# 52 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE;
# 78 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE;
# 81 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE;
# 84 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt14basic_ofstreamIcSt11char_traitsIcEE;
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIfE7__valueE};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t;
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
# 40 "/usr/include/xlocale.h" 3
typedef struct __locale_struct *__locale_t;
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 87 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];};
# 84 "/usr/include/wchar.h" 3
struct __mbstate_t {
# 85 "/usr/include/wchar.h" 3
int __count;
# 94 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E __value;};
# 95 "/usr/include/wchar.h" 3
typedef struct __mbstate_t __mbstate_t;
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list *__prev;
# 64 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list *__next;};
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef struct __pthread_internal_list __pthread_list_t;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE {
# 80 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_list_t __list;};
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union pthread_mutex_t {
# 101 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE __data;
# 102 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;};
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
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
# 138 "/usr/include/c++/4.4/iosfwd" 3
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
# 505 "/usr/include/c++/4.4/bits/ios_base.h" 3
void *_M_pword;
# 506 "/usr/include/c++/4.4/bits/ios_base.h" 3
long _M_iword;};
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy_end_padding_0;};
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt8ios_base { const long *__vptr;
# 464 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10streamsize _M_precision;
# 465 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZSt10streamsize _M_width;
# 466 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base8fmtflagsE _M_flags;
# 467 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base7iostateE _M_exception;
# 468 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base7iostateE _M_streambuf_state;
# 494 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE *_M_callbacks;
# 511 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_word_zero;
# 516 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_local_word[8];
# 519 "/usr/include/c++/4.4/bits/ios_base.h" 3
int _M_word_size;
# 520 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE *_M_word;
# 526 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZSt6locale _M_ios_locale;};
# 123 "/usr/include/c++/4.4/streambuf" 3
typedef char _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE;
# 124 "/usr/include/c++/4.4/streambuf" 3
typedef struct _ZSt11char_traitsIcE _ZNSt15basic_streambufIcSt11char_traitsIcEE11traits_typeE;
# 50 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE { const long *__vptr;
# 179 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_beg;
# 180 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_cur;
# 181 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_end;
# 182 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_beg;
# 183 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_cur;
# 184 "/usr/include/c++/4.4/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_end;
# 187 "/usr/include/c++/4.4/streambuf" 3
struct _ZSt6locale _M_buf_locale;};
# 43 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
typedef const int *_ZNSt10ctype_base9__to_typeE;
# 47 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
typedef unsigned short _ZNSt10ctype_base4maskE;
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/ctype_base.h" 3
struct _ZSt10ctype_base {char __nv_no_debug_dummy_end_padding_0;};
# 679 "/usr/include/c++/4.4/bits/locale_facets.h" 3
typedef char _ZNSt5ctypeIcE9char_typeE;
# 674 "/usr/include/c++/4.4/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE { const long *__b_NSt6locale5facetE___vptr;
# 341 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_Atomic_word __b_NSt6locale5facetE__M_refcount;
# 683 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZSt10__c_locale _M_c_locale_ctype;
# 684 "/usr/include/c++/4.4/bits/locale_facets.h" 3
__nv_bool _M_del;
# 685 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10ctype_base9__to_typeE _M_toupper;
# 686 "/usr/include/c++/4.4/bits/locale_facets.h" 3
_ZNSt10ctype_base9__to_typeE _M_tolower;
# 687 "/usr/include/c++/4.4/bits/locale_facets.h" 3
const _ZNSt10ctype_base4maskE *_M_table;
# 688 "/usr/include/c++/4.4/bits/locale_facets.h" 3
char _M_widen_ok;
# 689 "/usr/include/c++/4.4/bits/locale_facets.h" 3
char _M_widen[256];
# 690 "/usr/include/c++/4.4/bits/locale_facets.h" 3
char _M_narrow[256];
# 691 "/usr/include/c++/4.4/bits/locale_facets.h" 3
char _M_narrow_ok;char __nv_no_debug_dummy_end_padding_0[6];};
# 71 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef char _ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE;
# 82 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef struct _ZSt5ctypeIcE _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE;
# 84 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE;
# 86 "/usr/include/c++/4.4/bits/basic_ios.h" 3
typedef struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE;
# 47 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE { struct _ZSt8ios_base __b_St8ios_base;
# 91 "/usr/include/c++/4.4/bits/basic_ios.h" 3
struct _ZSo *_M_tie;
# 92 "/usr/include/c++/4.4/bits/basic_ios.h" 3
_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE _M_fill;
# 93 "/usr/include/c++/4.4/bits/basic_ios.h" 3
__nv_bool _M_fill_init;
# 94 "/usr/include/c++/4.4/bits/basic_ios.h" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE *_M_streambuf;
# 97 "/usr/include/c++/4.4/bits/basic_ios.h" 3
const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *_M_ctype;
# 99 "/usr/include/c++/4.4/bits/basic_ios.h" 3
const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *_M_num_put;
# 101 "/usr/include/c++/4.4/bits/basic_ios.h" 3
const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *_M_num_get;};
# 59 "/usr/include/c++/4.4/ostream" 3
typedef char _ZNSo9char_typeE;
# 68 "/usr/include/c++/4.4/ostream" 3
typedef struct _ZSo _ZNSo14__ostream_typeE;
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSo { const long *__vptr; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 56 "/usr/include/c++/4.4/iosfwd" 3
struct __SO__So { const long *__vptr;};
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
# 45 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/c++io.h" 3
typedef FILE _ZSt8__c_file;
# 52 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE {
# 55 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
_ZSt8__c_file *_M_cfile;
# 58 "/usr/include/c++/4.4/x86_64-linux-gnu/./bits/basic_file.h" 3
__nv_bool _M_cfile_created;char __nv_no_debug_dummy_end_padding_0[7];};
# 71 "/usr/include/c++/4.4/fstream" 3
typedef char _ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE;
# 78 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE;
# 79 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt12__basic_fileIcE _ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE;
# 80 "/usr/include/c++/4.4/fstream" 3
typedef _ZNSt11char_traitsIcE10state_typeE _ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE;
# 81 "/usr/include/c++/4.4/fstream" 3
typedef struct _ZSt7codecvtIcc11__mbstate_tE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE;
# 78 "/usr/include/c++/4.4/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE { struct _ZSt15basic_streambufIcSt11char_traitsIcEE __b_St15basic_streambufIcSt11char_traitsIcEE;
# 88 "/usr/include/c++/4.4/fstream" 3
_ZSt8__c_lock _M_lock;
# 91 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE _M_file;
# 94 "/usr/include/c++/4.4/fstream" 3
_ZNSt8ios_base8openmodeE _M_mode;
# 97 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_beg;
# 102 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_cur;
# 106 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_last;
# 109 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_buf;
# 116 "/usr/include/c++/4.4/fstream" 3
size_t _M_buf_size;
# 119 "/usr/include/c++/4.4/fstream" 3
__nv_bool _M_buf_allocated;
# 128 "/usr/include/c++/4.4/fstream" 3
__nv_bool _M_reading;
# 129 "/usr/include/c++/4.4/fstream" 3
__nv_bool _M_writing;
# 137 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE _M_pback;
# 138 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_cur_save;
# 139 "/usr/include/c++/4.4/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_end_save;
# 140 "/usr/include/c++/4.4/fstream" 3
__nv_bool _M_pback_init;
# 144 "/usr/include/c++/4.4/fstream" 3
const _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE *_M_codecvt;
# 151 "/usr/include/c++/4.4/fstream" 3
char *_M_ext_buf;
# 156 "/usr/include/c++/4.4/fstream" 3
_ZSt10streamsize _M_ext_buf_size;
# 163 "/usr/include/c++/4.4/fstream" 3
const char *_M_ext_next;
# 164 "/usr/include/c++/4.4/fstream" 3
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
union _ZZ10__signbitlEUt_ {
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
long double __l;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __i[3];};
# 140 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) __attribute__((visibility("default"))) void free(void *);
# 139 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) __attribute__((visibility("default"))) void *malloc(size_t);
# 141 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) __attribute__((visibility("default"))) void free(void *);
# 71 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) void *memcpy(void *__restrict__, const void *__restrict__, size_t);
# 102 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) int printf(const char *__restrict__, ...);
# 103 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((device)) __attribute__((__malloc__)) void *malloc(size_t);
# 2242 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) float sqrtf(float);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitl(long double);
# 127 "euler3d.cu"
__attribute__((global)) extern void _Z25cuda_initialize_variablesiPfS_(int, float *, float *);
# 183 "euler3d.cu"
__attribute__((global)) extern void _Z24cuda_compute_step_factoriPfS_S_(int, float *, float *, float *);
# 214 "euler3d.cu"
__attribute__((global)) extern void _Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(int, int *, float *, float *, float *, float *, float3 *, float3 *, float3 *, float3 *);
# 351 "euler3d.cu"
__attribute__((global)) extern void _Z14cuda_time_stepiiPfS_S_S_(int, int, float *, float *, float *, float *);
static __attribute__((constant)) const long _ZTVSt9basic_iosIcSt11char_traitsIcEE[4];
static __attribute__((constant)) const long *const _ZTTSi[];
static __attribute__((constant)) const long _ZTVSt15basic_streambufIcSt11char_traitsIcEE[16];
static __attribute__((constant)) const long _ZTVSt13basic_filebufIcSt11char_traitsIcEE[16];
static __attribute__((constant)) const long *const _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[];
static __attribute__((constant)) const long *const _ZTTSo[];
static __attribute__((constant)) const long *const _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[];
# 1 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 1
# 159 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 1 3
# 7730 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 2 3
# 160 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 2
# 360 "euler3d.cu" 2
# 127 "euler3d.cu"
__attribute__((global)) void _Z25cuda_initialize_variablesiPfS_(
# 127 "euler3d.cu"
int nelr,
# 127 "euler3d.cu"
float *variables,
# 127 "euler3d.cu"
float *ff_variable){
# 128 "euler3d.cu"
{
# 129 "euler3d.cu"
 int __cuda_local_var_35703_12_non_const_i;
# 129 "euler3d.cu"
__cuda_local_var_35703_12_non_const_i = ((int)(((blockDim.x) * (blockIdx.x)) + (threadIdx.x))); {
# 130 "euler3d.cu"
 int j;
# 130 "euler3d.cu"
j = 0;
# 130 "euler3d.cu"
for (; (j < 5); j++) {
# 131 "euler3d.cu"
(variables[(__cuda_local_var_35703_12_non_const_i + (j * nelr))]) = (ff_variable[j]); } }
# 132 "euler3d.cu"
}}
# 183 "euler3d.cu"
__attribute__((global)) void _Z24cuda_compute_step_factoriPfS_S_(
# 183 "euler3d.cu"
int nelr,
# 183 "euler3d.cu"
float *variables,
# 183 "euler3d.cu"
float *areas,
# 183 "euler3d.cu"
float *step_factors){
# 184 "euler3d.cu"
{
# 185 "euler3d.cu"
 int __cuda_local_var_35759_12_non_const_i;
# 187 "euler3d.cu"
 float __cuda_local_var_35761_8_non_const_density;
# 188 "euler3d.cu"
 float3 __cuda_local_var_35762_9_non_const_momentum;
# 193 "euler3d.cu"
 float __cuda_local_var_35767_8_non_const_density_energy;
# 195 "euler3d.cu"
 float3 __cuda_local_var_35769_9_non_const_velocity;
# 196 "euler3d.cu"
 float __cuda_local_var_35770_8_non_const_speed_sqd;
# 197 "euler3d.cu"
 float __cuda_local_var_35771_8_non_const_pressure;
# 198 "euler3d.cu"
 float __cuda_local_var_35772_8_non_const_speed_of_sound;
# 185 "euler3d.cu"
__cuda_local_var_35759_12_non_const_i = ((int)(((blockDim.x) * (blockIdx.x)) + (threadIdx.x)));
# 187 "euler3d.cu"
__cuda_local_var_35761_8_non_const_density = (variables[(__cuda_local_var_35759_12_non_const_i + (0 * nelr))]);
# 189 "euler3d.cu"
(__cuda_local_var_35762_9_non_const_momentum.x) = (variables[(__cuda_local_var_35759_12_non_const_i + (1 * nelr))]);
# 190 "euler3d.cu"
(__cuda_local_var_35762_9_non_const_momentum.y) = (variables[(__cuda_local_var_35759_12_non_const_i + (2 * nelr))]);
# 191 "euler3d.cu"
(__cuda_local_var_35762_9_non_const_momentum.z) = (variables[(__cuda_local_var_35759_12_non_const_i + (3 * nelr))]);
# 193 "euler3d.cu"
__cuda_local_var_35767_8_non_const_density_energy = (variables[(__cuda_local_var_35759_12_non_const_i + (4 * nelr))]);
# 195 "euler3d.cu"
{
# 195 "euler3d.cu"
(__cuda_local_var_35769_9_non_const_velocity.x) = ( fdividef((__cuda_local_var_35762_9_non_const_momentum.x) , __cuda_local_var_35761_8_non_const_density));
# 195 "euler3d.cu"
(__cuda_local_var_35769_9_non_const_velocity.y) = ( fdividef((__cuda_local_var_35762_9_non_const_momentum.y) , __cuda_local_var_35761_8_non_const_density));
# 195 "euler3d.cu"
(__cuda_local_var_35769_9_non_const_velocity.z) = ( fdividef((__cuda_local_var_35762_9_non_const_momentum.z) , __cuda_local_var_35761_8_non_const_density));
# 195 "euler3d.cu"
}
# 196 "euler3d.cu"
__cuda_local_var_35770_8_non_const_speed_sqd = ((((__cuda_local_var_35769_9_non_const_velocity.x) * (__cuda_local_var_35769_9_non_const_velocity.x)) + ((__cuda_local_var_35769_9_non_const_velocity.y) * (__cuda_local_var_35769_9_non_const_velocity.y))) + ((__cuda_local_var_35769_9_non_const_velocity.z) * (__cuda_local_var_35769_9_non_const_velocity.z)));
# 197 "euler3d.cu"
__cuda_local_var_35771_8_non_const_pressure = ((0.3999999762F) * (__cuda_local_var_35767_8_non_const_density_energy - (((0.5F) * __cuda_local_var_35761_8_non_const_density) * __cuda_local_var_35770_8_non_const_speed_sqd)));
# 198 "euler3d.cu"
__cuda_local_var_35772_8_non_const_speed_of_sound = (sqrtf(( fdividef(((1.399999976F) * __cuda_local_var_35771_8_non_const_pressure) , __cuda_local_var_35761_8_non_const_density))));
# 201 "euler3d.cu"
(step_factors[__cuda_local_var_35759_12_non_const_i]) = ( fdividef((0.5F) , ((sqrtf((areas[__cuda_local_var_35759_12_non_const_i]))) * ((sqrtf(__cuda_local_var_35770_8_non_const_speed_sqd)) + __cuda_local_var_35772_8_non_const_speed_of_sound))));
# 202 "euler3d.cu"
}}
# 214 "euler3d.cu"
__attribute__((global)) void _Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(
# 214 "euler3d.cu"
int nelr,
# 214 "euler3d.cu"
int *elements_surrounding_elements,
# 214 "euler3d.cu"
float *normals,
# 214 "euler3d.cu"
float *variables,
# 214 "euler3d.cu"
float *fluxes,
# 214 "euler3d.cu"
float *ff_variable,
# 214 "euler3d.cu"
float3 *ff_flux_contribution_momentum_x,
# 214 "euler3d.cu"
float3 *ff_flux_contribution_momentum_y,
# 214 "euler3d.cu"
float3 *ff_flux_contribution_momentum_z,
# 214 "euler3d.cu"
float3 *ff_flux_contribution_density_energy){
# 215 "euler3d.cu"
{ float __T28;
# 216 "euler3d.cu"
 float __cuda_local_var_35790_14_const_smoothing_coefficient;
# 217 "euler3d.cu"
 int __cuda_local_var_35791_12_non_const_i;
# 219 "euler3d.cu"
 int __cuda_local_var_35793_6_non_const_j;
# 219 "euler3d.cu"
 int __cuda_local_var_35793_9_non_const_nb;
# 220 "euler3d.cu"
 float3 __cuda_local_var_35794_9_non_const_normal;
# 220 "euler3d.cu"
 float __cuda_local_var_35794_23_non_const_normal_len;
# 221 "euler3d.cu"
 float __cuda_local_var_35795_8_non_const_factor;
# 223 "euler3d.cu"
 float __cuda_local_var_35797_8_non_const_density_i;
# 224 "euler3d.cu"
 float3 __cuda_local_var_35798_9_non_const_momentum_i;
# 229 "euler3d.cu"
 float __cuda_local_var_35803_8_non_const_density_energy_i;
# 231 "euler3d.cu"
 float3 __cuda_local_var_35805_9_non_const_velocity_i;
# 232 "euler3d.cu"
 float __cuda_local_var_35806_8_non_const_speed_sqd_i;
# 233 "euler3d.cu"
 float __cuda_local_var_35807_8_non_const_speed_i;
# 234 "euler3d.cu"
 float __cuda_local_var_35808_8_non_const_pressure_i;
# 235 "euler3d.cu"
 float __cuda_local_var_35809_8_non_const_speed_of_sound_i;
# 236 "euler3d.cu"
 float3 __cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x;
# 236 "euler3d.cu"
 float3 __cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y;
# 236 "euler3d.cu"
 float3 __cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z;
# 237 "euler3d.cu"
 float3 __cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy;
# 240 "euler3d.cu"
 float __cuda_local_var_35814_8_non_const_flux_i_density;
# 241 "euler3d.cu"
 float3 __cuda_local_var_35815_9_non_const_flux_i_momentum;
# 245 "euler3d.cu"
 float __cuda_local_var_35819_8_non_const_flux_i_density_energy;
# 247 "euler3d.cu"
 float3 __cuda_local_var_35821_9_non_const_velocity_nb;
# 248 "euler3d.cu"
 float __cuda_local_var_35822_8_non_const_density_nb;
# 248 "euler3d.cu"
 float __cuda_local_var_35822_20_non_const_density_energy_nb;
# 249 "euler3d.cu"
 float3 __cuda_local_var_35823_9_non_const_momentum_nb;
# 250 "euler3d.cu"
 float3 __cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x;
# 250 "euler3d.cu"
 float3 __cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y;
# 250 "euler3d.cu"
 float3 __cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z;
# 251 "euler3d.cu"
 float3 __cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy;
# 252 "euler3d.cu"
 float __cuda_local_var_35826_8_non_const_speed_sqd_nb;
# 252 "euler3d.cu"
 float __cuda_local_var_35826_22_non_const_speed_of_sound_nb;
# 252 "euler3d.cu"
 float __cuda_local_var_35826_41_non_const_pressure_nb;
# 216 "euler3d.cu"
__cuda_local_var_35790_14_const_smoothing_coefficient = (0.200000003F);
# 217 "euler3d.cu"
__cuda_local_var_35791_12_non_const_i = ((int)(((blockDim.x) * (blockIdx.x)) + (threadIdx.x)));
# 223 "euler3d.cu"
__cuda_local_var_35797_8_non_const_density_i = (variables[(__cuda_local_var_35791_12_non_const_i + (0 * nelr))]);
# 225 "euler3d.cu"
(__cuda_local_var_35798_9_non_const_momentum_i.x) = (variables[(__cuda_local_var_35791_12_non_const_i + (1 * nelr))]);
# 226 "euler3d.cu"
(__cuda_local_var_35798_9_non_const_momentum_i.y) = (variables[(__cuda_local_var_35791_12_non_const_i + (2 * nelr))]);
# 227 "euler3d.cu"
(__cuda_local_var_35798_9_non_const_momentum_i.z) = (variables[(__cuda_local_var_35791_12_non_const_i + (3 * nelr))]);
# 229 "euler3d.cu"
__cuda_local_var_35803_8_non_const_density_energy_i = (variables[(__cuda_local_var_35791_12_non_const_i + (4 * nelr))]);
# 231 "euler3d.cu"
{
# 231 "euler3d.cu"
(__cuda_local_var_35805_9_non_const_velocity_i.x) = ( fdividef((__cuda_local_var_35798_9_non_const_momentum_i.x) , __cuda_local_var_35797_8_non_const_density_i));
# 231 "euler3d.cu"
(__cuda_local_var_35805_9_non_const_velocity_i.y) = ( fdividef((__cuda_local_var_35798_9_non_const_momentum_i.y) , __cuda_local_var_35797_8_non_const_density_i));
# 231 "euler3d.cu"
(__cuda_local_var_35805_9_non_const_velocity_i.z) = ( fdividef((__cuda_local_var_35798_9_non_const_momentum_i.z) , __cuda_local_var_35797_8_non_const_density_i));
# 231 "euler3d.cu"
}
# 232 "euler3d.cu"
__cuda_local_var_35806_8_non_const_speed_sqd_i = ((((__cuda_local_var_35805_9_non_const_velocity_i.x) * (__cuda_local_var_35805_9_non_const_velocity_i.x)) + ((__cuda_local_var_35805_9_non_const_velocity_i.y) * (__cuda_local_var_35805_9_non_const_velocity_i.y))) + ((__cuda_local_var_35805_9_non_const_velocity_i.z) * (__cuda_local_var_35805_9_non_const_velocity_i.z)));
# 233 "euler3d.cu"
__cuda_local_var_35807_8_non_const_speed_i = (sqrtf(__cuda_local_var_35806_8_non_const_speed_sqd_i));
# 234 "euler3d.cu"
__cuda_local_var_35808_8_non_const_pressure_i = ((0.3999999762F) * (__cuda_local_var_35803_8_non_const_density_energy_i - (((0.5F) * __cuda_local_var_35797_8_non_const_density_i) * __cuda_local_var_35806_8_non_const_speed_sqd_i)));
# 235 "euler3d.cu"
__cuda_local_var_35809_8_non_const_speed_of_sound_i = (sqrtf(( fdividef(((1.399999976F) * __cuda_local_var_35808_8_non_const_pressure_i) , __cuda_local_var_35797_8_non_const_density_i))));
# 238 "euler3d.cu"
{
# 238 "euler3d.cu"
(__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.x) = (((__cuda_local_var_35805_9_non_const_velocity_i.x) * (__cuda_local_var_35798_9_non_const_momentum_i.x)) + __cuda_local_var_35808_8_non_const_pressure_i);
# 238 "euler3d.cu"
(__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.y) = ((__cuda_local_var_35805_9_non_const_velocity_i.x) * (__cuda_local_var_35798_9_non_const_momentum_i.y));
# 238 "euler3d.cu"
(__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.z) = ((__cuda_local_var_35805_9_non_const_velocity_i.x) * (__cuda_local_var_35798_9_non_const_momentum_i.z));
# 238 "euler3d.cu"
(__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.x) = (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.y);
# 238 "euler3d.cu"
(__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.y) = (((__cuda_local_var_35805_9_non_const_velocity_i.y) * (__cuda_local_var_35798_9_non_const_momentum_i.y)) + __cuda_local_var_35808_8_non_const_pressure_i);
# 238 "euler3d.cu"
(__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.z) = ((__cuda_local_var_35805_9_non_const_velocity_i.y) * (__cuda_local_var_35798_9_non_const_momentum_i.z));
# 238 "euler3d.cu"
(__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.x) = (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.z);
# 238 "euler3d.cu"
(__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.y) = (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.z);
# 238 "euler3d.cu"
(__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.z) = (((__cuda_local_var_35805_9_non_const_velocity_i.z) * (__cuda_local_var_35798_9_non_const_momentum_i.z)) + __cuda_local_var_35808_8_non_const_pressure_i);
# 238 "euler3d.cu"
__T28 = (__cuda_local_var_35803_8_non_const_density_energy_i + __cuda_local_var_35808_8_non_const_pressure_i);
# 238 "euler3d.cu"
(__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.x) = ((__cuda_local_var_35805_9_non_const_velocity_i.x) * __T28);
# 238 "euler3d.cu"
(__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.y) = ((__cuda_local_var_35805_9_non_const_velocity_i.y) * __T28);
# 238 "euler3d.cu"
(__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.z) = ((__cuda_local_var_35805_9_non_const_velocity_i.z) * __T28);
# 238 "euler3d.cu"
}
# 240 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density = (0.0F);
# 242 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) = (0.0F);
# 243 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) = (0.0F);
# 244 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) = (0.0F);
# 245 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy = (0.0F);
# 255 "euler3d.cu"

#pragma unroll
for (__cuda_local_var_35793_6_non_const_j = 0; (__cuda_local_var_35793_6_non_const_j < 4); __cuda_local_var_35793_6_non_const_j++)
# 256 "euler3d.cu"
{
# 257 "euler3d.cu"
__cuda_local_var_35793_9_non_const_nb = (elements_surrounding_elements[(__cuda_local_var_35791_12_non_const_i + (__cuda_local_var_35793_6_non_const_j * nelr))]);
# 258 "euler3d.cu"
(__cuda_local_var_35794_9_non_const_normal.x) = (normals[(__cuda_local_var_35791_12_non_const_i + ((__cuda_local_var_35793_6_non_const_j + 0) * nelr))]);
# 259 "euler3d.cu"
(__cuda_local_var_35794_9_non_const_normal.y) = (normals[(__cuda_local_var_35791_12_non_const_i + ((__cuda_local_var_35793_6_non_const_j + 4) * nelr))]);
# 260 "euler3d.cu"
(__cuda_local_var_35794_9_non_const_normal.z) = (normals[(__cuda_local_var_35791_12_non_const_i + ((__cuda_local_var_35793_6_non_const_j + 8) * nelr))]);
# 261 "euler3d.cu"
__cuda_local_var_35794_23_non_const_normal_len = (sqrtf(((((__cuda_local_var_35794_9_non_const_normal.x) * (__cuda_local_var_35794_9_non_const_normal.x)) + ((__cuda_local_var_35794_9_non_const_normal.y) * (__cuda_local_var_35794_9_non_const_normal.y))) + ((__cuda_local_var_35794_9_non_const_normal.z) * (__cuda_local_var_35794_9_non_const_normal.z)))));
# 263 "euler3d.cu"
if (__cuda_local_var_35793_9_non_const_nb >= 0)
# 264 "euler3d.cu"
{ float __T29;
# 265 "euler3d.cu"
__cuda_local_var_35822_8_non_const_density_nb = (variables[(__cuda_local_var_35793_9_non_const_nb + (0 * nelr))]);
# 266 "euler3d.cu"
(__cuda_local_var_35823_9_non_const_momentum_nb.x) = (variables[(__cuda_local_var_35793_9_non_const_nb + (1 * nelr))]);
# 267 "euler3d.cu"
(__cuda_local_var_35823_9_non_const_momentum_nb.y) = (variables[(__cuda_local_var_35793_9_non_const_nb + (2 * nelr))]);
# 268 "euler3d.cu"
(__cuda_local_var_35823_9_non_const_momentum_nb.z) = (variables[(__cuda_local_var_35793_9_non_const_nb + (3 * nelr))]);
# 269 "euler3d.cu"
__cuda_local_var_35822_20_non_const_density_energy_nb = (variables[(__cuda_local_var_35793_9_non_const_nb + (4 * nelr))]);
# 270 "euler3d.cu"
{
# 270 "euler3d.cu"
(__cuda_local_var_35821_9_non_const_velocity_nb.x) = ( fdividef((__cuda_local_var_35823_9_non_const_momentum_nb.x) , __cuda_local_var_35822_8_non_const_density_nb));
# 270 "euler3d.cu"
(__cuda_local_var_35821_9_non_const_velocity_nb.y) = ( fdividef((__cuda_local_var_35823_9_non_const_momentum_nb.y) , __cuda_local_var_35822_8_non_const_density_nb));
# 270 "euler3d.cu"
(__cuda_local_var_35821_9_non_const_velocity_nb.z) = ( fdividef((__cuda_local_var_35823_9_non_const_momentum_nb.z) , __cuda_local_var_35822_8_non_const_density_nb));
# 270 "euler3d.cu"
}
# 271 "euler3d.cu"
__cuda_local_var_35826_8_non_const_speed_sqd_nb = ((((__cuda_local_var_35821_9_non_const_velocity_nb.x) * (__cuda_local_var_35821_9_non_const_velocity_nb.x)) + ((__cuda_local_var_35821_9_non_const_velocity_nb.y) * (__cuda_local_var_35821_9_non_const_velocity_nb.y))) + ((__cuda_local_var_35821_9_non_const_velocity_nb.z) * (__cuda_local_var_35821_9_non_const_velocity_nb.z)));
# 272 "euler3d.cu"
__cuda_local_var_35826_41_non_const_pressure_nb = ((0.3999999762F) * (__cuda_local_var_35822_20_non_const_density_energy_nb - (((0.5F) * __cuda_local_var_35822_8_non_const_density_nb) * __cuda_local_var_35826_8_non_const_speed_sqd_nb)));
# 273 "euler3d.cu"
__cuda_local_var_35826_22_non_const_speed_of_sound_nb = (sqrtf(( fdividef(((1.399999976F) * __cuda_local_var_35826_41_non_const_pressure_nb) , __cuda_local_var_35822_8_non_const_density_nb))));
# 274 "euler3d.cu"
{
# 274 "euler3d.cu"
(__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.x) = (((__cuda_local_var_35821_9_non_const_velocity_nb.x) * (__cuda_local_var_35823_9_non_const_momentum_nb.x)) + __cuda_local_var_35826_41_non_const_pressure_nb);
# 274 "euler3d.cu"
(__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.y) = ((__cuda_local_var_35821_9_non_const_velocity_nb.x) * (__cuda_local_var_35823_9_non_const_momentum_nb.y));
# 274 "euler3d.cu"
(__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.z) = ((__cuda_local_var_35821_9_non_const_velocity_nb.x) * (__cuda_local_var_35823_9_non_const_momentum_nb.z));
# 274 "euler3d.cu"
(__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.x) = (__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.y);
# 274 "euler3d.cu"
(__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.y) = (((__cuda_local_var_35821_9_non_const_velocity_nb.y) * (__cuda_local_var_35823_9_non_const_momentum_nb.y)) + __cuda_local_var_35826_41_non_const_pressure_nb);
# 274 "euler3d.cu"
(__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.z) = ((__cuda_local_var_35821_9_non_const_velocity_nb.y) * (__cuda_local_var_35823_9_non_const_momentum_nb.z));
# 274 "euler3d.cu"
(__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.x) = (__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.z);
# 274 "euler3d.cu"
(__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.y) = (__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.z);
# 274 "euler3d.cu"
(__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.z) = (((__cuda_local_var_35821_9_non_const_velocity_nb.z) * (__cuda_local_var_35823_9_non_const_momentum_nb.z)) + __cuda_local_var_35826_41_non_const_pressure_nb);
# 274 "euler3d.cu"
__T29 = (__cuda_local_var_35822_20_non_const_density_energy_nb + __cuda_local_var_35826_41_non_const_pressure_nb);
# 274 "euler3d.cu"
(__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.x) = ((__cuda_local_var_35821_9_non_const_velocity_nb.x) * __T29);
# 274 "euler3d.cu"
(__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.y) = ((__cuda_local_var_35821_9_non_const_velocity_nb.y) * __T29);
# 274 "euler3d.cu"
(__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.z) = ((__cuda_local_var_35821_9_non_const_velocity_nb.z) * __T29);
# 274 "euler3d.cu"
}
# 277 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((((-__cuda_local_var_35794_23_non_const_normal_len) * (0.200000003F)) * (0.5F)) * (((__cuda_local_var_35807_8_non_const_speed_i + (sqrtf(__cuda_local_var_35826_8_non_const_speed_sqd_nb))) + __cuda_local_var_35809_8_non_const_speed_of_sound_i) + __cuda_local_var_35826_22_non_const_speed_of_sound_nb));
# 278 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * (__cuda_local_var_35797_8_non_const_density_i - __cuda_local_var_35822_8_non_const_density_nb));
# 279 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * (__cuda_local_var_35803_8_non_const_density_energy_i - __cuda_local_var_35822_20_non_const_density_energy_nb));
# 280 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35798_9_non_const_momentum_i.x) - (__cuda_local_var_35823_9_non_const_momentum_nb.x)));
# 281 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35798_9_non_const_momentum_i.y) - (__cuda_local_var_35823_9_non_const_momentum_nb.y)));
# 282 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35798_9_non_const_momentum_i.z) - (__cuda_local_var_35823_9_non_const_momentum_nb.z)));
# 285 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.x));
# 286 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35823_9_non_const_momentum_nb.x) + (__cuda_local_var_35798_9_non_const_momentum_i.x)));
# 287 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.x) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.x)));
# 288 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.x) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.x)));
# 289 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.x) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.x)));
# 290 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.x) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.x)));
# 292 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.y));
# 293 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35823_9_non_const_momentum_nb.y) + (__cuda_local_var_35798_9_non_const_momentum_i.y)));
# 294 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.y) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.y)));
# 295 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.y) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.y)));
# 296 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.y) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.y)));
# 297 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.y) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.y)));
# 299 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.z));
# 300 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35823_9_non_const_momentum_nb.z) + (__cuda_local_var_35798_9_non_const_momentum_i.z)));
# 301 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35825_9_non_const_flux_contribution_nb_density_energy.z) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.z)));
# 302 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_9_non_const_flux_contribution_nb_momentum_x.z) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.z)));
# 303 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_42_non_const_flux_contribution_nb_momentum_y.z) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.z)));
# 304 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * ((__cuda_local_var_35824_75_non_const_flux_contribution_nb_momentum_z.z) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.z)));
# 305 "euler3d.cu"
} else {
# 306 "euler3d.cu"
if (__cuda_local_var_35793_9_non_const_nb == (-1))
# 307 "euler3d.cu"
{
# 308 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += ((__cuda_local_var_35794_9_non_const_normal.x) * __cuda_local_var_35808_8_non_const_pressure_i);
# 309 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += ((__cuda_local_var_35794_9_non_const_normal.y) * __cuda_local_var_35808_8_non_const_pressure_i);
# 310 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += ((__cuda_local_var_35794_9_non_const_normal.z) * __cuda_local_var_35808_8_non_const_pressure_i);
# 311 "euler3d.cu"
} else {
# 312 "euler3d.cu"
if (__cuda_local_var_35793_9_non_const_nb == (-2))
# 313 "euler3d.cu"
{
# 314 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.x));
# 315 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((ff_variable[1]) + (__cuda_local_var_35798_9_non_const_momentum_i.x)));
# 316 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_density_energy[0]).x) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.x)));
# 317 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_x[0]).x) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.x)));
# 318 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_y[0]).x) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.x)));
# 319 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_z[0]).x) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.x)));
# 321 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.y));
# 322 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((ff_variable[2]) + (__cuda_local_var_35798_9_non_const_momentum_i.y)));
# 323 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_density_energy[0]).y) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.y)));
# 324 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_x[0]).y) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.y)));
# 325 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_y[0]).y) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.y)));
# 326 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_z[0]).y) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.y)));
# 328 "euler3d.cu"
__cuda_local_var_35795_8_non_const_factor = ((0.5F) * (__cuda_local_var_35794_9_non_const_normal.z));
# 329 "euler3d.cu"
__cuda_local_var_35814_8_non_const_flux_i_density += (__cuda_local_var_35795_8_non_const_factor * ((ff_variable[3]) + (__cuda_local_var_35798_9_non_const_momentum_i.z)));
# 330 "euler3d.cu"
__cuda_local_var_35819_8_non_const_flux_i_density_energy += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_density_energy[0]).z) + (__cuda_local_var_35811_9_non_const_flux_contribution_i_density_energy.z)));
# 331 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.x) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_x[0]).z) + (__cuda_local_var_35810_9_non_const_flux_contribution_i_momentum_x.z)));
# 332 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.y) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_y[0]).z) + (__cuda_local_var_35810_41_non_const_flux_contribution_i_momentum_y.z)));
# 333 "euler3d.cu"
(__cuda_local_var_35815_9_non_const_flux_i_momentum.z) += (__cuda_local_var_35795_8_non_const_factor * (((ff_flux_contribution_momentum_z[0]).z) + (__cuda_local_var_35810_73_non_const_flux_contribution_i_momentum_z.z)));
# 335 "euler3d.cu"
} } }
# 336 "euler3d.cu"
}
# 338 "euler3d.cu"
(fluxes[(__cuda_local_var_35791_12_non_const_i + (0 * nelr))]) = __cuda_local_var_35814_8_non_const_flux_i_density;
# 339 "euler3d.cu"
(fluxes[(__cuda_local_var_35791_12_non_const_i + (1 * nelr))]) = (__cuda_local_var_35815_9_non_const_flux_i_momentum.x);
# 340 "euler3d.cu"
(fluxes[(__cuda_local_var_35791_12_non_const_i + (2 * nelr))]) = (__cuda_local_var_35815_9_non_const_flux_i_momentum.y);
# 341 "euler3d.cu"
(fluxes[(__cuda_local_var_35791_12_non_const_i + (3 * nelr))]) = (__cuda_local_var_35815_9_non_const_flux_i_momentum.z);
# 342 "euler3d.cu"
(fluxes[(__cuda_local_var_35791_12_non_const_i + (4 * nelr))]) = __cuda_local_var_35819_8_non_const_flux_i_density_energy;
# 343 "euler3d.cu"
}}
# 351 "euler3d.cu"
__attribute__((global)) void _Z14cuda_time_stepiiPfS_S_S_(
# 351 "euler3d.cu"
int j,
# 351 "euler3d.cu"
int nelr,
# 351 "euler3d.cu"
float *old_variables,
# 351 "euler3d.cu"
float *variables,
# 351 "euler3d.cu"
float *step_factors,
# 351 "euler3d.cu"
float *fluxes){
# 352 "euler3d.cu"
{
# 353 "euler3d.cu"
 int __cuda_local_var_35927_12_non_const_i;
# 355 "euler3d.cu"
 float __cuda_local_var_35929_8_non_const_factor;
# 353 "euler3d.cu"
__cuda_local_var_35927_12_non_const_i = ((int)(((blockDim.x) * (blockIdx.x)) + (threadIdx.x)));
# 355 "euler3d.cu"
__cuda_local_var_35929_8_non_const_factor = ( fdividef((step_factors[__cuda_local_var_35927_12_non_const_i]) , ((float)(4 - j))));
# 357 "euler3d.cu"
(variables[(__cuda_local_var_35927_12_non_const_i + (0 * nelr))]) = ((old_variables[(__cuda_local_var_35927_12_non_const_i + (0 * nelr))]) + (__cuda_local_var_35929_8_non_const_factor * (fluxes[(__cuda_local_var_35927_12_non_const_i + (0 * nelr))])));
# 358 "euler3d.cu"
(variables[(__cuda_local_var_35927_12_non_const_i + (4 * nelr))]) = ((old_variables[(__cuda_local_var_35927_12_non_const_i + (4 * nelr))]) + (__cuda_local_var_35929_8_non_const_factor * (fluxes[(__cuda_local_var_35927_12_non_const_i + (4 * nelr))])));
# 359 "euler3d.cu"
(variables[(__cuda_local_var_35927_12_non_const_i + (1 * nelr))]) = ((old_variables[(__cuda_local_var_35927_12_non_const_i + (1 * nelr))]) + (__cuda_local_var_35929_8_non_const_factor * (fluxes[(__cuda_local_var_35927_12_non_const_i + (1 * nelr))])));
# 360 "euler3d.cu"
(variables[(__cuda_local_var_35927_12_non_const_i + (2 * nelr))]) = ((old_variables[(__cuda_local_var_35927_12_non_const_i + (2 * nelr))]) + (__cuda_local_var_35929_8_non_const_factor * (fluxes[(__cuda_local_var_35927_12_non_const_i + (2 * nelr))])));
# 361 "euler3d.cu"
(variables[(__cuda_local_var_35927_12_non_const_i + (3 * nelr))]) = ((old_variables[(__cuda_local_var_35927_12_non_const_i + (3 * nelr))]) + (__cuda_local_var_35929_8_non_const_factor * (fluxes[(__cuda_local_var_35927_12_non_const_i + (3 * nelr))])));
# 362 "euler3d.cu"
}}
