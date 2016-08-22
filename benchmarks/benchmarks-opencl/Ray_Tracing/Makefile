TARGET_PATH=/tmp2/grasslab
AMDAPP=$(TARGET_PATH)/benchmarks
Simulators_PATH=$(TARGET_PATH)/OpenCL1.X-Sim
Gem5gpu_opencl_lib=$(Simulators_PATH)/benchmarks/libopencl
OpenCV_include_file=$(TARGET_PATH)/opencv_gem5-gpu/include
m5thread=$(TARGET_PATH)/opencv/m5threads/pthread.o


CC=gcc
CC2=g++
TEST_NAME=rtcore
LFLAGS= -g -Wall
INCS= -I $(AMDAPP)/include
C_FILES := $(wildcard *.c)
OBJ_FILES := $(addprefix obj/, $(notdir $(C_FILES:.c=.o)))



all: $(TEST_NAME)


$(TEST_NAME): $(OBJ_FILES)
	$(CC2) $(LFLAGS) $(OBJ_FILES) -O2 -o $(TEST_NAME) -L$(Gem5gpu_opencl_lib) -lopencl -L/lib -lz -static -static-libgcc -L$(NVOPENCL_LIBDIR) -lm5op_x86 -lm -lc



obj/%.o: %.c
	$(CC) -c -O2 $(CFLAGS) $(INCS) -o $@ $<


clean:
	rm -rf obj/*o *.brig $(TEST_NAME)

