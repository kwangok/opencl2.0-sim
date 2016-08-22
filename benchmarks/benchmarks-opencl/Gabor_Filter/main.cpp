#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <omp.h>
#include <CL/cl.h>
#include "shaderHandler.h"
#include "shaderParam.h"
#include <stdio.h>
#include <stdlib.h>


using namespace std;



int main( int argc, char * argv[])
{
	GaborFilter gabor;
	//system("dir");
	//gabor.LoadImage("lena.bmp");
	gabor.LoadImage(argv[1]);
	// panic: Packet queue system.ruby.dir_cntrl0.memory- has grown beyond 100 packets¡A 
	// transmitList.size() > 500 change > 1000 can work ( gem5/src/mem/packet_queue.cc )
	//gabor.LoadImage("lena.bmp");
	//Gabor filter==============================================
	cout << "Gabor filter begins..."<<endl;			
	//¦Aiterative°µ30ºØkernel
	//gabor.GaborKernel_Init(0,0,12.56,1.414);
	gabor.GaborKernel_Init(0,0,6.28,1.414); //25
	//gabor.GaborKernel_show(0);
	cout << "Gabor filter ended."<<endl;
	//Gabor filter END=========================================
	cerr << "Filter Width = " << gabor.iWidth << endl;
	try{
		shaderHandler openCLShader;
		shaderParam GaborParam;
		GaborParam.initParam(gabor);

		openCLShader.initCL();
		openCLShader.setParam( &GaborParam );
		openCLShader.LoadCLFile("Kernels.cl");
		openCLShader.setGabor(&gabor);
		openCLShader.createBuffer();

		openCLShader.Run();
		openCLShader.Run2();
		openCLShader.Run3();

		openCLShader.releaseBuffer();
		openCLShader.releaseCL();

	}catch(std::string msg){
        cerr << "Exception caught in main(): " << msg << endl;
    }

	//system("PAUSE");
	return 0;
}
