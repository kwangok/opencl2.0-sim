#include "crt/host_runtime.h"
#include "backprop_cuda.fatbin.c"
extern void __device_stub__Z22bpnn_layerforward_CUDAPfS_S_S_ii(float *, float *, float *, float *, int, int);
extern void __device_stub__Z24bpnn_adjust_weights_cudaPfiS_iS_S_(float *, int, float *, int, float *, float *);
static void __sti____cudaRegisterAll_21_backprop_cuda_cpp1_ii_5f684aae(void) __attribute__((__constructor__));
void __device_stub__Z22bpnn_layerforward_CUDAPfS_S_S_ii(float *__par0, float *__par1, float *__par2, float *__par3, int __par4, int __par5){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 36UL);__cudaLaunch(((char *)((void ( *)(float *, float *, float *, float *, int, int))bpnn_layerforward_CUDA)));}
# 13 "./backprop_cuda_kernel.cu"
void bpnn_layerforward_CUDA( float *__cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,int __cuda_4,int __cuda_5)
# 19 "./backprop_cuda_kernel.cu"
{__device_stub__Z22bpnn_layerforward_CUDAPfS_S_S_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 78 "./backprop_cuda_kernel.cu"
}
# 1 "backprop_cuda.cudafe1.stub.c"
void __device_stub__Z24bpnn_adjust_weights_cudaPfiS_iS_S_( float *__par0,  int __par1,  float *__par2,  int __par3,  float *__par4,  float *__par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaLaunch(((char *)((void ( *)(float *, int, float *, int, float *, float *))bpnn_adjust_weights_cuda))); }
# 81 "./backprop_cuda_kernel.cu"
void bpnn_adjust_weights_cuda( float *__cuda_0,int __cuda_1,float *__cuda_2,int __cuda_3,float *__cuda_4,float *__cuda_5)
# 87 "./backprop_cuda_kernel.cu"
{__device_stub__Z24bpnn_adjust_weights_cudaPfiS_iS_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 113 "./backprop_cuda_kernel.cu"
}
# 1 "backprop_cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_21_backprop_cuda_cpp1_ii_5f684aae(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, int, float *, int, float *, float *))bpnn_adjust_weights_cuda), _Z24bpnn_adjust_weights_cudaPfiS_iS_S_, (-1)); __cudaRegisterEntry(((void ( *)(float *, float *, float *, float *, int, int))bpnn_layerforward_CUDA), _Z22bpnn_layerforward_CUDAPfS_S_S_ii, (-1));  }
