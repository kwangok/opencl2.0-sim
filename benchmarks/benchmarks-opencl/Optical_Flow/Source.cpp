#include "stdio.h"
#include "stdlib.h"
#include <time.h>
#include <omp.h>
#include <vector>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "CL/cl.h"
#include <CL/cl_platform.h>
#include "CL/opencl.h"
#include "CLUtil.hpp"
#include "string.h"
int convertToString(const char *filename, std::string& s)
{
	size_t size;
	char*  str;
	std::fstream f(filename, (std::fstream::in | std::fstream::binary));

	if(f.is_open())
	{
		size_t fileSize;
		f.seekg(0, std::fstream::end);
		size = fileSize = (size_t)f.tellg();
		f.seekg(0, std::fstream::beg);
		str = new char[size+1];
		if(!str)
		{
			f.close();
			return 0;
		}

		f.read(str, fileSize);
		f.close();
		str[size] = '\0';
		s = str;
		delete[] str;
		return 0;
	}
	return -1;
}
using namespace appsdk;

void smoothX(int *in, int *out, int w, int h){
	for (int i = 0; i < h*w; i++){
		int x = i % w;
		int y = i / w;

		if (x >= w || y >= h)
			return;

		int idx = y*w;

		int a = x - 2;
		int b = x - 1;
		int c = x;
		int d = x + 1;
		int e = x + 2;

		if (a < 0) a = 0;
		if (b < 0) b = 0;
		if (d >= w) d = w - 1;
		if (e >= w) e = w - 1;

		out[y*w + x] = 0.0625f*in[idx + a] + 0.25f*in[idx + b] + 0.375f*in[idx + c] + 0.25f*in[idx + d] + 0.0625f*in[idx + e];
	}
}
void smoothY(int *in, int *out, int w, int h){
	for (int i = 0; i < h*w; i++){
		int x = i % w;
		int y = i / w;

		if (x >= w || y >= h)
			return;

		int a = y - 2;
		int b = y - 1;
		int c = y;
		int d = y + 1;
		int e = y + 2;

		if (a < 0) a = 0;
		if (b < 0) b = 0;
		if (d >= h) d = h - 1;
		if (e >= h) e = h - 1;

		out[y*w + x] = 0.0625f*in[a*w + x] + 0.25f*in[b*w + x] + 0.375f*in[c*w + x] + 0.25f*in[d*w + x] + 0.0625f*in[e*w + x];
	}
}
void pyrDownsample(int *in, int w, int h, int *out, int nw, int nh){
	for (int i = 0; i < h*w; i++){
		int x2 = i % w;
		int y2 = i / w;


		if ((x2 < nw) && (y2 < nh)) {
			int x = x2 * 2;
			int y = y2 * 2;
			int x_1 = x - 1;
			int y_1 = y - 1;
			int x_2 = x + 1;
			int y_2 = y + 1;

			if (x_1 < 0) x_1 = 0;
			if (y_1 < 0) y_1 = 0;
			if (x_2 >= w) x_2 = w - 1;
			if (y_2 >= h) y_2 = h - 1;

			out[y2*nw + x2] = 0.25f*in[y*w + x] + 0.125f*(in[y*w + x_1] + in[y*w + x_2] + in[y_1*w + x] + in[y_2*w + x]) +
				0.0625f*(in[y_1*w + x_1] + in[y_2*w + x_1] + in[y_1*w + x_2] + in[y_2*w + x_2]);
		}
	}

}

