TARGET_PATH=/tmp2/grasslab
AMDAPP=$(TARGET_PATH)/benchmarks
Simulators_PATH=$(TARGET_PATH)/OpenCL1.X-Sim
CC=g++
Gem5gpu_opencl_lib=$(Simulators_PATH)/benchmarks/libopencl
OpenCV_include_file=$(TARGET_PATH)/opencv_gem5-gpu/include
m5thread=$(TARGET_PATH)/opencv/m5threads/pthread.o


all:
	$(CC) SIFT_OCL12.cpp -I$(AMDAPP)/include -I$(AMDAPP)/include/SDKUtil/ -L$(AMDAPP)/TempSDKUtil/lib/x86_64 -L$(Gem5gpu_opencl_lib) -lopencl -L/lib -O3 -lz -static -static-libgcc -L$(NVOPENCL_LIBDIR) -lm5op_x86 -lm -lc -I$(OpenCV_include_file) `pkg-config --static --libs opencv` $(m5thread) -g -o SIFT_OCL12
clean:
	rm -f SIFT_OCL12
