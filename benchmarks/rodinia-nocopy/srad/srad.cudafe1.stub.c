#include "crt/host_runtime.h"
#include "srad.fatbin.c"
extern void __device_stub__Z11srad_cuda_1PfS_S_S_S_S_iif(float *, float *, float *, float *, float *, float *, int, int, float);
extern void __device_stub__Z11srad_cuda_2PfS_S_S_S_S_iiff(float *, float *, float *, float *, float *, float *, int, int, float, float);
static void __sti____cudaRegisterAll_12_srad_cpp1_ii_73102f0c(void) __attribute__((__constructor__));
void __device_stub__Z11srad_cuda_1PfS_S_S_S_S_iif(float *__par0, float *__par1, float *__par2, float *__par3, float *__par4, float *__par5, int __par6, int __par7, float __par8){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaSetupArgSimple(__par7, 52UL);__cudaSetupArgSimple(__par8, 56UL);__cudaLaunch(((char *)((void ( *)(float *, float *, float *, float *, float *, float *, int, int, float))srad_cuda_1)));}
# 5 "./srad_kernel.cu"
void srad_cuda_1( float *__cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5,int __cuda_6,int __cuda_7,float __cuda_8)
# 16 "./srad_kernel.cu"
{__device_stub__Z11srad_cuda_1PfS_S_S_S_S_iif( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8);
# 167 "./srad_kernel.cu"
}
# 1 "srad.cudafe1.stub.c"
void __device_stub__Z11srad_cuda_2PfS_S_S_S_S_iiff( float *__par0,  float *__par1,  float *__par2,  float *__par3,  float *__par4,  float *__par5,  int __par6,  int __par7,  float __par8,  float __par9) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaSetupArgSimple(__par6, 48UL); __cudaSetupArgSimple(__par7, 52UL); __cudaSetupArgSimple(__par8, 56UL); __cudaSetupArgSimple(__par9, 60UL); __cudaLaunch(((char *)((void ( *)(float *, float *, float *, float *, float *, float *, int, int, float, float))srad_cuda_2))); }
# 170 "./srad_kernel.cu"
void srad_cuda_2( float *__cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5,int __cuda_6,int __cuda_7,float __cuda_8,float __cuda_9)
# 182 "./srad_kernel.cu"
{__device_stub__Z11srad_cuda_2PfS_S_S_S_S_iiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9);
# 271 "./srad_kernel.cu"
}
# 1 "srad.cudafe1.stub.c"
static void __sti____cudaRegisterAll_12_srad_cpp1_ii_73102f0c(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, float *, float *, float *, float *, float *, int, int, float, float))srad_cuda_2), _Z11srad_cuda_2PfS_S_S_S_S_iiff, (-1)); __cudaRegisterEntry(((void ( *)(float *, float *, float *, float *, float *, float *, int, int, float))srad_cuda_1), _Z11srad_cuda_1PfS_S_S_S_S_iif, (-1));  }
