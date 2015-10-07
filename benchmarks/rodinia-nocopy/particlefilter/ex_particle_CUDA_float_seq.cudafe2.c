# 1 "ex_particle_CUDA_float_seq.cudafe1.gpu"
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 100 "ex_particle_CUDA_float_seq.cu"
extern int fdivide();
# 100 "ex_particle_CUDA_float_seq.cu"
extern int powif();
# 132 "ex_particle_CUDA_float_seq.cu"
extern int fdividef();
# 132 "ex_particle_CUDA_float_seq.cu"
extern int fabsf();
# 170 "ex_particle_CUDA_float_seq.cu"
extern int cosf();
# 171 "ex_particle_CUDA_float_seq.cu"
extern int logf();
# 172 "ex_particle_CUDA_float_seq.cu"
extern int sqrtf();
# 186 "ex_particle_CUDA_float_seq.cu"
extern int expf();
# 324 "ex_particle_CUDA_float_seq.cu"
extern int __float2int_rz();

#include "ex_particle_CUDA_float_seq.cudafe2.stub.c"
