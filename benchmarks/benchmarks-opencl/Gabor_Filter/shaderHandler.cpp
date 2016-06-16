#include "shaderHandler.h"

void setWorkSize(size_t* gws, size_t* lws, cl_int x, cl_int y)  
{  
	gws[0] = x;
	gws[1] = y;
	lws[0] = 8;
	lws[1] = 8;
} 


int FFT(int dir,int m,double *x,double *y)
{
   long nn,i,i1,j,k,i2,l,l1,l2;
   double c1,c2,tx,ty,t1,t2,u1,u2,z;

   /* Calculate the number of points */
   nn = 1;
   for (i=0;i<m;i++)
      nn *= 2;

   /* Do the bit reversal */
   i2 = nn >> 1;
   j = 0;
   for (i=0;i<nn-1;i++) {
      if (i < j) {
         tx = x[i];
         ty = y[i];
         x[i] = x[j];
         y[i] = y[j];
         x[j] = tx;
         y[j] = ty;
      }
      k = i2;
      while (k <= j) {
         j -= k;
         k >>= 1;
      }
      j += k;
   }

   /* Compute the FFT */
   c1 = -1.0;
   c2 = 0.0;
   l2 = 1;
   for (l=0;l<m;l++) {
      l1 = l2;
      l2 <<= 1;
      u1 = 1.0;
      u2 = 0.0;
      for (j=0;j<l1;j++) {
         for (i=j;i<nn;i+=l2) {
            i1 = i + l1;
            t1 = u1 * x[i1] - u2 * y[i1];
            t2 = u1 * y[i1] + u2 * x[i1];
            x[i1] = x[i] - t1;
            y[i1] = y[i] - t2;
            x[i] += t1;
            y[i] += t2;
         }
         z =  u1 * c1 - u2 * c2;
         u2 = u1 * c2 + u2 * c1;
         u1 = z;
      }
      c2 = sqrt((1.0 - c1) / 2.0);
      if (dir == 1)
         c2 = -c2;
      c1 = sqrt((1.0 + c1) / 2.0);
   }

   /* Scaling for forward transform */
   if (dir == 1) {
      for (i=0;i<nn;i++) {
         x[i] /= (double)nn;
         y[i] /= (double)nn;
      }
   }

   return 1;
}
/*-------------------------------------------------------------------------
   Perform a 2D FFT inplace given a complex 2D array
   The direction dir, 1 for forward, -1 for reverse
   The size of the array (nx,ny)
   Return false if there are memory problems or
      the dimensions are not powers of 2
*/
int FFT2D(cl_float2 *c,int nx,int ny,int dir)
{
   int i,j;
   int m,twopm;
   double *real,*imag;

   /* Transform the rows */
   real = (double *)malloc(nx * sizeof(double));
   imag = (double *)malloc(nx * sizeof(double));
   if (real == NULL || imag == NULL)
      return(FALSE);

   m = (int)(log((double)nx)/log(2.0)); 
   
   for (j=0;j<ny;j++) {
      for (i=0;i<nx;i++) {
         real[i] = c[i+j*nx].s[0];
         imag[i] = c[i+j*nx].s[1];
      }
      FFT(dir,m,real,imag);
      for (i=0;i<nx;i++) {
         c[i+j*nx].s[0] = real[i];
         c[i+j*nx].s[1] = imag[i];
      }
   }
   free(real);
   free(imag);

   /* Transform the columns */
   real = (double *)malloc(ny * sizeof(double));
   imag = (double *)malloc(ny * sizeof(double));
   if (real == NULL || imag == NULL)
      return(FALSE);
   m = (int)(log((double)ny)/log(2.0)); 

   for (i=0;i<nx;i++) {
      for (j=0;j<ny;j++) {
         real[j] = c[i+j*nx].s[0];
         imag[j] = c[i+j*nx].s[1];
      }
      FFT(dir,m,real,imag);
      for (j=0;j<ny;j++) {
         c[i+j*nx].s[0] = real[j];
         c[i+j*nx].s[1] = imag[j];
      }
   }
   free(real);
   free(imag);

   return 1;
}






shaderHandler::shaderHandler(void)
{
}


shaderHandler::~shaderHandler(void)
{
}

