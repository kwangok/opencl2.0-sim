CXX=g++
AMDAPP=${HOME}/AMD-APP-SDK-v3.0
OPENCL=${OPENCLSIM_ROOT}/benchmarks/libopencl

all:
	$(CXX) -c RangeMinimumQuery.cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil -g -std=c++0x
	$(CXX) -DGEM5_FUSION RangeMinimumQuery.o -lz -static -static-libgcc -lopencl -L$(OPENCL) -g -o gem5_fusion_RangeMinimumQuery -L/usr/lib64 -lm5op_x86 -lm -lc
clean:
	rm -f *.o gem5_fusion_RangeMinimumQuery
