# 1 "bfs.cudafe1.gpu"
# 39 "bfs.cu"
struct Node;
# 1 "bfs.cudafe1.gpu"
typedef char __nv_bool;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 39 "bfs.cu"
struct Node {
# 41 "bfs.cu"
int starting;
# 42 "bfs.cu"
int no_of_edges;};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "bfs.cudafe2.stub.c"