void shaderHandler::releaseCL()
{
	
    for (int nKernel = 0; nKernel < kernels.size(); nKernel++){
        if (kernels[nKernel] != NULL){
            cl_int resultCL = clReleaseKernel(kernels[nKernel]);
            if (resultCL != CL_SUCCESS){
                cerr << "Error: In clReleaseKernel" << endl;
            }
            kernels[nKernel] = NULL;
        }
    }
	kernels.clear();

	if (program != NULL){
        cl_int resultCL = clReleaseProgram(program);
        if (resultCL != CL_SUCCESS){
            cerr << "Error: In clReleaseProgram" << endl;
        }
        program = NULL;
    }

	if (queue != NULL){
        cl_int resultCL = clReleaseCommandQueue(queue);
        if (resultCL != CL_SUCCESS){
            cerr << "Error: In clReleaseCommandQueue" << endl;
        }
        queue = NULL;
    }

	if (context != NULL){
        cl_int resultCL = clReleaseContext(context);
        if (resultCL != CL_SUCCESS){
            cerr << "Error: In clReleaseContext" << endl;
        }
        context = NULL;
    }

}

void shaderHandler::setParam(shaderParam* _param)
{
	param = _param;
}

void shaderHandler::setGabor(GaborFilter* _gabor)
{
	gabor = _gabor;
}

void shaderHandler::initCL()
{
	cl_int resultCL;

	//Find available platforms
	cl_uint numPlatforms;
	cl_platform_id targetPlatform = NULL;

	resultCL = clGetPlatformIDs(0, NULL, &numPlatforms);

	if( resultCL != CL_SUCCESS){
		throw(string("Error: Unable to get platforms (clGetPlatformIDs)"));
	}

	if(numPlatforms <= 0){
		throw(string("Error: No platforms found (clGetPlatformIDs)"));
	}

	// Get Platform IDs
	//
	std::vector<cl_platform_id> allPlatforms(numPlatforms);

    resultCL = clGetPlatformIDs(numPlatforms, &allPlatforms[0], NULL);
    
	if (resultCL != CL_SUCCESS){
        throw (string("Error: Unable to get platform IDs (clGetPlatformIDs)"));
	}

    // Select the target platform. Default: first platform
    targetPlatform = allPlatforms[0];
    for (int i = 0; i < numPlatforms; i++)
    {
        char pbuff[256];
        resultCL = clGetPlatformInfo( allPlatforms[i],
                                        CL_PLATFORM_VENDOR,
                                        sizeof(pbuff),
                                        pbuff,
                                        NULL);
        
		if (resultCL != CL_SUCCESS){
            throw (string("Error: Unable to get platform info (clGetPlatformInfo)"));
		}
        
		cout <<"pbuff "<< pbuff << endl;

		if(!strcmp(pbuff, "Advanced Micro Devices, Inc.")){
            targetPlatform = allPlatforms[i];
            break;
        }else if (!strcmp(pbuff, "NVIDIA Corporation")){
			targetPlatform = allPlatforms[i];
			break;
		}
    }

	allPlatforms.clear();


	// Create OpenCL context

    cl_context_properties props[3] = { CL_CONTEXT_PLATFORM, reinterpret_cast<cl_context_properties>(targetPlatform), 0 };
    context = clCreateContextFromType(props, 
                                                CL_DEVICE_TYPE_GPU, 
                                                NULL, 
                                                NULL, 
                                                &resultCL);

    if ((resultCL != CL_SUCCESS) || (context == NULL)){
        throw (string("Error: Unable to create context (clCreateContextFromType)"));
	}


	// Get openCL devices Info
	size_t deviceListSize;
	// Get the size of device list
    resultCL = clGetContextInfo(context, 
                                CL_CONTEXT_DEVICES, 
                                0, 
                                NULL, 
                                &deviceListSize);

    if (resultCL != CL_SUCCESS){
        throw(string("Error: Unable to get Context Info. (clGetContextInfo)"));
	}

    if (deviceListSize == 0){
        throw(string("Error: No devices found."));
	}

    // allocate device list
    devices.resize( (deviceListSize) / sizeof(cl_device_id));
	

    // Get the device list data 
    resultCL = clGetContextInfo(context, 
                                CL_CONTEXT_DEVICES, 
                                deviceListSize, 
                                &devices[0], 
                                NULL);

    if (resultCL != CL_SUCCESS){
        throw(string("Error: Unable to get Context Info. (device list, clGetContextInfo)"));
	}

	// Output the device info
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, 0, NULL, &deviceListSize);
	std::string devname;
	devname.resize(deviceListSize);
	clGetDeviceInfo(devices[0], CL_DEVICE_NAME, deviceListSize, &devname[0], 0);
	std::cout << "Device: " << devname.c_str() << "\n";
	cl_ulong constant_size = 0;
	int SizeofCUlong = sizeof(cl_ulong);
	clGetDeviceInfo(devices[0], CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE, SizeofCUlong, &constant_size, 0);
	std::cout << "Device Constant Memory: " << constant_size << "\n";
	clGetDeviceInfo(devices[0], CL_DEVICE_GLOBAL_MEM_SIZE, SizeofCUlong, &constant_size, 0);
	std::cout << "Device Global Memory: " << constant_size << "\n";
	// Create OpenCL command queue
    queue = clCreateCommandQueue(context, 
                                 devices[0], 
                                 0, 
                                 &resultCL);

    if ((resultCL != CL_SUCCESS) || (queue == NULL)){
        throw(string("Error: Unable to create Command Queue. (clCreateCommandQueue)"));
	}


}


