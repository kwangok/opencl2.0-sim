# 1 "ex_particle_CUDA_float_seq.cu"
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
# 194 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3
enum __pid_type {

F_OWNER_TID,
F_OWNER_PID,
F_OWNER_PGRP,
F_OWNER_GID = 2};
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone;
# 93 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {


ITIMER_REAL,


ITIMER_VIRTUAL,



ITIMER_PROF};
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
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIfESt13__is_floatingIfEEUt_E { _ZNSt9__traitorISt12__is_integerIfESt13__is_floatingIfEE7__valueE = 1};
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIiEUt_E { _ZNSt13__is_floatingIiE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEEUt_E { _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEE7__valueE = 1};
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIdEUt_E { _ZNSt12__is_integerIdE7__valueE};
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIdESt13__is_floatingIdEEUt_E { _ZNSt9__traitorISt12__is_integerIdESt13__is_floatingIdEE7__valueE = 1};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef long __time_t;

typedef long __suseconds_t;
# 76 "/usr/include/time.h" 3
typedef __time_t time_t;
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;};
# 63 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
typedef struct timezone *__restrict__ __timezone_ptr_t;
# 56 "/usr/include/stdint.h" 3
typedef unsigned long uint64_t;
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double _ZN9__gnu_cxx11__enable_ifILb1EdE6__typeE;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
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
# 143 "/usr/include/string.h" 3
extern __attribute__((__pure__)) int strcmp(const char *, const char *);
# 186 "/usr/include/time.h" 3
extern time_t time(time_t *);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern int sscanf(const char *__restrict__, const char *__restrict__, ...);
# 103 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern __attribute__((__malloc__)) void *malloc(size_t);
extern void free(void *);
# 544 "/usr/include/stdlib.h" 3
extern __attribute__((__noreturn__)) void exit(int);
# 160 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern __attribute__((__const__)) int abs(int);
# 175 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern __attribute__((__const__)) double fabs(double);
# 286 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern double cos(double);
# 345 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern double sqrt(double);
# 502 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern double log(double);
# 884 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern __attribute__((__const__)) float roundf(float);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 73 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern int gettimeofday(struct timeval *__restrict__, struct timezone *__restrict__);
# 15 "ex_particle_CUDA_float_seq.cu"
extern void m5_work_begin(uint64_t, uint64_t);
extern void m5_work_end(uint64_t, uint64_t);
# 45 "ex_particle_CUDA_float_seq.cu"
extern long long _Z8get_timev(void);
# 52 "ex_particle_CUDA_float_seq.cu"
extern float _Z12elapsed_timexx(long long, long long);
# 61 "ex_particle_CUDA_float_seq.cu"
extern void _Z11check_error9cudaError(enum cudaError);
# 68 "ex_particle_CUDA_float_seq.cu"
extern void _Z22cuda_print_float_arrayPfm(float *, size_t);
# 142 "ex_particle_CUDA_float_seq.cu"
extern float _Z5randuPii(int *, int);
# 156 "ex_particle_CUDA_float_seq.cu"
extern float _Z5randnPii(int *, int);
# 357 "ex_particle_CUDA_float_seq.cu"
extern double _Z11roundDoubled(double);
# 374 "ex_particle_CUDA_float_seq.cu"
extern void _Z5setIfiiPhPiS0_S0_(int, int, unsigned char *, int *, int *, int *);
# 394 "ex_particle_CUDA_float_seq.cu"
extern void _Z8addNoisePhPiS0_S0_S0_(unsigned char *, int *, int *, int *, int *);
# 410 "ex_particle_CUDA_float_seq.cu"
extern void _Z9strelDiskPii(int *, int);
# 433 "ex_particle_CUDA_float_seq.cu"
extern void _Z13dilate_matrixPhiiiiiii(unsigned char *, int, int, int, int, int, int, int);
# 465 "ex_particle_CUDA_float_seq.cu"
extern void _Z13imdilate_diskPhiiiiS_(unsigned char *, int, int, int, int, unsigned char *);
# 485 "ex_particle_CUDA_float_seq.cu"
extern void _Z12getneighborsPiiS_i(int *, int, int *, int);
# 513 "ex_particle_CUDA_float_seq.cu"
extern void _Z13videoSequencePhiiiPi(unsigned char *, int, int, int, int *);
# 561 "ex_particle_CUDA_float_seq.cu"
extern int _Z9findIndexPfif(float *, int, float);
# 587 "ex_particle_CUDA_float_seq.cu"
extern void _Z14particleFilterPhiiiPii(unsigned char *, int, int, int, int *, int);
# 762 "ex_particle_CUDA_float_seq.cu"
extern int main(int, char **);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
# 118 "/usr/include/c++/4.4/cmath" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt4acosIiEN9__gnu_cxx11__enable_ifIXsr3std12__is_integerIT_EE7__valueEdE6__typeES2_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EdE6__typeE _ZSt4acosIiEN9__gnu_cxx11__enable_ifIXsr3std12__is_integerIT_EE7__valueEdE6__typeES2_(int);
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
static void __sti___34_ex_particle_CUDA_float_seq_cpp1_ii_M(void) __attribute__((__constructor__));
# 31 "ex_particle_CUDA_float_seq.cu"
extern long M;



extern int A;



extern int C;
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 31 "ex_particle_CUDA_float_seq.cu"
long M = 2147483647L;



int A = 1103515245;



int C = 12345;
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
# 45 "ex_particle_CUDA_float_seq.cu"
long long _Z8get_timev(void) {
 struct timeval __cuda_local_var_18040_20_non_const_tv;
gettimeofday((&__cuda_local_var_18040_20_non_const_tv), ((struct timezone *)0LL));
return (long long)(((__cuda_local_var_18040_20_non_const_tv.tv_sec) * 1000000L) + (__cuda_local_var_18040_20_non_const_tv.tv_usec));
}


float _Z12elapsed_timexx( long long start_time,  long long end_time) {
return ((float)(end_time - start_time)) / (1000000.0F);
}
# 61 "ex_particle_CUDA_float_seq.cu"
void _Z11check_error9cudaError( enum cudaError e) {
if (((int)e) != 0) {
printf(((const char *)"\nCUDA error: %s\n"), (cudaGetErrorString(e)));
exit(1);
} 
}

