#include "crt/host_runtime.h"
#include "hotspot.fatbin.c"
extern void __device_stub__Z14calculate_tempiPfS_S_iiiiffffff(int, float *, float *, float *, int, int, int, int, float, float, float, float, float, float);
static void __sti____cudaRegisterAll_15_hotspot_cpp1_ii_t_chip(void) __attribute__((__constructor__));
void __device_stub__Z14calculate_tempiPfS_S_iiiiffffff(int __par0, float *__par1, float *__par2, float *__par3, int __par4, int __par5, int __par6, int __par7, float __par8, float __par9, float __par10, float __par11, float __par12, float __par13){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 36UL);__cudaSetupArgSimple(__par6, 40UL);__cudaSetupArgSimple(__par7, 44UL);__cudaSetupArgSimple(__par8, 48UL);__cudaSetupArgSimple(__par9, 52UL);__cudaSetupArgSimple(__par10, 56UL);__cudaSetupArgSimple(__par11, 60UL);__cudaSetupArgSimple(__par12, 64UL);__cudaSetupArgSimple(__par13, 68UL);__cudaLaunch(((char *)((void ( *)(int, float *, float *, float *, int, int, int, int, float, float, float, float, float, float))calculate_temp)));}
# 105 "hotspot.cu"
void calculate_temp( int __cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,int __cuda_4,int __cuda_5,int __cuda_6,int __cuda_7,float __cuda_8,float __cuda_9,float __cuda_10,float __cuda_11,float __cuda_12,float __cuda_13)
# 118 "hotspot.cu"
{__device_stub__Z14calculate_tempiPfS_S_iiiiffffff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12,__cuda_13);
# 216 "hotspot.cu"
}
# 1 "hotspot.cudafe1.stub.c"
static void __sti____cudaRegisterAll_15_hotspot_cpp1_ii_t_chip(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, float *, float *, float *, int, int, int, int, float, float, float, float, float, float))calculate_temp), _Z14calculate_tempiPfS_S_iiiiffffff, (-1));  }
