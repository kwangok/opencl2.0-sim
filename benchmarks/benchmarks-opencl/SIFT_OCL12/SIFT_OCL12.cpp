#include "SIFT_OCL12.h"



cl_program load_program(cl_context context, string filename, cl_device_id device)
{
	ifstream kernelFile(filename.c_str(), ios::in);

	if (!kernelFile.is_open())
	{
		cerr << "Unable to open " << filename << ". " << __FILE__ <<
			":" << __LINE__ << endl;
		return 0;
	}
	ostringstream outputStringStream;
	outputStringStream << kernelFile.rdbuf();
	string srcStdStr = outputStringStream.str();
	const char* source = srcStdStr.c_str();


	cl_program program = clCreateProgramWithSource(context, 1, &source, 0, 0);
	if (program == 0)
	{
		return 0;
	}

	if (clBuildProgram(program, 0, 0, 0, 0, 0) != CL_SUCCESS)
	{
		char log[4096];
		size_t log_size;
		clGetProgramBuildInfo(program, device, CL_PROGRAM_BUILD_LOG,
			4096, log, &log_size);
		cout << log << endl;
		return 0;
	}

	return program;
}

/*float oclSIFT::max27(float* arr){

	float max = 0;
	for (int i = 0; i<27; i++){
		if (*arr > max)
			max = *arr;
		arr++;
	}
	return max;

}

float oclSIFT::min27(float* arr){

	float min = 10000;
	for (int i = 0; i<27; i++){
		if (*arr < min)
			min = *arr;
		arr++;
	}
	return min;

}
*/

Point2d oclSIFT::suborientation(float* arr){
	float dx, dxx;
	Point2d sol;
	dx = (arr[2] - arr[0]) / 2;
	dxx = arr[2] + arr[0] - 2 * arr[1];
	sol.x = -dx / dxx;
	sol.y = arr[1] + 0.5*dx*sol.x;
	return sol;
}

Point2f oclSIFT::interp(Point2d p, Mat& image){         // x = mag  y = ori

	Point2f sol;
	Point2d points[4];
	float Lxy[4];
	points[0].x = p.x + 1;
	points[0].y = p.y;
	points[1].x = p.x - 1;
	points[1].y = p.y;
	points[2].x = p.x;
	points[2].y = p.y + 1;
	points[3].x = p.x;
	points[3].y = p.y - 1;
	for (int i = 0; i<4; i++){
		if (cvRound(p.x) == p.x && cvRound(p.y) == p.y){
			Lxy[0] = image.at<float>(cvRound(p.y), cvRound(p.x + 1));
			Lxy[1] = image.at<float>(cvRound(p.y), cvRound(p.x - 1));
			Lxy[2] = image.at<float>(cvRound(p.y + 1), cvRound(p.x));
			Lxy[3] = image.at<float>(cvRound(p.y - 1), cvRound(p.x));
		}
		else{
			for (int j = 0; j<4; j++){
				Point p1(cvCeil(points[j].x), cvCeil(points[j].y));
				Point p2(cvCeil(points[j].x), cvFloor(points[j].y));
				Point p3(cvFloor(points[j].x), cvCeil(points[j].y));
				Point p4(cvFloor(points[j].x), cvFloor(points[j].y));
				float u, v;
				u = points[j].x - p4.x;
				v = points[j].y - p4.y;
				float L[4];
				L[0] = image.at<float>(p1.y, p1.x);
				L[1] = image.at<float>(p2.y, p2.x);
				L[2] = image.at<float>(p3.y, p3.x);
				L[3] = image.at<float>(p4.y, p4.x);
				Lxy[j] = (1 - u)*(1 - v)*L[3] + (1 - u)*v*L[2] + u*(1 - v)*L[1] + u*v*L[0];
			}
		}
	}

	float dx = pow(Lxy[0] - Lxy[1], 2.0);
	float dy = pow(Lxy[2] - Lxy[3], 2.0);
	sol.x = sqrt(dx + dy);
	sol.y = atan2f(dy, dx) * 180 / M_PI;
	return sol;
}

void oclSIFT::constructDoG(Mat image, const int octaves, const int intervals, const float initial_sigma, vector< vector<Mat> >& imageblurs
	, vector< vector<float> >& absolute_sigma, vector< vector<Mat> >& DoG){

	int interval;
	float gaussian_sigma, gaussian_scale;
	imageblurs.resize(octaves);
	absolute_sigma.resize(octaves);
	DoG.resize(octaves);
	for (int i = 0; i < octaves; i++){
		imageblurs[i].resize(intervals + 3);
		absolute_sigma[i].resize(intervals + 3);
		DoG[i].resize(intervals + 2);
	}
	for (int i = 0; i <octaves; i++){
		gaussian_sigma = initial_sigma;
		absolute_sigma[i][0] = gaussian_sigma * pow(2., i);
		gaussian_scale = 2 * cvRound(3 * gaussian_sigma) + 1;
		GaussianBlur(image, imageblurs[i][0], Size(gaussian_scale, gaussian_scale), gaussian_sigma, gaussian_sigma);

		for (interval = 1; interval < intervals + 3; interval++){
			gaussian_sigma = pow(2.0, 1 / float(intervals)) * gaussian_sigma;
			absolute_sigma[i][interval] = gaussian_sigma * pow(2., i);
			gaussian_scale = 2 * cvRound(3.5 * gaussian_sigma) + 1;
			GaussianBlur(image, imageblurs[i][interval], Size(gaussian_scale, gaussian_scale), gaussian_sigma, gaussian_sigma);
			DoG[i][interval - 1] = imageblurs[i][interval] - imageblurs[i][interval - 1];
		}
		resize(image, image, Size(image.cols*0.5, image.rows*0.5), INTER_NEAREST);
	}
	return;

}