void _Z22cuda_print_float_arrayPfm( float *array_GPU,  size_t size) {

 float *__cuda_local_var_18064_12_non_const_mem;
# 70 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18064_12_non_const_mem = ((float *)(malloc((4UL * size))));


cudaMemcpy(((void *)__cuda_local_var_18064_12_non_const_mem), ((const void *)array_GPU), (4UL * size), cudaMemcpyDeviceToHost);


printf(((const char *)"PRINTING ARRAY VALUES\n")); {

 size_t i;
# 78 "ex_particle_CUDA_float_seq.cu"
i = 0UL; for (; (i < size); ++i) {
printf(((const char *)"[%d]:%0.6f\n"), i, ((double)(__cuda_local_var_18064_12_non_const_mem[i])));
} }
printf(((const char *)"FINISHED PRINTING ARRAY VALUES\n"));


free(((void *)__cuda_local_var_18064_12_non_const_mem));
__cuda_local_var_18064_12_non_const_mem = ((float *)0LL); 
}
# 142 "ex_particle_CUDA_float_seq.cu"
float _Z5randuPii( int *seed,  int index) {
 int __cuda_local_var_18115_9_non_const_num;
# 143 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18115_9_non_const_num = ((A * (seed[index])) + C);
(seed[index]) = ((int)(((long)__cuda_local_var_18115_9_non_const_num) % M));
return (float)(fabs((((double)(seed[index])) / ((double)M))));
}
# 156 "ex_particle_CUDA_float_seq.cu"
float _Z5randnPii( int *seed,  int index) {

 double __cuda_local_var_18122_12_non_const_u;
 double __cuda_local_var_18123_12_non_const_v;
 double __cuda_local_var_18124_12_non_const_cosine;
 double __cuda_local_var_18125_12_non_const_rt;
# 158 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18122_12_non_const_u = ((double)(_Z5randuPii(seed, index)));
__cuda_local_var_18123_12_non_const_v = ((double)(_Z5randuPii(seed, index)));
__cuda_local_var_18124_12_non_const_cosine = (cos((((2.0) * (_ZSt4acosIiEN9__gnu_cxx11__enable_ifIXsr3std12__is_integerIT_EE7__valueEdE6__typeES2_((-1)))) * __cuda_local_var_18123_12_non_const_v)));
__cuda_local_var_18125_12_non_const_rt = ((-2.0) * (log(__cuda_local_var_18122_12_non_const_u)));
return (float)((sqrt(__cuda_local_var_18125_12_non_const_rt)) * __cuda_local_var_18124_12_non_const_cosine);
}
# 357 "ex_particle_CUDA_float_seq.cu"
double _Z11roundDoubled( double value) {
 int __cuda_local_var_18286_9_non_const_newValue;
# 358 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18286_9_non_const_newValue = ((int)value);
if ((value - ((double)__cuda_local_var_18286_9_non_const_newValue)) < (0.5)) {
return (double)__cuda_local_var_18286_9_non_const_newValue; } else  {

return (double)(__cuda_local_var_18286_9_non_const_newValue++); }
}
# 374 "ex_particle_CUDA_float_seq.cu"
void _Z5setIfiiPhPiS0_S0_( int testValue,  int newValue,  unsigned char *array3D,  int *dimX,  int *dimY,  int *dimZ) {
 int __cuda_local_var_18294_9_non_const_x;
# 375 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18294_12_non_const_y;
# 375 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18294_15_non_const_z;
for (__cuda_local_var_18294_9_non_const_x = 0; (__cuda_local_var_18294_9_non_const_x < (*dimX)); __cuda_local_var_18294_9_non_const_x++) {
for (__cuda_local_var_18294_12_non_const_y = 0; (__cuda_local_var_18294_12_non_const_y < (*dimY)); __cuda_local_var_18294_12_non_const_y++) {
for (__cuda_local_var_18294_15_non_const_z = 0; (__cuda_local_var_18294_15_non_const_z < (*dimZ)); __cuda_local_var_18294_15_non_const_z++) {
if (((int)(array3D[((((__cuda_local_var_18294_9_non_const_x * (*dimY)) * (*dimZ)) + (__cuda_local_var_18294_12_non_const_y * (*dimZ))) + __cuda_local_var_18294_15_non_const_z)])) == testValue) {
(array3D[((((__cuda_local_var_18294_9_non_const_x * (*dimY)) * (*dimZ)) + (__cuda_local_var_18294_12_non_const_y * (*dimZ))) + __cuda_local_var_18294_15_non_const_z)]) = ((unsigned char)newValue); }
}
}
} 
}
# 394 "ex_particle_CUDA_float_seq.cu"
void _Z8addNoisePhPiS0_S0_S0_( unsigned char *array3D,  int *dimX,  int *dimY,  int *dimZ,  int *seed) {
 int __cuda_local_var_18306_9_non_const_x;
# 395 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18306_12_non_const_y;
# 395 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18306_15_non_const_z;
for (__cuda_local_var_18306_9_non_const_x = 0; (__cuda_local_var_18306_9_non_const_x < (*dimX)); __cuda_local_var_18306_9_non_const_x++) {
for (__cuda_local_var_18306_12_non_const_y = 0; (__cuda_local_var_18306_12_non_const_y < (*dimY)); __cuda_local_var_18306_12_non_const_y++) {
for (__cuda_local_var_18306_15_non_const_z = 0; (__cuda_local_var_18306_15_non_const_z < (*dimZ)); __cuda_local_var_18306_15_non_const_z++) {
(array3D[((((__cuda_local_var_18306_9_non_const_x * (*dimY)) * (*dimZ)) + (__cuda_local_var_18306_12_non_const_y * (*dimZ))) + __cuda_local_var_18306_15_non_const_z)]) = ((unsigned char)(((int)(array3D[((((__cuda_local_var_18306_9_non_const_x * (*dimY)) * (*dimZ)) + (__cuda_local_var_18306_12_non_const_y * (*dimZ))) + __cuda_local_var_18306_15_non_const_z)])) + ((int)((unsigned char)((5.0F) * (_Z5randnPii(seed, 0)))))));
}
}
} 
}
# 410 "ex_particle_CUDA_float_seq.cu"
void _Z9strelDiskPii( int *disk,  int radius) {
 int __cuda_local_var_18322_9_non_const_diameter;
 int __cuda_local_var_18323_9_non_const_x;
# 412 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18323_12_non_const_y;
# 411 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18322_9_non_const_diameter = ((radius * 2) - 1);

for (__cuda_local_var_18323_9_non_const_x = 0; (__cuda_local_var_18323_9_non_const_x < __cuda_local_var_18322_9_non_const_diameter); __cuda_local_var_18323_9_non_const_x++) {
for (__cuda_local_var_18323_12_non_const_y = 0; (__cuda_local_var_18323_12_non_const_y < __cuda_local_var_18322_9_non_const_diameter); __cuda_local_var_18323_12_non_const_y++) {  double __T25;
 double __T26;
# 415 "ex_particle_CUDA_float_seq.cu"
 double __cuda_local_var_18326_20_non_const_distance;
# 415 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18326_20_non_const_distance = (sqrt((((__T25 = ((double)((__cuda_local_var_18323_9_non_const_x - radius) + 1))) , (__builtin_powi(__T25, 2))) + ((__T26 = ((double)((__cuda_local_var_18323_12_non_const_y - radius) + 1))) , (__builtin_powi(__T26, 2))))));
if (__cuda_local_var_18326_20_non_const_distance < ((double)radius)) {
(disk[((__cuda_local_var_18323_9_non_const_x * __cuda_local_var_18322_9_non_const_diameter) + __cuda_local_var_18323_12_non_const_y)]) = 1; }
}
} 
}
# 433 "ex_particle_CUDA_float_seq.cu"
void _Z13dilate_matrixPhiiiiiii( unsigned char *matrix,  int posX,  int posY,  int posZ,  int dimX,  int dimY,  int dimZ,  int error) {
 int __cuda_local_var_18334_9_non_const_startX;


 int __cuda_local_var_18337_9_non_const_startY;


 int __cuda_local_var_18340_9_non_const_endX;


 int __cuda_local_var_18343_9_non_const_endY;


 int __cuda_local_var_18346_9_non_const_x;
# 446 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18346_12_non_const_y;
# 434 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18334_9_non_const_startX = (posX - error);
while (__cuda_local_var_18334_9_non_const_startX < 0) {
__cuda_local_var_18334_9_non_const_startX++; }
__cuda_local_var_18337_9_non_const_startY = (posY - error);
while (__cuda_local_var_18337_9_non_const_startY < 0) {
__cuda_local_var_18337_9_non_const_startY++; }
__cuda_local_var_18340_9_non_const_endX = (posX + error);
while (__cuda_local_var_18340_9_non_const_endX > dimX) {
__cuda_local_var_18340_9_non_const_endX--; }
__cuda_local_var_18343_9_non_const_endY = (posY + error);
while (__cuda_local_var_18343_9_non_const_endY > dimY) {
__cuda_local_var_18343_9_non_const_endY--; }

for (__cuda_local_var_18346_9_non_const_x = __cuda_local_var_18334_9_non_const_startX; (__cuda_local_var_18346_9_non_const_x < __cuda_local_var_18340_9_non_const_endX); __cuda_local_var_18346_9_non_const_x++) {
for (__cuda_local_var_18346_12_non_const_y = __cuda_local_var_18337_9_non_const_startY; (__cuda_local_var_18346_12_non_const_y < __cuda_local_var_18343_9_non_const_endY); __cuda_local_var_18346_12_non_const_y++) {  double __T27;
 double __T28;
# 449 "ex_particle_CUDA_float_seq.cu"
 double __cuda_local_var_18349_20_non_const_distance;
# 449 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18349_20_non_const_distance = (sqrt((((__T27 = ((double)(__cuda_local_var_18346_9_non_const_x - posX))) , (__builtin_powi(__T27, 2))) + ((__T28 = ((double)(__cuda_local_var_18346_12_non_const_y - posY))) , (__builtin_powi(__T28, 2))))));
if (__cuda_local_var_18349_20_non_const_distance < ((double)error)) {
(matrix[((((__cuda_local_var_18346_9_non_const_x * dimY) * dimZ) + (__cuda_local_var_18346_12_non_const_y * dimZ)) + posZ)]) = ((unsigned char)1U); }
}
} 
}
# 465 "ex_particle_CUDA_float_seq.cu"
void _Z13imdilate_diskPhiiiiS_( unsigned char *matrix,  int dimX,  int dimY,  int dimZ,  int error,  unsigned char *newMatrix) {
 int __cuda_local_var_18357_9_non_const_x;
# 466 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18357_12_non_const_y;
# 466 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18357_15_non_const_z;
for (__cuda_local_var_18357_15_non_const_z = 0; (__cuda_local_var_18357_15_non_const_z < dimZ); __cuda_local_var_18357_15_non_const_z++) {
for (__cuda_local_var_18357_9_non_const_x = 0; (__cuda_local_var_18357_9_non_const_x < dimX); __cuda_local_var_18357_9_non_const_x++) {
for (__cuda_local_var_18357_12_non_const_y = 0; (__cuda_local_var_18357_12_non_const_y < dimY); __cuda_local_var_18357_12_non_const_y++) {
if (((int)(matrix[((((__cuda_local_var_18357_9_non_const_x * dimY) * dimZ) + (__cuda_local_var_18357_12_non_const_y * dimZ)) + __cuda_local_var_18357_15_non_const_z)])) == 1) {
_Z13dilate_matrixPhiiiiiii(newMatrix, __cuda_local_var_18357_9_non_const_x, __cuda_local_var_18357_12_non_const_y, __cuda_local_var_18357_15_non_const_z, dimX, dimY, dimZ, error);
}
}
}
} 
}
# 485 "ex_particle_CUDA_float_seq.cu"
void _Z12getneighborsPiiS_i( int *se,  int numOnes,  int *neighbors,  int radius) {
 int __cuda_local_var_18370_9_non_const_x;
# 486 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18370_12_non_const_y;
 int __cuda_local_var_18371_9_non_const_neighY;
 int __cuda_local_var_18372_9_non_const_center;
 int __cuda_local_var_18373_9_non_const_diameter;
# 487 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18371_9_non_const_neighY = 0;
__cuda_local_var_18372_9_non_const_center = (radius - 1);
__cuda_local_var_18373_9_non_const_diameter = ((radius * 2) - 1);
for (__cuda_local_var_18370_9_non_const_x = 0; (__cuda_local_var_18370_9_non_const_x < __cuda_local_var_18373_9_non_const_diameter); __cuda_local_var_18370_9_non_const_x++) {
for (__cuda_local_var_18370_12_non_const_y = 0; (__cuda_local_var_18370_12_non_const_y < __cuda_local_var_18373_9_non_const_diameter); __cuda_local_var_18370_12_non_const_y++) {
if (se[((__cuda_local_var_18370_9_non_const_x * __cuda_local_var_18373_9_non_const_diameter) + __cuda_local_var_18370_12_non_const_y)]) {
(neighbors[(__cuda_local_var_18371_9_non_const_neighY * 2)]) = ((int)(__cuda_local_var_18370_12_non_const_y - __cuda_local_var_18372_9_non_const_center));
(neighbors[((__cuda_local_var_18371_9_non_const_neighY * 2) + 1)]) = ((int)(__cuda_local_var_18370_9_non_const_x - __cuda_local_var_18372_9_non_const_center));
__cuda_local_var_18371_9_non_const_neighY++;
}
}
} 
}
# 513 "ex_particle_CUDA_float_seq.cu"
void _Z13videoSequencePhiiiPi( unsigned char *I,  int IszX,  int IszY,  int Nfr,  int *seed) {
 int __cuda_local_var_18386_9_non_const_k;
 int __cuda_local_var_18387_9_non_const_max_size;

 int __cuda_local_var_18389_9_non_const_x0;
 int __cuda_local_var_18390_9_non_const_y0;



 int __cuda_local_var_18394_9_non_const_xk;
# 522 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18394_13_non_const_yk;
# 522 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18394_17_non_const_pos;
# 533 "ex_particle_CUDA_float_seq.cu"
 unsigned char *__cuda_local_var_18405_21_non_const_newMatrix;

 int __cuda_local_var_18407_9_non_const_x;
# 535 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18407_12_non_const_y;
# 515 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18387_9_non_const_max_size = ((IszX * IszY) * Nfr);

__cuda_local_var_18389_9_non_const_x0 = ((int)(_Z11roundDoubled((((double)IszY) / (2.0)))));
__cuda_local_var_18390_9_non_const_y0 = ((int)(_Z11roundDoubled((((double)IszX) / (2.0)))));
(I[((((__cuda_local_var_18389_9_non_const_x0 * IszY) * Nfr) + (__cuda_local_var_18390_9_non_const_y0 * Nfr)) + 0)]) = ((unsigned char)1U);



for (__cuda_local_var_18386_9_non_const_k = 1; (__cuda_local_var_18386_9_non_const_k < Nfr); __cuda_local_var_18386_9_non_const_k++) {
__cuda_local_var_18394_9_non_const_xk = (abs((__cuda_local_var_18389_9_non_const_x0 + __cuda_local_var_18386_9_non_const_k)));
__cuda_local_var_18394_13_non_const_yk = (abs((__cuda_local_var_18390_9_non_const_y0 - (2 * __cuda_local_var_18386_9_non_const_k))));
__cuda_local_var_18394_17_non_const_pos = ((((__cuda_local_var_18394_13_non_const_yk * IszY) * Nfr) + (__cuda_local_var_18394_9_non_const_xk * Nfr)) + __cuda_local_var_18386_9_non_const_k);
if (__cuda_local_var_18394_17_non_const_pos >= __cuda_local_var_18387_9_non_const_max_size) {
__cuda_local_var_18394_17_non_const_pos = 0; }
(I[__cuda_local_var_18394_17_non_const_pos]) = ((unsigned char)1U);
}


__cuda_local_var_18405_21_non_const_newMatrix = ((unsigned char *)(malloc((((1UL * ((unsigned long)IszX)) * ((unsigned long)IszY)) * ((unsigned long)Nfr)))));
_Z13imdilate_diskPhiiiiS_(I, IszX, IszY, Nfr, 5, __cuda_local_var_18405_21_non_const_newMatrix);

for (__cuda_local_var_18407_9_non_const_x = 0; (__cuda_local_var_18407_9_non_const_x < IszX); __cuda_local_var_18407_9_non_const_x++) {
for (__cuda_local_var_18407_12_non_const_y = 0; (__cuda_local_var_18407_12_non_const_y < IszY); __cuda_local_var_18407_12_non_const_y++) {
for (__cuda_local_var_18386_9_non_const_k = 0; (__cuda_local_var_18386_9_non_const_k < Nfr); __cuda_local_var_18386_9_non_const_k++) {
(I[((((__cuda_local_var_18407_9_non_const_x * IszY) * Nfr) + (__cuda_local_var_18407_12_non_const_y * Nfr)) + __cuda_local_var_18386_9_non_const_k)]) = (__cuda_local_var_18405_21_non_const_newMatrix[((((__cuda_local_var_18407_9_non_const_x * IszY) * Nfr) + (__cuda_local_var_18407_12_non_const_y * Nfr)) + __cuda_local_var_18386_9_non_const_k)]);
}
}
}
free(((void *)__cuda_local_var_18405_21_non_const_newMatrix));


_Z5setIfiiPhPiS0_S0_(0, 100, I, (&IszX), (&IszY), (&Nfr));
_Z5setIfiiPhPiS0_S0_(1, 228, I, (&IszX), (&IszY), (&Nfr));

_Z8addNoisePhPiS0_S0_S0_(I, (&IszX), (&IszY), (&Nfr), seed); 

}
# 561 "ex_particle_CUDA_float_seq.cu"
int _Z9findIndexPfif( float *CDF,  int lengthCDF,  float value) {
 int __cuda_local_var_18426_9_non_const_index;
 int __cuda_local_var_18427_9_non_const_x;
# 562 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18426_9_non_const_index = (-1);

for (__cuda_local_var_18427_9_non_const_x = 0; (__cuda_local_var_18427_9_non_const_x < lengthCDF); __cuda_local_var_18427_9_non_const_x++) {
if ((CDF[__cuda_local_var_18427_9_non_const_x]) >= value) {
__cuda_local_var_18426_9_non_const_index = __cuda_local_var_18427_9_non_const_x;
goto __T29;
}
} __T29:;
if (__cuda_local_var_18426_9_non_const_index == (-1)) {
return lengthCDF - 1;
}
return __cuda_local_var_18426_9_non_const_index;
}
# 587 "ex_particle_CUDA_float_seq.cu"
void _Z14particleFilterPhiiiPii( unsigned char *I,  int IszX,  int IszY,  int Nfr,  int *seed,  int Nparticles) {  float __T210;
 float __T211;
 float __T212;
 float __T213;
# 588 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18441_9_non_const_max_size;

 float __cuda_local_var_18443_11_non_const_xe;
 float __cuda_local_var_18444_11_non_const_ye;


 int __cuda_local_var_18447_9_non_const_radius;
 int __cuda_local_var_18448_9_non_const_diameter;
 int *__cuda_local_var_18449_11_non_const_disk;

 int __cuda_local_var_18451_9_non_const_countOnes;
 int __cuda_local_var_18452_9_non_const_x;
# 599 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18452_12_non_const_y;
# 606 "ex_particle_CUDA_float_seq.cu"
 int *__cuda_local_var_18459_11_non_const_objxy;


 float *__cuda_local_var_18462_13_non_const_weights;





 float *__cuda_local_var_18468_13_non_const_likelihood;
 float *__cuda_local_var_18469_13_non_const_arrayX;
 float *__cuda_local_var_18470_13_non_const_arrayY;
 float *__cuda_local_var_18471_13_non_const_xj;
 float *__cuda_local_var_18472_13_non_const_yj;
 float *__cuda_local_var_18473_13_non_const_CDF;


 float *__cuda_local_var_18476_13_non_const_arrayX_GPU;
 float *__cuda_local_var_18477_13_non_const_arrayY_GPU;
 float *__cuda_local_var_18478_13_non_const_xj_GPU;
 float *__cuda_local_var_18479_13_non_const_yj_GPU;
 float *__cuda_local_var_18480_13_non_const_CDF_GPU;
 float *__cuda_local_var_18481_13_non_const_likelihood_GPU;
 unsigned char *__cuda_local_var_18482_21_non_const_I_GPU;
 float *__cuda_local_var_18483_13_non_const_weights_GPU;
 int *__cuda_local_var_18484_11_non_const_objxy_GPU;

 int *__cuda_local_var_18486_11_non_const_ind;
 int *__cuda_local_var_18487_11_non_const_ind_GPU;
 float *__cuda_local_var_18488_13_non_const_u;
 float *__cuda_local_var_18489_13_non_const_u_GPU;
 int *__cuda_local_var_18490_11_non_const_seed_GPU;
 float *__cuda_local_var_18491_13_non_const_partial_sums;
# 663 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18516_9_non_const_k;





 long long __cuda_local_var_18522_15_non_const_send_start;
# 676 "ex_particle_CUDA_float_seq.cu"
 long long __cuda_local_var_18529_15_non_const_send_end;

 int __cuda_local_var_18531_9_non_const_num_blocks;
# 705 "ex_particle_CUDA_float_seq.cu"
 long long __cuda_local_var_18558_15_non_const_back_time;
# 718 "ex_particle_CUDA_float_seq.cu"
 long long __cuda_local_var_18571_15_non_const_free_time;

 long long __cuda_local_var_18573_15_non_const_arrayX_time;

 long long __cuda_local_var_18575_15_non_const_arrayY_time;

 long long __cuda_local_var_18577_15_non_const_back_end_time;
# 743 "ex_particle_CUDA_float_seq.cu"
 float __cuda_local_var_18596_11_non_const_distance;
# 588 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18441_9_non_const_max_size = ((IszX * IszY) * Nfr);

__cuda_local_var_18443_11_non_const_xe = ((float)(_Z11roundDoubled((((double)IszY) / (2.0)))));
__cuda_local_var_18444_11_non_const_ye = ((float)(_Z11roundDoubled((((double)IszX) / (2.0)))));


__cuda_local_var_18447_9_non_const_radius = 5;
__cuda_local_var_18448_9_non_const_diameter = (__cuda_local_var_18447_9_non_const_radius * __cuda_local_var_18447_9_non_const_radius);
__cuda_local_var_18449_11_non_const_disk = ((int *)(malloc((((unsigned long)(__cuda_local_var_18448_9_non_const_diameter * __cuda_local_var_18448_9_non_const_diameter)) * 4UL))));
_Z9strelDiskPii(__cuda_local_var_18449_11_non_const_disk, __cuda_local_var_18447_9_non_const_radius);
__cuda_local_var_18451_9_non_const_countOnes = 0;

for (__cuda_local_var_18452_9_non_const_x = 0; (__cuda_local_var_18452_9_non_const_x < __cuda_local_var_18448_9_non_const_diameter); __cuda_local_var_18452_9_non_const_x++) {
for (__cuda_local_var_18452_12_non_const_y = 0; (__cuda_local_var_18452_12_non_const_y < __cuda_local_var_18448_9_non_const_diameter); __cuda_local_var_18452_12_non_const_y++) {
if ((__cuda_local_var_18449_11_non_const_disk[((__cuda_local_var_18452_9_non_const_x * __cuda_local_var_18448_9_non_const_diameter) + __cuda_local_var_18452_12_non_const_y)]) == 1) {
__cuda_local_var_18451_9_non_const_countOnes++; }
}
}
__cuda_local_var_18459_11_non_const_objxy = ((int *)(malloc((((unsigned long)(__cuda_local_var_18451_9_non_const_countOnes * 2)) * 4UL))));
_Z12getneighborsPiiS_i(__cuda_local_var_18449_11_non_const_disk, __cuda_local_var_18451_9_non_const_countOnes, __cuda_local_var_18459_11_non_const_objxy, __cuda_local_var_18447_9_non_const_radius);

__cuda_local_var_18462_13_non_const_weights = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
for (__cuda_local_var_18452_9_non_const_x = 0; (__cuda_local_var_18452_9_non_const_x < Nparticles); __cuda_local_var_18452_9_non_const_x++) {
(__cuda_local_var_18462_13_non_const_weights[__cuda_local_var_18452_9_non_const_x]) = ((1.0F) / ((float)Nparticles));
}


__cuda_local_var_18468_13_non_const_likelihood = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
__cuda_local_var_18469_13_non_const_arrayX = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
__cuda_local_var_18470_13_non_const_arrayY = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
__cuda_local_var_18471_13_non_const_xj = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
__cuda_local_var_18472_13_non_const_yj = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
__cuda_local_var_18473_13_non_const_CDF = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
# 633 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18486_11_non_const_ind = ((int *)(malloc((4UL * ((unsigned long)__cuda_local_var_18451_9_non_const_countOnes)))));

__cuda_local_var_18488_13_non_const_u = ((float *)(malloc((4UL * ((unsigned long)Nparticles)))));
# 641 "ex_particle_CUDA_float_seq.cu"
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18476_13_non_const_arrayX_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18477_13_non_const_arrayY_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18478_13_non_const_xj_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18479_13_non_const_yj_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18480_13_non_const_CDF_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18489_13_non_const_u_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18481_13_non_const_likelihood_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18483_13_non_const_weights_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18482_21_non_const_I_GPU)), (((1UL * ((unsigned long)IszX)) * ((unsigned long)IszY)) * ((unsigned long)Nfr)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18484_11_non_const_objxy_GPU)), (4UL * ((unsigned long)__cuda_local_var_18451_9_non_const_countOnes)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18487_11_non_const_ind_GPU)), ((4UL * ((unsigned long)__cuda_local_var_18451_9_non_const_countOnes)) * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18490_11_non_const_seed_GPU)), (4UL * ((unsigned long)Nparticles)))));
_Z11check_error9cudaError((cudaMalloc(((void **)(&__cuda_local_var_18491_13_non_const_partial_sums)), (4UL * ((unsigned long)Nparticles)))));



