CXX=g++-4.4
AMDAPP=${HOME}/AMD-APP-SDK-v3.0
OPENCL=${OPENCL2.0-SIM}/benchmarks/libopencl

all:
	$(CXX) -c RecursiveGaussian_ProgramScope.cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil -g -std=c++0x
	$(CXX) -DGEM5_FUSION RecursiveGaussian_ProgramScope.o -lz -static -static-libgcc -lopencl -L$(OPENCL) -g -o gem5_fusion_RecursiveGaussian_ProgramScope -L/usr/lib64 -lm5op_x86 -lm -lc
clean:
	rm -f *.o gem5_fusion_RecursiveGaussian_ProgramScope
