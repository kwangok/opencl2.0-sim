__constant sampler_t sampler = CLK_NORMALIZED_COORDS_FALSE |
                                CLK_ADDRESS_CLAMP |
                                CLK_FILTER_NEAREST;

/*float2 interp(float p_x, float p_y, read_only image2d_t image)
{
	float points_x[4], points_y[4];
	float Lxy[4];
	points_x[0] = p_x+1;
	points_y[0] = p_y;
	points_x[1] = p_x-1;
	points_y[1] = p_y;
	points_x[2] = p_x;
	points_y[2] = p_y+1;
	points_x[3] = p_x;
	points_y[3] = p_y-1;

	int2 coord_0 = (int2)(p_x-1, p_y-1);
    int2 coord_1 = (int2)(x,   y-1);
    int2 coord_2 = (int2)(x+1, y-1);
    int2 coord_3 = (int2)(x-1, y);
 

	for(int i=0;i<4;i++){
		if(cvRound(p_x) == p_x && cvRound(p_y) == p_y){
			Lxy[0] = image.at<float>(cvRound(p_y),cvRound(p_x+1));
			Lxy[1] = image.at<float>(cvRound(p_y),cvRound(p_x-1));
			Lxy[2] = image.at<float>(cvRound(p_y+1),cvRound(p_x));
			Lxy[3] = image.at<float>(cvRound(p_y-1),cvRound(p_x));
		}
		else{
			for(int j=0;j<4;j++){
				Point p1(cvCeil(points_x[j]), cvCeil(points_y[j]));
				Point p2(cvCeil(points_x[j]), cvFloor(points_y[j]));
				Point p3(cvFloor(points_x[j]), cvCeil(points_y[j]));
				Point p4(cvFloor(points_x[j]), cvFloor(points_y[j]));
				float u,v;
				u = points_x[j] - p4.x;
				v = points_y[j] - p4.y;
				float L[4];
				L[0] = image.at<float>(p1.y,p1.x);
				L[1] = image.at<float>(p2.y,p2.x);
				L[2] = image.at<float>(p3.y,p3.x);
				L[3] = image.at<float>(p4.y,p4.x);
				Lxy[j] = (1-u)*(1-v)*L[3] + (1-u)*v*L[2] + u*(1-v)*L[1] + u*v*L[0];
			}
		}
	}

	float dx = pow(Lxy[0]-Lxy[1],2.0);
	float dy = pow(Lxy[2]-Lxy[3],2.0);
	float2 sol = (float2)(sqrt( dx+dy), atan2f(dy,dx) * 180 / M_PI);

	return sol;
}*/

