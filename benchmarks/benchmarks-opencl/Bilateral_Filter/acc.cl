#pragma OPENCL EXTENSION cl_khr_fp64: enable
__kernel void test(__global uchar* in
				  ,__global float* D
				  ,__global float* R
				  ,__global int* radius
				  ,__global uchar* out){
	int i = get_global_id(0);
	// i = h , j = w
	float sum = 0;
	float totalWeight = 0;
	int intensityCenter = in[i];
	//radius 0 = w , 1 = h , 2 = r
	int mMax = i / radius[0] + radius[2];
	//int nMax = i % radius[0] + radius[2] * 3;
	int nMax = i % radius[0] + radius[2];
	float weight;
	
	for (int m = (i / radius[0]) - radius[2]; m < mMax; m++){
		//for (int n = (i % radius[0]) - radius[2]*3; n < nMax; n += 3){//color *1 =>  *3 , +1 => +=3
		for (int n = (i % radius[0]) - radius[2]; n < nMax; n ++){//color *1 =>  *3 , +1 => +=3
				if ( m > -1 && n > -1 && m < radius[1] && n < radius[0] ){
				int intensityKernelPos = in[m * radius[0] + n];
				//float gSW = D[(int)(i / radius[0] - m + radius[2])*(2*radius[2]+1)+(int)(i%radius[0]/3 - n/3 + radius[2])];//對應的矩陣相反要將其變回原先大小
				float gSW = D[(int)(i / radius[0] - m + radius[2])*(2*radius[2]+1)+(int)(i%radius[0]- n + radius[2])];
				float Sim = R[abs(in[m*radius[0] + n]-intensityCenter)];
				weight = gSW * Sim;
				totalWeight += weight;
				sum += (gSW * Sim * in[m*radius[0] + n]);
			}
		}
	}
	int newvalue = (int)floor(sum / totalWeight);
	out[i] = newvalue;
}

