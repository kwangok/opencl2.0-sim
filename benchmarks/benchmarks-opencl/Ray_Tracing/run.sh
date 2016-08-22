#!/bin/sh
#If Kernel requires more resources than shader has, than modifiy gpgpu_shader_registers more bigger( in file "OpenCL1.X-Sim/gem5-gpu/configs/gpu_config/gpgpusim.config.template" ).
#If camera.h not found, mv camera.h ray.h scene.h vec.h to nvwrapper file. 
Gem5gpu_PATH=/tmp2/grasslab/OpenCL1.X-Sim
BENCHMARKS_PATH=/tmp2/grasslab/benchmarks
BENCHMARKS_NAME=Ray_Tracing
BENCHMARKS_OBJ=rtcore
# Test_file "1 16 16", "1 32 32", "1 64 64"
TEST_FILE="1 64 64"

$Gem5gpu_PATH/gem5/build/X86_VI_hammer_GPU/gem5.opt $Gem5gpu_PATH/gem5-gpu/configs/se_fusion.py -c $BENCHMARKS_PATH/$BENCHMARKS_NAME/$BENCHMARKS_OBJ -o "$TEST_FILE"
