# 1 "find_ellipse_kernel.cu"
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct CUstream_st;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
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
# 74 "/home/bachelor/deicide218/cuda-4.2/include/cuda_texture_types.h"
struct _Z7textureIfLi1EL19cudaTextureReadMode0EE;
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
# 74 "/home/bachelor/deicide218/cuda-4.2/include/cuda_texture_types.h"
struct _Z7textureIfLi1EL19cudaTextureReadMode0EE { struct textureReference __b_16textureReference;};
# 64 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
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
# 3653 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void *, int, size_t);
# 4396 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, enum cudaChannelFormatKind);
# 4443 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture(size_t *, const struct textureReference *, const void *, const struct cudaChannelFormatDesc *, size_t);
# 4543 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern cudaError_t cudaUnbindTexture(const struct textureReference *);
# 101 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern int printf(const char *__restrict__, ...);

extern __attribute__((__malloc__)) void *malloc(size_t);
# 544 "/usr/include/stdlib.h" 3
extern __attribute__((__noreturn__)) void exit(int);
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
# 84 "find_ellipse_kernel.cu"
extern float *GICOV_CUDA(int, int, float *, float *);
# 567 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm */ __inline__ cudaError_t _Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm(size_t *, const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *, const void *, size_t);
# 800 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE */ __inline__ cudaError_t _Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE(const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *);
# 188 "find_ellipse_kernel.cu"
extern float *dilate_CUDA(int, int, int, int);
# 227 "find_ellipse_kernel.cu"
extern void select_device(void);
# 252 "find_ellipse_kernel.cu"
extern void transfer_constants(float *, float *, int *, int *, int, int, float *);
extern int __cudaSetupArgSimple();
extern int __cudaLaunch();
# 76 "/home/bachelor/deicide218/cuda-4.2/include/cuda_texture_types.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode(struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *const, int, enum cudaTextureFilterMode, enum cudaTextureAddressMode);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN7textureIfLi1EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureIfLi1EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode(struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *const, int, enum cudaTextureFilterMode, enum cudaTextureAddressMode);
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
extern int __cudaRegisterVariable();
extern int __cudaRegisterGlobalTexture();
static void __sti___27_find_ellipse_kernel_cpp1_ii_t_grad_x(void) __attribute__((__constructor__));
# 17 "find_ellipse_kernel.cu"
float *device_gicov = 0;
# 27 "find_ellipse_kernel.cu"
__loc_sc__(__text__,,) struct _Z7textureIfLi1EL19cudaTextureReadMode0EE __text_var(t_grad_x,t_grad_x);
__loc_sc__(__text__,,) struct _Z7textureIfLi1EL19cudaTextureReadMode0EE __text_var(t_grad_y,t_grad_y);
# 140 "find_ellipse_kernel.cu"
__loc_sc__(__text__,,) struct _Z7textureIfLi1EL19cudaTextureReadMode0EE __text_var(t_img,t_img);
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
# 84 "find_ellipse_kernel.cu"
float *GICOV_CUDA( int grad_m,  int grad_n,  float *host_grad_x,  float *host_grad_y) {  dim3 __T20;
 unsigned __T21;
 dim3 __T22;
 unsigned __T23;
# 86 "find_ellipse_kernel.cu"
 int __cuda_local_var_16382_6_non_const_MaxR;


 unsigned __cuda_local_var_16385_15_non_const_grad_mem_size;
 float *__cuda_local_var_16386_9_non_const_device_grad_x;
# 90 "find_ellipse_kernel.cu"
 float *__cuda_local_var_16386_25_non_const_device_grad_y;
# 108 "find_ellipse_kernel.cu"
 int __cuda_local_var_16404_6_non_const_num_blocks;
 int __cuda_local_var_16405_6_non_const_threads_per_block;
# 116 "find_ellipse_kernel.cu"
 cudaError_t __cuda_local_var_16412_14_non_const_error;
# 123 "find_ellipse_kernel.cu"
 float *__cuda_local_var_16419_9_non_const_host_gicov;
# 86 "find_ellipse_kernel.cu"
__cuda_local_var_16382_6_non_const_MaxR = 22;


__cuda_local_var_16385_15_non_const_grad_mem_size = ((unsigned)((4UL * ((unsigned long)grad_m)) * ((unsigned long)grad_n)));

cudaMalloc(((void **)(&__cuda_local_var_16386_9_non_const_device_grad_x)), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));
cudaMalloc(((void **)(&__cuda_local_var_16386_25_non_const_device_grad_y)), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));


