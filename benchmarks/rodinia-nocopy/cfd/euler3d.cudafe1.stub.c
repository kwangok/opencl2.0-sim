#include "crt/host_runtime.h"
#include "euler3d.fatbin.c"
extern void __device_stub__Z25cuda_initialize_variablesiPfS_(int, float *, float *);
extern void __device_stub__Z24cuda_compute_step_factoriPfS_S_(int, float *, float *, float *);
extern void __device_stub__Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_(int, int *, float *, float *, float *, float *, float3 *, float3 *, float3 *, float3 *);
extern void __device_stub__Z14cuda_time_stepiiPfS_S_S_(int, int, float *, float *, float *, float *);
static void __sti____cudaRegisterAll_15_euler3d_cpp1_ii_fd6503f5(void) __attribute__((__constructor__));
void __device_stub__Z25cuda_initialize_variablesiPfS_(int __par0, float *__par1, float *__par2){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(int, float *, float *))cuda_initialize_variables)));}
# 127 "euler3d.cu"
void cuda_initialize_variables( int __cuda_0,float *__cuda_1,float *__cuda_2)
# 128 "euler3d.cu"
{__device_stub__Z25cuda_initialize_variablesiPfS_( __cuda_0,__cuda_1,__cuda_2);



}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z24cuda_compute_step_factoriPfS_S_( int __par0,  float *__par1,  float *__par2,  float *__par3) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(int, float *, float *, float *))cuda_compute_step_factor))); }
# 183 "euler3d.cu"
void cuda_compute_step_factor( int __cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3)
# 184 "euler3d.cu"
{__device_stub__Z24cuda_compute_step_factoriPfS_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 202 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_( int __par0,  int *__par1,  float *__par2,  float *__par3,  float *__par4,  float *__par5,  float3 *__par6,  float3 *__par7,  float3 *__par8,  float3 *__par9) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaSetupArgSimple(__par6, 48UL); __cudaSetupArgSimple(__par7, 56UL); __cudaSetupArgSimple(__par8, 64UL); __cudaSetupArgSimple(__par9, 72UL); __cudaLaunch(((char *)((void ( *)(int, int *, float *, float *, float *, float *, float3 *, float3 *, float3 *, float3 *))cuda_compute_flux))); }
# 214 "euler3d.cu"
void cuda_compute_flux( int __cuda_0,int *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5,float3 *__cuda_6,float3 *__cuda_7,float3 *__cuda_8,float3 *__cuda_9)
# 215 "euler3d.cu"
{__device_stub__Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9);
# 343 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z14cuda_time_stepiiPfS_S_S_( int __par0,  int __par1,  float *__par2,  float *__par3,  float *__par4,  float *__par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 4UL); __cudaSetupArgSimple(__par2, 8UL); __cudaSetupArgSimple(__par3, 16UL); __cudaSetupArgSimple(__par4, 24UL); __cudaSetupArgSimple(__par5, 32UL); __cudaLaunch(((char *)((void ( *)(int, int, float *, float *, float *, float *))cuda_time_step))); }
# 351 "euler3d.cu"
void cuda_time_step( int __cuda_0,int __cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5)
# 352 "euler3d.cu"
{__device_stub__Z14cuda_time_stepiiPfS_S_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 362 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
static void __sti____cudaRegisterAll_15_euler3d_cpp1_ii_fd6503f5(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int, float *, float *, float *, float *))cuda_time_step), _Z14cuda_time_stepiiPfS_S_S_, (-1)); __cudaRegisterEntry(((void ( *)(int, int *, float *, float *, float *, float *, float3 *, float3 *, float3 *, float3 *))cuda_compute_flux), _Z17cuda_compute_fluxiPiPfS0_S0_S0_P6float3S2_S2_S2_, (-1)); __cudaRegisterEntry(((void ( *)(int, float *, float *, float *))cuda_compute_step_factor), _Z24cuda_compute_step_factoriPfS_S_, (-1)); __cudaRegisterEntry(((void ( *)(int, float *, float *))cuda_initialize_variables), _Z25cuda_initialize_variablesiPfS_, (-1));  }