void shaderHandler::LoadCLFile(const string filename)
{
	ifstream f(filename.c_str(), ifstream::in | ifstream::binary);
	size_t size;
    char*  str;
    string sourceStr;

    if(f.is_open()){
		// get file length
		size_t fileSize;
        f.seekg(0, ifstream::end);
        size = fileSize = f.tellg();
        f.seekg(0, ifstream::beg);

        str = new char[size+1];
        if (!str) {
			cerr << "Could not allocate memory" << endl;
		}

		// read program source
        f.read(str, fileSize);
        f.close();
        str[size] = '\0';
        sourceStr = str;
        delete [] str;
	}

    const char *source    = sourceStr.c_str();
    size_t sourceSize[]    = { strlen(source) };
	cl_int resultCL;

    program = clCreateProgramWithSource(context, 
                                        1, 
                                        &source,
                                        sourceSize,
                                        &resultCL);

    if ((resultCL != CL_SUCCESS) || (program == NULL)){
        throw(string("Error: Unable to load Binary into cl_program. (clCreateProgramWithBinary)"));    
	}

	// create and build CL program executable with some #defines 
	char options[1024]={};

    
	//sprintf(options, "-cl-fast-relaxed-math -D FILTER_WIDTH=%d", param->nFilterWidth);
	sprintf(options, "-cl-fast-relaxed-math");

	
    resultCL = clBuildProgram(program, 1, &devices[0], options, NULL, NULL);
	

    if ((resultCL != CL_SUCCESS) || (program == NULL))
    {
        cerr << "Error: In clBuildProgram" << endl;

		size_t length;
        resultCL = clGetProgramBuildInfo(program, 
                                        devices[0], 
                                        CL_PROGRAM_BUILD_LOG, 
                                        0, 
                                        NULL, 
                                        &length);
        if(resultCL != CL_SUCCESS){ 
            throw(string("Error: Getting Program build info(clGetProgramBuildInfo)"));
		}
		char* buffer = (char*)malloc(length);
        resultCL = clGetProgramBuildInfo(program, 
                                        devices[0], 
                                        CL_PROGRAM_BUILD_LOG, 
                                        length, 
                                        buffer, 
                                        NULL);
        if(resultCL != CL_SUCCESS){
            throw(string("Error: Getting Program build info(clGetProgramBuildInfo)"));
		}

		cerr << buffer << endl;
        free(buffer);

        throw(string("Error: Building Program (clBuildProgram)"));
    }

	// Create kernels
    for (int nKernel = 0; nKernel < param->nTotalKernels; nKernel++)
    {
        /* get a kernel object handle for a kernel with the given name */
        cl_kernel kernel = clCreateKernel(program,
                                          param->kernelNames[nKernel].c_str(),
                                          &resultCL);

        if ((resultCL != CL_SUCCESS) || (kernel == NULL)){
            string errorMsg = "Error: Unable to create Kernel (clCreateKernel) \"" + param->kernelNames[nKernel] + "\"";
            throw(errorMsg);
        }

        kernels.push_back(kernel);
    }

}

void shaderHandler::createBuffer()
{
	cl_int resultCL;

	cl_input = NULL;
	cl_filter= NULL;
	cl_output= NULL;

	gabor->outputResult = new float[param->nWidth * param->nHeight];
	// Create OpenCL memory buffers
	cl_input = clCreateBuffer(context,
							  CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
							  sizeof(cl_float) * param->nInWidth * param->nInHeight,
							  gabor->rawImage,
							  &resultCL);
	if ((resultCL != CL_SUCCESS) || (cl_input == NULL)){
			throw(string("Error: clCreateBuffer (cl_input)"));
	}
	cl_filter = clCreateBuffer(context,
							  CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
							  sizeof(cl_float) * param->nFilterWidth * param->nFilterWidth,
							  gabor->mReal,
							  &resultCL);
	if ((resultCL != CL_SUCCESS) || (cl_filter == NULL)){
			throw(string("Error: clCreateBuffer (cl_filter)"));
	}

	cl_output = clCreateBuffer(context,
							  CL_MEM_WRITE_ONLY | CL_MEM_COPY_HOST_PTR,
							  sizeof(cl_float) * param->nWidth * param->nHeight,
							  gabor->outputResult,
							  &resultCL);

	if ((resultCL != CL_SUCCESS) || (cl_output == NULL)){
			throw(string("Error: clCreateBuffer (cl_output)"));
	}
}