cudaMemcpy(((void *)__cuda_local_var_16386_9_non_const_device_grad_x), ((const void *)host_grad_x), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size), cudaMemcpyHostToDevice);
cudaMemcpy(((void *)__cuda_local_var_16386_25_non_const_device_grad_y), ((const void *)host_grad_y), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size), cudaMemcpyHostToDevice);


_Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm(((size_t *)0LL), (((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_grad_x,t_grad_x))), ((const void *)__cuda_local_var_16386_9_non_const_device_grad_x), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));
_Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm(((size_t *)0LL), (((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_grad_y,t_grad_y))), ((const void *)__cuda_local_var_16386_25_non_const_device_grad_y), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));



cudaMalloc(((void **)(&device_gicov)), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));
cudaMemset(((void *)device_gicov), 0, ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size));


__cuda_local_var_16404_6_non_const_num_blocks = (grad_n - (2 * __cuda_local_var_16382_6_non_const_MaxR));
__cuda_local_var_16405_6_non_const_threads_per_block = (grad_m - (2 * __cuda_local_var_16382_6_non_const_MaxR));


(cudaConfigureCall((((void)((__T21 = ((unsigned)__cuda_local_var_16404_6_non_const_num_blocks)) , (void)((((__T20.x) = __T21) , (void)((__T20.y) = 1U)) , ((__T20.z) = 1U)))) , __T20), (((void)((__T23 = ((unsigned)__cuda_local_var_16405_6_non_const_threads_per_block)) , (void)((((__T22.x) = __T23) , (void)((__T22.y) = 1U)) , ((__T22.z) = 1U)))) , __T22), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z12GICOV_kerneliPf(grad_m, device_gicov));


cudaThreadSynchronize();
__cuda_local_var_16412_14_non_const_error = (cudaGetLastError());
if (((int)__cuda_local_var_16412_14_non_const_error) != 0) {
printf(((const char *)"GICOV kernel error: %s\n"), (cudaGetErrorString(__cuda_local_var_16412_14_non_const_error)));
exit(1);
}


__cuda_local_var_16419_9_non_const_host_gicov = ((float *)(malloc(((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size))));
cudaMemcpy(((void *)__cuda_local_var_16419_9_non_const_host_gicov), ((const void *)device_gicov), ((size_t)__cuda_local_var_16385_15_non_const_grad_mem_size), cudaMemcpyDeviceToHost);


_Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE((((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_grad_x,t_grad_x))));
_Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE((((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_grad_y,t_grad_y))));
cudaFree(((void *)__cuda_local_var_16386_9_non_const_device_grad_x));
cudaFree(((void *)__cuda_local_var_16386_25_non_const_device_grad_y));

return __cuda_local_var_16419_9_non_const_host_gicov;
}
# 567 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm */ __inline__ cudaError_t _Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm(
size_t *offset, 
const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *tex, 
const void *devPtr, 
size_t size)

{
return cudaBindTexture(offset, (&(tex->__b_16textureReference)), devPtr, (&((tex->__b_16textureReference).channelDesc)), size);
}
# 800 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE */ __inline__ cudaError_t _Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE(
const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *tex)

