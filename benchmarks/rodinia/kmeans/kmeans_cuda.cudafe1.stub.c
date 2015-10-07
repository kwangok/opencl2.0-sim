#include "crt/host_runtime.h"
#include "kmeans_cuda.fatbin.c"
extern void __device_stub__Z14invert_mappingPfS_ii(float *, float *, int, int);
extern void __device_stub__Z11kmeansPointPfiiiPiS_S_S0_(float *, int, int, int, int *, float *, float *, int *);
static void __sti____cudaRegisterAll_19_kmeans_cuda_cpp1_ii_68086035(void) __attribute__((__constructor__));
void __device_stub__Z14invert_mappingPfS_ii(float *__par0, float *__par1, int __par2, int __par3){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 20UL);__cudaLaunch(((char *)((void ( *)(float *, float *, int, int))invert_mapping)));}
# 34 "./kmeans_cuda_kernel.cu"
void invert_mapping( float *__cuda_0,float *__cuda_1,int __cuda_2,int __cuda_3)
# 38 "./kmeans_cuda_kernel.cu"
{__device_stub__Z14invert_mappingPfS_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 47 "./kmeans_cuda_kernel.cu"
}
# 1 "kmeans_cuda.cudafe1.stub.c"
void __device_stub__Z11kmeansPointPfiiiPiS_S_S0_( float *__par0,  int __par1,  int __par2,  int __par3,  int *__par4,  float *__par5,  float *__par6,  int *__par7) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 12UL); __cudaSetupArgSimple(__par3, 16UL); __cudaSetupArgSimple(__par4, 24UL); __cudaSetupArgSimple(__par5, 32UL); __cudaSetupArgSimple(__par6, 40UL); __cudaSetupArgSimple(__par7, 48UL); __cudaLaunch(((char *)((void ( *)(float *, int, int, int, int *, float *, float *, int *))kmeansPoint))); }
# 58 "./kmeans_cuda_kernel.cu"
void kmeansPoint( float *__cuda_0,int __cuda_1,int __cuda_2,int __cuda_3,int *__cuda_4,float *__cuda_5,float *__cuda_6,int *__cuda_7)
# 66 "./kmeans_cuda_kernel.cu"
{__device_stub__Z11kmeansPointPfiiiPiS_S_S0_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7);
# 186 "./kmeans_cuda_kernel.cu"
}
# 1 "kmeans_cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_19_kmeans_cuda_cpp1_ii_68086035(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, int, int, int, int *, float *, float *, int *))kmeansPoint), _Z11kmeansPointPfiiiPiS_S_S0_, (-1)); __cudaRegisterEntry(((void ( *)(float *, float *, int, int))invert_mapping), _Z14invert_mappingPfS_ii, (-1));  }
