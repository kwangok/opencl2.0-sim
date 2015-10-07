# 1 "ex_particle_CUDA_float_seq.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ex_particle_CUDA_float_seq.cudafe1.gpu"
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
# 27 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3
enum _ZUt0_ {
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
enum _ZUt1_ {
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
enum _ZUt2_ {
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
# 194 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
enum __pid_type {
# 196 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
F_OWNER_TID,
# 197 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
F_OWNER_PID,
# 198 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
F_OWNER_PGRP,
# 199 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
F_OWNER_GID = 2};
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
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIfESt13__is_floatingIfEEUt_E {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__traitorISt12__is_integerIfESt13__is_floatingIfEE7__valueE = 1};
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIiEUt_E {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIiE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEEUt_E {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEE7__valueE = 1};
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIdEUt_E {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIdE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIdESt13__is_floatingIdEEUt_E {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
_ZNSt9__traitorISt12__is_integerIdESt13__is_floatingIdEE7__valueE = 1};
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
# 76 "/usr/include/time.h" 3
typedef __time_t time_t;
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
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double _ZN9__gnu_cxx11__enable_ifILb1EdE6__typeE;
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
# 160 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) __attribute__((__const__)) int abs(int);
# 175 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) __attribute__((__const__)) double fabs(double);
# 286 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) double cos(double);
# 345 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) double sqrt(double);
# 502 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) double log(double);
# 884 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) __attribute__((__const__)) float roundf(float);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__const__)) int __signbitl(long double);
# 131 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
 __attribute__((device_builtin)) extern __attribute__((device)) void __syncthreads(void);
# 96 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) float _Z17calcLikelihoodSumPhPiii(unsigned char *, int *, int, int);
# 111 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) void _Z7cdfCalcPfS_i(float *, float *, int);
# 124 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) float _Z7d_randuPii(int *, int);
# 165 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) float _Z7d_randnPii(int *, int);
# 182 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) float _Z13updateWeightsPfS_i(float *, float *, int);
# 192 "ex_particle_CUDA_float_seq.cu"
extern __attribute__((device)) int _Z12findIndexBinPfiif(float *, int, int, float);
# 229 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) extern void _Z17find_index_kernelPfS_S_S_S_S_S_i(float *, float *, float *, float *, float *, float *, float *, int);
# 258 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) extern void _Z24normalize_weights_kernelPfiS_S_S_Pi(float *, int, float *, float *, float *, int *);
# 276 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) extern void _Z10sum_kernelPfi(float *, int);
# 309 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) extern void _Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_(float *, float *, float *, int *, int *, float *, unsigned char *, float *, float *, int, int, int, int, int, int, int *, float *);
# 1 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 1
# 159 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 1 3
# 7730 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-4.2/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h" 2 3
# 160 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h" 2
# 311 "ex_particle_CUDA_float_seq.cu" 2
# 96 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) float _Z17calcLikelihoodSumPhPiii(
# 96 "ex_particle_CUDA_float_seq.cu"
unsigned char *I,
# 96 "ex_particle_CUDA_float_seq.cu"
int *ind,
# 96 "ex_particle_CUDA_float_seq.cu"
int numOnes,
# 96 "ex_particle_CUDA_float_seq.cu"
int index){
# 96 "ex_particle_CUDA_float_seq.cu"
{
# 97 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18083_11_non_const_likelihoodSum;
# 98 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18084_9_non_const_x;
# 97 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18083_11_non_const_likelihoodSum = (0.0F);
# 99 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18084_9_non_const_x = 0; (__cuda_local_var_18084_9_non_const_x < numOnes); __cuda_local_var_18084_9_non_const_x++) { float __T20;
 float __T21;
# 100 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18083_11_non_const_likelihoodSum += ( fdivide(((double)(((__T20 = ((float)(((int)(I[(ind[((index * numOnes) + __cuda_local_var_18084_9_non_const_x)])])) - 100))) , (powif(__T20, 2))) - ((__T21 = ((float)(((int)(I[(ind[((index * numOnes) + __cuda_local_var_18084_9_non_const_x)])])) - 228))) , (powif(__T21, 2))))) , (50.0))); }
# 101 "ex_particle_CUDA_float_seq.cu"
return __cuda_local_var_18083_11_non_const_likelihoodSum;
# 102 "ex_particle_CUDA_float_seq.cu"
}}
# 111 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) void _Z7cdfCalcPfS_i(
# 111 "ex_particle_CUDA_float_seq.cu"
float *CDF,
# 111 "ex_particle_CUDA_float_seq.cu"
float *weights,
# 111 "ex_particle_CUDA_float_seq.cu"
int Nparticles){
# 111 "ex_particle_CUDA_float_seq.cu"
{
# 112 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18091_9_non_const_x;
# 113 "ex_particle_CUDA_float_seq.cu"
(CDF[0]) = (weights[0]);
# 114 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18091_9_non_const_x = 1; (__cuda_local_var_18091_9_non_const_x < Nparticles); __cuda_local_var_18091_9_non_const_x++)
# 114 "ex_particle_CUDA_float_seq.cu"
{
# 115 "ex_particle_CUDA_float_seq.cu"
(CDF[__cuda_local_var_18091_9_non_const_x]) = ((weights[__cuda_local_var_18091_9_non_const_x]) + (CDF[(__cuda_local_var_18091_9_non_const_x - 1)]));
# 116 "ex_particle_CUDA_float_seq.cu"
}
# 117 "ex_particle_CUDA_float_seq.cu"
}}
# 124 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) float _Z7d_randuPii(
# 124 "ex_particle_CUDA_float_seq.cu"
int *seed,
# 124 "ex_particle_CUDA_float_seq.cu"
int index){
# 124 "ex_particle_CUDA_float_seq.cu"
{ float __T22;
# 126 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18105_9_non_const_M;
# 127 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18106_9_non_const_A;
# 128 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18107_9_non_const_C;
# 129 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18108_9_non_const_num;
# 126 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18105_9_non_const_M = 2147483647;
# 127 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18106_9_non_const_A = 1103515245;
# 128 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18107_9_non_const_C = 12345;
# 129 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18108_9_non_const_num = ((__cuda_local_var_18106_9_non_const_A * (seed[index])) + __cuda_local_var_18107_9_non_const_C);
# 130 "ex_particle_CUDA_float_seq.cu"
(seed[index]) = (__cuda_local_var_18108_9_non_const_num % __cuda_local_var_18105_9_non_const_M);
# 131 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18108_9_non_const_num = (seed[index]);
# 132 "ex_particle_CUDA_float_seq.cu"
return (__T22 = ( fdividef(((float)__cuda_local_var_18108_9_non_const_num) , ((float)__cuda_local_var_18105_9_non_const_M)))) , (fabsf(__T22));
# 133 "ex_particle_CUDA_float_seq.cu"
}}
# 165 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) float _Z7d_randnPii(
# 165 "ex_particle_CUDA_float_seq.cu"
int *seed,
# 165 "ex_particle_CUDA_float_seq.cu"
int index){
# 165 "ex_particle_CUDA_float_seq.cu"
{ float __T23;
# 167 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18131_11_non_const_pi;
# 168 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18132_11_non_const_u;
# 169 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18133_11_non_const_v;
# 170 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18134_11_non_const_cosine;
# 171 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18135_11_non_const_rt;
# 167 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18131_11_non_const_pi = (3.141592741F);
# 168 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18132_11_non_const_u = (_Z7d_randuPii(seed, index));
# 169 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18133_11_non_const_v = (_Z7d_randuPii(seed, index));
# 170 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18134_11_non_const_cosine = ((__T23 = (((2.0F) * __cuda_local_var_18131_11_non_const_pi) * __cuda_local_var_18133_11_non_const_v)) , (cosf(__T23)));
# 171 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18135_11_non_const_rt = ((-2.0F) * (logf(__cuda_local_var_18132_11_non_const_u)));
# 172 "ex_particle_CUDA_float_seq.cu"
return (sqrtf(__cuda_local_var_18135_11_non_const_rt)) * __cuda_local_var_18134_11_non_const_cosine;
# 173 "ex_particle_CUDA_float_seq.cu"
}}
# 182 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) float _Z13updateWeightsPfS_i(
# 182 "ex_particle_CUDA_float_seq.cu"
float *weights,
# 182 "ex_particle_CUDA_float_seq.cu"
float *likelihood,
# 182 "ex_particle_CUDA_float_seq.cu"
int Nparticles){
# 182 "ex_particle_CUDA_float_seq.cu"
{
# 183 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18140_9_non_const_x;
# 184 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18141_11_non_const_sum;
# 184 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18141_11_non_const_sum = (0.0F);
# 185 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18140_9_non_const_x = 0; (__cuda_local_var_18140_9_non_const_x < Nparticles); __cuda_local_var_18140_9_non_const_x++)
# 185 "ex_particle_CUDA_float_seq.cu"
{ float __T24;
# 186 "ex_particle_CUDA_float_seq.cu"
(weights[__cuda_local_var_18140_9_non_const_x]) = ((weights[__cuda_local_var_18140_9_non_const_x]) * ((__T24 = (likelihood[__cuda_local_var_18140_9_non_const_x])) , (expf(__T24))));
# 187 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18141_11_non_const_sum += (weights[__cuda_local_var_18140_9_non_const_x]);
# 188 "ex_particle_CUDA_float_seq.cu"
}
# 189 "ex_particle_CUDA_float_seq.cu"
return __cuda_local_var_18141_11_non_const_sum;
# 190 "ex_particle_CUDA_float_seq.cu"
}}
# 192 "ex_particle_CUDA_float_seq.cu"
 __attribute__((device)) int _Z12findIndexBinPfiif(
# 192 "ex_particle_CUDA_float_seq.cu"
float *CDF,
# 192 "ex_particle_CUDA_float_seq.cu"
int beginIndex,
# 192 "ex_particle_CUDA_float_seq.cu"
int endIndex,
# 192 "ex_particle_CUDA_float_seq.cu"
float value){
# 192 "ex_particle_CUDA_float_seq.cu"
{
# 195 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18152_9_non_const_middleIndex;
# 193 "ex_particle_CUDA_float_seq.cu"
if (endIndex < beginIndex) {
# 194 "ex_particle_CUDA_float_seq.cu"
return (-1); }
# 196 "ex_particle_CUDA_float_seq.cu"
while (endIndex > beginIndex)
# 196 "ex_particle_CUDA_float_seq.cu"
{
# 197 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18152_9_non_const_middleIndex = (beginIndex + ((endIndex - beginIndex) / 2));
# 198 "ex_particle_CUDA_float_seq.cu"
if ((CDF[__cuda_local_var_18152_9_non_const_middleIndex]) >= value)
# 198 "ex_particle_CUDA_float_seq.cu"
{
# 199 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18152_9_non_const_middleIndex == 0) {
# 200 "ex_particle_CUDA_float_seq.cu"
return __cuda_local_var_18152_9_non_const_middleIndex; } else {
# 201 "ex_particle_CUDA_float_seq.cu"
if ((CDF[(__cuda_local_var_18152_9_non_const_middleIndex - 1)]) < value) {
# 202 "ex_particle_CUDA_float_seq.cu"
return __cuda_local_var_18152_9_non_const_middleIndex; } else {
# 203 "ex_particle_CUDA_float_seq.cu"
if ((CDF[(__cuda_local_var_18152_9_non_const_middleIndex - 1)]) == value)
# 203 "ex_particle_CUDA_float_seq.cu"
{
# 204 "ex_particle_CUDA_float_seq.cu"
while (((CDF[__cuda_local_var_18152_9_non_const_middleIndex]) == value) && (__cuda_local_var_18152_9_non_const_middleIndex >= 0)) {
# 205 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18152_9_non_const_middleIndex--; }
# 206 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18152_9_non_const_middleIndex++;
# 207 "ex_particle_CUDA_float_seq.cu"
return __cuda_local_var_18152_9_non_const_middleIndex;
# 208 "ex_particle_CUDA_float_seq.cu"
} } }
# 209 "ex_particle_CUDA_float_seq.cu"
}
# 210 "ex_particle_CUDA_float_seq.cu"
if ((CDF[__cuda_local_var_18152_9_non_const_middleIndex]) > value) {
# 211 "ex_particle_CUDA_float_seq.cu"
endIndex = (__cuda_local_var_18152_9_non_const_middleIndex - 1); } else {
# 213 "ex_particle_CUDA_float_seq.cu"
beginIndex = (__cuda_local_var_18152_9_non_const_middleIndex + 1); }
# 214 "ex_particle_CUDA_float_seq.cu"
}
# 215 "ex_particle_CUDA_float_seq.cu"
return (-1);
# 216 "ex_particle_CUDA_float_seq.cu"
}}
# 229 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) void _Z17find_index_kernelPfS_S_S_S_S_S_i(
# 229 "ex_particle_CUDA_float_seq.cu"
float *arrayX,
# 229 "ex_particle_CUDA_float_seq.cu"
float *arrayY,
# 229 "ex_particle_CUDA_float_seq.cu"
float *CDF,
# 229 "ex_particle_CUDA_float_seq.cu"
float *u,
# 229 "ex_particle_CUDA_float_seq.cu"
float *xj,
# 229 "ex_particle_CUDA_float_seq.cu"
float *yj,
# 229 "ex_particle_CUDA_float_seq.cu"
float *weights,
# 229 "ex_particle_CUDA_float_seq.cu"
int Nparticles){
# 229 "ex_particle_CUDA_float_seq.cu"
{
# 230 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18176_9_non_const_block_id;
# 231 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18177_9_non_const_i;
# 230 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18176_9_non_const_block_id = ((int)(blockIdx.x));
# 231 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18177_9_non_const_i = ((int)(((blockDim.x) * ((unsigned)__cuda_local_var_18176_9_non_const_block_id)) + (threadIdx.x)));
# 233 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18177_9_non_const_i < Nparticles)
# 233 "ex_particle_CUDA_float_seq.cu"
{
# 235 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18181_13_non_const_index;
# 236 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18182_13_non_const_x;
# 235 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18181_13_non_const_index = (-1);
# 238 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18182_13_non_const_x = 0; (__cuda_local_var_18182_13_non_const_x < Nparticles); __cuda_local_var_18182_13_non_const_x++)
# 238 "ex_particle_CUDA_float_seq.cu"
{
# 240 "ex_particle_CUDA_float_seq.cu"
if ((CDF[__cuda_local_var_18182_13_non_const_x]) >= (u[__cuda_local_var_18177_9_non_const_i]))
# 240 "ex_particle_CUDA_float_seq.cu"
{
# 241 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18181_13_non_const_index = __cuda_local_var_18182_13_non_const_x;
# 242 "ex_particle_CUDA_float_seq.cu"
goto __T226;
# 243 "ex_particle_CUDA_float_seq.cu"
}
# 244 "ex_particle_CUDA_float_seq.cu"
} __T226:;
# 245 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18181_13_non_const_index == (-1))
# 245 "ex_particle_CUDA_float_seq.cu"
{
# 246 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18181_13_non_const_index = (Nparticles - 1);
# 247 "ex_particle_CUDA_float_seq.cu"
}
# 249 "ex_particle_CUDA_float_seq.cu"
(xj[__cuda_local_var_18177_9_non_const_i]) = (arrayX[__cuda_local_var_18181_13_non_const_index]);
# 250 "ex_particle_CUDA_float_seq.cu"
(yj[__cuda_local_var_18177_9_non_const_i]) = (arrayY[__cuda_local_var_18181_13_non_const_index]);
# 252 "ex_particle_CUDA_float_seq.cu"
(weights[__cuda_local_var_18177_9_non_const_i]) = ((1.0F) / ((float)Nparticles));
# 254 "ex_particle_CUDA_float_seq.cu"
}
# 255 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 256 "ex_particle_CUDA_float_seq.cu"
}}
# 258 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) void _Z24normalize_weights_kernelPfiS_S_S_Pi(
# 258 "ex_particle_CUDA_float_seq.cu"
float *weights,
# 258 "ex_particle_CUDA_float_seq.cu"
int Nparticles,
# 258 "ex_particle_CUDA_float_seq.cu"
float *partial_sums,
# 258 "ex_particle_CUDA_float_seq.cu"
float *CDF,
# 258 "ex_particle_CUDA_float_seq.cu"
float *u,
# 258 "ex_particle_CUDA_float_seq.cu"
int *seed){
# 258 "ex_particle_CUDA_float_seq.cu"
{
# 259 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18205_9_non_const_block_id;
# 260 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18206_9_non_const_i;
# 261 "ex_particle_CUDA_float_seq.cu"
 __attribute__((shared)) float __cuda_local_var_18207_35_non_const_u1;
# 261 "ex_particle_CUDA_float_seq.cu"
 __attribute__((shared)) float __cuda_local_var_18207_39_non_const_sumWeights;
# 259 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18205_9_non_const_block_id = ((int)(blockIdx.x));
# 260 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18206_9_non_const_i = ((int)(((blockDim.x) * ((unsigned)__cuda_local_var_18205_9_non_const_block_id)) + (threadIdx.x)));
# 262 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18207_39_non_const_sumWeights = (partial_sums[0]);
# 263 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18206_9_non_const_i < Nparticles)
# 263 "ex_particle_CUDA_float_seq.cu"
{
# 264 "ex_particle_CUDA_float_seq.cu"
(weights[__cuda_local_var_18206_9_non_const_i]) = ( fdividef((weights[__cuda_local_var_18206_9_non_const_i]) , __cuda_local_var_18207_39_non_const_sumWeights));
# 265 "ex_particle_CUDA_float_seq.cu"
}
# 266 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18206_9_non_const_i == 0)
# 266 "ex_particle_CUDA_float_seq.cu"
{
# 267 "ex_particle_CUDA_float_seq.cu"
_Z7cdfCalcPfS_i(CDF, weights, Nparticles);
# 268 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18207_35_non_const_u1 = (((1.0F) / ((float)Nparticles)) * (_Z7d_randuPii(seed, __cuda_local_var_18206_9_non_const_i)));
# 269 "ex_particle_CUDA_float_seq.cu"
}
# 270 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18206_9_non_const_i < Nparticles)
# 270 "ex_particle_CUDA_float_seq.cu"
{
# 271 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 272 "ex_particle_CUDA_float_seq.cu"
(u[__cuda_local_var_18206_9_non_const_i]) = (__cuda_local_var_18207_35_non_const_u1 + ( fdividef(((float)__cuda_local_var_18206_9_non_const_i) , ((float)Nparticles))));
# 273 "ex_particle_CUDA_float_seq.cu"
}
# 274 "ex_particle_CUDA_float_seq.cu"
}}
# 276 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) void _Z10sum_kernelPfi(
# 276 "ex_particle_CUDA_float_seq.cu"
float *partial_sums,
# 276 "ex_particle_CUDA_float_seq.cu"
int Nparticles){
# 276 "ex_particle_CUDA_float_seq.cu"
{
# 277 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18223_9_non_const_block_id;
# 278 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18224_9_non_const_i;
# 277 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18223_9_non_const_block_id = ((int)(blockIdx.x));
# 278 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18224_9_non_const_i = ((int)(((blockDim.x) * ((unsigned)__cuda_local_var_18223_9_non_const_block_id)) + (threadIdx.x)));
# 280 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18224_9_non_const_i == 0)
# 280 "ex_particle_CUDA_float_seq.cu"
{
# 281 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18227_13_non_const_x;
# 282 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18228_15_non_const_sum;
# 282 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18228_15_non_const_sum = (0.0F);
# 283 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18227_13_non_const_x = 0; (__cuda_local_var_18227_13_non_const_x < (Nparticles / 512)); __cuda_local_var_18227_13_non_const_x++)
# 283 "ex_particle_CUDA_float_seq.cu"
{
# 285 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18228_15_non_const_sum += (partial_sums[__cuda_local_var_18227_13_non_const_x]);
# 286 "ex_particle_CUDA_float_seq.cu"
}
# 287 "ex_particle_CUDA_float_seq.cu"
(partial_sums[0]) = __cuda_local_var_18228_15_non_const_sum;
# 288 "ex_particle_CUDA_float_seq.cu"
}
# 289 "ex_particle_CUDA_float_seq.cu"
}}
# 309 "ex_particle_CUDA_float_seq.cu"
__attribute__((global)) void _Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_(
# 309 "ex_particle_CUDA_float_seq.cu"
float *arrayX,
# 309 "ex_particle_CUDA_float_seq.cu"
float *arrayY,
# 309 "ex_particle_CUDA_float_seq.cu"
float *CDF,
# 309 "ex_particle_CUDA_float_seq.cu"
int *ind,
# 309 "ex_particle_CUDA_float_seq.cu"
int *objxy,
# 309 "ex_particle_CUDA_float_seq.cu"
float *likelihood,
# 309 "ex_particle_CUDA_float_seq.cu"
unsigned char *I,
# 309 "ex_particle_CUDA_float_seq.cu"
float *u,
# 309 "ex_particle_CUDA_float_seq.cu"
float *weights,
# 309 "ex_particle_CUDA_float_seq.cu"
int Nparticles,
# 309 "ex_particle_CUDA_float_seq.cu"
int countOnes,
# 309 "ex_particle_CUDA_float_seq.cu"
int max_size,
# 309 "ex_particle_CUDA_float_seq.cu"
int k,
# 309 "ex_particle_CUDA_float_seq.cu"
int IszY,
# 309 "ex_particle_CUDA_float_seq.cu"
int Nfr,
# 309 "ex_particle_CUDA_float_seq.cu"
int *seed,
# 309 "ex_particle_CUDA_float_seq.cu"
float *partial_sums){
# 309 "ex_particle_CUDA_float_seq.cu"
{ float __T227;
 float __T228;
 float __T229;
# 310 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18238_9_non_const_block_id;
# 311 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18239_9_non_const_i;
# 312 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18240_9_non_const_y;
# 313 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18241_11_non_const_indX;
# 313 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18241_17_non_const_indY;
# 314 "ex_particle_CUDA_float_seq.cu"
 __attribute__((shared)) float __cuda_local_var_18242_35_non_const_buffer[512];
# 310 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18238_9_non_const_block_id = ((int)(blockIdx.x));
# 311 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18239_9_non_const_i = ((int)(((blockDim.x) * ((unsigned)__cuda_local_var_18238_9_non_const_block_id)) + (threadIdx.x)));
# 315 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18239_9_non_const_i < Nparticles)
# 315 "ex_particle_CUDA_float_seq.cu"
{
# 316 "ex_particle_CUDA_float_seq.cu"
(arrayX[__cuda_local_var_18239_9_non_const_i]) = ((float)((((double)(arrayX[__cuda_local_var_18239_9_non_const_i])) + (1.0)) + ((5.0) * ((double)(_Z7d_randnPii(seed, __cuda_local_var_18239_9_non_const_i))))));
# 317 "ex_particle_CUDA_float_seq.cu"
(arrayY[__cuda_local_var_18239_9_non_const_i]) = ((float)((((double)(arrayY[__cuda_local_var_18239_9_non_const_i])) - (2.0)) + ((2.0) * ((double)(_Z7d_randnPii(seed, __cuda_local_var_18239_9_non_const_i))))));
# 318 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 319 "ex_particle_CUDA_float_seq.cu"
}
# 320 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18239_9_non_const_i < Nparticles)
# 320 "ex_particle_CUDA_float_seq.cu"
{
# 321 "ex_particle_CUDA_float_seq.cu"
for (__cuda_local_var_18240_9_non_const_y = 0; (__cuda_local_var_18240_9_non_const_y < countOnes); __cuda_local_var_18240_9_non_const_y++)
# 321 "ex_particle_CUDA_float_seq.cu"
{
# 322 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18241_11_non_const_indX = (((__T227 = (arrayX[__cuda_local_var_18239_9_non_const_i])) , (roundf(__T227))) + ((float)(objxy[((__cuda_local_var_18240_9_non_const_y * 2) + 1)])));
# 323 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18241_17_non_const_indY = (((__T228 = (arrayY[__cuda_local_var_18239_9_non_const_i])) , (roundf(__T228))) + ((float)(objxy[(__cuda_local_var_18240_9_non_const_y * 2)])));
# 324 "ex_particle_CUDA_float_seq.cu"
(ind[((__cuda_local_var_18239_9_non_const_i * countOnes) + __cuda_local_var_18240_9_non_const_y)]) = ((int)__float2int_rz((float)(((__T229 = ((((__cuda_local_var_18241_11_non_const_indX * ((float)IszY)) * ((float)Nfr)) + (__cuda_local_var_18241_17_non_const_indY * ((float)Nfr))) + ((float)k))) , (fabsf(__T229))))));
# 325 "ex_particle_CUDA_float_seq.cu"
if ((ind[((__cuda_local_var_18239_9_non_const_i * countOnes) + __cuda_local_var_18240_9_non_const_y)]) >= max_size) {
# 326 "ex_particle_CUDA_float_seq.cu"
(ind[((__cuda_local_var_18239_9_non_const_i * countOnes) + __cuda_local_var_18240_9_non_const_y)]) = 0; }
# 327 "ex_particle_CUDA_float_seq.cu"
}
# 328 "ex_particle_CUDA_float_seq.cu"
(likelihood[__cuda_local_var_18239_9_non_const_i]) = (_Z17calcLikelihoodSumPhPiii(I, ind, countOnes, __cuda_local_var_18239_9_non_const_i));
# 329 "ex_particle_CUDA_float_seq.cu"
(likelihood[__cuda_local_var_18239_9_non_const_i]) = ( fdividef((likelihood[__cuda_local_var_18239_9_non_const_i]) , ((float)countOnes)));
# 331 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 332 "ex_particle_CUDA_float_seq.cu"
}
# 334 "ex_particle_CUDA_float_seq.cu"
if (__cuda_local_var_18239_9_non_const_i < Nparticles)
# 334 "ex_particle_CUDA_float_seq.cu"
{
# 335 "ex_particle_CUDA_float_seq.cu"
(weights[__cuda_local_var_18239_9_non_const_i]) = ((weights[__cuda_local_var_18239_9_non_const_i]) * (likelihood[__cuda_local_var_18239_9_non_const_i]));
# 336 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 337 "ex_particle_CUDA_float_seq.cu"
((__cuda_local_var_18242_35_non_const_buffer)[(threadIdx.x)]) = (weights[__cuda_local_var_18239_9_non_const_i]);
# 338 "ex_particle_CUDA_float_seq.cu"
__syncthreads(); {
# 340 "ex_particle_CUDA_float_seq.cu"
 unsigned s;
# 340 "ex_particle_CUDA_float_seq.cu"
s = ((blockDim.x) / 2U);
# 340 "ex_particle_CUDA_float_seq.cu"
for (; (s > 0U); s >>= 1)
# 340 "ex_particle_CUDA_float_seq.cu"
{
# 341 "ex_particle_CUDA_float_seq.cu"
if ((threadIdx.x) < s)
# 341 "ex_particle_CUDA_float_seq.cu"
{
# 342 "ex_particle_CUDA_float_seq.cu"
((__cuda_local_var_18242_35_non_const_buffer)[(threadIdx.x)]) += ((__cuda_local_var_18242_35_non_const_buffer)[((threadIdx.x) + s)]);
# 343 "ex_particle_CUDA_float_seq.cu"
}
# 344 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 345 "ex_particle_CUDA_float_seq.cu"
} }
# 346 "ex_particle_CUDA_float_seq.cu"
if ((threadIdx.x) == 0U)
# 346 "ex_particle_CUDA_float_seq.cu"
{
# 347 "ex_particle_CUDA_float_seq.cu"
(partial_sums[(blockIdx.x)]) = ((__cuda_local_var_18242_35_non_const_buffer)[0]);
# 348 "ex_particle_CUDA_float_seq.cu"
}
# 349 "ex_particle_CUDA_float_seq.cu"
__syncthreads();
# 350 "ex_particle_CUDA_float_seq.cu"
}
# 351 "ex_particle_CUDA_float_seq.cu"
}}
