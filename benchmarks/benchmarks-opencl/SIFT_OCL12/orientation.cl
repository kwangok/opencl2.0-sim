__kernel void cl_orientation(__global const float* imageblurs_1d, __global float* magni_1d, __global float* orient_1d)
{
	float tmpx, tmpy;

	int j = get_global_id(0);
	int r = get_global_id(1);
	int c = get_global_id(2);

	int row = get_global_size(1);
	int col = get_global_size(2);

	if (r > 0 && r < row - 1 && c > 0 && c < col - 1)
	{
		tmpy = 0.5 * (imageblurs_1d[j * row * col + (r + 1) * col + c] - imageblurs_1d[j * row * col + (r - 1 ) * col + c]);
		tmpx = 0.5 * (imageblurs_1d[j * row * col + r * col + c + 1] - imageblurs_1d[j * row * col + r * col + c - 1]);

		magni_1d[j * row * col + r * col + c] = sqrt(tmpx * tmpx + tmpy * tmpy);
		orient_1d[j * row * col + r * col + c] = atan2(tmpy, tmpx) * 180 / M_PI;

		if(orient_1d[j * row * col + r * col + c] < 0)
			orient_1d[j * row * col + r * col + c] = 360 - orient_1d[j * row * col + r * col + c];
	}

}
