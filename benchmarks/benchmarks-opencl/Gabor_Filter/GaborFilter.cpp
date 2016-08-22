#include "GaborFilter.h"
#include <iostream>

using namespace std;

void GaborFilter::GaborKernel_Init(int iMu, int iNu, double dSigma, double dF)
{      
		iSigma = dSigma;
		iF = dF;
    
		iKmax = PI/2;
    
		// Absolute value of K
		iK = iKmax / pow(F, (double)iNu);
		iPhi = PI*iMu/6;		
		//determine the width of Mask
        double dModSigma = iSigma/iK;
        //double dWidth = round(dModSigma*6 + 1);
		double dWidth = floor(dModSigma*6 + 1.5);
        //test whether dWidth is an odd.
        if (fmod(dWidth, 2.0)==0.0) 
			dWidth++;
        iWidth = (float)dWidth;		
		

		//===Gabor Function
        int x, y;
        double dReal;
        double dImag;
        double dTemp1, dTemp2, dTemp3;

		mReal = (float*) malloc(iWidth*iWidth*sizeof(float));
		mImag = (float*) malloc(iWidth*iWidth*sizeof(float));
		kernel_row = new float[iWidth];
		kernel_col = new float[iWidth];

		double d_sum = 0.0;
        for (int i = 0; i < iWidth; i++)
        {
            for (int j = 0; j < iWidth; j++)
            {	
                x = i-(iWidth-1)/2;
                y = j-(iWidth-1)/2;
				//Gaussian Envelope
                dTemp1 = (pow(iK,2)/pow(iSigma,2))*exp(-(pow((double)x,2)+pow((double)y,2))*pow(iK,2)/(2*pow(iSigma,2)));
                //sinosoid
				dTemp2 = cos(iK*cos(iPhi)*x + iK*sin(iPhi)*y) - exp(-(pow(iSigma,2)/2));
                dTemp3 = sin(iK*cos(iPhi)*x + iK*sin(iPhi)*y);
                dReal = dTemp1*dTemp2;
                dImag = dTemp1*dTemp3;

				//這裡直接做XY對調
                mReal[j*iWidth+i] = static_cast<float>(dReal);
				mImag[j*iWidth+i] = static_cast<float>(dImag);

            }
        }

		for(int i=0; i < iWidth; ++i){
			x = i-(iWidth-1)/2;
			y = i-(iWidth-1)/2;

			float tmp1 = (pow(iK,2)/pow(iSigma,2));
			float tmp2 = exp(-(pow((double)x,2))*pow(iK,2)/(2*pow(iSigma,2)));


			float tmpx = cos(iK*cos(iPhi)*x)- exp(-(pow(iSigma,2)/2));
			float tmpy = cos(iK*sin(iPhi)*y);// - exp(-(pow(iSigma,2)/2));

			kernel_col[i] = tmp2; //*tmpy;
			kernel_row[i] = tmp1*tmp2*tmpx;
		}

		/*
		for(int i=0; i < iWidth; ++i){
			kernel_row[i] = 0.0;
			kernel_col[i] = 0.0;

			kernel_row[i]=1.0;
		}
		kernel_col[0] = 1.0;
		kernel_col[iWidth-1] = -1.0;
		
		for(int i=0; i< iWidth; ++i){
			for (int j = 0; j < iWidth; j++){	
				mReal[j*iWidth+i] = 0.0;
			}
		}
		
        for (int j = 0; j < iWidth; j++){	
			mReal[j] = 1.0;
			mReal[j+(iWidth-1)*iWidth] = -1.0;
		}
		*/
        //=== Gabor Function 


	out_width = img_width - iWidth +1 ;
	out_height = img_height - iWidth + 1;
	outputCPU = new float[out_width*out_height];

}

void GaborFilter::GaborKernel_show(int choice){

	if(choice == 0){
		printf("%d\n",iWidth);
		for (int h= 0 ; h < iWidth ; h ++){
			for (int w= 0 ; w < iWidth ; w ++){
				printf("%f\t",mReal[h*iWidth+w]);
			}
			printf("\n");
		}
	}else{
		for (int h= 0 ; h < iWidth ; h ++){
			for (int w= 0 ; w < iWidth ; w ++){
				printf("%f\t",mImag[h*iWidth+w]);
			}
			printf("\n");
		}
	}
	
	
	printf("Gabor kernel width=%d\n",iWidth);
}




void GaborFilter::cropping(float* in , float* out){
	

}

void GaborFilter::normalize(float* in,float* out,int height,int width){

	float normal_factor = 10000.0;
	for(int y = 0 ; y < height ; y ++){
		for(int x = 0 ; x <width ; x++){
			out[y*width+x] = in[y*width+x]*normal_factor + 255;	
		}
	}

}

