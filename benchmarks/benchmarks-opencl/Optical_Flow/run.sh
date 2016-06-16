#!/bin/sh
#If Kernel requires more resources than shader has, than modifiy gpgpu_shader_registers more bigger( in file "OpenCL1.X-Sim/gem5-gpu/configs/gpu_config/gpgpusim.config.template" ).
Gem5gpu_PATH=/tmp2/grasslab/OpenCL1.X-Sim
BENCHMARKS_PATH=/tmp2/grasslab/benchmarks
BENCHMARKS_NAME=Optical_Flow
BENCHMARKS_OBJ=Source
TEST_FILE_PATH=$BENCHMARKS_PATH/$BENCHMARKS_NAME/inputfile
TEST_FILE_1=000000122_large.png
TEST_FILE_2=000000132_large.png


$Gem5gpu_PATH/gem5/build/X86_VI_hammer_GPU/gem5.opt $Gem5gpu_PATH/gem5-gpu/configs/se_fusion.py -c $BENCHMARKS_PATH/$BENCHMARKS_NAME/$BENCHMARKS_OBJ -o "$TEST_FILE_PATH/$TEST_FILE_1 $TEST_FILE_PATH/$TEST_FILE_2"
