#!/bin/sh

g++ -O3 -g -Wall -fPIC -std=c++0x -DCUDART_VERSION=3020 nvopencl_wrapper.cc -I$CUDAHOME/include/ -L$NVOPENCL_LIBDIR -lOpenCL -o bin/nvopencl_wrapper
