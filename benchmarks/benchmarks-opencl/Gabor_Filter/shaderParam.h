#ifndef _SHADERPARAM_H_
#define _SHADERPARAM_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "GaborFilter.h"
using namespace std;

class shaderParam
{
public:
	shaderParam(void);
	~shaderParam(void);

	void initParam(GaborFilter &gabor);


	int nWidth;         //Output image width
    int nHeight;        //Output image height
    int nInWidth;       //Input  image width
    int nInHeight;      //Input  image height
    int nFilterWidth;   //Filter size is nFilterWidth X nFilterWidth
    int nIterations;    //Run timing loop for nIterations

    enum {WORK_DIM=2};
    size_t globalNDWorkSize[WORK_DIM];  //Total number of work items
    size_t localNDWorkSize[WORK_DIM];   //Work items in each work-group

    std::string kernelFile; //File that contains all the kernels
    //Vector to store all kernels
    std::vector<std::string> kernelNames;
    int nTotalKernels;  //kernelNames.size()
};

#endif