int oclSIFT::localmax(vector< vector<Mat> >& DoG, const int octaves, const int intervals, const float contrast_threshold
	, vector<feature>& features, vector< vector<float> >& absolute_sigma){
	//timer start
	// QueryPerformanceFrequency(&freq_lm);
	// QueryPerformanceCounter(&clk0_lm);
	cl_context GPU_context = 0;
	cl_program program = 0;
	cl_device_id device = 0;
	cl_kernel kernel = 0;
	cl_int errorNumber;
	cl_int err;
	cl_uint num;
	err = clGetPlatformIDs(0, 0, &num);
	if (err != CL_SUCCESS)
	{
		std::cerr << "Unable to get platforms\n";
		return 0;
	}
	cout << "Platform num = " << num << endl;
	vector<cl_platform_id> platforms(num);
	err = clGetPlatformIDs(num, &platforms[0], &num);
	if (err != CL_SUCCESS)
	{
		std::cerr << "Unable to get platform ID\n";
		return 0;
	}

    	char platformVendor[1024];
    	clGetPlatformInfo(platforms[0], CL_PLATFORM_VENDOR, sizeof(platformVendor), platformVendor, NULL);
	cout << platformVendor << endl;

	cout << "Platform id num = " << num << endl;
	cl_context_properties prop[] = { CL_CONTEXT_PLATFORM, reinterpret_cast<cl_context_properties>(platforms[0]), 0 };
	GPU_context = clCreateContextFromType(prop, CL_DEVICE_TYPE_GPU,
		NULL, NULL, NULL);
	if (GPU_context == 0)
	{
		cerr << "Can't create OpenCL context\n";
		return 0;
	}

	size_t deviceBUfSize;
	clGetContextInfo(GPU_context, CL_CONTEXT_DEVICES, 0, NULL, &deviceBUfSize);
	vector<cl_device_id> devices(deviceBUfSize / sizeof(cl_device_id));
	clGetContextInfo(GPU_context, CL_CONTEXT_DEVICES, deviceBUfSize,
		&devices[0], 0);

	// Get Device name
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, 0, NULL, &deviceBUfSize);
	string device_name;
	device_name.resize(deviceBUfSize);
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, deviceBUfSize, &device_name[0], 0);
	std::cout << "Device: " << device_name.c_str() << "\n";

	// get device compute unit.
	cl_uint compute_unit;
	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_COMPUTE_UNITS,
		sizeof(cl_uint), &compute_unit, 0);
	cout << "Compute Unit: " << compute_unit << "\n";


	// get max. work group size.
	cl_uint max_work_group_size;
	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_WORK_GROUP_SIZE,
		sizeof(cl_uint), &max_work_group_size, 0);

	// get some infomation:
	cl_uint tmp;
	clGetDeviceInfo(devices[0], CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR,
		sizeof(cl_uint), &tmp, 0);
	/* clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT,
		sizeof(cl_uint), &tmp, 0);
	clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT,
		sizeof(cl_uint), &tmp, 0);
	clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE,
		sizeof(cl_uint), &tmp, 0); */

	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_CLOCK_FREQUENCY,
		sizeof(cl_uint), &tmp, 0);

	// check if device support image
	cl_bool img_support;
	clGetDeviceInfo(devices[0], CL_DEVICE_IMAGE_SUPPORT,
		sizeof(cl_bool), &img_support, 0);
	if (img_support == CL_TRUE)
		cout << "device support image" << endl;
	
	// create command queue: 
	// cl_queue_properties properties[] = { CL_QUEUE_PROPERTIES, CL_QUEUE_PROFILING_ENABLE, 0 };
	// cl_command_queue_properties properties[] = { CL_QUEUE_PROPERTIES, CL_QUEUE_PROFILING_ENABLE, 0 };
	// cl_command_queue commandQueue = clCreateCommandQueueWithProperties(GPU_context, devices[0], properties, NULL);
	cl_int err_code;
	cl_command_queue commandQueue = clCreateCommandQueue(GPU_context, devices[0], 0, &err_code);
	
	if (commandQueue == 0)
	{
		std::cerr << "Can't create command queue\n";
		std::cerr << err_code << std::endl;
		clReleaseContext(GPU_context);
		return 0;
	}

	// load program and build.
	char shader_name[] = "KeypointLocalization.cl";
	//	printf("%s\n", shader_name);
	program = load_program(GPU_context, shader_name, devices[0]);
	if (program == 0)
	{
		return 0;
	}

	kernel = clCreateKernel(program, "KeypointLocalization", NULL);
	if (kernel == 0)
	{
		return 0;
	}
	//timer stop
	// QueryPerformanceCounter(&clk1_lm);
	// dclk1_lm.QuadPart = clk1_lm.QuadPart - clk0_lm.QuadPart;
	// dt1_lm = (float)dclk1_lm.QuadPart / (float)freq_lm.QuadPart;
	// cout << "Localmax Setup CL time = " << dt1_lm << " sec\n";

	

	
	clSetKernelArg(kernel, 2, sizeof(float), &contrast_threshold);

	
	for (cl_uint i = 0; i < octaves; i++)
	{
		FILE *pFile;
		pFile = fopen("test.txt", "w");

		cl_int status = 0;
		cl_event evt;
		int totalDoG = DoG[i][0].rows * DoG[i][0].cols * (intervals + 2);
		int totalcount = (DoG[i][0].rows - 2) * (DoG[i][0].cols - 2) * (intervals);
		int totalAbS = absolute_sigma[i].size();

		float *DoG1 = (float*)malloc(sizeof(float)* totalDoG);
		float *absolute_sigma1 = (float*)malloc(sizeof(float)* totalAbS);
		int index = 0;
		for (int j = 0; j < (intervals + 2); j++) {
			memcpy(DoG1 + index, (float *)DoG[i][j].data, DoG[i][j].rows * DoG[i][j].cols * sizeof(float));
			index = index + DoG[i][j].rows * DoG[i][j].cols;
		}
		for (int j = 0; j < totalAbS; j++)
			absolute_sigma1[j] = absolute_sigma[i][j];
			
		cl_mem cl_DoG1 = clCreateBuffer(GPU_context, CL_MEM_READ_ONLY, sizeof(float)* totalDoG, NULL, NULL);
		cl_mem cl_absolute_sigma = clCreateBuffer(GPU_context, CL_MEM_READ_ONLY, sizeof(float)* totalAbS, NULL, NULL);
		// Calculate performance
		cl_ulong startTime;
		cl_ulong endTime;
		clEnqueueWriteBuffer(commandQueue, cl_DoG1, CL_TRUE, 0, sizeof(float)* totalDoG, DoG1, 0, NULL, &evt);
		// Get kernel profiling info
		/*status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "DoG memory write time: " << 1e-9 * (endTime - startTime) << endl; */
		
		clEnqueueWriteBuffer(commandQueue, cl_absolute_sigma, CL_TRUE, 0, sizeof(float)* totalAbS, absolute_sigma1, 0, NULL, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "ABS memory write time: " << 1e-9 * (endTime - startTime) << endl; */

		cl_mem cl_flag = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(int)* totalcount, NULL, NULL);
		cl_mem cl_posx = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(int)* totalcount, NULL, NULL);
		cl_mem cl_posy = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(int)* totalcount, NULL, NULL);
		cl_mem cl_scaleoctave = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(unsigned char)* totalcount, NULL, NULL);
		cl_mem cl_scaleintervals = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(unsigned char)* totalcount, NULL, NULL);
		cl_mem cl_abs_sigma = clCreateBuffer(GPU_context, CL_MEM_READ_WRITE, sizeof(float)* totalcount, NULL, NULL);

		clSetKernelArg(kernel, 0, sizeof(cl_mem), &cl_DoG1);
		clSetKernelArg(kernel, 1, sizeof(cl_mem), &cl_absolute_sigma);
		clSetKernelArg(kernel, 3, sizeof(cl_mem), &cl_posx);
		clSetKernelArg(kernel, 4, sizeof(cl_mem), &cl_posy);
		clSetKernelArg(kernel, 5, sizeof(cl_mem), &cl_scaleoctave);
		clSetKernelArg(kernel, 6, sizeof(cl_mem), &cl_scaleintervals);
		clSetKernelArg(kernel, 7, sizeof(cl_mem), &cl_abs_sigma);
		clSetKernelArg(kernel, 8, sizeof(cl_mem), &cl_flag);
		clSetKernelArg(kernel, 9, sizeof(cl_uint), (void*)&i);
		
		size_t globalWorkSize[3];
		globalWorkSize[0] = DoG[i][0].rows - 2;
		globalWorkSize[1] = DoG[i][0].cols - 2;
		globalWorkSize[2] = intervals;

		size_t globalWorkOffset[3];
		globalWorkOffset[0] = 1;
		globalWorkOffset[1] = 1;
		globalWorkOffset[2] = 1;