{
return cudaUnbindTexture((&(tex->__b_16textureReference)));
}
# 188 "find_ellipse_kernel.cu"
float *dilate_CUDA( int max_gicov_m,  int max_gicov_n,  int strel_m,  int strel_n) {  dim3 __T24;
 unsigned __T25;
 dim3 __T26;
 unsigned __T27;
# 190 "find_ellipse_kernel.cu"
 unsigned __cuda_local_var_16486_15_non_const_max_gicov_mem_size;
 float *__cuda_local_var_16487_9_non_const_device_img_dilated;
# 198 "find_ellipse_kernel.cu"
 int __cuda_local_var_16494_6_non_const_num_threads;
 int __cuda_local_var_16495_6_non_const_threads_per_block;
 int __cuda_local_var_16496_6_non_const_num_blocks;
# 207 "find_ellipse_kernel.cu"
 cudaError_t __cuda_local_var_16503_14_non_const_error;
# 214 "find_ellipse_kernel.cu"
 float *__cuda_local_var_16510_9_non_const_host_img_dilated;
# 190 "find_ellipse_kernel.cu"
__cuda_local_var_16486_15_non_const_max_gicov_mem_size = ((unsigned)((4UL * ((unsigned long)max_gicov_m)) * ((unsigned long)max_gicov_n)));

cudaMalloc(((void **)(&__cuda_local_var_16487_9_non_const_device_img_dilated)), ((size_t)__cuda_local_var_16486_15_non_const_max_gicov_mem_size));


_Z15cudaBindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorPmRK7textureIT_XT0_EXT1_EEPKvm(((size_t *)0LL), (((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_img,t_img))), ((const void *)device_gicov), ((size_t)__cuda_local_var_16486_15_non_const_max_gicov_mem_size));


__cuda_local_var_16494_6_non_const_num_threads = (max_gicov_m * max_gicov_n);
__cuda_local_var_16495_6_non_const_threads_per_block = 176;
__cuda_local_var_16496_6_non_const_num_blocks = ((int)(((double)(((float)__cuda_local_var_16494_6_non_const_num_threads) / ((float)__cuda_local_var_16495_6_non_const_threads_per_block))) + (0.5)));


(cudaConfigureCall((((void)((__T25 = ((unsigned)__cuda_local_var_16496_6_non_const_num_blocks)) , (void)((((__T24.x) = __T25) , (void)((__T24.y) = 1U)) , ((__T24.z) = 1U)))) , __T24), (((void)((__T27 = ((unsigned)__cuda_local_var_16495_6_non_const_threads_per_block)) , (void)((((__T26.x) = __T27) , (void)((__T26.y) = 1U)) , ((__T26.z) = 1U)))) , __T26), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z13dilate_kerneliiiiPf(max_gicov_m, max_gicov_n, strel_m, strel_n, __cuda_local_var_16487_9_non_const_device_img_dilated));


cudaThreadSynchronize();
__cuda_local_var_16503_14_non_const_error = (cudaGetLastError());
if (((int)__cuda_local_var_16503_14_non_const_error) != 0) {
printf(((const char *)"Dilation kernel error: %s\n"), (cudaGetErrorString(__cuda_local_var_16503_14_non_const_error)));
exit(1);
}


__cuda_local_var_16510_9_non_const_host_img_dilated = ((float *)(malloc(((size_t)__cuda_local_var_16486_15_non_const_max_gicov_mem_size))));
cudaMemcpy(((void *)__cuda_local_var_16510_9_non_const_host_img_dilated), ((const void *)__cuda_local_var_16487_9_non_const_device_img_dilated), ((size_t)__cuda_local_var_16486_15_non_const_max_gicov_mem_size), cudaMemcpyDeviceToHost);


_Z17cudaUnbindTextureIfLi1EL19cudaTextureReadMode0EE9cudaErrorRK7textureIT_XT0_EXT1_EE((((const struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *)&__text_var(t_img,t_img))));
cudaFree(((void *)device_gicov));
cudaFree(((void *)__cuda_local_var_16487_9_non_const_device_img_dilated));

return __cuda_local_var_16510_9_non_const_host_img_dilated;
}



void select_device(void) {

 int __cuda_local_var_16525_6_non_const_num_devices;
# 229 "find_ellipse_kernel.cu"
 int __cuda_local_var_16525_19_non_const_device;
cudaGetDeviceCount((&__cuda_local_var_16525_6_non_const_num_devices));


if (__cuda_local_var_16525_6_non_const_num_devices > 0) {
 int __cuda_local_var_16530_7_non_const_max_multiprocessors;
# 234 "find_ellipse_kernel.cu"
 int __cuda_local_var_16530_32_non_const_max_device;
# 234 "find_ellipse_kernel.cu"
__cuda_local_var_16530_7_non_const_max_multiprocessors = 0; __cuda_local_var_16530_32_non_const_max_device = (-1);
for (__cuda_local_var_16525_19_non_const_device = 0; (__cuda_local_var_16525_19_non_const_device < __cuda_local_var_16525_6_non_const_num_devices); __cuda_local_var_16525_19_non_const_device++) {
 struct cudaDeviceProp __cuda_local_var_16532_19_non_const_properties;
cudaGetDeviceProperties((&__cuda_local_var_16532_19_non_const_properties), __cuda_local_var_16525_19_non_const_device);
if (__cuda_local_var_16530_7_non_const_max_multiprocessors < (__cuda_local_var_16532_19_non_const_properties.multiProcessorCount)) {
__cuda_local_var_16530_7_non_const_max_multiprocessors = (__cuda_local_var_16532_19_non_const_properties.multiProcessorCount);
__cuda_local_var_16530_32_non_const_max_device = __cuda_local_var_16525_19_non_const_device;
}
}
cudaSetDevice(__cuda_local_var_16530_32_non_const_max_device);
}


cudaFree(((void *)0LL)); 
}



void transfer_constants( float *host_sin_angle,  float *host_cos_angle,  int *host_tX,  int *host_tY,  int strel_m,  int strel_n,  float *host_strel) {


 unsigned __cuda_local_var_16551_15_non_const_angle_mem_size;
 unsigned __cuda_local_var_16552_15_non_const_t_mem_size;
 unsigned __cuda_local_var_16553_15_non_const_strel_mem_size;
# 255 "find_ellipse_kernel.cu"
__cuda_local_var_16551_15_non_const_angle_mem_size = 600U;
__cuda_local_var_16552_15_non_const_t_mem_size = 4200U;
__cuda_local_var_16553_15_non_const_strel_mem_size = ((unsigned)((4UL * ((unsigned long)strel_m)) * ((unsigned long)strel_n)));


cudaMemcpyToSymbol(((const char *)"c_sin_angle"), ((const void *)host_sin_angle), ((size_t)__cuda_local_var_16551_15_non_const_angle_mem_size), 0UL, cudaMemcpyHostToDevice);
cudaMemcpyToSymbol(((const char *)"c_cos_angle"), ((const void *)host_cos_angle), ((size_t)__cuda_local_var_16551_15_non_const_angle_mem_size), 0UL, cudaMemcpyHostToDevice);
cudaMemcpyToSymbol(((const char *)"c_tX"), ((const void *)host_tX), ((size_t)__cuda_local_var_16552_15_non_const_t_mem_size), 0UL, cudaMemcpyHostToDevice);
cudaMemcpyToSymbol(((const char *)"c_tY"), ((const void *)host_tY), ((size_t)__cuda_local_var_16552_15_non_const_t_mem_size), 0UL, cudaMemcpyHostToDevice);
cudaMemcpyToSymbol(((const char *)"c_strel"), ((const void *)host_strel), ((size_t)__cuda_local_var_16553_15_non_const_strel_mem_size), 0UL, cudaMemcpyHostToDevice); 
}
__asm__(".align 2");
# 76 "/home/bachelor/deicide218/cuda-4.2/include/cuda_texture_types.h"
 __attribute__((__weak__)) /* COMDAT group: _ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode( struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *const this,  int norm, 
enum cudaTextureFilterMode fMode, 
enum cudaTextureAddressMode aMode)
{  int __T217;
((this->__b_16textureReference).normalized) = norm;
((this->__b_16textureReference).filterMode) = fMode;
((((this->__b_16textureReference).addressMode))[0]) = aMode;
((((this->__b_16textureReference).addressMode))[1]) = aMode;
((((this->__b_16textureReference).addressMode))[2]) = aMode;
((this->__b_16textureReference).channelDesc) = ((__T217 = 32) , (cudaCreateChannelDesc(__T217, 0, 0, 0, cudaChannelFormatKindFloat)));
((this->__b_16textureReference).sRGB) = 0; 
}
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN7textureIfLi1EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureIfLi1EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode( struct _Z7textureIfLi1EL19cudaTextureReadMode0EE *const this,  int __T218,  enum cudaTextureFilterMode __T219,  enum cudaTextureAddressMode __T220) {  _ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode(this, __T218, __T219, __T220);  }
static void __sti___27_find_ellipse_kernel_cpp1_ii_t_grad_x(void) {
# 27 "find_ellipse_kernel.cu"
_ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode((&__text_var(t_grad_x,t_grad_x)), 0, cudaFilterModePoint, cudaAddressModeClamp);
_ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode((&__text_var(t_grad_y,t_grad_y)), 0, cudaFilterModePoint, cudaAddressModeClamp);
# 140 "find_ellipse_kernel.cu"
_ZN7textureIfLi1EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode((&__text_var(t_img,t_img)), 0, cudaFilterModePoint, cudaAddressModeClamp);  }

#include "find_ellipse_kernel.cudafe1.stub.c"
