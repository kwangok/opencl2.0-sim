#ifndef _GABORFILTER_H_
#define _GABORFILTER_H_

#include <cmath>
#include <stdlib.h>
#include "cv.h"
#include "cxcore.h"
#include "highgui.h"
#include <CL/cl.h>



#define PI    3.14159265
#define SIGMA 6.28318530
#define KMAX  1.57079633
#define F     1.41421356



class GaborFilter{
	public :
		 void GaborKernel_Init(int iMu, int iNu, double dSigma, double dF);
		 void GaborKernel_show(int choice);	
		 void normalize(float* in,float* out,int height,int width);
		 void cropping(float* in, float* out);
		 void LoadImage(const char* filename);
		 void ImagetoRawData(IplImage *input_image,int height,int width);
		 void saveRawtoImage(float* rawImage, const char* file_path, const unsigned int height,const unsigned int width );
		 void normalizeResult(float* output, int width);
		 void transformCLfloat2(float* real, float* image, cl_float2* complex, int height, int width, bool dir);
		 void convolution();
		 void kernel_padder(float* real,float* image, int height , int width);

	public :
		int img_height;
		int img_width;
		int out_height;
		int out_width;
		double iSigma;
		double iF;
		double iKmax;
		double iK;
		double iPhi;		
		int iWidth;
		float *mReal;
        float *mImag;
		float *rawImage;
		float *outputResult;
		float *outputCPU;
		float *kernel_row;
		float *kernel_col;

		

};

#endif
