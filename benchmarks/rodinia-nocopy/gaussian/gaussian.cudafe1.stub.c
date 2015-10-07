#include "crt/host_runtime.h"
#include "gaussian.fatbin.c"
extern void __device_stub__Z4Fan1PfS_ii(float *, float *, int, int);
extern void __device_stub__Z4Fan2PfS_S_iii(float *, float *, float *, int, int, int);
static void __sti____cudaRegisterAll_16_gaussian_cpp1_ii_bd85c056(void) __attribute__((__constructor__));
void __device_stub__Z4Fan1PfS_ii(float *__par0, float *__par1, int __par2, int __par3){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 20UL);__cudaLaunch(((char *)((void ( *)(float *, float *, int, int))Fan1)));}
# 225 "gaussian.cu"
void Fan1( float *__cuda_0,float *__cuda_1,int __cuda_2,int __cuda_3)
# 226 "gaussian.cu"
{__device_stub__Z4Fan1PfS_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 232 "gaussian.cu"
}
# 1 "gaussian.cudafe1.stub.c"
void __device_stub__Z4Fan2PfS_S_iii( float *__par0,  float *__par1,  float *__par2,  int __par3,  int __par4,  int __par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 28UL); __cudaSetupArgSimple(__par5, 32UL); __cudaLaunch(((char *)((void ( *)(float *, float *, float *, int, int, int))Fan2))); }
# 239 "gaussian.cu"
void Fan2( float *__cuda_0,float *__cuda_1,float *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5)
# 240 "gaussian.cu"
{__device_stub__Z4Fan2PfS_S_iii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 255 "gaussian.cu"
}
# 1 "gaussian.cudafe1.stub.c"
static void __sti____cudaRegisterAll_16_gaussian_cpp1_ii_bd85c056(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, float *, float *, int, int, int))Fan2), _Z4Fan2PfS_S_iii, (-1)); __cudaRegisterEntry(((void ( *)(float *, float *, int, int))Fan1), _Z4Fan1PfS_ii, (-1));  }
