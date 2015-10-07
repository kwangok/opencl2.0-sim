# 1 "lud_kernel.cudafe1.gpu"
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 23 "lud_kernel.cu"
extern int fdividef();

#include "lud_kernel.cudafe2.stub.c"
