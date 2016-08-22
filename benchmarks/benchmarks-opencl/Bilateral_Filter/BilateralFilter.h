#include "cv.h"
#include "cxcore.h"

class BilateralFilter{
	
public:
	/*
	IplImage * image;
	IplImage * rimage;
	*/

	float kernelRadius;
	float ** kernelD;
	float *gaussSimilarity;
	
	float *clkernelD;
	float *clkernelR;

	BilateralFilter( float sigmaD, float sigmaR,int *dsize,int *rsize);
	float gauss(float sigma, int x, int y);
	/*
	IplImage * runFilter();
	void apply(int i, int j);
	bool isInsideBoundaries(int m, int n);
	float similarity(int p, int s);
	float gauss(float sigma, int x, int y);
	float BilateralFilter::getSpatialWeight(int m, int n, int i, int j);
	*/
};