#include "crt/host_runtime.h"
#include "streamcluster_cuda.fatbin.c"
extern void __device_stub__Z12pgain_kerneliilP5PointiPfS1_PiPb(int, int, long, Point *, int, float *, float *, int *, bool *);
static void __sti____cudaRegisterAll_26_streamcluster_cuda_cpp1_ii_8383dfea(void) __attribute__((__constructor__));
void __device_stub__Z12pgain_kerneliilP5PointiPfS1_PiPb(int __par0, int __par1, long __par2, Point *__par3, int __par4, float *__par5, float *__par6, int *__par7, bool *__par8){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 4UL);__cudaSetupArgSimple(__par2, 8UL);__cudaSetupArgSimple(__par3, 16UL);__cudaSetupArgSimple(__par4, 24UL);__cudaSetupArgSimple(__par5, 32UL);__cudaSetupArgSimple(__par6, 40UL);__cudaSetupArgSimple(__par7, 48UL);__cudaSetupArgSimple(__par8, 56UL);__cudaLaunch(((char *)((void ( *)(int, int, long, Point *, int, float *, float *, int *, bool *))pgain_kernel)));}
# 55 "streamcluster_cuda.cu"
void pgain_kernel( int __cuda_0,int __cuda_1,long __cuda_2,Point *__cuda_3,int __cuda_4,float *__cuda_5,float *__cuda_6,int *__cuda_7,bool *__cuda_8)
# 65 "streamcluster_cuda.cu"
{__device_stub__Z12pgain_kerneliilP5PointiPfS1_PiPb( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8);
# 96 "streamcluster_cuda.cu"
}
# 1 "streamcluster_cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_26_streamcluster_cuda_cpp1_ii_8383dfea(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int, long, Point *, int, float *, float *, int *, bool *))pgain_kernel), _Z12pgain_kerneliilP5PointiPfS1_PiPb, (-1));  }
