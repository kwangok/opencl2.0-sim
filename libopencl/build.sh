#!/bin/sh

g++ -O3 -g -Wall -fPIC -std=c++0x -DCUDART_VERSION=3020 nvopencl_wrapper.cc -I/usr/local/cuda-3.2/cuda/include/ -L /usr/lib64 -lOpenCL -o bin/nvopencl_wrapper
