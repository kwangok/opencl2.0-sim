#include "crt/host_runtime.h"
#include "nn_cuda.fatbin.c"
extern void __device_stub__Z6euclidP7latLongPfiff(LatLong *, float *, int, float, float);
static void __sti____cudaRegisterAll_15_nn_cuda_cpp1_ii_4c3be9ae(void) __attribute__((__constructor__));
void __device_stub__Z6euclidP7latLongPfiff(LatLong *__par0, float *__par1, int __par2, float __par3, float __par4){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 20UL);__cudaSetupArgSimple(__par4, 24UL);__cudaLaunch(((char *)((void ( *)(LatLong *, float *, int, float, float))euclid)));}
# 45 "nn_cuda.cu"
void euclid( LatLong *__cuda_0,float *__cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 46 "nn_cuda.cu"
{__device_stub__Z6euclidP7latLongPfiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 53 "nn_cuda.cu"
}
# 1 "nn_cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_15_nn_cuda_cpp1_ii_4c3be9ae(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(LatLong *, float *, int, float, float))euclid), _Z6euclidP7latLongPfiff, (-1));  }
