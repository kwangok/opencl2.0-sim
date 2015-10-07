# 1 "streamcluster_cuda.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "streamcluster_cuda.cudafe1.gpu"
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
# 93 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {
# 96 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_REAL,
# 99 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_VIRTUAL,
# 103 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_PROF};
# 33 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
enum __rlimit_resource {
# 36 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_CPU,
# 40 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_FSIZE,
# 44 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_DATA,
# 48 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_STACK,
# 52 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_CORE,
# 59 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_RSS,
# 63 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_NOFILE = 7,
# 64 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_OFILE = 7,
# 69 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RLIMIT_AS = 9,
# 73 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_NPROC = 6,
# 77 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_MEMLOCK = 8,
# 81 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_LOCKS = 10,
# 85 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_SIGPENDING,
# 89 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_MSGQUEUE,
# 95 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_NICE,
# 100 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_RTPRIO,
# 106 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_RTTIME,
# 109 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIMIT_NLIMITS,
# 110 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
__RLIM_NLIMITS = 16};
# 160 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
enum __rusage_who {
# 163 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RUSAGE_SELF,
# 167 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RUSAGE_CHILDREN = (-1),
# 173 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
RUSAGE_THREAD = 1};
# 232 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
enum __priority_which {
# 234 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
PRIO_PROCESS,
# 236 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
PRIO_PGRP,
# 238 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3
PRIO_USER};
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
# 39 "streamcluster_header.cu"
struct Point;
# 47 "streamcluster_header.cu"
struct Points;
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
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E {
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
_ZNSt6locale18_S_categories_sizeE = 12};
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
# 515 "/usr/include/c++/4.4/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E {
# 515 "/usr/include/c++/4.4/bits/ios_base.h" 3
_ZNSt8ios_base18_S_local_word_sizeE = 8};
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
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
# 39 "streamcluster_header.cu"
struct Point {
# 40 "streamcluster_header.cu"
float weight;
# 41 "streamcluster_header.cu"
float *coord;
# 42 "streamcluster_header.cu"
long assign;
# 43 "streamcluster_header.cu"
float cost;char __nv_no_debug_dummy_end_padding_0[4];};
# 44 "streamcluster_header.cu"
typedef struct Point Point;
# 47 "streamcluster_header.cu"
struct Points {
# 48 "streamcluster_header.cu"
long num;
# 49 "streamcluster_header.cu"
int dim;
# 50 "streamcluster_header.cu"
Point *p;};
# 51 "streamcluster_header.cu"
typedef struct Points Points;
# 537 "/usr/include/c++/4.4/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy_end_padding_0;};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ {
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
long double __l;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __i[3];};
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
# 55 "streamcluster_cuda.cu"
__attribute__((global)) extern void _Z12pgain_kerneliilP5PointiPfS1_PiPb(int, int, long, Point *, int, float *, float *, int *, __nv_bool *);
# 70 "streamcluster_cuda.cu"
extern __attribute__((shared)) float coord_s[];
# 1 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 1
# 159 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 1 3
# 7730 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 2 3
# 160 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 2
# 72 "streamcluster_cuda.cu" 2
# 55 "streamcluster_cuda.cu"
__attribute__((global)) void _Z12pgain_kerneliilP5PointiPfS1_PiPb(
# 55 "streamcluster_cuda.cu"
int num,
# 56 "streamcluster_cuda.cu"
int dim,
# 57 "streamcluster_cuda.cu"
long x,
# 58 "streamcluster_cuda.cu"
Point *p,
# 59 "streamcluster_cuda.cu"
int K,
# 60 "streamcluster_cuda.cu"
float *coord_d,
# 61 "streamcluster_cuda.cu"
float *work_mem_d,
# 62 "streamcluster_cuda.cu"
int *center_table_d,
# 63 "streamcluster_cuda.cu"
__nv_bool *switch_membership_d){
# 65 "streamcluster_cuda.cu"
{
# 67 "streamcluster_cuda.cu"
 int __cuda_local_var_36946_12_non_const_block_id;
# 68 "streamcluster_cuda.cu"
 int __cuda_local_var_36947_12_non_const_thread_id;
# 78 "streamcluster_cuda.cu"
 float __cuda_local_var_36957_8_non_const_x_cost;
# 83 "streamcluster_cuda.cu"
 float __cuda_local_var_36962_8_non_const_current_cost;
# 86 "streamcluster_cuda.cu"
 float *__cuda_local_var_36965_9_non_const_lower;
# 67 "streamcluster_cuda.cu"
__cuda_local_var_36946_12_non_const_block_id = ((int)((blockIdx.x) + ((gridDim.x) * (blockIdx.y))));
# 68 "streamcluster_cuda.cu"
__cuda_local_var_36947_12_non_const_thread_id = ((int)(((blockDim.x) * ((unsigned)__cuda_local_var_36946_12_non_const_block_id)) + (threadIdx.x)));
# 73 "streamcluster_cuda.cu"
if ((threadIdx.x) == 0U) { {
# 74 "streamcluster_cuda.cu"
 int i;
# 74 "streamcluster_cuda.cu"
i = 0;
# 74 "streamcluster_cuda.cu"
for (; (i < dim); i++)
# 74 "streamcluster_cuda.cu"
{
# 74 "streamcluster_cuda.cu"
((coord_s)[i]) = (coord_d[(((long)(i * num)) + x)]);
# 74 "streamcluster_cuda.cu"
} } }
# 75 "streamcluster_cuda.cu"
__syncthreads();
# 78 "streamcluster_cuda.cu"
__cuda_local_var_36957_8_non_const_x_cost = (0.0F); {
# 79 "streamcluster_cuda.cu"
 int i;
# 79 "streamcluster_cuda.cu"
i = 0;
# 79 "streamcluster_cuda.cu"
for (; (i < dim); i++) {
# 80 "streamcluster_cuda.cu"
__cuda_local_var_36957_8_non_const_x_cost += (((coord_d[((i * num) + __cuda_local_var_36947_12_non_const_thread_id)]) - ((coord_s)[i])) * ((coord_d[((i * num) + __cuda_local_var_36947_12_non_const_thread_id)]) - ((coord_s)[i]))); } }
# 81 "streamcluster_cuda.cu"
__cuda_local_var_36957_8_non_const_x_cost = (__cuda_local_var_36957_8_non_const_x_cost * ((p[__cuda_local_var_36947_12_non_const_thread_id]).weight));
# 83 "streamcluster_cuda.cu"
__cuda_local_var_36962_8_non_const_current_cost = ((p[__cuda_local_var_36947_12_non_const_thread_id]).cost);
# 86 "streamcluster_cuda.cu"
__cuda_local_var_36965_9_non_const_lower = (work_mem_d + (__cuda_local_var_36947_12_non_const_thread_id * (K + 1)));
# 87 "streamcluster_cuda.cu"
if (__cuda_local_var_36957_8_non_const_x_cost < __cuda_local_var_36962_8_non_const_current_cost)
# 87 "streamcluster_cuda.cu"
{
# 88 "streamcluster_cuda.cu"
(switch_membership_d[__cuda_local_var_36947_12_non_const_thread_id]) = ((__nv_bool)1);
# 89 "streamcluster_cuda.cu"
(__cuda_local_var_36965_9_non_const_lower[K]) += (__cuda_local_var_36957_8_non_const_x_cost - __cuda_local_var_36962_8_non_const_current_cost);
# 90 "streamcluster_cuda.cu"
}
# 92 "streamcluster_cuda.cu"
else
# 92 "streamcluster_cuda.cu"
{
# 93 "streamcluster_cuda.cu"
 int __cuda_local_var_36972_10_non_const_assign;
# 93 "streamcluster_cuda.cu"
__cuda_local_var_36972_10_non_const_assign = ((int)((p[__cuda_local_var_36947_12_non_const_thread_id]).assign));
# 94 "streamcluster_cuda.cu"
(__cuda_local_var_36965_9_non_const_lower[(center_table_d[__cuda_local_var_36972_10_non_const_assign])]) += (__cuda_local_var_36962_8_non_const_current_cost - __cuda_local_var_36957_8_non_const_x_cost);
# 95 "streamcluster_cuda.cu"
}
# 96 "streamcluster_cuda.cu"
}}