//NTUCSIE
/*		status = clEnqueueNDRangeKernel(commandQueue, kernel, 3,
			globalWorkOffset, globalWorkSize, NULL,
			0, NULL, &evt);
*/
		status = clEnqueueNDRangeKernel(commandQueue, kernel, 3,
			NULL, globalWorkSize, NULL,
			0, NULL, &evt);

		status = clWaitForEvents(1, &evt);
		CHECK_OPENCL_ERROR(status, "clWaitForEvents failed.");


		

		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_START,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");

		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "Kernel Execution time: " << 1e-9 * (endTime - startTime) << endl; */


		status = clReleaseEvent(evt);
		CHECK_OPENCL_ERROR(status, "clRelease Event Failed");

		int *flag;
		int *posx, *posy;
          	unsigned char *scaleoctave, *scaleintervals;
		float *abs_sigma;
		flag = (int*)malloc(sizeof(int)* totalcount);
		posx = (int*)malloc(sizeof(int)* totalcount);
		posy = (int*)malloc(sizeof(int)* totalcount);
		scaleoctave = (unsigned char*)malloc(sizeof(unsigned char)* totalcount);
		scaleintervals = (unsigned char*)malloc(sizeof(unsigned char)* totalcount);
		abs_sigma = (float*)malloc(sizeof(float)* totalcount);

		memset(flag, 0x00, sizeof(int)* totalcount); 
		memset(posx, 0x00, sizeof(int)* totalcount); 
		memset(posy, 0x00, sizeof(int)* totalcount); 
		memset(scaleoctave, 0x00, sizeof(unsigned char)* totalcount); 
		memset(scaleintervals, 0x00, sizeof(unsigned char)* totalcount); 
		memset(abs_sigma, 0x00, sizeof(float)* totalcount); 
		
		clEnqueueReadBuffer(commandQueue, cl_posx, CL_TRUE, 0, sizeof(int)* totalcount, posx, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "posx memory read time: " << 1e-9 * (endTime - startTime) << endl; */
		clEnqueueReadBuffer(commandQueue, cl_posy, CL_TRUE, 0, sizeof(int)* totalcount, posy, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "posy memory read time: " << 1e-9 * (endTime - startTime) << endl; */

		clEnqueueReadBuffer(commandQueue, cl_scaleoctave, CL_TRUE, 0, sizeof(unsigned char)* totalcount, scaleoctave, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "scaleoctave memory read time: " << 1e-9 * (endTime - startTime) << endl; */
		clEnqueueReadBuffer(commandQueue, cl_scaleintervals, CL_TRUE, 0, sizeof(unsigned char)* totalcount, scaleintervals, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "scaleintervals memory read time: " << 1e-9 * (endTime - startTime) << endl; */
		clEnqueueReadBuffer(commandQueue, cl_abs_sigma, CL_TRUE, 0, sizeof(float)* totalcount, abs_sigma, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "abs_sigma memory read time: " << 1e-9 * (endTime - startTime) << endl; */
		clEnqueueReadBuffer(commandQueue, cl_flag, CL_TRUE, 0, sizeof(int)* totalcount, flag, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "flag memory read time: " << 1e-9 * (endTime - startTime) << endl; */
		cout << endl;
		
		for (int k = 0; k < totalcount; k++) {
			if (flag[k] == 1) {
				feature temp;		
				temp.pos[0] = posx[k];
				temp.pos[1] = posy[k];
				temp.scale[0] = scaleoctave[k];
				temp.scale[1] = scaleintervals[k];
				temp.abs_sigma = abs_sigma[k];
				features.push_back(temp);
				fprintf(pFile, "%d\n", scaleintervals[k]);
			}
		}
	//	cout << features[286].scale[0] << endl;
		clReleaseMemObject(cl_flag);
		clReleaseMemObject(cl_posx);
		clReleaseMemObject(cl_posy);
		clReleaseMemObject(cl_scaleoctave);
		clReleaseMemObject(cl_scaleintervals);
		clReleaseMemObject(cl_abs_sigma);
		clReleaseMemObject(cl_DoG1);
		clReleaseMemObject(cl_absolute_sigma);
		fclose(pFile);
	}



	

	// Release OpenCL objects.
	clReleaseKernel(kernel);
	clReleaseProgram(program);
	clReleaseCommandQueue(commandQueue);
	clReleaseContext(GPU_context);
	return SDK_SUCCESS;
}


int oclSIFT::major_orientation(vector<feature>& features, const int octaves, const int intervals, vector< vector<Mat> >& imageblurs, vector< vector<float> >& absolute_sigma){

	cl_context GPU_context = 0;
	cl_program program = 0;
	cl_device_id device = 0;
	cl_kernel kernel = 0;
	cl_int errorNumber;
	cl_int err;
	cl_uint num;
	err = clGetPlatformIDs(0, 0, &num);
	if (err != CL_SUCCESS)
	{
		std::cerr << "Unable to get platforms\n";
		return 0;
	}
	std::cout << "Platform num = " << num << std::endl;
	std::vector<cl_platform_id> platforms(num);
	err = clGetPlatformIDs(num, &platforms[0], &num);
	if (err != CL_SUCCESS)
	{
		std::cerr << "Unable to get platform ID\n";
		return 0;
	}
	std::cout << "Platform id num = " << num << std::endl;
	cl_context_properties prop[] = { CL_CONTEXT_PLATFORM, reinterpret_cast<cl_context_properties>(platforms[0]), 0 };
	GPU_context = clCreateContextFromType(prop, CL_DEVICE_TYPE_GPU,
		NULL, NULL, NULL);
	if (GPU_context == 0)
	{
		cerr << "Can't create OpenCL context\n";
		return 0;
	}

	size_t deviceBUfSize;
	clGetContextInfo(GPU_context, CL_CONTEXT_DEVICES, 0, NULL, &deviceBUfSize);
	vector<cl_device_id> devices(deviceBUfSize / sizeof(cl_device_id));
	clGetContextInfo(GPU_context, CL_CONTEXT_DEVICES, deviceBUfSize,
		&devices[0], 0);

	// Get Device name
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, 0, NULL, &deviceBUfSize);
	string device_name;
	device_name.resize(deviceBUfSize);
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, deviceBUfSize, &device_name[0], 0);
	std::cout << "Device: " << device_name.c_str() << "\n";

	// get device compute unit.
	cl_uint compute_unit;
	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_COMPUTE_UNITS,
		sizeof(cl_uint), &compute_unit, 0);
	cout << "Compute Unit: " << compute_unit << "\n";


	// get max. work group size.
	cl_uint max_work_group_size;
	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_WORK_GROUP_SIZE,
		sizeof(cl_uint), &max_work_group_size, 0);

	// get some infomation:
	cl_uint temp;
	clGetDeviceInfo(devices[0], CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR,
		sizeof(cl_uint), &temp, 0);
	/* clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT,
		sizeof(cl_uint), &temp, 0);
	clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT,
		sizeof(cl_uint), &temp, 0);
	clGetDeviceInfo(devices[0], CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE,
		sizeof(cl_uint), &temp, 0); */

	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_CLOCK_FREQUENCY,
		sizeof(cl_uint), &temp, 0);

	// check if device support image
	cl_bool img_support;
	clGetDeviceInfo(devices[0], CL_DEVICE_IMAGE_SUPPORT,
		sizeof(cl_bool), &img_support, 0);
	if (img_support == CL_TRUE)
		cout << "device support image" << endl;

	// create command queue: 
	// cl_queue_properties properties[] = { CL_QUEUE_PROPERTIES, CL_QUEUE_PROFILING_ENABLE, 0 };
	// cl_command_queue_properties properties[] = { CL_QUEUE_PROPERTIES, CL_QUEUE_PROFILING_ENABLE, 0 };
	// cl_command_queue commandQueue = clCreateCommandQueueWithProperties(GPU_context, devices[0], properties, NULL);
	cl_command_queue commandQueue = clCreateCommandQueue(GPU_context, devices[0], 0, NULL);

	if (commandQueue == 0)
	{
		std::cerr << "Can't create command queue\n";
		clReleaseContext(GPU_context);
		return 0;
	}

	// load program and build.
	char shader_name[] = "orientation.cl";
	//	printf("%s\n", shader_name);
	program = load_program(GPU_context, shader_name, devices[0]);
	if (program == 0)
	{
		return 0;
	}

	kernel = clCreateKernel(program, "cl_orientation", NULL);
	if (kernel == 0)
	{
		return 0;
	}
		
	vector< vector<Mat> > magni;				// \A8C\AD\D3pixel\AA\BAmagnitude
	vector< vector<Mat> > orient;				// \A8C\AD\D3pixel\AA\BAorientation
	int vsize, f, mid, bin;
	float tmpx, tmpy, gaussian_sigma, gaussian_scale;
	float ori_bin[36];
	float ori_arr[3];
	float gausswin, first_value, sec_value;
	Point2d sub_ori;
	int first_ori, sec_ori;
	feature tmp;
	cl_event evt;
	magni.resize(octaves);
	orient.resize(octaves);
	cl_int status = 0;
	for (int i = 0; i < octaves; i++){
		cl_ulong startTime;
		cl_ulong endTime;
		magni[i].resize(intervals + 2);
		orient[i].resize(intervals + 2);
		for (int j = 0; j < intervals + 2; j++){
			magni[i][j].create(imageblurs[i][j].rows, imageblurs[i][j].cols, CV_32F);
			orient[i][j].create(imageblurs[i][j].rows, imageblurs[i][j].cols, CV_32F);
		}
		int total = 0;
		for (int j = 0; j < intervals + 2; j++)
		{
			total += imageblurs[i][j].rows * imageblurs[i][j].cols;
		}

		float *imageblurs_1d = (float*)malloc(sizeof(float)* total);
		float *magni_1d = (float*)malloc(sizeof(float)* total);
		float *orient_1d = (float*)malloc(sizeof(float)* total);

		for (int j = 0; j < intervals + 2; j++)
		{
			for (int r = 0; r < imageblurs[i][j].rows; r++)
			{
				for (int c = 0; c < imageblurs[i][j].cols; c++)
				{
					imageblurs_1d[j * imageblurs[i][j].rows * imageblurs[i][j].cols + r * imageblurs[i][j].cols + c] = imageblurs[i][j].at<float>(r, c);
				}
			}
		}

		cl_mem cl_imageblurs_1d = clCreateBuffer(GPU_context, CL_MEM_READ_ONLY, sizeof(float)* total, NULL, NULL);
		clEnqueueWriteBuffer(commandQueue, cl_imageblurs_1d, CL_TRUE, 0, sizeof(float)* total, imageblurs_1d, 0, NULL, &evt);
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "Imageblurs_1d memory write time: " << 1e-9 * (endTime - startTime) << endl; */

		cl_mem cl_magni_1d = clCreateBuffer(GPU_context, CL_MEM_READ_ONLY, sizeof(float)* total, NULL, NULL);
		cl_mem cl_orient_1d = clCreateBuffer(GPU_context, CL_MEM_READ_ONLY, sizeof(float)* total, NULL, NULL);

		clSetKernelArg(kernel, 0, sizeof(cl_mem), &cl_imageblurs_1d);
		clSetKernelArg(kernel, 1, sizeof(cl_mem), &cl_magni_1d);
		clSetKernelArg(kernel, 2, sizeof(cl_mem), &cl_orient_1d);

		size_t global[3];
		global[0] = (size_t)(intervals + 2);
		global[1] = (size_t)imageblurs[i][0].rows;
		global[2] = (size_t)imageblurs[i][0].cols;
		cl_int err = clEnqueueNDRangeKernel(commandQueue, kernel, 3, 0, global, 0, 0, 0, &evt);

		status = clWaitForEvents(1, &evt);
		CHECK_OPENCL_ERROR(status, "clWaitForEvents failed.");

		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_START,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");

		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "Kernel Execution time: " << 1e-9 * (endTime - startTime) << endl; */


		status = clReleaseEvent(evt);
		CHECK_OPENCL_ERROR(status, "clRelease Event Failed");
		if (err != CL_SUCCESS)
			std::cerr << "Can't execute data\n";

		clEnqueueReadBuffer(commandQueue, cl_magni_1d, CL_TRUE, 0, sizeof(int)* total, magni_1d, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "magni_1d memory read time: " << 1e-9 * (endTime - startTime) << endl; */

		clEnqueueReadBuffer(commandQueue, cl_orient_1d, CL_TRUE, 0, sizeof(int)* total, orient_1d, 0, 0, &evt);
		// Get kernel profiling info
		/* status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_QUEUED,
			sizeof(cl_ulong),
			&startTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(startTime)");
		status = clGetEventProfilingInfo(evt,
			CL_PROFILING_COMMAND_END,
			sizeof(cl_ulong),
			&endTime,
			0);
		CHECK_OPENCL_ERROR(status, "clGetEventProfilingInfo failed.(endTime)");
		cout << "orient_1d memory read time: " << 1e-9 * (endTime - startTime) << endl; */


		for (int j = 0; j < intervals + 2; j++){
			for (int r = 0; r < imageblurs[i][j].rows; r++){
				for (int c = 0; c < imageblurs[i][j].cols; c++){
					magni[i][j].at<float>(r, c) = magni_1d[j * imageblurs[i][j].rows * imageblurs[i][j].cols + r * imageblurs[i][j].cols + c];
					orient[i][j].at<float>(r, c) = orient_1d[j * imageblurs[i][j].rows * imageblurs[i][j].cols + r * imageblurs[i][j].cols + c];
					if (orient[i][j].at<float>(r, c) < 0)
						orient[i][j].at<float>(r, c) = 360 - orient[i][j].at<float>(r, c);
					//	cout << magni_1d[j * imageblurs[i][j].rows * imageblurs[i][j].cols + r * imageblurs[i][j].cols + c] << endl;
				}
			}
		}

	}

	vsize = features.size();
	//cout << vsize << endl;
	for (int f = 0; f < vsize; f++){
		for (int i = 0; i < 36; i++)
			ori_bin[i] = 0;
		int octave = features[f].scale[0];
		int interval = features[f].scale[1];
		int c = cvRound(features[f].pos[1] / pow(2., octave));
		int r = cvRound(features[f].pos[0] / pow(2., octave));
		printf("octave = %d, interval = %d\n", octave, interval);
		cout << "f = " << f << endl;
		//printf("absolute_sigma.size() = %d, absolute_sigma[octave].size() = %d\n", absolute_sigma.size(), absolute_sigma[octave].size());
		gaussian_sigma = absolute_sigma[octave][interval] / pow(2., octave);
		gaussian_sigma *= 1.5;
		gaussian_scale = 2 * cvRound(3 * gaussian_sigma) + 1;
		//		Mat gausswin(gaussian_scale, gaussian_scale, CV_32F);

		for (int i = 0; i < gaussian_scale; i++){
			for (int j = 0; j < gaussian_scale; j++){
				mid = cvRound(3 * gaussian_sigma);
				gausswin = expf(-(pow(i - mid, 2.) + pow(j - mid, 2.)) / pow(gaussian_sigma, 2.)) / (2 * M_PI * pow(gaussian_sigma, 2.));
				if (r + i - mid > 0 && c + j - mid > 0 && r + i - mid < orient[octave][interval].rows - 1 && c + j - mid < orient[octave][interval].cols - 1){
					bin = cvFloor(orient[octave][interval].at<float>(r + i - mid, c + j - mid) / 10);
					if (bin >= 36)
						bin -= 36;
					ori_bin[bin] += gausswin * magni[octave][interval].at<float>(r + i - mid, c + j - mid);
				}
			}
		}

		first_ori = 0;
		sec_ori = 0;
		first_value = 0;
		sec_value = 0;
		for (int i = 0; i<36; i++){
			if (ori_bin[i] > sec_value){
				if (ori_bin[i] > first_value){
					//					first_ori = (i-18) * 10 + 5;
					first_ori = i;
					first_value = ori_bin[i];
				}
				else{
					//					sec_ori = (i-18) * 10 + 5;
					sec_ori = i;
					sec_value = ori_bin[i];
				}
			}
		}

		ori_arr[1] = ori_bin[first_ori];
		if (first_ori == 0)
			ori_arr[0] = ori_bin[35];
		else
			ori_arr[0] = ori_bin[first_ori - 1];
		if (first_ori == 35)
			ori_arr[2] = ori_bin[0];
		else
			ori_arr[2] = ori_bin[first_ori + 1];
		sub_ori = suborientation(ori_arr);
		first_value = sub_ori.y;
		features[f].orient = (first_ori + sub_ori.x) * 10 + 5;
		while (features[f].orient >= 360)
			features[f].orient -= 360;
		while (features[f].orient < 0)
			features[f].orient += 360;

		ori_arr[1] = ori_bin[sec_ori];
		if (sec_ori == 0)
			ori_arr[0] = ori_bin[35];
		else
			ori_arr[0] = ori_bin[sec_ori - 1];
		if (sec_ori == 35)
			ori_arr[2] = ori_bin[0];
		else
			ori_arr[2] = ori_bin[sec_ori + 1];
		sub_ori = suborientation(ori_arr);
		sec_value = sub_ori.y;
		//	cout << f << endl;
		if (sec_value > 0.8 * first_value){
			tmp.pos[0] = features[f].pos[0];
			tmp.pos[1] = features[f].pos[1];
			tmp.scale[0] = features[f].scale[0];
			tmp.scale[1] = features[f].scale[1];
			tmp.abs_sigma = features[f].abs_sigma;
			tmp.orient = (sec_ori + sub_ori.x) * 10 + 5;
			while (tmp.orient >= 360)
				tmp.orient -= 360;
			while (tmp.orient < 0)
				tmp.orient += 360;
			features.push_back(tmp);
		}

	}

	return SDK_SUCCESS;
}

