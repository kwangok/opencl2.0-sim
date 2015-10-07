# 1 "nn_cuda.cudafe1.gpu"
# 22 "nn_cuda.cu"
struct latLong;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 22 "nn_cuda.cu"
struct latLong {
# 24 "nn_cuda.cu"
float lat;
# 25 "nn_cuda.cu"
float lng;};
# 26 "nn_cuda.cu"
typedef struct latLong LatLong;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 51 "nn_cuda.cu"
extern int sqrtf();

#include "nn_cuda.cudafe2.stub.c"
