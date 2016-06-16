#pragma OPENCL EXTENSION cl_khr_fp64: enable
__kernel void KeypointLocalization(__global const float* DoG1, __global const float* absolute_sigma, const float contrast_threshold
                        , __global int* posx, __global int* posy, __global unsigned char* scaleoctave, __global unsigned char* scaleintervals
						, __global float* abs_sigma, __global int* flag, const unsigned int l)
{

	//printf("%f\n", contrast_threshold);

	float win[3][3][3];
	float winvec[27];
	float Tr, Det, curvate;
	float curvate_threshold = (11.0f * 11.0f) / 10.0f;
	int R = get_global_size(0) + 2;
	int C = get_global_size(1) + 2;
	int intervals = get_global_size(2);
	int i, j, k;
	i = get_global_id(0) + 1;
	j = get_global_id(1) + 1;
	k = get_global_id(2) + 1;
		

	
	int me = k * (R) * (C)
		  + i * (C)
		  + j;

	
	if(DoG1[me] > contrast_threshold)
	{
		int count = 0;
		for(int r = 0; r < 3; r++) {
			for(int c = 0; c < 3; c++) {
				for(int ind = 0; ind < 3; ind++) {	
					int index = (k + ind - 1) * (R) * (C)
							 + (i + r - 1) * (C)
							 + (j + c - 1);				

					win[r][c][ind] = DoG1[index];
					winvec[count] = win[r][c][ind];
					count++;
				}
			}
		}
		float max = 0;
		for(int x = 0; x < 27; x++){
			if(winvec[x] > max)
				max = winvec[x];
		}
		if(max == win[1][1][1]) {
			float Dxx, Dyy, Dxy;
			Dxx = win[1][0][1] + win[1][2][1] - 2 * win[1][1][1];
			Dyy = win[0][1][1] + win[2][1][1] - 2 * win[1][1][1];
			Dxy = (win[2][2][1] - win[0][2][1] - win[2][0][1] + win[0][0][1]) / 4;
			Tr = Dxx + Dyy;
			Det = Dxx * Dyy - Dxy * Dxy;   
			curvate = pow(Tr, 2) / Det;

			int N = (k - 1) * (R - 2) * (C - 2)
				  + (i - 1) * (C - 2)
		          + (j - 1);

			if(Det >= 0 && curvate < curvate_threshold){
				flag[N] = 1;
				posx[N] = i * pow(2.0f, l);
				posy[N] = j * pow(2.0f, l);
				scaleoctave[N] = l;
				scaleintervals[N] = k;
				abs_sigma[N] = absolute_sigma[l * (intervals + 3) + k];
			}
		}
	}
}

