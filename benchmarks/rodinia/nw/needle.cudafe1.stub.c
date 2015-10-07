#include "crt/host_runtime.h"
#include "needle.fatbin.c"
extern void __device_stub__Z20needle_cuda_shared_1PiS_S_iiii(int *, int *, int *, int, int, int, int);
extern void __device_stub__Z20needle_cuda_shared_2PiS_S_iiii(int *, int *, int *, int, int, int, int);
static void __sti____cudaRegisterAll_14_needle_cpp1_ii_734a7458(void) __attribute__((__constructor__));
void __device_stub__Z20needle_cuda_shared_1PiS_S_iiii(int *__par0, int *__par1, int *__par2, int __par3, int __par4, int __par5, int __par6){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 28UL);__cudaSetupArgSimple(__par5, 32UL);__cudaSetupArgSimple(__par6, 36UL);__cudaLaunch(((char *)((void ( *)(int *, int *, int *, int, int, int, int))needle_cuda_shared_1)));}
# 27 "./needle_kernel.cu"
void needle_cuda_shared_1( int *__cuda_0,int *__cuda_1,int *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,int __cuda_6)
# 34 "./needle_kernel.cu"
{__device_stub__Z20needle_cuda_shared_1PiS_S_iiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 105 "./needle_kernel.cu"
}
# 1 "needle.cudafe1.stub.c"
void __device_stub__Z20needle_cuda_shared_2PiS_S_iiii( int *__par0,  int *__par1,  int *__par2,  int __par3,  int __par4,  int __par5,  int __par6) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 28UL); __cudaSetupArgSimple(__par5, 32UL); __cudaSetupArgSimple(__par6, 36UL); __cudaLaunch(((char *)((void ( *)(int *, int *, int *, int, int, int, int))needle_cuda_shared_2))); }
# 109 "./needle_kernel.cu"
void needle_cuda_shared_2( int *__cuda_0,int *__cuda_1,int *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,int __cuda_6)
# 117 "./needle_kernel.cu"
{__device_stub__Z20needle_cuda_shared_2PiS_S_iiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 190 "./needle_kernel.cu"
}
# 1 "needle.cudafe1.stub.c"
static void __sti____cudaRegisterAll_14_needle_cpp1_ii_734a7458(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int *, int *, int *, int, int, int, int))needle_cuda_shared_2), _Z20needle_cuda_shared_2PiS_S_iiii, (-1)); __cudaRegisterEntry(((void ( *)(int *, int *, int *, int, int, int, int))needle_cuda_shared_1), _Z20needle_cuda_shared_1PiS_S_iiii, (-1));  }
