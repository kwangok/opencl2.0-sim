TARGET_PATH=/tmp2/grasslab
AMDAPP=$(TARGET_PATH)/benchmarks
Simulators_PATH=$(TARGET_PATH)/OpenCL1.X-Sim
Gem5gpu_opencl_lib=$(Simulators_PATH)/benchmarks/libopencl
OpenCV_include_file=$(TARGET_PATH)/opencv_gem5-gpu/include
m5thread=$(TARGET_PATH)/opencv/m5threads/pthread.o


CC=g++
TEST_NAME=Source
LFLAGS= -g -Wall
INCS= -I $(AMDAPP)/include
C_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix obj/, $(notdir $(C_FILES:.cpp=.o)))


all: $(TEST_NAME)


$(TEST_NAME): $(OBJ_FILES)
	$(CC) $(LFLAGS) $(OBJ_FILES) -O2 -lm -L$(Gem5gpu_opencl_lib) -lopencl -L/lib -O3 -lz -static -static-libgcc -L$(NVOPENCL_LIBDIR) -lm5op_x86 -lm -lc -I$(OpenCV_include_file) `pkg-config --static --libs opencv` $(m5thread) -o $(TEST_NAME)



obj/%.o: %.cpp
	$(CC) -c -O2 $(CFLAGS) $(INCS) -I$(OpenCV_include_file) -o $@ $<


clean:
	rm -rf obj/*o *.brig $(TEST_NAME)