void oclSIFT::descriptor(vector<feature>& features, const int octaves, const int intervals, vector< vector<Mat> >& imageblurs, vector< vector<float> >& absolute_sigma){

	int octave, interval, bin;
	float rot, x, y, rot_ori, s;
	float tmp_hist_bins[8];
	Point2d feature_pos;
	Point2f mag_ori;
	Point2d origin_hist_center[16];
	Point2d origin_hist_arr[16];
	Point2d hist_center[16];
	Point2d hist_arr[16];

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			origin_hist_center[4 * i + j].y = i * 4 - 6;
			origin_hist_center[4 * i + j].x = j * 4 - 6;
			origin_hist_arr[4 * i + j].y = i - 2 + 0.5;
			origin_hist_arr[4 * i + j].x = j - 2 + 0.5;
		}
	}


	for (int f = 0; f < features.size(); f++){
		rot = features[f].orient * M_PI / 180;
		//		printf("%f ", features[f].orient);
		for (int i = 0; i < 16; i++){
			hist_center[i].x = origin_hist_center[i].x*cos(rot) - origin_hist_center[i].y*sin(rot);
			hist_center[i].y = origin_hist_center[i].x*sin(rot) + origin_hist_center[i].y*cos(rot);
			hist_arr[i].x = origin_hist_arr[i].x*cos(rot) - origin_hist_arr[i].y*sin(rot);
			hist_arr[i].y = origin_hist_arr[i].x*sin(rot) + origin_hist_arr[i].y*cos(rot);
		}

		//		\C1٨S\A6\B3\B9\EA\A7@avoid boundary effect
		octave = features[f].scale[0];
		interval = features[f].scale[1];
		feature_pos.x = features[f].pos[1];
		feature_pos.y = features[f].pos[0];
		for (int i = 0; i < 16; i++){
			for (int k = 0; k < 8; k++)
				tmp_hist_bins[k] = 0;
			for (int j = 0; j < 16; j++){
				x = feature_pos.x + hist_center[i].x + hist_arr[j].x;
				y = feature_pos.y + hist_center[i].y + hist_arr[j].y;
				if (x > 1 && y > 1 && x < imageblurs[octave][interval].cols - 2 && y<imageblurs[octave][interval].rows - 2)
					mag_ori = interp(Point2d(x, y), imageblurs[octave][interval]);
				else{
					mag_ori.x = 0;
					mag_ori.y = 0;
				}
				//				printf("%f %f \n", mag_ori.x, mag_ori.y);
				//				gausswin = exp(-(pow(x-feature_pos.x,2)+pow(y-feature_pos.y,2))/pow(4,2)) / (2*M_PI*pow(4,2));
				rot_ori = mag_ori.y - features[f].orient;
				//				printf("%f %f %f\n", rot_ori, mag_ori.y, features[f].orient);
				while (rot_ori >= 360)
					rot_ori -= 360;
				while (rot_ori < 0)
					rot_ori += 360;
				bin = cvFloor(rot_ori / 45);
				//				tmp_hist_bins[bin] += gausswin * mag_ori.x;
				tmp_hist_bins[bin] += mag_ori.x;
			}
			for (int j = 0; j < 8; j++){
				features[f].desc[8 * i + j] = tmp_hist_bins[j];
			}
		}

		s = 0;
		for (int i = 0; i < 128; i++)
			s += features[f].desc[i];
		for (int i = 0; i < 128; i++){
			if (features[f].desc[i] > s*0.2)
				features[f].desc[i] = s * 0.2;
		}
		s = 0;
		for (int i = 0; i < 128; i++)
			s += features[f].desc[i];
		for (int i = 0; i < 128; i++)
			features[f].desc[i] /= s;
	}
	return;
}