int main(int argc, char *argv[]){

	cv::Mat img1 = cv::imread(argv[1]);
	cv::Mat img2 = cv::imread(argv[2]);
//	cv::Mat img1 = cv::imread("000000122_test.png");
//	cv::Mat img2 = cv::imread("000000132_test.png");


	if (!img1.data || !img2.data) {
		printf("Error loading images\n");
		//system("pause");
		return 1;
	}

	cv::Mat gray1;
	cv::Mat gray2;
	cv::cvtColor(img1, gray1, CV_BGR2GRAY);
	cv::cvtColor(img2, gray2, CV_BGR2GRAY);

	cv::cvtColor(gray1, img2, CV_GRAY2BGR);

	int h1 = gray1.rows, h2 = gray2.rows;
	int	w1 = gray1.cols, w2 = gray2.cols;
	int c1 = gray1.elemSize(), c2 = gray2.elemSize();

	printf("gray1: h = %d ; w = %d ; channel = %d \n", h1, w1, c1);
	printf("gray2: h = %d ; w = %d ; channel = %d \n", h2, w2, c2);

	//w,h,local_window,pyr_w,pyr_h,scale,now_level,iniGause
	int  var[8] = { w1, h1, 6, 0, 0, 0, 0, 1 };
	int  pryh[3] = { h1, h1 / 2, h1 / 4 }, pryw[3] = { w1, w1 / 2, w1 / 4 };
	float scaling[8] = { 1, 0.5f, 0.25f, 0.125f, 0.0625f, 0.03125f, 0.015625f, 0.0078125f};

	int ** imagei1 = new int*[3];
	int ** imagei2 = new int*[3];
	for (int i = 0; i < 3; i++){
		imagei1[i] = new int[pryh[i] * pryw[i]];
		imagei2[i] = new int[pryh[i] * pryw[i]];
	}

	for (int j = 0; j < h1; j++)
	for (int i = 0; i < w1; i++){
		imagei1[0][j*w1 + i] = gray1.at<uchar>(j, i);
		imagei2[0][j*w1 + i] = gray2.at<uchar>(j, i);
	}

	// build pryamid
	for (int level = 0; level < 2; level++){

		int *imageox1, *imageox2;
		int *imageoy1, *imageoy2;
		imageox1 = new int[pryw[level] * pryh[level]];
		imageox2 = new int[pryw[level] * pryh[level]];
		imageoy1 = new int[pryw[level] * pryh[level]];
		imageoy2 = new int[pryw[level] * pryh[level]];

		smoothX(imagei1[level], imageox1, pryw[level], pryh[level]);
		smoothX(imagei2[level], imageox2, pryw[level], pryh[level]);
		smoothY(imageox1, imageoy1, pryw[level], pryh[level]);
		smoothY(imageox2, imageoy2, pryw[level], pryh[level]);


		pyrDownsample(imageoy1, pryw[level], pryh[level], imagei1[level + 1], pryw[level + 1], pryh[level + 1]);
		pyrDownsample(imageoy2, pryw[level], pryh[level], imagei2[level + 1], pryw[level + 1], pryh[level + 1]);

		delete[]  imageox1;
		delete[]  imageox2;
		delete[]  imageoy1;
		delete[]  imageoy2;
	}

	float *Vx = new float[pryw[0] * pryh[0]],
		*Vy = new float[pryw[0] * pryh[0]];
	int	*state = new int[pryw[0] * pryh[0]];

	for (int i = 0; i < pryw[0] * pryh[0]; i++){
		Vx[i] = 0;
		Vy[i] = 0;
		state[i] = 1;
	}


	//-------------------------------------------------------------------------------------------------------------
	cl_platform_id Pid;
	cl_device_id Did;//*Did
	cl_context Ctext;
	cl_command_queue Cqueue;
	cl_int err;

	SDKTimer*  sampleTimer;
	sampleTimer = new SDKTimer();

	cl_program pro;
	FILE* PH;
	char* PB, *PL;
	size_t PS, LS;
	cl_kernel kernel1;
	size_t WUPK;
	cl_ulong size, startTime, endTime;


	cl_mem imagei1_buf, imagei2_buf, var_buf, Vx_buf, Vy_buf, state_buf, scaling_buf;
	
	err = clGetPlatformIDs(1, &Pid, NULL);
	if (err < 0) {
		perror("Couldn't find any platforms");
		//system("pause");
		exit(1);
	}
	err = clGetDeviceIDs(Pid, CL_DEVICE_TYPE_GPU, 1, &Did, NULL);
	if (err < 0) {
		perror("Couldn't find any devices");
		//system("pause");
		exit(1);
	}
	Ctext = clCreateContext(NULL, 1, &Did, NULL, NULL, &err);
	if (err < 0) {
		perror("Couldn't create a context");
		//system("pause");
		exit(1);
	}
//	fopen_s(&PH, "lk.cl", "rb");
//ECLAB
/*	PH = fopen("lk.cl", "rb");
	if (PH == NULL) {
		perror("Couldn't find the program file");
		//system("pause");
		exit(1);
	}
	fseek(PH, 0, SEEK_END);
	PS = ftell(PH);
	rewind(PH);
	PB = (char*)malloc(PS + 1);
	PB[PS] = '\0';
	fread(PB, sizeof(char), PS, PH);
	fclose(PH);

	pro = clCreateProgramWithSource(Ctext, 1, (const char**)&PB, &PS, &err);*/

const char *filename = "lk.cl";
std::string sourceStr;
convertToString(filename, sourceStr);
const char *source = sourceStr.c_str();
size_t sourceSize[] = {strlen(source)};
pro = clCreateProgramWithSource(Ctext, 1, &source, sourceSize, &err);
	if (err < 0) {
		perror("Couldn't create the program");
		//system("pause");
		exit(1);
	}
	free(PB);
	err = clBuildProgram(pro, 0, NULL, NULL, NULL, NULL);
	if (err < 0) {


		clGetProgramBuildInfo(pro, Did, CL_PROGRAM_BUILD_LOG,
			0, NULL, &LS);
		PL = (char*)malloc(LS + 1);
		PL[LS] = '\0';
		clGetProgramBuildInfo(pro, Did, CL_PROGRAM_BUILD_LOG,
			LS + 1, PL, NULL);
		printf("%s\n", PL);
		free(PL);
		//system("pause");
		exit(1);
	}

	kernel1 = clCreateKernel(pro, "track", &err);
	if (err < 0) {
		perror("Couldn't create the kernel");
		//system("pause");
		exit(1);
	}

	/*cl_queue_properties prop[] = { 0 };
	Cqueue = clCreateCommandQueueWithProperties(Ctext, Did, prop, &err);
	if (err < 0) {
		perror("Couldn't create the command queue");
		exit(1);
	}*/
	cl_command_queue_properties properties[] = { CL_QUEUE_PROPERTIES, CL_QUEUE_PROFILING_ENABLE, 0 };
	Cqueue = clCreateCommandQueue(Ctext, Did, properties[1], &err);
	if (err < 0) {
		perror("Couldn't create the command queue");
		exit(1);
	}

	clGetDeviceInfo(Did, CL_DEVICE_MAX_MEM_ALLOC_SIZE, sizeof(cl_ulong), &size, 0);

	//SDKDeviceInfo         deviceInfo;
	//KernelWorkGroupInfo   kernelInfo;

	//CLCommandArgs*       sampleArgs;
	//sampleArgs = new CLCommandArgs();

	//cl_int status = 0;
	//cl_device_type dType;

	//if (sampleArgs->deviceType.compare("cpu") == 0)
	//{
	//	dType = CL_DEVICE_TYPE_CPU;
	//}
	//else //deviceType = "gpu"
	//{
	//	dType = CL_DEVICE_TYPE_GPU;
	//	if (sampleArgs->isThereGPU() == false)
	//	{
	//		std::cout << "GPU not found. Falling back to CPU device" << std::endl;
	//		dType = CL_DEVICE_TYPE_CPU;
	//	}
	//}

	//// Get platform
	//cl_platform_id platform = NULL;
	//int retValue = getPlatform(platform, sampleArgs->platformId,
	//	sampleArgs->isPlatformEnabled());
	//CHECK_ERROR(retValue, SDK_SUCCESS, "getPlatform() failed");

	//// Display available devices.
	//retValue = displayDevices(platform, dType);
	//CHECK_ERROR(retValue, SDK_SUCCESS, "displayDevices() failed");

	//// If we could find our platform, use it. Otherwise use just available 
	//// platform.
	//cl_context_properties cps[3] =
	//{
	//	CL_CONTEXT_PLATFORM,
	//	(cl_context_properties)platform,
	//	0
	//};


	//Ctext = clCreateContextFromType(
	//	cps,
	//	dType,
	//	NULL,
	//	NULL,
	//	&status);
	//CHECK_OPENCL_ERROR(status, "clCreateContextFromType failed.");

	//status = getDevices(Ctext, &Did, sampleArgs->deviceId,
	//	sampleArgs->isDeviceIdEnabled());
	//CHECK_ERROR(status, SDK_SUCCESS, "getDevices() failed");

	////Set device info of given cl_device_id
	//status = deviceInfo.setDeviceInfo(Did[sampleArgs->deviceId]);
	//CHECK_ERROR(status, SDK_SUCCESS, "SDKDeviceInfo::setDeviceInfo() failed");


	////Check OpenCL 2.x compliance
	//bool checkOCLversion = deviceInfo.checkOpenCL2_XCompatibility();

	//if (!checkOCLversion)
	//{
	//	OPENCL_EXPECTED_ERROR("Unsupported device! Required CL_DEVICE_OPENCL_C_VERSION 2.0 or higher");
	//}


	//// Create command queue
	//cl_queue_properties prop[] = { 0 };
	//Cqueue = clCreateCommandQueueWithProperties(Ctext, Did[0], prop, &status);
	////Cqueue = clCreateCommandQueue(Ctext, Did[0], 0, &status);
	//CHECK_OPENCL_ERROR(status, "clCreateCommandQueue failed.");

	//// create a CL program using the kernel source
	//buildProgramData buildData;
	//buildData.kernelName = std::string("lk.cl");
	//buildData.devices = Did;
	//buildData.deviceId = sampleArgs->deviceId;
	//buildData.flagsStr = std::string("-cl-std=CL1.2");

	//if (sampleArgs->isLoadBinaryEnabled())
	//{
	//	buildData.binaryName = std::string(sampleArgs->loadBinary.c_str());
	//}

	//if (sampleArgs->isComplierFlagsSpecified())
	//{
	//	buildData.flagsFileName = std::string(sampleArgs->flags.c_str());
	//}

	//retValue = buildOpenCLProgram(pro, Ctext, buildData);
	//CHECK_ERROR(retValue, SDK_SUCCESS, "buildOpenCLProgram() failed");

	//// get a kernel object handle for a kernel with the given name
	//kernel1 = clCreateKernel(pro, "track", &status);
	//CHECK_OPENCL_ERROR(status, "clCreateKernel:kernel1 failed.");

	//status = kernelInfo.setKernelWorkGroupInfo(kernel1,
	//	Did[sampleArgs->deviceId]);
	//CHECK_ERROR(status, SDK_SUCCESS, "setKErnelWorkGroupInfo() failed");


	for (int l = 2; l >= 0; l--){
		if (l != 2)
			var[7] = 0;

		var[3] = pryw[l];
		var[4] = pryh[l];
		var[5] = l;
		var[6] = l;

		int timer = sampleTimer->createTimer();
		sampleTimer->resetTimer(timer);
		sampleTimer->startTimer(timer);

		imagei1_buf = clCreateBuffer(Ctext, CL_MEM_READ_ONLY, sizeof(int)*pryw[l] * pryh[l], NULL, &err);
		if (err < 0) {
			perror("Couldn't create a buffer object first");
			printf("%d", err);
			//system("pause");
			exit(1);
		}
		imagei2_buf = clCreateBuffer(Ctext, CL_MEM_READ_ONLY, sizeof(int)*pryw[l] * pryh[l], NULL, &err);
		if (err < 0) {
			perror("Couldn't create a buffer object first");
			printf("%d", err);
			//system("pause");
			exit(1);
		}
		var_buf = clCreateBuffer(Ctext, CL_MEM_READ_ONLY, sizeof(int)* 8, NULL, &err);
		if (err < 0) {
			perror("Couldn't create a res_buffer");
			//system("pause");
			exit(1);
		}
// NCTU
		state_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(int)*(h1 * w1), NULL, &err);
//		state_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(int)*pryw[0] * pryh[0], NULL, &err);
// NCTU
		if (err < 0) {
			perror("Couldn't create a res_buffer");
			//system("pause");
			exit(1);
		}
// NCTU
		Vx_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(float)*(h1 * w1), NULL, &err);
