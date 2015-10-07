#include "crt/host_runtime.h"
#include "euler3d.fatbin.c"
extern void __device_stub__Z25cuda_initialize_variablesiPf(int, float *);
extern void __device_stub__Z24cuda_compute_step_factoriPfS_S_(int, float *, float *, float *);
extern void __device_stub__Z17cuda_compute_fluxiPiPfS0_S0_(int, int *, float *, float *, float *);
extern void __device_stub__Z14cuda_time_stepiiPfS_S_S_(int, int, float *, float *, float *, float *);
static void __sti____cudaRegisterAll_15_euler3d_cpp1_ii_78e67203(void) __attribute__((__constructor__));
void __device_stub__Z25cuda_initialize_variablesiPf(int __par0, float *__par1){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(int, float *))cuda_initialize_variables)));}
# 128 "euler3d.cu"
void cuda_initialize_variables( int __cuda_0,float *__cuda_1)
# 129 "euler3d.cu"
{__device_stub__Z25cuda_initialize_variablesiPf( __cuda_0,__cuda_1);



}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z24cuda_compute_step_factoriPfS_S_( int __par0,  float *__par1,  float *__par2,  float *__par3) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(int, float *, float *, float *))cuda_compute_step_factor))); }
# 184 "euler3d.cu"
void cuda_compute_step_factor( int __cuda_0,float *__cuda_1,float *__cuda_2,float *__cuda_3)
# 185 "euler3d.cu"
{__device_stub__Z24cuda_compute_step_factoriPfS_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 203 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z17cuda_compute_fluxiPiPfS0_S0_( int __par0,  int *__par1,  float *__par2,  float *__par3,  float *__par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(int, int *, float *, float *, float *))cuda_compute_flux))); }
# 215 "euler3d.cu"
void cuda_compute_flux( int __cuda_0,int *__cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4)
# 216 "euler3d.cu"
{__device_stub__Z17cuda_compute_fluxiPiPfS0_S0_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 344 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
void __device_stub__Z14cuda_time_stepiiPfS_S_S_( int __par0,  int __par1,  float *__par2,  float *__par3,  float *__par4,  float *__par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 4UL); __cudaSetupArgSimple(__par2, 8UL); __cudaSetupArgSimple(__par3, 16UL); __cudaSetupArgSimple(__par4, 24UL); __cudaSetupArgSimple(__par5, 32UL); __cudaLaunch(((char *)((void ( *)(int, int, float *, float *, float *, float *))cuda_time_step))); }
# 352 "euler3d.cu"
void cuda_time_step( int __cuda_0,int __cuda_1,float *__cuda_2,float *__cuda_3,float *__cuda_4,float *__cuda_5)
# 353 "euler3d.cu"
{__device_stub__Z14cuda_time_stepiiPfS_S_S_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 363 "euler3d.cu"
}
# 1 "euler3d.cudafe1.stub.c"
static void __sti____cudaRegisterAll_15_euler3d_cpp1_ii_78e67203(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int, float *, float *, float *, float *))cuda_time_step), _Z14cuda_time_stepiiPfS_S_S_, (-1)); __cudaRegisterEntry(((void ( *)(int, int *, float *, float *, float *))cuda_compute_flux), _Z17cuda_compute_fluxiPiPfS0_S0_, (-1)); __cudaRegisterEntry(((void ( *)(int, float *, float *, float *))cuda_compute_step_factor), _Z24cuda_compute_step_factoriPfS_S_, (-1)); __cudaRegisterEntry(((void ( *)(int, float *))cuda_initialize_variables), _Z25cuda_initialize_variablesiPf, (-1)); __cudaRegisterVariable(__shadow_var(ff_variable,ff_variable), 0, 20, 1, 0); __cudaRegisterVariable(__shadow_var(ff_flux_contribution_momentum_x,ff_flux_contribution_momentum_x), 0, 12, 1, 0); __cudaRegisterVariable(__shadow_var(ff_flux_contribution_momentum_y,ff_flux_contribution_momentum_y), 0, 12, 1, 0); __cudaRegisterVariable(__shadow_var(ff_flux_contribution_momentum_z,ff_flux_contribution_momentum_z), 0, 12, 1, 0); __cudaRegisterVariable(__shadow_var(ff_flux_contribution_density_energy,ff_flux_contribution_density_energy), 0, 12, 1, 0);  }
