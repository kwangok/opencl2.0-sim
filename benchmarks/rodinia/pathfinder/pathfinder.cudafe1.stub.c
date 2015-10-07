#include "crt/host_runtime.h"
#include "pathfinder.fatbin.c"
extern void __device_stub__Z14dynproc_kerneliPiS_S_iiii(int, int *, int *, int *, int, int, int, int);
static void __sti____cudaRegisterAll_18_pathfinder_cpp1_ii_2e3c706b(void) __attribute__((__constructor__));
void __device_stub__Z14dynproc_kerneliPiS_S_iiii(int __par0, int *__par1, int *__par2, int *__par3, int __par4, int __par5, int __par6, int __par7){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 36UL);__cudaSetupArgSimple(__par6, 40UL);__cudaSetupArgSimple(__par7, 44UL);__cudaLaunch(((char *)((void ( *)(int, int *, int *, int *, int, int, int, int))dynproc_kernel)));}
# 111 "pathfinder.cu"
void dynproc_kernel( int __cuda_0,int *__cuda_1,int *__cuda_2,int *__cuda_3,int __cuda_4,int __cuda_5,int __cuda_6,int __cuda_7)
# 120 "pathfinder.cu"
{__device_stub__Z14dynproc_kerneliPiS_S_iiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7);
# 190 "pathfinder.cu"
}
# 1 "pathfinder.cudafe1.stub.c"
static void __sti____cudaRegisterAll_18_pathfinder_cpp1_ii_2e3c706b(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int *, int *, int *, int, int, int, int))dynproc_kernel), _Z14dynproc_kerneliPiS_S_iiii, (-1));  }