void shaderHandler::releaseBuffer()
{
	cl_int resultCL;

	if(cl_input != NULL){
		resultCL = clReleaseMemObject(cl_input);

		if(resultCL != CL_SUCCESS){
			cerr << "Error: In clReleaseMemObject (input buffer)" << endl;
		}
		cl_input = NULL;
	}

	if(cl_filter != NULL){
		resultCL = clReleaseMemObject(cl_filter);

		if(resultCL != CL_SUCCESS){
			cerr << "Error: In clReleaseMemObject (filter buffer)" << endl;
		}
		cl_filter = NULL;
	}

	if(cl_output != NULL){
		resultCL = clReleaseMemObject(cl_output);

		if(resultCL != CL_SUCCESS){
			cerr << "Error: In clReleaseMemObject (output buffer)" << endl;
		}
		cl_output = NULL;
	}
}

void shaderHandler::setKernelArgs(int nKernel)
{
	cl_int resultCL;

	//input image
	resultCL = clSetKernelArg(kernels[nKernel],
							  0,
							  sizeof(cl_mem),
							  &cl_input);

	if(resultCL != CL_SUCCESS){
		throw(string("Error: Unable to set kernel argument. clSetKernelArg : (input image)"));
	}

	//input filter
	resultCL = clSetKernelArg(kernels[nKernel],
							  1,
							  sizeof(cl_mem),
							  &cl_filter);

	if(resultCL != CL_SUCCESS){
		throw(string("Error: Unable to set kernel argument. clSetKernelArg : (input filter)"));
	}

	//output image
	resultCL = clSetKernelArg(kernels[nKernel],
							  2,
							  sizeof(cl_mem),
							  &cl_output);

	if(resultCL != CL_SUCCESS){
		throw(string("Error: Unable to set kernel argument. clSetKernelArg : (output image)"));
	}


	//input image width
	resultCL = clSetKernelArg(kernels[nKernel],
							  3,
							  sizeof(int),
							  &param->nInWidth);

	if(resultCL != CL_SUCCESS){
		throw(string("Error: Unable to set kernel argument. clSetKernelArg : (input image width)"));
	}


	//input filter width
	resultCL = clSetKernelArg(kernels[nKernel],
							  4,
							  sizeof(int),
							  &param->nFilterWidth);

	if(resultCL != CL_SUCCESS){
		throw(string("Error: Unable to set kernel argument. clSetKernelArg : (input filter width)"));
	}
}


void shaderHandler::enqueueKernel(int nKernel, bool blocking)
{
	cl_int resultCL;
	cl_event events[1];
	
	resultCL = clEnqueueNDRangeKernel( queue,
									   kernels[nKernel],
									   param->WORK_DIM,
									   NULL,
									   param->globalNDWorkSize,
									   param->localNDWorkSize,
									   0,
									   NULL,
									   &events[0]);
	if(resultCL != CL_SUCCESS){
		throw(string("Error: Enqueueing kernel error (clEnqueueNDRangeKernel)"));
	}

	if(resultCL == CL_SUCCESS){
		resultCL = clEnqueueReadBuffer(queue, cl_output , CL_TRUE, 0, sizeof(cl_float) * param->nWidth*param->nHeight, gabor->outputResult, 0, 0, 0);
		if(resultCL != CL_SUCCESS){
			cerr << "Read Error" << endl;
		}
	}

	// wait for the kernel call to finish
	if(blocking){
		resultCL = clWaitForEvents(1, &events[0]);
		if(resultCL != CL_SUCCESS){
			throw(string("Error: Waiting kernel error (clWaitForEvents)"));
		}
		
	}

}

void shaderHandler::Run()
{
	setKernelArgs(0);
	clFinish(queue);
	counter.Reset();
	counter.Start();
	
	enqueueKernel(0);
	clFinish(queue);
	counter.Stop();

	double elapse_time = counter.GetElapsedTime()/double(param->nIterations);
	cerr << "GPU : " << elapse_time << endl;

	gabor->normalizeResult(gabor->outputResult, param->nWidth);
	gabor->saveRawtoImage(gabor->outputResult, "output_gabor.jpg", param->nWidth, param->nHeight);
	/*
	counter.Reset();
	counter.Start();
	gabor->convolution();
	counter.Stop();

	elapse_time = counter.GetElapsedTime()/double(param->nIterations);
	cerr << "CPU : " << elapse_time << endl;
	
	gabor->normalizeResult(gabor->outputCPU, param->nWidth);
	gabor->saveRawtoImage(gabor->outputCPU, "output_gabor_CPU.jpg", param->nWidth,param->nHeight);
	*/
}

