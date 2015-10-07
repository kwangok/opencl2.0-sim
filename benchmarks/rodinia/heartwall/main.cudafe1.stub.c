#include "crt/host_runtime.h"
#include "main.fatbin.c"
extern void __device_stub__Z6kernelv(void);
static void __sti____cudaRegisterAll_12_main_cpp1_ii_b81a68a1(void) __attribute__((__constructor__));
void __device_stub__Z6kernelv(void){__cudaLaunch(((char *)((void ( *)(void))kernel)));}
# 7 "kernel.cu"
void kernel(void)
# 7 "kernel.cu"
{__device_stub__Z6kernelv();
# 1333 "kernel.cu"
}
# 1 "main.cudafe1.stub.c"
static void __sti____cudaRegisterAll_12_main_cpp1_ii_b81a68a1(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(void))kernel), _Z6kernelv, (-1)); __cudaRegisterVariable(__shadow_var(d_common_change,d_common_change), 0, 16, 1, 0); __cudaRegisterVariable(__shadow_var(d_common,d_common), 0, 520, 1, 0); __cudaRegisterVariable(__shadow_var(d_unique,d_unique), 0, 8160, 1, 0);  }
