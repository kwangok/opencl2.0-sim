#include "shaderParam.h"


shaderParam::shaderParam(void)
{
}


shaderParam::~shaderParam(void)
{
}

void shaderParam::initParam(GaborFilter &gabor)
{
	nInWidth = gabor.img_width;
	nInHeight = gabor.img_height;
	nFilterWidth = gabor.iWidth;
	
	nWidth = nInWidth - nFilterWidth +1 ;
	nHeight = nInHeight - nFilterWidth + 1;

	nIterations = 1;

	globalNDWorkSize[0] = nWidth;
	globalNDWorkSize[1] = nHeight;
	localNDWorkSize[0] = 8;
	localNDWorkSize[1] = 8;

	kernelFile = "Kernels.cl";
	kernelNames.push_back("convolution_direct");
	kernelNames.push_back("bitReverse");
	kernelNames.push_back("butterfly");
	kernelNames.push_back("norm");
	kernelNames.push_back("spinFact");
	kernelNames.push_back("transpose");
	kernelNames.push_back("multiply");
	kernelNames.push_back("transposeMatrix"); //7
	kernelNames.push_back("mySeparableConvolution"); //8
	nTotalKernels = kernelNames.size();
}