for (__cuda_local_var_18452_9_non_const_x = 0; (__cuda_local_var_18452_9_non_const_x < Nparticles); __cuda_local_var_18452_9_non_const_x++) {

(__cuda_local_var_18469_13_non_const_arrayX[__cuda_local_var_18452_9_non_const_x]) = __cuda_local_var_18443_11_non_const_xe;
(__cuda_local_var_18470_13_non_const_arrayY[__cuda_local_var_18452_9_non_const_x]) = __cuda_local_var_18444_11_non_const_ye;

}



m5_work_begin(0UL, 0UL);


__cuda_local_var_18522_15_non_const_send_start = (_Z8get_timev());
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18482_21_non_const_I_GPU), ((const void *)I), (((1UL * ((unsigned long)IszX)) * ((unsigned long)IszY)) * ((unsigned long)Nfr)), cudaMemcpyHostToDevice)));
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18484_11_non_const_objxy_GPU), ((const void *)__cuda_local_var_18459_11_non_const_objxy), (4UL * ((unsigned long)__cuda_local_var_18451_9_non_const_countOnes)), cudaMemcpyHostToDevice)));
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18483_13_non_const_weights_GPU), ((const void *)__cuda_local_var_18462_13_non_const_weights), (4UL * ((unsigned long)Nparticles)), cudaMemcpyHostToDevice)));
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18476_13_non_const_arrayX_GPU), ((const void *)__cuda_local_var_18469_13_non_const_arrayX), (4UL * ((unsigned long)Nparticles)), cudaMemcpyHostToDevice)));
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18477_13_non_const_arrayY_GPU), ((const void *)__cuda_local_var_18470_13_non_const_arrayY), (4UL * ((unsigned long)Nparticles)), cudaMemcpyHostToDevice)));
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18490_11_non_const_seed_GPU), ((const void *)seed), (4UL * ((unsigned long)Nparticles)), cudaMemcpyHostToDevice)));
__cuda_local_var_18529_15_non_const_send_end = (_Z8get_timev());
printf(((const char *)"TIME TO SEND TO GPU: %f\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18522_15_non_const_send_start, __cuda_local_var_18529_15_non_const_send_end))));
__cuda_local_var_18531_9_non_const_num_blocks = ((int)((__T210 = (((float)Nparticles) / (512.0F))) , (__builtin_ceilf(__T210))));

for (__cuda_local_var_18516_9_non_const_k = 1; (__cuda_local_var_18516_9_non_const_k < Nfr); __cuda_local_var_18516_9_non_const_k++) {  dim3 __T214;
 unsigned __T215;
 dim3 __T216;
 dim3 __T217;
 unsigned __T218;
 dim3 __T219;
 dim3 __T220;
 unsigned __T221;
 dim3 __T222;
 dim3 __T223;
 unsigned __T224;
 dim3 __T225;
# 682 "ex_particle_CUDA_float_seq.cu"
(cudaConfigureCall((((void)((__T215 = ((unsigned)__cuda_local_var_18531_9_non_const_num_blocks)) , (void)((((__T214.x) = __T215) , (void)((__T214.y) = 1U)) , ((__T214.z) = 1U)))) , __T214), (((void)((((__T216.x) = 512U) , (void)((__T216.y) = 1U)) , (void)((__T216.z) = 1U))) , __T216), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_(__cuda_local_var_18476_13_non_const_arrayX_GPU, __cuda_local_var_18477_13_non_const_arrayY_GPU, __cuda_local_var_18480_13_non_const_CDF_GPU, __cuda_local_var_18487_11_non_const_ind_GPU, __cuda_local_var_18484_11_non_const_objxy_GPU, __cuda_local_var_18481_13_non_const_likelihood_GPU, __cuda_local_var_18482_21_non_const_I_GPU, __cuda_local_var_18489_13_non_const_u_GPU, __cuda_local_var_18483_13_non_const_weights_GPU, Nparticles, __cuda_local_var_18451_9_non_const_countOnes, __cuda_local_var_18441_9_non_const_max_size, __cuda_local_var_18516_9_non_const_k, IszY, Nfr, __cuda_local_var_18490_11_non_const_seed_GPU, __cuda_local_var_18491_13_non_const_partial_sums));



(cudaConfigureCall((((void)((__T218 = ((unsigned)__cuda_local_var_18531_9_non_const_num_blocks)) , (void)((((__T217.x) = __T218) , (void)((__T217.y) = 1U)) , ((__T217.z) = 1U)))) , __T217), (((void)((((__T219.x) = 512U) , (void)((__T219.y) = 1U)) , (void)((__T219.z) = 1U))) , __T219), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10sum_kernelPfi(__cuda_local_var_18491_13_non_const_partial_sums, Nparticles));


(cudaConfigureCall((((void)((__T221 = ((unsigned)__cuda_local_var_18531_9_non_const_num_blocks)) , (void)((((__T220.x) = __T221) , (void)((__T220.y) = 1U)) , ((__T220.z) = 1U)))) , __T220), (((void)((((__T222.x) = 512U) , (void)((__T222.y) = 1U)) , (void)((__T222.z) = 1U))) , __T222), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z24normalize_weights_kernelPfiS_S_S_Pi(__cuda_local_var_18483_13_non_const_weights_GPU, Nparticles, __cuda_local_var_18491_13_non_const_partial_sums, __cuda_local_var_18480_13_non_const_CDF_GPU, __cuda_local_var_18489_13_non_const_u_GPU, __cuda_local_var_18490_11_non_const_seed_GPU));



(cudaConfigureCall((((void)((__T224 = ((unsigned)__cuda_local_var_18531_9_non_const_num_blocks)) , (void)((((__T223.x) = __T224) , (void)((__T223.y) = 1U)) , ((__T223.z) = 1U)))) , __T223), (((void)((((__T225.x) = 512U) , (void)((__T225.y) = 1U)) , (void)((__T225.z) = 1U))) , __T225), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z17find_index_kernelPfS_S_S_S_S_S_i(__cuda_local_var_18476_13_non_const_arrayX_GPU, __cuda_local_var_18477_13_non_const_arrayY_GPU, __cuda_local_var_18480_13_non_const_CDF_GPU, __cuda_local_var_18489_13_non_const_u_GPU, __cuda_local_var_18478_13_non_const_xj_GPU, __cuda_local_var_18479_13_non_const_yj_GPU, __cuda_local_var_18483_13_non_const_weights_GPU, Nparticles));


}


cudaThreadSynchronize();



m5_work_end(0UL, 0UL);

__cuda_local_var_18558_15_non_const_back_time = (_Z8get_timev());

cudaFree(((void *)__cuda_local_var_18478_13_non_const_xj_GPU));
cudaFree(((void *)__cuda_local_var_18479_13_non_const_yj_GPU));
cudaFree(((void *)__cuda_local_var_18480_13_non_const_CDF_GPU));
cudaFree(((void *)__cuda_local_var_18489_13_non_const_u_GPU));
cudaFree(((void *)__cuda_local_var_18481_13_non_const_likelihood_GPU));
cudaFree(((void *)__cuda_local_var_18482_21_non_const_I_GPU));
cudaFree(((void *)__cuda_local_var_18484_11_non_const_objxy_GPU));
cudaFree(((void *)__cuda_local_var_18487_11_non_const_ind_GPU));
cudaFree(((void *)__cuda_local_var_18490_11_non_const_seed_GPU));
cudaFree(((void *)__cuda_local_var_18491_13_non_const_partial_sums));

__cuda_local_var_18571_15_non_const_free_time = (_Z8get_timev());
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18469_13_non_const_arrayX), ((const void *)__cuda_local_var_18476_13_non_const_arrayX_GPU), (4UL * ((unsigned long)Nparticles)), cudaMemcpyDeviceToHost)));
__cuda_local_var_18573_15_non_const_arrayX_time = (_Z8get_timev());
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18470_13_non_const_arrayY), ((const void *)__cuda_local_var_18477_13_non_const_arrayY_GPU), (4UL * ((unsigned long)Nparticles)), cudaMemcpyDeviceToHost)));
__cuda_local_var_18575_15_non_const_arrayY_time = (_Z8get_timev());
_Z11check_error9cudaError((cudaMemcpy(((void *)__cuda_local_var_18462_13_non_const_weights), ((const void *)__cuda_local_var_18483_13_non_const_weights_GPU), (4UL * ((unsigned long)Nparticles)), cudaMemcpyDeviceToHost)));
__cuda_local_var_18577_15_non_const_back_end_time = (_Z8get_timev());
printf(((const char *)"GPU Execution: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18529_15_non_const_send_end, __cuda_local_var_18558_15_non_const_back_time))));
printf(((const char *)"FREE TIME: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18558_15_non_const_back_time, __cuda_local_var_18571_15_non_const_free_time))));
printf(((const char *)"TIME TO SEND BACK: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18558_15_non_const_back_time, __cuda_local_var_18577_15_non_const_back_end_time))));
printf(((const char *)"SEND ARRAY X BACK: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18571_15_non_const_free_time, __cuda_local_var_18573_15_non_const_arrayX_time))));
printf(((const char *)"SEND ARRAY Y BACK: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18573_15_non_const_arrayX_time, __cuda_local_var_18575_15_non_const_arrayY_time))));
printf(((const char *)"SEND WEIGHTS BACK: %lf\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18575_15_non_const_arrayY_time, __cuda_local_var_18577_15_non_const_back_end_time))));

__cuda_local_var_18443_11_non_const_xe = (0.0F);
__cuda_local_var_18444_11_non_const_ye = (0.0F);

for (__cuda_local_var_18452_9_non_const_x = 0; (__cuda_local_var_18452_9_non_const_x < Nparticles); __cuda_local_var_18452_9_non_const_x++) {


__cuda_local_var_18443_11_non_const_xe += ((__cuda_local_var_18469_13_non_const_arrayX[__cuda_local_var_18452_9_non_const_x]) * (__cuda_local_var_18462_13_non_const_weights[__cuda_local_var_18452_9_non_const_x]));
__cuda_local_var_18444_11_non_const_ye += ((__cuda_local_var_18470_13_non_const_arrayY[__cuda_local_var_18452_9_non_const_x]) * (__cuda_local_var_18462_13_non_const_weights[__cuda_local_var_18452_9_non_const_x]));
}
printf(((const char *)"XE: %lf\n"), ((double)__cuda_local_var_18443_11_non_const_xe));
printf(((const char *)"YE: %lf\n"), ((double)__cuda_local_var_18444_11_non_const_ye));
__cuda_local_var_18596_11_non_const_distance = ((__T213 = (((__T211 = ((float)(__cuda_local_var_18443_11_non_const_xe - ((float)((int)(_Z11roundDoubled((((double)IszY) / (2.0))))))))) , (__builtin_powif(__T211, 2))) + ((__T212 = ((float)(__cuda_local_var_18444_11_non_const_ye - ((float)((int)(_Z11roundDoubled((((double)IszX) / (2.0))))))))) , (__builtin_powif(__T212, 2))))) , (__builtin_sqrtf(__T213)));
printf(((const char *)"%lf\n"), ((double)__cuda_local_var_18596_11_non_const_distance));


cudaFree(((void *)__cuda_local_var_18483_13_non_const_weights_GPU));
cudaFree(((void *)__cuda_local_var_18477_13_non_const_arrayY_GPU));
cudaFree(((void *)__cuda_local_var_18476_13_non_const_arrayX_GPU));


free(((void *)__cuda_local_var_18468_13_non_const_likelihood));
free(((void *)__cuda_local_var_18469_13_non_const_arrayX));
free(((void *)__cuda_local_var_18470_13_non_const_arrayY));
free(((void *)__cuda_local_var_18471_13_non_const_xj));
free(((void *)__cuda_local_var_18472_13_non_const_yj));
free(((void *)__cuda_local_var_18473_13_non_const_CDF));
free(((void *)__cuda_local_var_18486_11_non_const_ind));
free(((void *)__cuda_local_var_18488_13_non_const_u)); 
}

int main( int argc,  char **argv) {

 char *__cuda_local_var_18617_11_non_const_usage;
# 776 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18629_9_non_const_IszX;
# 776 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18629_15_non_const_IszY;
# 776 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18629_21_non_const_Nfr;
# 776 "ex_particle_CUDA_float_seq.cu"
 int __cuda_local_var_18629_26_non_const_Nparticles;
# 822 "ex_particle_CUDA_float_seq.cu"
 int *__cuda_local_var_18675_11_non_const_seed;
 int __cuda_local_var_18676_9_non_const_i;



 unsigned char *__cuda_local_var_18680_21_non_const_I;
 long long __cuda_local_var_18681_15_non_const_start;


 long long __cuda_local_var_18684_15_non_const_endVideoSequence;



 long long __cuda_local_var_18688_15_non_const_endParticleFilter;
# 764 "ex_particle_CUDA_float_seq.cu"
__cuda_local_var_18617_11_non_const_usage = "float.out -x <dimX> -y <dimY> -z <Nfr> -np <Nparticles>";

if (argc != 9) {
printf(((const char *)"%s\n"), __cuda_local_var_18617_11_non_const_usage);
return 0;
}

if ((((strcmp(((const char *)(argv[1])), ((const char *)"-x"))) || (strcmp(((const char *)(argv[3])), ((const char *)"-y")))) || (strcmp(((const char *)(argv[5])), ((const char *)"-z")))) || (strcmp(((const char *)(argv[7])), ((const char *)"-np")))) {
printf(((const char *)"%s\n"), __cuda_local_var_18617_11_non_const_usage);
return 0;
}




if ((sscanf(((const char *)(argv[2])), ((const char *)"%d"), (&__cuda_local_var_18629_9_non_const_IszX))) == (-1)) {
printf(((const char *)"ERROR: dimX input is incorrect"));
return 0;
}

if (__cuda_local_var_18629_9_non_const_IszX <= 0) {
printf(((const char *)"dimX must be > 0\n"));
return 0;
}


if ((sscanf(((const char *)(argv[4])), ((const char *)"%d"), (&__cuda_local_var_18629_15_non_const_IszY))) == (-1)) {
printf(((const char *)"ERROR: dimY input is incorrect"));
return 0;
}

if (__cuda_local_var_18629_15_non_const_IszY <= 0) {
printf(((const char *)"dimY must be > 0\n"));
return 0;
}


if ((sscanf(((const char *)(argv[6])), ((const char *)"%d"), (&__cuda_local_var_18629_21_non_const_Nfr))) == (-1)) {
printf(((const char *)"ERROR: Number of frames input is incorrect"));
return 0;
}

if (__cuda_local_var_18629_21_non_const_Nfr <= 0) {
printf(((const char *)"number of frames must be > 0\n"));
return 0;
}


if ((sscanf(((const char *)(argv[8])), ((const char *)"%d"), (&__cuda_local_var_18629_26_non_const_Nparticles))) == (-1)) {
printf(((const char *)"ERROR: Number of particles input is incorrect"));
return 0;
}

if (__cuda_local_var_18629_26_non_const_Nparticles <= 0) {
printf(((const char *)"Number of particles must be > 0\n"));
return 0;
}

__cuda_local_var_18675_11_non_const_seed = ((int *)(malloc((4UL * ((unsigned long)__cuda_local_var_18629_26_non_const_Nparticles)))));

for (__cuda_local_var_18676_9_non_const_i = 0; (__cuda_local_var_18676_9_non_const_i < __cuda_local_var_18629_26_non_const_Nparticles); __cuda_local_var_18676_9_non_const_i++) {
(__cuda_local_var_18675_11_non_const_seed[__cuda_local_var_18676_9_non_const_i]) = ((int)((time(((time_t *)0LL))) * ((long)__cuda_local_var_18676_9_non_const_i))); }

__cuda_local_var_18680_21_non_const_I = ((unsigned char *)(malloc((((1UL * ((unsigned long)__cuda_local_var_18629_9_non_const_IszX)) * ((unsigned long)__cuda_local_var_18629_15_non_const_IszY)) * ((unsigned long)__cuda_local_var_18629_21_non_const_Nfr)))));
__cuda_local_var_18681_15_non_const_start = (_Z8get_timev());

_Z13videoSequencePhiiiPi(__cuda_local_var_18680_21_non_const_I, __cuda_local_var_18629_9_non_const_IszX, __cuda_local_var_18629_15_non_const_IszY, __cuda_local_var_18629_21_non_const_Nfr, __cuda_local_var_18675_11_non_const_seed);
__cuda_local_var_18684_15_non_const_endVideoSequence = (_Z8get_timev());
printf(((const char *)"VIDEO SEQUENCE TOOK %f\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18681_15_non_const_start, __cuda_local_var_18684_15_non_const_endVideoSequence))));

_Z14particleFilterPhiiiPii(__cuda_local_var_18680_21_non_const_I, __cuda_local_var_18629_9_non_const_IszX, __cuda_local_var_18629_15_non_const_IszY, __cuda_local_var_18629_21_non_const_Nfr, __cuda_local_var_18675_11_non_const_seed, __cuda_local_var_18629_26_non_const_Nparticles);
__cuda_local_var_18688_15_non_const_endParticleFilter = (_Z8get_timev());
printf(((const char *)"PARTICLE FILTER TOOK %f\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18684_15_non_const_endVideoSequence, __cuda_local_var_18688_15_non_const_endParticleFilter))));
printf(((const char *)"ENTIRE PROGRAM TOOK %f\n"), ((double)(_Z12elapsed_timexx(__cuda_local_var_18681_15_non_const_start, __cuda_local_var_18688_15_non_const_endParticleFilter))));

free(((void *)__cuda_local_var_18675_11_non_const_seed));
free(((void *)__cuda_local_var_18680_21_non_const_I));
return 0;
}
# 118 "/usr/include/c++/4.4/cmath" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt4acosIiEN9__gnu_cxx11__enable_ifIXsr3std12__is_integerIT_EE7__valueEdE6__typeES2_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EdE6__typeE _ZSt4acosIiEN9__gnu_cxx11__enable_ifIXsr3std12__is_integerIT_EE7__valueEdE6__typeES2_( int __x)
{ return __builtin_acos(((double)__x)); }
static void __sti___34_ex_particle_CUDA_float_seq_cpp1_ii_M(void) {   }

#include "ex_particle_CUDA_float_seq.cudafe1.stub.c"
