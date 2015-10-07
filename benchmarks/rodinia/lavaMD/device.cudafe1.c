# 1 "device.cu"
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
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 958 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(void);
# 1013 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t);
# 1043 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int *);
# 1246 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *, int);
# 1298 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int);
# 239 "/usr/include/stdio.h" 3
extern int fflush(FILE *);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 544 "/usr/include/stdlib.h" 3
extern __attribute__((__noreturn__)) void exit(int);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 19 "device.cu"
extern void _Z9setdevicev(void);
# 54 "device.cu"
extern void _Z14checkCUDAErrorPKc(const char *);
extern int __cudaRegisterBinary();
static void __sti___14_device_cpp1_ii_7b746343(void) __attribute__((__constructor__));
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
# 19 "device.cu"
void _Z9setdevicev(void) {


 int __cuda_local_var_16312_6_non_const_num_devices;
 int __cuda_local_var_16313_6_non_const_device;


cudaGetDeviceCount((&__cuda_local_var_16312_6_non_const_num_devices));
if (__cuda_local_var_16312_6_non_const_num_devices > 1) {


 int __cuda_local_var_16320_7_non_const_max_multiprocessors;
 int __cuda_local_var_16321_7_non_const_max_device;
 struct cudaDeviceProp __cuda_local_var_16322_18_non_const_properties;


__cuda_local_var_16320_7_non_const_max_multiprocessors = 0;
__cuda_local_var_16321_7_non_const_max_device = 0;

for (__cuda_local_var_16313_6_non_const_device = 0; (__cuda_local_var_16313_6_non_const_device < __cuda_local_var_16312_6_non_const_num_devices); __cuda_local_var_16313_6_non_const_device++) {
cudaGetDeviceProperties((&__cuda_local_var_16322_18_non_const_properties), __cuda_local_var_16313_6_non_const_device);
if (__cuda_local_var_16320_7_non_const_max_multiprocessors < (__cuda_local_var_16322_18_non_const_properties.multiProcessorCount)) {
__cuda_local_var_16320_7_non_const_max_multiprocessors = (__cuda_local_var_16322_18_non_const_properties.multiProcessorCount);
__cuda_local_var_16321_7_non_const_max_device = __cuda_local_var_16313_6_non_const_device;
}
}
cudaSetDevice(__cuda_local_var_16321_7_non_const_max_device);
} 

}





void _Z14checkCUDAErrorPKc( const char *msg)
{
 cudaError_t __cuda_local_var_16346_14_non_const_err;
# 56 "device.cu"
__cuda_local_var_16346_14_non_const_err = (cudaGetLastError());
if (0 != ((int)__cuda_local_var_16346_14_non_const_err)) {

printf(((const char *)"Cuda error: %s: %s.\n"), msg, (cudaGetErrorString(__cuda_local_var_16346_14_non_const_err)));
fflush(((FILE *)0LL));
exit(1);
} 
}
static void __sti___14_device_cpp1_ii_7b746343(void) {   }

#include "device.cudafe1.stub.c"