// initial_sigma?O??@??octave??@interval??gaussian sigma
void oclSIFT::mySIFT(Mat image, const int octaves, const int intervals, const float initial_sigma, const float contrast_threshold, vector<feature>& features){

	if (intervals < 0 || octaves < 0){
		cout << "parameters error \n";
		return;
	}
	vector< vector<Mat> > imageblurs;		
	vector< vector<float> > absolute_sigma;	
	vector< vector<Mat> > DoG;				
	image.convertTo(image, CV_32F);

	//--------------------------------------------------------------------------------------
	//timer start
	// QueryPerformanceFrequency(&freq);
	// QueryPerformanceCounter(&clk0);
	//constructDoG
	constructDoG(image, octaves, intervals, initial_sigma, imageblurs, absolute_sigma, DoG);
	//timer stop
	// QueryPerformanceCounter(&clk1);
	// dclk1.QuadPart = clk1.QuadPart - clk0.QuadPart;
	// dt1 = (float)dclk1.QuadPart / (float)freq.QuadPart;
	// cout << "constructDoG time = " << dt1 << " sec\n";
	//------------------------------------------------------------------------------------
	///timer start
	// QueryPerformanceFrequency(&freq);
	// QueryPerformanceCounter(&clk0);
	//localmax
	localmax(DoG, octaves, intervals, contrast_threshold, features, absolute_sigma);
	//timer stop
	// QueryPerformanceCounter(&clk1);
	// dclk1.QuadPart=clk1.QuadPart-clk0.QuadPart;
	// dt1=(float)dclk1.QuadPart/(float)freq.QuadPart;
	// cout << "Localmax time = " << dt1 << " sec\n";
	//-----------------------------------------------------------------------------------
	//timer start
	// QueryPerformanceFrequency(&freq);
	// QueryPerformanceCounter(&clk0);
	//major_orientation
	major_orientation(features, octaves, intervals, imageblurs, absolute_sigma);
	//timer stop
	// QueryPerformanceCounter(&clk1);
	// dclk1.QuadPart = clk1.QuadPart - clk0.QuadPart;
	// dt1 = (float)dclk1.QuadPart / (float)freq.QuadPart;
	// cout << "Orientation time = " << dt1 << " sec\n";
	//------------------------------------------------------------------------------------
	//timer start
	// QueryPerformanceFrequency(&freq);
	// QueryPerformanceCounter(&clk0);
	//descriptor
	descriptor(features, octaves, intervals, imageblurs, absolute_sigma);
	//timer stop
	// QueryPerformanceCounter(&clk1);
	// dclk1.QuadPart = clk1.QuadPart - clk0.QuadPart;
	// dt1 = (float)dclk1.QuadPart / (float)freq.QuadPart;
	// cout << "Descriptor time = " << dt1 << " sec\n";
	//------------------------------------------------------------------------------------

	return;
}