void shaderHandler::RunFFT_CPU()
{
	cl_float2 *xm; 


	cl_int n = gabor->img_width;
     
	xm = (cl_float2 *)malloc(n * n * sizeof(cl_float2));   
 

	float* image_0 = new float[n*n];
	float* real_0 = new float[n*n];
	memset(image_0, 0, sizeof(float)*n*n);
	
	gabor->transformCLfloat2(gabor->rawImage,image_0 ,xm,n,n,true);

	FFT2D(xm, n, n, 0);

	//FFT2D(xm, n, n, 1);

	gabor->transformCLfloat2(real_0 ,image_0 , xm,n,n, false);
	for(int y=0; y<n; ++y){
		for(int x=0; x<n; ++x){
			real_0[y*n+x] = sqrt(real_0[y*n+x]*real_0[y*n+x]+image_0[y*n+x]*image_0[y*n+x]);
			real_0[y*n+x] = log(real_0[y*n+x] + 1);
		}
	}
	gabor->normalizeResult(real_0, n);
	gabor->saveRawtoImage(real_0, "FFT_CPU.jpg",n,n);

}


void shaderHandler::RunMultiply(cl_mem dst, cl_mem kernel)
{
	cl_int ret;

	cl_int n = gabor->img_width;

	cl_event kernelDone;        
	size_t gws[2]; 
	size_t lws[2]; 

	//run kernel multiply
	ret = clSetKernelArg(kernels[6], 0, sizeof(cl_mem), (void *)&dst); 
	if(ret != CL_SUCCESS){
		std::cout<<"error code1"<<ret<<endl;
		throw(string("Error: wrong in FFT: set kernel arguments: multiply"));
	}
	//ret = clSetKernelArg(kernels[6], 1, sizeof(cl_int), (void *)&kernel);
	ret = clSetKernelArg(kernels[6], 1, sizeof(cl_mem), (void *)&kernel);
	if(ret != CL_SUCCESS){
		std::cout<<"error code2"<<ret<<endl;
		throw(string("Error: wrong in FFT: set kernel arguments: multiply"));
	}

	setWorkSize(gws, lws, n*n, 1); 
	ret = clEnqueueNDRangeKernel(queue, kernels[6], 1, NULL, gws, lws, 0, NULL, NULL);
	if(ret != CL_SUCCESS){
		std::cout<<"error code3"<<ret<<endl;
		throw(string("Error: wrong in FFT: enqueue kernel: multiply"));
	}

}

