CXX=g++
AMDAPP=${HOME}/AMD-APP-SDK-v3.0
OPENCL=${OPENCLSIM_ROOT}/benchmarks/libopencl
NAME=CalcPie
EXECUTABLE=gem5_fusion_$(NAME)

all:
	$(CXX) -c $(NAME).cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil -g -std=c++0x
	$(CXX) $(NAME).o -lz -static -static-libgcc -lopencl -L$(OPENCL) -g -o $(EXECUTABLE) -L/usr/lib64 -lm5op_x86 -lm -lc
profile:
	$(CXX) -DGEM5_FUSION -DPROFILE -c $(NAME).cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil -g -std=c++0x
	$(CXX) $(NAME).o -lz -static -static-libgcc -lopencl -L$(OPENCL) -g -o $(EXECUTABLE) -L/usr/lib64 -lm5op_x86 -lm -lc
clean:
	rm -f *.o $(EXECUTABLE)
