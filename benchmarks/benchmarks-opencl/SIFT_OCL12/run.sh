#!/bin/sh
#Gem5gpu_PATH=/tmp2/grasslab/gem5-gpu
Gem5gpu_PATH=/tmp2/grasslab/OpenCL1.X-Sim
BENCHMARKS_PATH=/tmp2/grasslab/benchmarks
BENCHMARKS_NAME=SIFT_OCL12
BENCHMARKS_OBJ=SIFT_OCL12
TEST_FILE_PATH=$BENCHMARKS_PATH/$BENCHMARKS_NAME/inputfile
TEST_FILE=lena_256.bmp

$Gem5gpu_PATH/gem5/build/X86_VI_hammer_GPU/gem5.opt $Gem5gpu_PATH/gem5-gpu/configs/se_fusion.py -c $BENCHMARKS_PATH/$BENCHMARKS_NAME/$BENCHMARKS_OBJ -o "$TEST_FILE_PATH/$TEST_FILE"
