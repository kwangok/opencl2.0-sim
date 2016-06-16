#!/bin/sh
Gem5gpu_PATH=/tmp2/grasslab/OpenCL1.X-Sim
BENCHMARKS_PATH=/tmp2/grasslab/benchmarks
BENCHMARKS_NAME=Bilateral_Filter
BENCHMARKS_OBJ=Source
TEST_FILE_PATH=$BENCHMARKS_PATH/$BENCHMARKS_NAME/inputfile
TEST_FILE=lena_128.bmp

$Gem5gpu_PATH/gem5/build/X86_VI_hammer_GPU/gem5.opt $Gem5gpu_PATH/gem5-gpu/configs/se_fusion.py -c $BENCHMARKS_PATH/$BENCHMARKS_NAME/$BENCHMARKS_OBJ -o "$TEST_FILE_PATH/$TEST_FILE" 2>error.log
