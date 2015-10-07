#include "crt/host_runtime.h"
#include "lud_kernel.fatbin.c"
extern void __device_stub__Z12lud_diagonalPfii(float *, int, int);
extern void __device_stub__Z13lud_perimeterPfii(float *, int, int);
extern void __device_stub__Z12lud_internalPfii(float *, int, int);
static void __sti____cudaRegisterAll_18_lud_kernel_cpp1_ii_a8a59389(void) __attribute__((__constructor__));
void __device_stub__Z12lud_diagonalPfii(float *__par0, int __par1, int __par2){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 12UL);__cudaLaunch(((char *)((void ( *)(float *, int, int))lud_diagonal)));}
# 7 "lud_kernel.cu"
void lud_diagonal( float *__cuda_0,int __cuda_1,int __cuda_2)
# 8 "lud_kernel.cu"
{__device_stub__Z12lud_diagonalPfii( __cuda_0,__cuda_1,__cuda_2);
# 46 "lud_kernel.cu"
}
# 1 "lud_kernel.cudafe1.stub.c"
void __device_stub__Z13lud_perimeterPfii( float *__par0,  int __par1,  int __par2) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 12UL); __cudaLaunch(((char *)((void ( *)(float *, int, int))lud_perimeter))); }
# 49 "lud_kernel.cu"
void lud_perimeter( float *__cuda_0,int __cuda_1,int __cuda_2)
# 50 "lud_kernel.cu"
{__device_stub__Z13lud_perimeterPfii( __cuda_0,__cuda_1,__cuda_2);
# 156 "lud_kernel.cu"
}
# 1 "lud_kernel.cudafe1.stub.c"
void __device_stub__Z12lud_internalPfii( float *__par0,  int __par1,  int __par2) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 12UL); __cudaLaunch(((char *)((void ( *)(float *, int, int))lud_internal))); }
# 159 "lud_kernel.cu"
void lud_internal( float *__cuda_0,int __cuda_1,int __cuda_2)
# 160 "lud_kernel.cu"
{__device_stub__Z12lud_internalPfii( __cuda_0,__cuda_1,__cuda_2);
# 181 "lud_kernel.cu"
}
# 1 "lud_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_18_lud_kernel_cpp1_ii_a8a59389(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, int, int))lud_internal), _Z12lud_internalPfii, (-1)); __cudaRegisterEntry(((void ( *)(float *, int, int))lud_perimeter), _Z13lud_perimeterPfii, (-1)); __cudaRegisterEntry(((void ( *)(float *, int, int))lud_diagonal), _Z12lud_diagonalPfii, (-1));  }
