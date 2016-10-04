#!/bin/sh

cd benchmarks/libopencl
make

cd ../../gpgpu-sim/cuda-sim
bison --name-prefix=ptx_ -v -d ptx.y --file-prefix=ptx

cd ../../gem5
scons build/X86_VI_hammer_GPU/gem5.opt --default=X86 EXTRAS=../gem5-gpu/src:../gpgpu-sim/ PROTOCOL=VI_hammer GPGPU_SIM=True
# scons build/VI_hammer/gem5.opt --default=ARM EXTRAS=../gem5-gpu/src:../gpgpu-sim/ PROTOCOL=VI_hammer GPGPU_SIM=True