void oclSIFT::FeatureDetection(Mat &image, Mat &descriptor, vector<KeyPoint> &keypoints)
{
	int i, j;
	Mat image_gray;
	KeyPoint Tpoint;
	vector<feature> img_des;

	cvtColor(image, image_gray, CV_RGB2GRAY);
	//mySIFT(image_gray, 4, 2, 2.5, 4.0, img_des);
	mySIFT(image_gray, 1, 2, 1.6, 4.0, img_des);

	descriptor = Mat(img_des.size(), 128, CV_32FC1);

	for (i = 0; i < img_des.size(); i++)
	{
		Tpoint.pt.x = (float)img_des[i].pos[1];
		Tpoint.pt.y = (float)img_des[i].pos[0];
		keypoints.push_back(Tpoint);
		for (j = 0; j < 128; j++)
		{
			descriptor.at<float>(i, j) = (float)img_des[i].desc[j];
		}
	}
	img_des.clear();
}

int main(int argc, char *argv[]){
	//char FileName[80] = "lena.bmp";
	char *FileName = argv[1];
	/*cout << "PLEASE INPUT IMAGE NAME:";
	cin >> FileName;*/
	oclSIFT ocl_SIFT;
	Mat image, feat, descriptor;	// Feature descriptor computation
	std::vector<cv::KeyPoint> keypoints;	// Feature detection
	image = imread(FileName, 1);



	ocl_SIFT.FeatureDetection(image, descriptor, keypoints);

	drawKeypoints(image, keypoints, feat, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	//drawKeypoints(image,keypoints1,feat1,Scalar(255, 2, 2),DrawMatchesFlags::DEFAULT);

//	imshow("result1.2", feat);
	imwrite("result1.2.jpg", feat);
//	waitKey(0);

	printf("\nDone\n");
	return 0;
}