void shaderHandler::RunFFT(cl_mem dst, cl_mem src, cl_mem spin, int direction)
{
	
	cl_int ret;

	cl_int n = gabor->img_width;
	cl_int m = (cl_int)(log((double)n)/log(2.0)); 

	cl_int iter;   
	cl_uint flag;       
	cl_event kernelDone;        
	size_t gws[2]; 
	size_t lws[2]; 
     
	switch (direction) {   //0 forward, 1 inverse
		case 0:
			flag = 0x00000000; 
			break; 
		case 1:
			flag = 0x80000000; 
			break; 
	}  
     
	/* Create spin factor */   
	ret = clSetKernelArg(kernels[4], 0, sizeof(cl_mem), (void *)&spin); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Create spin factor"));
	}
	ret = clSetKernelArg(kernels[4], 1, sizeof(cl_int), (void *)&n);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Create spin factor"));
	}
	setWorkSize(gws, lws, n/2, 1); 
	ret = clEnqueueNDRangeKernel(queue, kernels[4], 1, NULL, gws, lws, 0, NULL, NULL);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: enqueue kernel: Create spin factor"));
	}


	ret = clSetKernelArg(kernels[1], 0, sizeof(cl_mem), (void *)&dst); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Reverse bit ordering"));
	}
	ret = clSetKernelArg(kernels[1], 1, sizeof(cl_mem), (void *)&src);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Reverse bit ordering"));
	}
	ret = clSetKernelArg(kernels[1], 2, sizeof(cl_int), (void *)&m);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Reverse bit ordering"));
	}
	ret = clSetKernelArg(kernels[1], 3, sizeof(cl_int), (void *)&n);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments: Reverse bit ordering"));
	}
     
	ret = clSetKernelArg(kernels[2], 0, sizeof(cl_mem), (void *)&dst);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[2], 1, sizeof(cl_mem), (void *)&spin);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[2], 2, sizeof(cl_int), (void *)&m);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[2], 3, sizeof(cl_int), (void *)&n); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[2], 5, sizeof(cl_uint), (void *)&flag); 
     


	ret = clSetKernelArg(kernels[3], 0, sizeof(cl_mem), (void *)&dst); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[3], 1, sizeof(cl_int), (void *)&n); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
     
	
	// Reverse bit ordering  
	setWorkSize(gws, lws, n, n);   
	ret = clEnqueueNDRangeKernel(queue, kernels[1], 2, NULL, gws, lws, 0, NULL, NULL);   
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: enqueue kernel: reverse bit ordering"));
	}
     
	// Perform Butterfly Operations  
	setWorkSize(gws, lws, n/2, n); 
	for (iter=1; iter <= m; iter++){
		ret = clSetKernelArg(kernels[2], 4, sizeof(cl_int), (void *)&iter);  
		if(ret != CL_SUCCESS){
			throw(string("Error: wrong in FFT: set kernel arguments"));
		}
		ret = clEnqueueNDRangeKernel(queue, kernels[2], 2, NULL, gws, lws, 0, NULL, &kernelDone);
		if(ret != CL_SUCCESS){
			throw(string("Error: wrong in FFT: enqueue kernel: butterfly operation"));
		}
		ret = clWaitForEvents(1, &kernelDone); 
		if(ret != CL_SUCCESS){
			throw(string("Error: wrong in FFT: wait for event"));
		}
	}  
     
	if (direction == 1) {
		setWorkSize(gws, lws, n, n);   
		ret = clEnqueueNDRangeKernel(queue, kernels[3], 2, NULL, gws, lws, 0, NULL, &kernelDone);
		ret = clWaitForEvents(1, &kernelDone); 
	}  
     
	

	// Transpose matrix 
	ret = clSetKernelArg(kernels[5], 0, sizeof(cl_mem), (void *)&src); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[5], 1, sizeof(cl_mem), (void *)&dst); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	ret = clSetKernelArg(kernels[5], 2, sizeof(cl_int), (void *)&n); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: set kernel arguments"));
	}
	setWorkSize(gws, lws, n, n);   
	ret = clEnqueueNDRangeKernel(queue, kernels[5], 2, NULL, gws, lws, 0, NULL, NULL);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: enqueue kernel: transpose matrix"));
	}
	
	
	// Reverse bit ordering  
	setWorkSize(gws, lws, n, n);   
	ret = clEnqueueNDRangeKernel(queue, kernels[1], 2, NULL, gws, lws, 0, NULL, NULL);  
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: enqueue kernel: reverse bit ordering"));
	}
     
	// Perform Butterfly Operations 
	setWorkSize(gws, lws, n/2, n); 
	for (iter=1; iter <= m; iter++){
		ret = clSetKernelArg(kernels[2], 4, sizeof(cl_int), (void *)&iter);  
		if(ret != CL_SUCCESS){
			throw(string("Error: wrong in FFT: set kernel argument: butterfly operation"));
		}
		ret = clEnqueueNDRangeKernel(queue, kernels[2], 2, NULL, gws, lws, 0, NULL, &kernelDone);
		if(ret != CL_SUCCESS){
			throw(string("Error: wrong in FFT: enqueue kernel: butterfly operation"));
		}
		ret = clWaitForEvents(1, &kernelDone); 
	}  
     
	if (direction == 1) {
		setWorkSize(gws, lws, n, n);   
		ret = clEnqueueNDRangeKernel(queue, kernels[3], 2, NULL, gws, lws, 0, NULL, &kernelDone);
		ret = clWaitForEvents(1, &kernelDone); 
	}  
    

}