__kernel void cl_descriptor(__global int* posx, __global int* posy, __global int* scaleoctave, __global int* scaleintervals, __global float* abs_sigma, __global float* orient,  __global float* desc, read_only image2d_t imageblurs0, read_only  image2d_t imageblurs1, read_only  image2d_t imageblurs2, read_only  image2d_t imageblurs3, read_only  image2d_t imageblurs4, read_only  image2d_t imageblurs5, read_only  image2d_t imageblurs6, read_only  image2d_t imageblurs7)
{
	int i, j, k, octave, interval, f, bin, tmp;
	int image_in_width, image_in_height;
	float rot, x, y, rot_ori, s;
	float tmp_hist_bins[8];
	//float M_PI = 3.1415926535f;
	float feature_pos_x, feature_pos_y;
	float mag_ori_x, mag_ori_y, dx, dy;
	float origin_hist_center_x[16], origin_hist_center_y[16];
	float origin_hist_arr_x[16], origin_hist_arr_y[16];
	float hist_center_x[16], hist_center_y[16];
	float hist_arr_x[16], hist_arr_y[16];
	float Lxy[4];
	//read_only image2d_t image;

	f = get_global_id(0);

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			origin_hist_center_y[4*i+j] = i*4-6;
			origin_hist_center_x[4*i+j] = j*4-6;
			origin_hist_arr_y[4*i+j] = i-2+0.5;
			origin_hist_arr_x[4*i+j] = j-2+0.5;
		}
	}


	rot = orient[f] * M_PI / 180;
	for(i=0;i<16;i++){
		hist_center_x[i] = origin_hist_center_x[i]*cos(rot) - origin_hist_center_y[i]*sin(rot);
		hist_center_y[i] = origin_hist_center_x[i]*sin(rot) + origin_hist_center_y[i]*cos(rot);
		hist_arr_x[i] = origin_hist_arr_x[i]*cos(rot) - origin_hist_arr_y[i]*sin(rot);
		hist_arr_y[i] = origin_hist_arr_x[i]*sin(rot) + origin_hist_arr_y[i]*cos(rot);
	}

	octave = scaleoctave[f];
	interval = scaleintervals[f];
	feature_pos_x = posy[f];
	feature_pos_y = posx[f];

	tmp = octave*interval;

	for(i=0;i<16;i++){
		for(k=0;k<8;k++)
			tmp_hist_bins[k] = 0;
		for(j=0;j<16;j++){
			x = feature_pos_x+hist_center_x[i]+hist_arr_x[j];
			y = feature_pos_y+hist_center_y[i]+hist_arr_y[j];
			if (tmp == 0)
			{
				image_in_width = get_image_width(imageblurs0);
				image_in_height = get_image_height(imageblurs0);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs0,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs0,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs0,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs0,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 1)
			{
				image_in_width = get_image_width(imageblurs1);
				image_in_height = get_image_height(imageblurs1);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs1,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs1,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs1,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs1,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 2)
			{
				image_in_width = get_image_width(imageblurs2);
				image_in_height = get_image_height(imageblurs2);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs2,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs2,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs2,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs2,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 3)
			{
				image_in_width = get_image_width(imageblurs3);
				image_in_height = get_image_height(imageblurs3);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs3,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs3,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs3,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs3,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 4)
			{
				image_in_width = get_image_width(imageblurs4);
				image_in_height = get_image_height(imageblurs4);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs4,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs4,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs4,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs4,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 5)
			{
				image_in_width = get_image_width(imageblurs5);
				image_in_height = get_image_height(imageblurs5);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs5,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs5,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs5,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs5,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 6)
			{
				image_in_width = get_image_width(imageblurs6);
				image_in_height = get_image_height(imageblurs6);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs6,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs6,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs6,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs6,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}
			else if (tmp == 7)
			{
				image_in_width = get_image_width(imageblurs7);
				image_in_height = get_image_height(imageblurs7);
				if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(imageblurs7,sampler, coord_0);
					float4 up_1 = read_imagef(imageblurs7,sampler, coord_1);
					float4 up_2 = read_imagef(imageblurs7,sampler, coord_2);
					float4 up_3 = read_imagef(imageblurs7,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}
			}

				
				//if(x>1 && y>1 && x<imageblurs[octave][interval].cols-2 && y<imageblurs[octave][interval].rows-2)
				/*if(x>1 && y>1 && x<image_in_width-2 && y<image_in_height-2)
				{
					int2 coord_0 = (int2)(y, x+1);
					int2 coord_1 = (int2)(y, x-1);
					int2 coord_2 = (int2)(y+1, x);
					int2 coord_3 = (int2)(y-1, x);

					float4 up_0 = read_imagef(image,sampler, coord_0);
					float4 up_1 = read_imagef(image,sampler, coord_1);
					float4 up_2 = read_imagef(image,sampler, coord_2);
					float4 up_3 = read_imagef(image,sampler, coord_3);


					Lxy[0] = up_0.x;
					Lxy[1] = up_1.x;
					Lxy[2] = up_2.x;
					Lxy[3] = up_3.x;

					float dx = pow(Lxy[0]-Lxy[1],2.0);
					float dy = pow(Lxy[2]-Lxy[3],2.0);
					mag_ori_x = sqrt(dx+dy);
					mag_ori_y = atan2(dy,dx) * 180 / M_PI;
				}
				else{
					mag_ori_x = 0;
					mag_ori_y = 0;
				}*/

			rot_ori = mag_ori_y - orient[f];
			while(rot_ori >= 360)
				rot_ori -= 360;
			while(rot_ori < 0)
				rot_ori += 360;
			//bin = cvFloor(rot_ori / 45);
			bin = (rot_ori / 45)+0.5f;
			tmp_hist_bins[bin] += mag_ori_x;
		}
		for(j=0;j<8;j++){
			desc[f*128+8*i+j] = tmp_hist_bins[j];
		}
	}

	s = 0;
	for(i=0;i<128;i++)
		s += desc[f*128+i];
	for(i=0;i<128;i++){
		if(desc[f*128+i] > s*0.2)
			desc[f*128+i] = s * 0.2;
	}
	s = 0;
	for(i=0;i<128;i++)
		s += desc[f*128+i];
	for(i=0;i<128;i++)
		desc[f*128+i] /= s;
}
