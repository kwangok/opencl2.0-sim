#ifndef OPENCL_RUNTIME_API_H
#define OPENCL_RUNTIME_API_H

typedef struct gpucall {
    int total_bytes;
    int num_args;
    int* arg_lengths;
    char* args;
    char* ret;
} gpusyscall_t;

#define CACHE_BLOCK_SIZE_BYTES 128
#define PAGE_SIZE_BYTES 4096

__inline__ void *checkedAlignedAlloc(size_t size, size_t align_gran = CACHE_BLOCK_SIZE_BYTES)
{
    void *to_return = NULL;
    int error = posix_memalign(&to_return, align_gran, size);
    if (error) {
        fprintf(stderr, "ERROR: allocation failed with code: %d, Exiting...\n", error);
        exit(-1);
    }
    return to_return;
}

#endif