//傳入Image，轉為raw data
void GaborFilter::ImagetoRawData(IplImage *input_image,int height,int width)
{	           
	rawImage = (float*) malloc(width*height*sizeof(float));
	for(int h = 0 ; h < height ; h++){			
		for(int w = 0 ; w < width ; w++){				
			rawImage[h*width+w] = (float)*((unsigned char*)input_image->imageData+h*width+w);				
		}
	}
}

//傳入raw data，輸出為任意圖檔
void GaborFilter::saveRawtoImage(float* rawImage, const char* file_path, const unsigned int height,const unsigned int width ){	
	
	IplImage *Image2;
    Image2 = cvCreateImage(cvSize(width,height),IPL_DEPTH_8U,1);
	for(int h = 0 ; h < height ; h++){
		for(int w = 0 ; w < width ; w++){
			int tmp = (int)rawImage[h*width+w];
			Image2->imageData[h * Image2->widthStep + w] = (unsigned char)tmp;			
		}
	}

	cvSaveImage(file_path,Image2);
	//cv image release
	cvReleaseImage(&Image2);
}


void GaborFilter::LoadImage(const char* filename)
{
	IplImage *Image1; 	
    			
	if((Image1=cvLoadImage(filename,CV_LOAD_IMAGE_GRAYSCALE))!=0)
    {	
		img_height = Image1->height;
		img_width = Image1->width;
		
		ImagetoRawData(Image1,img_height,img_width);
				
    }

}

void GaborFilter::normalizeResult(float* output, int width)
{
	float big,small;
	big = 0.0;
	small = 200.0;
	for(int i=0;i < width; ++i){
		for(int j=0; j<width; ++j){
			big = big > output[i*width+j] ? big : fabs(output[i*width+j]);
			small = small < output[i*width+j] ? small : fabs(output[i*width+j]);
		}
	}

	cout << big << " " << small << endl;
	
	
	for(int i=0;i < width; ++i){
		for(int j=0; j<width; ++j){
			output[i*width+j] = (fabs(output[i*width+j]) - small) * 255.0 / (big - small);
			if(output[i*width+j] > 255.0){
				output[i*width+j] = 255.0;
			}else if (output[i*width+j] < 0.0){
				output[i*width+j] = 0.0;
			}
		}
	}
}

void GaborFilter::convolution()
{
	for(int y=0;  y< out_height; ++y){
		int yTopLeft = y;
		for(int x=0; x< out_width; ++x){
			int xTopLeft = x;

			float sum = 0.0;
			
			for(int q=0; q<iWidth; ++q){
				
				int indexFilterTmp = q * iWidth;
				int indexImageTmp = (yTopLeft + q)*img_width + xTopLeft;

				for(int p=0; p<iWidth; ++p){
					int indexFilter = indexFilterTmp + p;
					int indexImage = indexImageTmp + p;
					sum += rawImage[indexImage]*mReal[indexFilter];
				}

			}

			int indexOutput = y * out_width + x; 
			outputCPU[indexOutput] = sum;

		}

	}
}

void GaborFilter::transformCLfloat2(float* real, float* image, cl_float2* complex, int height, int width, bool dir)
{
	if(dir == true) { // float to cl_float2
		for(int y=0; y< height; ++y){
			for(int x=0; x<width; ++x){
				((float*)complex)[(2*width*y) + 2*x + 0] = real[ y * width + x];
				((float*)complex)[(2*width*y) + 2*x + 1] = image[ y * width + x];
			}
		}
		return;
	}

	for(int y=0; y< height; ++y){
		for(int x=0; x<width; ++x){
			real[ y * width + x] =  ((float*)complex)[(2*width*y) + 2*x + 0];
			image[ y * width + x] = ((float*)complex)[(2*width*y) + 2*x + 1];
		}
	}

}


void GaborFilter::kernel_padder(float* real, float* image , int height , int width)
{

	int shift_x = iWidth/2;
	int shift_y = iWidth/2;
	int xp,yp;

	for(int y = 0 ; y < height; y ++){
		for(int x = 0 ; x < width; x++){			
			real[y*width+x] = 0.0;
			image[y*width+x] = 0.0;
		}
	}

	for(int y = 0 ; y < iWidth ; y ++){
		for(int x = 0 ; x < iWidth ; x++){
			yp = y-shift_y;
			xp = x-shift_x;
			
			if(yp < 0){
				yp = height+yp;
			}
			if(xp < 0){
				xp = width+xp;
			}
			
			//yp += height / 2;
			//xp += width / 2;

			real[yp*width+xp] = mReal[y*iWidth+x];
			image[yp*width+xp] = image[y*iWidth+x];
		}
	}
	
}