void shaderHandler::Run2()
{
	cl_int ret;

	cl_mem xmobj = NULL;   
	cl_mem rmobj = NULL;   
	cl_mem wmobj = NULL;   

	cl_mem kernel_xmobj = NULL;   
	cl_mem kernel_rmobj = NULL;   
  

	cl_float2 *xm; 
	cl_float2 *rm; 
	cl_float2 *wm; 

	cl_float2 *kernel_src;
	cl_float2 *kernel_trg;

	cl_int n = gabor->img_width;
	cl_int m = (cl_int)(log((double)n)/log(2.0)); 
     
	xm = (cl_float2 *)malloc(n * n * sizeof(cl_float2));   
	rm = (cl_float2 *)malloc(n * n * sizeof(cl_float2));   
	wm = (cl_float2 *)malloc(n / 2 * sizeof(cl_float2));  
	kernel_src = (cl_float2 *)malloc(n * n * sizeof(cl_float2));   
	kernel_trg = (cl_float2 *)malloc(n * n * sizeof(cl_float2));  

	float* image_0 = new float[n*n];
	float* real_0 = new float[n*n];
	memset(image_0, 0, sizeof(float)*n*n);
	
	gabor->transformCLfloat2(gabor->rawImage,image_0 ,xm,n,n,true);
	gabor->kernel_padder(real_0, image_0, n,n);
	gabor->transformCLfloat2(real_0,image_0, kernel_src ,n,n,true);

/*NTU*/
	cl_float2* my_kernel_xmobj = new cl_float2[n*n];
	cl_float2* my_kernel_rmobj = new cl_float2[n*n];
	cl_float2* my_kernel_wmobj = new cl_float2[n/2];
	cl_float2* kernel_kernel_xmobj = new cl_float2[n*n];
	cl_float2* kernel_kernel_rmobj = new cl_float2[n*n];
	
	/* Create Buffer Objects */
	//xmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, n*n*sizeof(cl_float2), NULL, &ret); 
	xmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR, n*n*sizeof(cl_float2), my_kernel_xmobj, &ret); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}
	//rmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, n*n*sizeof(cl_float2), NULL, &ret); 
	rmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR, n*n*sizeof(cl_float2), my_kernel_rmobj, &ret); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}
	//wmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, (n/2)*sizeof(cl_float2), NULL, &ret);
	wmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR, (n/2)*sizeof(cl_float2), my_kernel_wmobj, &ret);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}

	//kernel_xmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, n*n*sizeof(cl_float2), NULL, &ret); 
	kernel_xmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR, n*n*sizeof(cl_float2), kernel_kernel_xmobj, &ret); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}
	//kernel_rmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_ALLOC_HOST_PTR, n*n*sizeof(cl_float2), NULL, &ret); 
	kernel_rmobj = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR, n*n*sizeof(cl_float2), kernel_kernel_rmobj, &ret); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}



	clFinish(queue);
	counter.Reset();
	counter.Start();
printf("\n\n--------------------------------------------------\n\n");
	/* Transfer data to memory buffer */   
	ret = clEnqueueWriteBuffer(queue, xmobj, CL_TRUE, 0, n*n*sizeof(cl_float2), xm, 0, NULL, NULL);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}
	ret = clEnqueueWriteBuffer(queue, kernel_xmobj, CL_TRUE, 0, n*n*sizeof(cl_float2), kernel_src, 0, NULL, NULL);
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: create buffer"));
	}

printf("\n\n--------------------------------------------------\n\n");


	RunFFT(rmobj, xmobj, wmobj, 0);
	RunFFT(kernel_rmobj, kernel_xmobj, wmobj,0);
	RunMultiply(rmobj, kernel_rmobj);
	RunFFT(xmobj, rmobj, wmobj, 1);

	
	ret = clEnqueueReadBuffer(queue, xmobj, CL_TRUE, 0, n*n*sizeof(cl_float2), xm, 0, NULL, NULL); 
	if(ret != CL_SUCCESS){
		throw(string("Error: wrong in FFT: read buffer"));
	}
	clFinish(queue);
	counter.Stop();
	double elapse_time = counter.GetElapsedTime()/double(param->nIterations);
	cerr << "FFT : " << elapse_time << endl;
	

	n = gabor->img_width;
	gabor->transformCLfloat2(real_0 ,image_0 ,xm,n,n,false);
	for(int y=0; y<n; ++y){
		for(int x=0; x<n; ++x){
			real_0[y*n+x] = sqrt(real_0[y*n+x]*real_0[y*n+x]+image_0[y*n+x]*image_0[y*n+x]);
			//real_0[y*n+x] = log(real_0[y*n+x] + 1);
		}
	}
	gabor->normalizeResult(real_0, n);
	gabor->saveRawtoImage(real_0, "FFT.jpg",n,n);

}

void shaderHandler::RunSepConvolution(cl_mem dst, cl_mem src, cl_mem filter, int dir)
{
	cl_int resultCL;
    size_t localWorkSize[2], globalWorkSize[2];
	int kernel_num = 8;

    resultCL  = clSetKernelArg(kernels[kernel_num], 0, sizeof(cl_mem),       (void*)&dst);
    resultCL |= clSetKernelArg(kernels[kernel_num], 1, sizeof(cl_mem),       (void*)&src);
    resultCL |= clSetKernelArg(kernels[kernel_num], 2, sizeof(cl_mem),       (void*)&filter);
    resultCL |= clSetKernelArg(kernels[kernel_num], 3, sizeof(unsigned int), (void*)&param->nInWidth);
    resultCL |= clSetKernelArg(kernels[kernel_num], 4, sizeof(int),          (void*)&param->nFilterWidth);
   // resultCL |= clSetKernelArg(kernels[kernel_num], 4, sizeof(unsigned int), (void*)&param->nInHeight);
   // resultCL |= clSetKernelArg(kernels[kernel_num], 5, sizeof(unsigned int), (void*)&param->nInWidth);
    if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in SepConvlolution: set kernel arguments"));
	}

	globalWorkSize[0] = param->nInWidth;
	globalWorkSize[1] = param->nInHeight;
	localWorkSize[0] = 8;
	localWorkSize[1] = 8;

	clFinish(queue);
    resultCL = clEnqueueNDRangeKernel(queue, kernels[kernel_num], 2, NULL, globalWorkSize, localWorkSize, 0, NULL, NULL);
	//cerr << "run kernel : " << kernel_num << endl;
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in SepConvlolution: Enqueue Kernel"));
	}
}


