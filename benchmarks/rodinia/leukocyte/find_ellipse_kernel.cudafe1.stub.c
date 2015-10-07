#include "crt/host_runtime.h"
#include "find_ellipse_kernel.fatbin.c"
extern void __device_stub__Z12GICOV_kerneliPf(int, float *);
extern void __device_stub__Z13dilate_kerneliiiiPf(int, int, int, int, float *);
static void __sti____cudaRegisterAll_27_find_ellipse_kernel_cpp1_ii_t_grad_x(void) __attribute__((__constructor__));
void __device_stub__Z12GICOV_kerneliPf(int __par0, float *__par1){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(int, float *))GICOV_kernel)));}
# 32 "find_ellipse_kernel.cu"
void GICOV_kernel( int __cuda_0,float *__cuda_1)
# 32 "find_ellipse_kernel.cu"
{__device_stub__Z12GICOV_kerneliPf( __cuda_0,__cuda_1);
# 80 "find_ellipse_kernel.cu"
}
# 1 "find_ellipse_kernel.cudafe1.stub.c"
void __device_stub__Z13dilate_kerneliiiiPf( int __par0,  int __par1,  int __par2,  int __par3,  float *__par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 4UL); __cudaSetupArgSimple(__par2, 8UL); __cudaSetupArgSimple(__par3, 12UL); __cudaSetupArgSimple(__par4, 16UL); __cudaLaunch(((char *)((void ( *)(int, int, int, int, float *))dilate_kernel))); }
# 146 "find_ellipse_kernel.cu"
void dilate_kernel( int __cuda_0,int __cuda_1,int __cuda_2,int __cuda_3,float *__cuda_4)
# 146 "find_ellipse_kernel.cu"
{__device_stub__Z13dilate_kerneliiiiPf( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 184 "find_ellipse_kernel.cu"
}
# 1 "find_ellipse_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_27_find_ellipse_kernel_cpp1_ii_t_grad_x(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int, int, int, float *))dilate_kernel), _Z13dilate_kerneliiiiPf, (-1)); __cudaRegisterEntry(((void ( *)(int, float *))GICOV_kernel), _Z12GICOV_kerneliPf, (-1)); __cudaRegisterVariable(__shadow_var(c_sin_angle,c_sin_angle), 0, 600, 1, 0); __cudaRegisterVariable(__shadow_var(c_cos_angle,c_cos_angle), 0, 600, 1, 0); __cudaRegisterVariable(__shadow_var(c_tX,c_tX), 0, 4200, 1, 0); __cudaRegisterVariable(__shadow_var(c_tY,c_tY), 0, 4200, 1, 0); __cudaRegisterGlobalTexture(__text_var(t_grad_x,t_grad_x), 1, 0, 0); __cudaRegisterGlobalTexture(__text_var(t_grad_y,t_grad_y), 1, 0, 0); __cudaRegisterVariable(__shadow_var(c_strel,c_strel), 0, 2500, 1, 0); __cudaRegisterGlobalTexture(__text_var(t_img,t_img), 1, 0, 0);  }
