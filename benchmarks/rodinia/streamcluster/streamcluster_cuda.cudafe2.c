# 1 "streamcluster_cuda.cudafe1.gpu"
# 39 "streamcluster_header.cu"
struct Point;
# 1 "streamcluster_cuda.cudafe1.gpu"
typedef char __nv_bool;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 39 "streamcluster_header.cu"
struct Point {
# 40 "streamcluster_header.cu"
float weight;
# 41 "streamcluster_header.cu"
float *coord;
# 42 "streamcluster_header.cu"
long assign;
# 43 "streamcluster_header.cu"
float cost; char __nv_no_debug_dummy_end_padding_0[4];};
# 44 "streamcluster_header.cu"
typedef struct Point Point;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "streamcluster_cuda.cudafe2.stub.c"
