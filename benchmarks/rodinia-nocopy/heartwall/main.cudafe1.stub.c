#include "crt/host_runtime.h"
#include "main.fatbin.c"
extern void __device_stub__Z6kernel20params_common_change13params_commonP13params_unique(params_common_change&, params_common&, params_unique *);
static void __sti____cudaRegisterAll_12_main_cpp1_ii_8fb32601(void) __attribute__((__constructor__));
void __device_stub__Z6kernel20params_common_change13params_commonP13params_unique(params_common_change&__par0, params_common&__par1, params_unique *__par2){__cudaSetupArg(__par0, 0UL);__cudaSetupArg(__par1, 16UL);__cudaSetupArgSimple(__par2, 536UL);__cudaLaunch(((char *)((void ( *)(params_common_change, params_common, params_unique *))kernel)));}
# 7 "kernel.cu"
void kernel( params_common_change __cuda_0,params_common __cuda_1,params_unique __cuda_2[51])
# 7 "kernel.cu"
{__device_stub__Z6kernel20params_common_change13params_commonP13params_unique( __cuda_0,__cuda_1,__cuda_2);
# 1333 "kernel.cu"
}
# 1 "main.cudafe1.stub.c"
static void __sti____cudaRegisterAll_12_main_cpp1_ii_8fb32601(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(params_common_change, params_common, params_unique *))kernel), _Z6kernel20params_common_change13params_commonP13params_unique, (-1));  }
