# 1 "find_ellipse_kernel.cudafe1.gpu"
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 64 "find_ellipse_kernel.cu"
extern int fdividef();
# 27 "find_ellipse_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(t_grad_x,t_grad_x);
# 28 "find_ellipse_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(t_grad_y,t_grad_y);
# 140 "find_ellipse_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(t_img,t_img);

#include "find_ellipse_kernel.cudafe2.stub.c"
