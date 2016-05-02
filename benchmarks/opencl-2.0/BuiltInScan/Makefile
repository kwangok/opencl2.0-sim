CXX=g++
AMDAPP=${HOME}/AMD-APP-SDK-v3.0
OPENCL=${OPENCLSIM_ROOT}/benchmarks/libopencl

all:
	$(CXX) -c BuiltInScan.cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil -g -std=c++0x
	$(CXX) -DGEM5_FUSION BuiltInScan.o -lz -static -static-libgcc -lopencl -L$(OPENCL) -g -o gem5_fusion_BuiltInScan -L/usr/lib64 -lm5op_x86 -lm -lc
clean:
	rm -f *.o gem5_fusion_BuiltInScan
