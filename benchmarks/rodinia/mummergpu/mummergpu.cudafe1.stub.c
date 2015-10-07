#include "crt/host_runtime.h"
#include "mummergpu.fatbin.c"
extern void __device_stub__Z15mummergpuKernelPvPcP12_PixelOfNodeP16_PixelOfChildrenS0_PKiS6_ii(void *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, char *, const int *, const int *, const int, const int);
extern void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *, char *, const int *, const int *, const int, const int);
extern void __device_stub__Z11printKernelP9MatchInfoiP9AlignmentPcP12_PixelOfNodeP16_PixelOfChildrenPKiS9_iiiii(MatchInfo *, int, Alignment *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, const int *, const int *, const int, const int, const int, const int, const int);
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_a6baf3c4(void) __attribute__((__constructor__));
void __device_stub__Z15mummergpuKernelPvPcP12_PixelOfNodeP16_PixelOfChildrenS0_PKiS6_ii(void *__par0, char *__par1, struct _PixelOfNode *__par2, struct _PixelOfChildren *__par3, char *__par4, const int *__par5, const int *__par6, const int __par7, const int __par8){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaSetupArgSimple(__par7, 56UL);__cudaSetupArgSimple(__par8, 60UL);__cudaLaunch(((char *)((void ( *)(void *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, char *, const int *, const int *, const int, const int))mummergpuKernel)));}
# 848 "./mummergpu_kernel.cuh"
void mummergpuKernel( void *__cuda_0,char *__cuda_1,struct _PixelOfNode *__cuda_2,struct _PixelOfChildren *__cuda_3,char *__cuda_4,const int *__cuda_5,const int *__cuda_6,const int __cuda_7,const int __cuda_8)
# 881 "./mummergpu_kernel.cuh"
{__device_stub__Z15mummergpuKernelPvPcP12_PixelOfNodeP16_PixelOfChildrenS0_PKiS6_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8);
# 1030 "./mummergpu_kernel.cuh"
}
# 1 "mummergpu.cudafe1.stub.c"
void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( struct MatchCoord *__par0,  char *__par1,  const int *__par2,  const int *__par3,  const int __par4,  const int __par5) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 36UL); __cudaLaunch(((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel))); }
# 1037 "./mummergpu_kernel.cuh"
void mummergpuRCKernel( struct MatchCoord *__cuda_0,char *__cuda_1,const int *__cuda_2,const int *__cuda_3,const int __cuda_4,const int __cuda_5)
# 1043 "./mummergpu_kernel.cuh"
{__device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 1210 "./mummergpu_kernel.cuh"
}
# 1 "mummergpu.cudafe1.stub.c"
void __device_stub__Z11printKernelP9MatchInfoiP9AlignmentPcP12_PixelOfNodeP16_PixelOfChildrenPKiS9_iiiii( MatchInfo *__par0,  int __par1,  Alignment *__par2,  char *__par3,  struct _PixelOfNode *__par4,  struct _PixelOfChildren *__par5,  const int *__par6,  const int *__par7,  const int __par8,  const int __par9,  const int __par10,  const int __par11,  const int __par12) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaSetupArgSimple(__par6, 48UL); __cudaSetupArgSimple(__par7, 56UL); __cudaSetupArgSimple(__par8, 64UL); __cudaSetupArgSimple(__par9, 68UL); __cudaSetupArgSimple(__par10, 72UL); __cudaSetupArgSimple(__par11, 76UL); __cudaSetupArgSimple(__par12, 80UL); __cudaLaunch(((char *)((void ( *)(MatchInfo *, int, Alignment *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, const int *, const int *, const int, const int, const int, const int, const int))printKernel))); }
# 1213 "./mummergpu_kernel.cuh"
void printKernel( MatchInfo *__cuda_0,int __cuda_1,Alignment *__cuda_2,char *__cuda_3,struct _PixelOfNode *__cuda_4,struct _PixelOfChildren *__cuda_5,const int *__cuda_6,const int *__cuda_7,const int __cuda_8,const int __cuda_9,const int __cuda_10,const int __cuda_11,const int __cuda_12)
# 1244 "./mummergpu_kernel.cuh"
{__device_stub__Z11printKernelP9MatchInfoiP9AlignmentPcP12_PixelOfNodeP16_PixelOfChildrenPKiS9_iiiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);
# 1498 "./mummergpu_kernel.cuh"
}
# 1 "mummergpu.cudafe1.stub.c"
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_a6baf3c4(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(MatchInfo *, int, Alignment *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, const int *, const int *, const int, const int, const int, const int, const int))printKernel), _Z11printKernelP9MatchInfoiP9AlignmentPcP12_PixelOfNodeP16_PixelOfChildrenPKiS9_iiiii, (-1)); __cudaRegisterEntry(((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel), _Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii, (-1)); __cudaRegisterEntry(((void ( *)(void *, char *, struct _PixelOfNode *, struct _PixelOfChildren *, char *, const int *, const int *, const int, const int))mummergpuKernel), _Z15mummergpuKernelPvPcP12_PixelOfNodeP16_PixelOfChildrenS0_PKiS6_ii, (-1));  }
