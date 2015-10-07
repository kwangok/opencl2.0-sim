#include "crt/host_runtime.h"
#include "cell.fatbin.c"
extern void __device_stub__Z6evolveiPiS_iiiiiiiii(int, int *, int *, int, int, int, int, int, int, int, int, int);
static void __sti____cudaRegisterAll_12_cell_cpp1_ii_bornMin(void) __attribute__((__constructor__));
void __device_stub__Z6evolveiPiS_iiiiiiiii(int __par0, int *__par1, int *__par2, int __par3, int __par4, int __par5, int __par6, int __par7, int __par8, int __par9, int __par10, int __par11){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 28UL);__cudaSetupArgSimple(__par5, 32UL);__cudaSetupArgSimple(__par6, 36UL);__cudaSetupArgSimple(__par7, 40UL);__cudaSetupArgSimple(__par8, 44UL);__cudaSetupArgSimple(__par9, 48UL);__cudaSetupArgSimple(__par10, 52UL);__cudaSetupArgSimple(__par11, 56UL);__cudaLaunch(((char *)((void ( *)(int, int *, int *, int, int, int, int, int, int, int, int, int))evolve)));}
# 74 "cell.cu"
void evolve( int __cuda_0,int *__cuda_1,int *__cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,int __cuda_6,int __cuda_7,int __cuda_8,int __cuda_9,int __cuda_10,int __cuda_11)
# 82 "cell.cu"
{__device_stub__Z6evolveiPiS_iiiiiiiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11);
# 183 "cell.cu"
}
# 1 "cell.cudafe1.stub.c"
static void __sti____cudaRegisterAll_12_cell_cpp1_ii_bornMin(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int *, int *, int, int, int, int, int, int, int, int, int))evolve), _Z6evolveiPiS_iiiiiiiii, (-1));  }
