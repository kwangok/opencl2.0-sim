#ifndef _SHADERHANDLER_H_
#define _SHADERHANDLER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <CL/cl.h>
#include "shaderParam.h"
#include "GaborFilter.h"
#include "Time.h"

using namespace std;

class shaderHandler
{
public:
	shaderHandler(void);
	~shaderHandler(void);

	void initCL();
	void releaseCL();
	void LoadCLFile(const string filename);
	void setParam(shaderParam* _param);
	void setGabor(GaborFilter* _gabor);
	void createBuffer();
	void releaseBuffer();
	void setKernelArgs(int nKernel);
	void enqueueKernel(int nKernel, bool blocking=false);
	void Run();
	void Run2();
	void Run3();
	void RunFFT(cl_mem dst, cl_mem src, cl_mem w, int direction);
	void RunMultiply(cl_mem dst, cl_mem kernel);
	void RunFFT_CPU();
	void RunSepConvolution(cl_mem dst, cl_mem src, cl_mem filter, int dir);


	cl_context context;
	std::vector<cl_device_id> devices;
	cl_command_queue queue;
	cl_program program;
	std::vector<cl_kernel> kernels;

	shaderParam* param;
	GaborFilter* gabor;
	cl_mem cl_input;
	cl_mem cl_filter;
	cl_mem cl_output;
	cl_mem cl_filter1D_row;
	cl_mem cl_filter1D_col;
	cl_mem cl_output_sepConvolution;

	float* output;
	CPerfCounter counter;

	static const cl_uint
    ROWS_BLOCKDIM_X   = 16, COLUMNS_BLOCKDIM_X = 16,
    ROWS_BLOCKDIM_Y   = 4,  COLUMNS_BLOCKDIM_Y = 8,
    ROWS_RESULT_STEPS = 4,  COLUMNS_RESULT_STEPS = 4,
    ROWS_HALO_STEPS   = 1,  COLUMNS_HALO_STEPS = 1;
};

#endif