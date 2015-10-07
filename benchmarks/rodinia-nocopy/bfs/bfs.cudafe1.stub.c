#include "crt/host_runtime.h"
#include "bfs.fatbin.c"
extern void __device_stub__Z6KernelP4NodePiPbS2_S2_S1_i(struct Node *, int *, bool *, bool *, bool *, int *, int);
extern void __device_stub__Z7Kernel2PbS_S_S_i(bool *, bool *, bool *, bool *, int);
static void __sti____cudaRegisterAll_11_bfs_cpp1_ii_ad18112b(void) __attribute__((__constructor__));
void __device_stub__Z6KernelP4NodePiPbS2_S2_S1_i(struct Node *__par0, int *__par1, bool *__par2, bool *__par3, bool *__par4, int *__par5, int __par6){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaLaunch(((char *)((void ( *)(struct Node *, int *, bool *, bool *, bool *, int *, int))Kernel)));}
# 22 "./kernel.cu"
void Kernel( struct Node *__cuda_0,int *__cuda_1,bool *__cuda_2,bool *__cuda_3,bool *__cuda_4,int *__cuda_5,int __cuda_6)
# 23 "./kernel.cu"
{__device_stub__Z6KernelP4NodePiPbS2_S2_S1_i( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 38 "./kernel.cu"
}
# 1 "bfs.cudafe1.stub.c"
void __device_stub__Z7Kernel2PbS_S_S_i( bool *__par0,  bool *__par1,  bool *__par2,  bool *__par3,  int __par4) {  __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(bool *, bool *, bool *, bool *, int))Kernel2))); }
# 22 "./kernel2.cu"
void Kernel2( bool *__cuda_0,bool *__cuda_1,bool *__cuda_2,bool *__cuda_3,int __cuda_4)
# 23 "./kernel2.cu"
{__device_stub__Z7Kernel2PbS_S_S_i( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 33 "./kernel2.cu"
}
# 1 "bfs.cudafe1.stub.c"
static void __sti____cudaRegisterAll_11_bfs_cpp1_ii_ad18112b(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(bool *, bool *, bool *, bool *, int))Kernel2), _Z7Kernel2PbS_S_S_i, (-1)); __cudaRegisterEntry(((void ( *)(struct Node *, int *, bool *, bool *, bool *, int *, int))Kernel), _Z6KernelP4NodePiPbS2_S2_S1_i, (-1));  }
