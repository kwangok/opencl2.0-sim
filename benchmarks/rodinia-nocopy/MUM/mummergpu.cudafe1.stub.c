#include "crt/host_runtime.h"
#include "mummergpu.fatbin.c"
struct __T20 {struct MatchCoord *__par0;char *__par1;const int *__par2;const int *__par3;int __par4;int __par5;int __dummy_field;__pad__(volatile char __dummy[4];)};
struct __T21 {struct MatchCoord *__par0;char *__par1;const int *__par2;const int *__par3;int __par4;int __par5;int __dummy_field;__pad__(volatile char __dummy[4];)};
extern void __device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *, char *, const int *, const int *, const int, const int);
extern void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *, char *, const int *, const int *, const int, const int);
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_nodetex(void) __attribute__((__constructor__));
void __device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *__par0, char *__par1, const int *__par2, const int *__par3, const int __par4, const int __par5){ struct __T20 *__T27 = 0;
__cudaSetupArg(__par0, __T27);__cudaSetupArg(__par1, __T27);__cudaSetupArg(__par2, __T27);__cudaSetupArg(__par3, __T27);__cudaSetupArg(__par4, __T27);__cudaSetupArg(__par5, __T27);__cudaLaunch(((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuKernel)));}
void mummergpuKernel( struct MatchCoord *__cuda_0,char *__cuda_1,const int *__cuda_2,const int *__cuda_3,const int __cuda_4,const int __cuda_5)
# 74 "./mummergpu_kernel.cu"
{__device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 228 "./mummergpu_kernel.cu"
}
# 1 "mummergpu.cudafe1.stub.c"
void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( struct MatchCoord *__par0,  char *__par1,  const int *__par2,  const int *__par3,  const int __par4,  const int __par5) {  struct __T21 *__T28 = 0;
__cudaSetupArg(__par0, __T28); __cudaSetupArg(__par1, __T28); __cudaSetupArg(__par2, __T28); __cudaSetupArg(__par3, __T28); __cudaSetupArg(__par4, __T28); __cudaSetupArg(__par5, __T28); __cudaLaunch(((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel))); }
void mummergpuRCKernel( struct MatchCoord *__cuda_0,char *__cuda_1,const int *__cuda_2,const int *__cuda_3,const int __cuda_4,const int __cuda_5)
# 242 "./mummergpu_kernel.cu"
{__device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 402 "./mummergpu_kernel.cu"
}
# 1 "mummergpu.cudafe1.stub.c"
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_nodetex(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel), _Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii, (-1)); __cudaRegisterEntry(((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuKernel), _Z15mummergpuKernelP10MatchCoordPcPKiS3_ii, (-1)); __cudaRegisterGlobalTexture(__text_var(nodetex,nodetex), 2, 0, 0); __cudaRegisterGlobalTexture(__text_var(childrentex,childrentex), 2, 0, 0); __cudaRegisterGlobalTexture(__text_var(reftex,reftex), 2, 0, 0);  }