void shaderHandler::Run3()
{
	cl_int resultCL;

	cl_float* kernel_row;
	cl_float* kernel_col;
	cl_float* output_sep;
	cl_float* cl_tmp;
	cl_mem cl_tmpBuffer;
	size_t gws[2]; 
	size_t lws[2]; 
	int n = param->nInWidth;

	kernel_row = new cl_float[param->nFilterWidth];
	kernel_col = new cl_float[param->nFilterWidth];
	output_sep = new cl_float[param->nInWidth * param->nInHeight];
	cl_tmp = new cl_float[param->nInWidth * param->nInHeight];

	memset(output_sep,0,sizeof(cl_float)*param->nInWidth * param->nInHeight);
	memset(cl_tmp,0,sizeof(cl_float)*param->nInWidth * param->nInHeight);

	for(int i=0; i<param->nFilterWidth; ++i){
		kernel_row[i] = gabor->kernel_row[i];
		kernel_col[i] = gabor->kernel_col[i];
	}

	cl_filter1D_row = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR, param->nFilterWidth*sizeof(cl_float), kernel_row, &resultCL); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in seperable Convolution: create buffer"));
	}
	cl_filter1D_col = clCreateBuffer(context, CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR, param->nFilterWidth*sizeof(cl_float), kernel_col, &resultCL); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in seperable Convolution: create buffer"));
	}

	cl_tmpBuffer = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR , sizeof(cl_float) * param->nInWidth * param->nInHeight, cl_tmp, &resultCL); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in seperable Convolution: create buffer"));
	}

	cl_output_sepConvolution = clCreateBuffer(context, CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR , sizeof(cl_float) * param->nInWidth * param->nInHeight, output_sep, &resultCL); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in seperable Convolution: create buffer"));
	}

	clFinish(queue);
	counter.Reset();
	counter.Start();
	
	RunSepConvolution(cl_tmpBuffer, cl_input, cl_filter1D_row, 0);
	

	// Transpose matrix 
	resultCL = clSetKernelArg(kernels[7], 0, sizeof(cl_mem), (void *)&cl_output_sepConvolution); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	resultCL = clSetKernelArg(kernels[7], 1, sizeof(cl_mem), (void *)&cl_tmpBuffer); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	resultCL = clSetKernelArg(kernels[7], 2, sizeof(cl_int), (void *)&param->nInWidth); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	setWorkSize(gws, lws, param->nInWidth, param->nInHeight);   
	resultCL = clEnqueueNDRangeKernel(queue, kernels[7], 2, NULL, gws, lws, 0, NULL, NULL);
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: enqueue kernel: transpose matrix"));
	}
	

	
	RunSepConvolution(cl_tmpBuffer, cl_output_sepConvolution, cl_filter1D_col, 0);
	


	// Transpose matrix 
	resultCL = clSetKernelArg(kernels[7], 0, sizeof(cl_mem), (void *)&cl_output_sepConvolution); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	resultCL = clSetKernelArg(kernels[7], 1, sizeof(cl_mem), (void *)&cl_tmpBuffer); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	resultCL = clSetKernelArg(kernels[7], 2, sizeof(cl_int), (void *)&param->nInWidth); 
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: set kernel arguments"));
	}
	setWorkSize(gws, lws, param->nInWidth, param->nInHeight);   
	resultCL = clEnqueueNDRangeKernel(queue, kernels[7], 2, NULL, gws, lws, 0, NULL, NULL);
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in transpose: enqueue kernel: transpose matrix"));
	}
	
	clFinish(queue);
	
	resultCL = clEnqueueReadBuffer(queue, cl_output_sepConvolution, CL_TRUE, 0, sizeof(cl_float) * param->nInWidth * param->nInHeight, output_sep, 0, NULL, NULL);
	
	if(resultCL != CL_SUCCESS){
		throw(string("Error: wrong in seperable convolution: read buffer"));
	}

	clFinish(queue);
	counter.Stop();
	double elapse_time = counter.GetElapsedTime()/double(param->nIterations);
	cerr << "sep_conv : " << elapse_time << endl;



	gabor->normalizeResult(output_sep, n);
	gabor->saveRawtoImage(output_sep, "sep_output.jpg",n,n);

}
