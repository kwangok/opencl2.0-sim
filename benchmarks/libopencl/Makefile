GNUC_CPP0X := $(shell gcc --version | perl -ne 'if (/gcc\s+\(.*\)\s+([0-9.]+)/){ if($$1 >= 4.3) {$$n=1} else {$$n=0;} } END { print $$n; }')
ifeq ($(GNUC_CPP0X), 1)
    CXXFLAGS = -std=c++0x
endif

CPP = g++
CC = gcc
CREATELIBRARY = 1
DEBUG ?= 0
ifeq ($(DEBUG),1)
	CXXFLAGS +=  -Wall -g -fPIC $(GL)
else
	CXXFLAGS += -O3 -g -Wall -fPIC $(GL)
endif

M5OP = m5op_x86

OPENCL = opencl
OPENCL_SRCS = opencl_runtime_api.cc
OPENCL_OBJS = $(OPENCL_SRCS:%.cc=%.o) $(M5OP).o
OPENCLHOME ?= ./include

NVOPENCL_LIBDIR ?= /path/to/your/OpenCL/lib
CUDAHOME ?= /path/to/your/cuda

CXXFLAGS =

CCFLAGS = -O3 -g -Wall -fPIC -std=c++0x -DCUDART_VERSION=4020

.PHONY: clean

#--- Make rules ---

all: lib$(OPENCL).a nvopencl_wrapper

lib$(OPENCL).a: $(OPENCL_OBJS)
	ar rcs lib$(M5OP).a $(M5OP).o
	ar rcs lib$(OPENCL).a $(OPENCL_OBJS)

nvopencl_wrapper: nvopencl_wrapper.cc
	g++ $(CCFLAGS) nvopencl_wrapper.cc -I$(OPENCLHOME)/include -L$(NVOPENCL_LIBDIR) -lOpenCL -o nvopencl_wrapper
	
%.o: %.cc
	$(CPP) $(CXXFLAGS) -I./ -I$(OPENCLHOME)/include -I$(CUDAHOME)/include -c $< -o $@

clean:
	rm -f *.o
	rm -f lib$(OPENCL).a lib$(M5OP).a
	rm -f nvopencl_wrapper
