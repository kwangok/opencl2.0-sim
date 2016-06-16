#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <opencv2/features2d/features2d.hpp>
#include <fstream>
#include <CL/cl.h>
#include "CLUtil.hpp"
#include <iostream>
using namespace appsdk;
using namespace std;
using namespace cv;

struct feature
{
	int pos[2];
	int scale[2];
	float abs_sigma;
	float orient;					// (-180,180]
	float desc[128];
};

class oclSIFT
{
private:
	

/*
	LARGE_INTEGER clk0, clk1, dclk1;
	LARGE_INTEGER freq;
	float	dt1;

	LARGE_INTEGER clk0_lm, clk1_lm, dclk1_lm;
	LARGE_INTEGER freq_lm;
	float	dt1_lm;
*/

	cl_int err;
//	cl_command_queue queue;
protected:


public:
	//float max27(float* arr);
	//float min27(float* arr);
	//Point3d subpixel(float* arr);
	Point2d suborientation(float* arr);
	Point2f interp(Point2d p, Mat& image);
	void constructDoG(Mat image, const int octaves, const int intervals, const float initial_sigma, vector< vector<Mat> >& imageblurs, vector< vector<float> >& absolute_sigma, vector< vector<Mat> >& DoG);
	int localmax(vector< vector<Mat> >& DoG, const  int octaves, const int intervals, const float contrast_threshold, vector<feature>& features, vector< vector<float> >& absolute_sigma);
	int major_orientation(vector<feature>& features, int octaves, int intervals, vector< vector<Mat> >& imageblurs, vector< vector<float> >& absolute_sigma);
	void descriptor(vector<feature>& features, int octaves, int intervals, vector< vector<Mat> >& imageblurs, vector< vector<float> >& absolute_sigma);
	void mySIFT(Mat image, int octaves, int intervals, float initial_sigma, float contrast_threshold, vector<feature>& features);
	void FeatureDetection(Mat &image, Mat &descriptor, vector<KeyPoint> &keypoints);

	oclSIFT()
	{
		
	};

	~oclSIFT()
	{

	};

};
