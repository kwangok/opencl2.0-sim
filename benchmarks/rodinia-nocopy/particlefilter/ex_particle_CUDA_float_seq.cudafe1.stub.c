#include "crt/host_runtime.h"
#include "ex_particle_CUDA_float_seq.fatbin.c"
extern void __device_stub__Z17find_index_kernelPfS_S_S_S_S_S_i(float *, float *, float *, float *, float *, float *, float *, int);
extern void __device_stub__Z24normalize_weights_kernelPfiS_S_S_Pi(float *, int, float *, float *, float *, int *);
extern void __device_stub__Z10sum_kernelPfi(float *, int);
extern void __device_stub__Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_(float *, float *, float *, int *, int *, float *, unsigned char *, float *, float *, int, int, int, int, int, int, int *, float *);
static void __sti____cudaRegisterAll_34_ex_particle_CUDA_float_seq_cpp1_ii_M(void) __attribute__((__constructor__));
void __device_stub__Z17find_index_kernelPfS_S_S_S_S_S_i(float *__par0, float *__par1, float *__par2, float *__par3, float *__par4, float *__par5, float *__par6, int __par7){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaSetupArgSimple(__par7, 56UL);__cudaLaunch(((char *)((void ( *)(float *, float *, float *, float *, float *, float *, float *, int))find_index_kernel)));}
# 229 "ex_particle_CUDA_float_seq.cu"
void find_index_kernel( float *__cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5,float *__cuda_6,int __cuda_7)
# 229 "ex_particle_CUDA_float_seq.cu"
{__device_stub__Z17find_index_kernelPfS_S_S_S_S_S_i( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7);
# 256 "ex_particle_CUDA_float_seq.cu"
}
# 1 "ex_particle_CUDA_float_seq.cudafe1.stub.c"
void __device_stub__Z24normalize_weights_kernelPfiS_S_S_Pi( float *__par0,  int __par1,  float *__par2,  float *__par3,  float *__par4,  int *__par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaLaunch(((char *)((void ( *)(float *, int, float *, float *, float *, int *))normalize_weights_kernel))); }
# 258 "ex_particle_CUDA_float_seq.cu"
void normalize_weights_kernel( float *__cuda_0,int __cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,int *__cuda_5)
# 258 "ex_particle_CUDA_float_seq.cu"
{__device_stub__Z24normalize_weights_kernelPfiS_S_S_Pi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 274 "ex_particle_CUDA_float_seq.cu"
}
# 1 "ex_particle_CUDA_float_seq.cudafe1.stub.c"
void __device_stub__Z10sum_kernelPfi( float *__par0,  int __par1) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaLaunch(((char *)((void ( *)(float *, int))sum_kernel))); }
# 276 "ex_particle_CUDA_float_seq.cu"
void sum_kernel( float *__cuda_0,int __cuda_1)
# 276 "ex_particle_CUDA_float_seq.cu"
{__device_stub__Z10sum_kernelPfi( __cuda_0,__cuda_1);
# 289 "ex_particle_CUDA_float_seq.cu"
}
# 1 "ex_particle_CUDA_float_seq.cudafe1.stub.c"
void __device_stub__Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_( float *__par0,  float *__par1,  float *__par2,  int *__par3,  int *__par4,  float *__par5,  unsigned char *__par6,  float *__par7,  float *__par8,  int __par9,  int __par10,  int __par11,  int __par12,  int __par13,  int __par14,  int *__par15,  float *__par16) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaSetupArgSimple(__par6, 48UL); __cudaSetupArgSimple(__par7, 56UL); __cudaSetupArgSimple(__par8, 64UL); __cudaSetupArgSimple(__par9, 72UL); __cudaSetupArgSimple(__par10, 76UL); __cudaSetupArgSimple(__par11, 80UL); __cudaSetupArgSimple(__par12, 84UL); __cudaSetupArgSimple(__par13, 88UL); __cudaSetupArgSimple(__par14, 92UL); __cudaSetupArgSimple(__par15, 96UL); __cudaSetupArgSimple(__par16, 104UL); __cudaLaunch(((char *)((void ( *)(float *, float *, float *, int *, int *, float *, unsigned char *, float *, float *, int, int, int, int, int, int, int *, float *))likelihood_kernel))); }
# 309 "ex_particle_CUDA_float_seq.cu"
void likelihood_kernel( float *__cuda_0,float *__cuda_1,float *__cuda_2,int *__cuda_3,int *__cuda_4,float *__cuda_5,unsigned char *__cuda_6,float *__cuda_7,float *__cuda_8,int __cuda_9,int __cuda_10,int __cuda_11,int __cuda_12,int __cuda_13,int __cuda_14,int *__cuda_15,float *__cuda_16)
# 309 "ex_particle_CUDA_float_seq.cu"
{__device_stub__Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12,__cuda_13,__cuda_14,__cuda_15,__cuda_16);
# 351 "ex_particle_CUDA_float_seq.cu"
}
# 1 "ex_particle_CUDA_float_seq.cudafe1.stub.c"
static void __sti____cudaRegisterAll_34_ex_particle_CUDA_float_seq_cpp1_ii_M(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(float *, float *, float *, int *, int *, float *, unsigned char *, float *, float *, int, int, int, int, int, int, int *, float *))likelihood_kernel), _Z17likelihood_kernelPfS_S_PiS0_S_PhS_S_iiiiiiS0_S_, (-1)); __cudaRegisterEntry(((void ( *)(float *, int))sum_kernel), _Z10sum_kernelPfi, (-1)); __cudaRegisterEntry(((void ( *)(float *, int, float *, float *, float *, int *))normalize_weights_kernel), _Z24normalize_weights_kernelPfiS_S_S_Pi, (-1)); __cudaRegisterEntry(((void ( *)(float *, float *, float *, float *, float *, float *, float *, int))find_index_kernel), _Z17find_index_kernelPfS_S_S_S_S_S_i, (-1));  }
