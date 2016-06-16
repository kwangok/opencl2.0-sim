#!/bin/sh
Gem5gpu_PATH=/tmp2/grasslab/OpenCL1.X-Sim
BENCHMARKS_PATH=/tmp2/grasslab/benchmarks
BENCHMARKS_NAME=Gabor_Filter
BENCHMARKS_OBJ=main
TEST_FILE_PATH=$BENCHMARKS_PATH/$BENCHMARKS_NAME/inputfile
TEST_FILE=lena_128.bmp

$Gem5gpu_PATH/gem5/build/X86_VI_hammer_GPU/gem5.opt $Gem5gpu_PATH/gem5-gpu/configs/se_fusion.py -c $BENCHMARKS_PATH/$BENCHMARKS_NAME/$BENCHMARKS_OBJ -o "$TEST_FILE_PATH/$TEST_FILE"

mv FFT.jpg FFT_128_gem5gpu.jpg
mv output_gabor.jpg output_gabor_128_gem5gpu.jpg
mv sep_output.jpg sep_output_128_gem5gpu.jpg