//		Vx_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(float)*pryw[0] * pryh[0], NULL, &err);
// NCTU
		if (err < 0) {
			perror("Couldn't create a res_buffer");
			//system("pause");
			exit(1);
		}
// NCTU
		Vy_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(float)*(h1 * w1), NULL, &err);
//		Vy_buf = clCreateBuffer(Ctext, CL_MEM_WRITE_ONLY, sizeof(float)*pryw[0] * pryh[0], NULL, &err);
// NCTU
		if (err < 0) {
			perror("Couldn't create a res_buffer");
			//system("pause");
			exit(1);
		}
		scaling_buf = clCreateBuffer(Ctext, CL_MEM_READ_ONLY, sizeof(float)*8, NULL, &err);
		if (err < 0) {
			perror("Couldn't create a res_buffer");
			//system("pause");
			exit(1);
		}
		clEnqueueWriteBuffer(Cqueue, imagei1_buf, CL_TRUE, 0, sizeof(int)*pryw[l] * pryh[l], imagei1[l], 0, NULL, 0);
		clEnqueueWriteBuffer(Cqueue, imagei2_buf, CL_TRUE, 0, sizeof(int)*pryw[l] * pryh[l], imagei2[l], 0, NULL, 0);
		clEnqueueWriteBuffer(Cqueue, var_buf, CL_TRUE, 0, sizeof(int)* 8, var, 0, NULL, 0);
		clEnqueueWriteBuffer(Cqueue, state_buf, CL_TRUE, 0, sizeof(int)*pryw[0] * pryh[0], state, 0, NULL, 0);
		clEnqueueWriteBuffer(Cqueue, Vx_buf, CL_TRUE, 0, sizeof(float)*pryw[0] * pryh[0], Vx, 0, NULL, 0);
		clEnqueueWriteBuffer(Cqueue, Vy_buf, CL_TRUE, 0, sizeof(float)*pryw[0] * pryh[0], Vy, 0, NULL, 0);
