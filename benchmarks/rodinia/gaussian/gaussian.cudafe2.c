# 1 "gaussian.cudafe1.gpu"
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 222 "gaussian.cu"
extern int fdividef();

#include "gaussian.cudafe2.stub.c"
