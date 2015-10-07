#ifndef CUDA_RUNTIME_API_H
#define CUDA_RUNTIME_API_H

typedef struct gpucall {
    int total_bytes;
    int num_args;
    int* arg_lengths;
    char* args;
    char* ret;
} gpusyscall_t;

enum { CUDA_MALLOC_DEVICE = 0,
       CUDA_MALLOC_HOST = 1,
       CUDA_FREE_DEVICE = 4,
       CUDA_FREE_HOST = 5
};

#endif