//ECLAB
		clEnqueueWriteBuffer(Cqueue, scaling_buf, CL_TRUE, 0, sizeof(float)*8, scaling, 0, NULL, 0);



		err = clSetKernelArg(kernel1, 0, sizeof(cl_mem), &imagei1_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		err = clSetKernelArg(kernel1, 1, sizeof(cl_mem), &imagei2_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		err = clSetKernelArg(kernel1, 2, sizeof(cl_mem), &var_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}

		err = clSetKernelArg(kernel1, 3, sizeof(cl_mem), &state_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		err = clSetKernelArg(kernel1, 4, sizeof(cl_mem), &Vx_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		err = clSetKernelArg(kernel1, 5, sizeof(cl_mem), &Vy_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		err = clSetKernelArg(kernel1, 6, sizeof(cl_mem), &scaling_buf);
		if (err < 0) {
			perror("Couldn't set the kernel argument");
			exit(1);
		}
		cl_event evt;
		WUPK = pryh[l] * pryw[l];
// NCTU
//		err = clEnqueueNDRangeKernel(Cqueue, kernel1, 1, NULL, &WUPK, NULL, 0, NULL, &evt);
size_t wupk[1] = {pryh[l] * pryw[l]};
		err = clEnqueueNDRangeKernel(Cqueue, kernel1, 1, NULL, wupk, NULL, 0, NULL, &evt);
// NCTU
		if (err < 0) {
			perror("Couldn't enqueue the kernel execution command");
			//system("pause");
			exit(1);
		}

		clWaitForEvents(1, &evt);
		err = clEnqueueReadBuffer(Cqueue, state_buf, CL_TRUE, 0, sizeof(int)*(h1*w1), state, 0, NULL, &evt);
		if (err < 0) {
			perror("Couldn't enqueue the read buffer command");
			//system("pause");
			exit(1);
		}
		err = clEnqueueReadBuffer(Cqueue, Vx_buf, CL_TRUE, 0, sizeof(float)*(h1*w1), Vx, 0, NULL, &evt);
		if (err < 0) {
			perror("Couldn't enqueue the read buffer command");
			//system("pause");
			exit(1);
		}
		err = clEnqueueReadBuffer(Cqueue, Vy_buf, CL_TRUE, 0, sizeof(float)*(h1*w1), Vy, 0, NULL, &evt);
		if (err < 0) {
			perror("Couldn't enqueue the read buffer command");
			//system("pause");
			exit(1);
		}

		sampleTimer->stopTimer(timer);
		double kernelTime = (double)(sampleTimer->readTimer(timer));

		std::cout << "Kernel time at level " << l << " : " << std::dec << kernelTime * 1000.0 << " ms " << std::endl;
		std::cout << "Kernel time at level " << l << " : " << std::dec << kernelTime << " s " << std::endl;

		clFlush(Cqueue);	
		clReleaseMemObject(imagei1_buf);
		clReleaseMemObject(imagei2_buf);
		clReleaseMemObject(var_buf);
		clReleaseMemObject(Vx_buf);
		clReleaseMemObject(Vy_buf);
		clReleaseMemObject(state_buf);
		clReleaseMemObject(scaling_buf);
	}

	for (int y = 0; y < h1; y += 16) { 
		for (int x = 0; x < w1; x += 16) { 
			int idx = y*w1 + x;
			if (state[idx] == 0)
				continue;

			cv::line(img2, cvPoint(x, y), cvPoint(x + Vx[idx], y + Vy[idx]), CV_RGB(255, 0, 0), 1);
		}
	}


	clReleaseKernel(kernel1);
	clReleaseCommandQueue(Cqueue);
	clReleaseProgram(pro);
	clReleaseContext(Ctext);
	//-------------------------------------------------------------------------------------------------------------

//	cv::imshow("result", img2);
	imwrite("openclLK.png", img2);
//	cvWaitKey(0);

	return 0;
}





