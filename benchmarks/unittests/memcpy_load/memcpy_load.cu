/*****************************************************************************
 * A microbenchmark to test the performance of varying memory copy operations
 * including different sizes and different sources and destinations
 ****************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
extern "C" {
    void m5_dumpreset_stats(uint64_t workid, uint64_t threadid);
}

int main(int argc, char** argv) {

    unsigned minimum_elements = 2;
    unsigned maximum_elements = 16 * 1024 * 1024;

    for (int index = 0; index < argc; ++index) {
        if (strcmp(argv[index], "-m") == 0) {
            if (argc > index+1) {
                minimum_elements = atoi(argv[++index]);
            } else {
                printf("ERROR: Must specify minimum array size to -m option\n");
                exit(0);
            }
        } else if (strcmp(argv[index], "-M") == 0) {
            if (argc > index+1) {
                maximum_elements = atoi(argv[++index]);
            } else {
                printf("ERROR: Must specify maximum array size to -M option\n");
                exit(0);
            }
        }
    }

    bool power_two = true;
    unsigned *array = (unsigned*) malloc(maximum_elements * sizeof(unsigned));
    unsigned *d_array;
    cudaMalloc(&d_array, maximum_elements * sizeof(unsigned));

    printf("Testing copy host-to-device:\nSize:\n");
    m5_dumpreset_stats(0, 0);
    for (unsigned i = minimum_elements; i <= maximum_elements;) {
        printf("%d\n", i);
        cudaMemcpy(d_array, array, i * sizeof(unsigned), cudaMemcpyHostToDevice);
        m5_dumpreset_stats(0, 0);
        if (power_two) {
            if (i > 1) {
                i = 3 * i / 2;
                power_two = false;
            } else {
                i = 2;
            }
        } else {
            i = 4 * i / 3;
            power_two = true;
        }
    }

    printf("\n\nTesting copy device-to-host:\nSize:\n");
    m5_dumpreset_stats(0, 0);
    for (unsigned i = minimum_elements; i <= maximum_elements;) {
        printf("%d\n", i);
        cudaMemcpy(array, d_array, i * sizeof(unsigned), cudaMemcpyDeviceToHost);
        m5_dumpreset_stats(0, 0);
        if (power_two) {
            if (i > 1) {
                i = 3 * i / 2;
                power_two = false;
            } else {
                i = 2;
            }
        } else {
            i = 4 * i / 3;
            power_two = true;
        }
    }
    printf("\n");
    free(array);
    cudaFree(d_array);

    return 0;
}
