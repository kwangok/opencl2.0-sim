__kernel void track(__global int *prev_in, __global int *cur_in, __global int *var ,__global int *state, __global float *dx, __global float *dy, __global float *scaling)
{        

	/*const int w, const int h,
                      const int pyr_w, const int pyr_h, 
                      float scaling, int level, char initGuess, 
                      float *dx, float *dy, char *status
	*/
	// const float scaling[8] = { 1, 0.5f, 0.25f, 0.125f, 0.0625f, 0.03125f, 0.015625f, 0.0078125f};
	int i = get_global_id(0);
	int rev = 0;
    int x = i%var[0];
    int y = i/var[0];
    int idx = i;
	int w = var[0];
	int h = var[1];
	int PATCH_R = var[2];
    int pyr_w = var[3];
	int pyr_h = var[4];
	
	//printf("%d %d %d %d %d \n",state[idx],state1[idx],wait[idx],wait1[idx],match[idx]);
	//printf("%d %d %d \n",state[idx],state1[idx],match[idx]);
	
	//if(match[idx] == 1)
	//	return;
	
    if(x > w-1 || y > h-1) 
        return;

	if(rev == 0){
		if(state[idx] == 0)
			return;
	}

    float prev_x = x*scaling[var[5]];
    float prev_y = y*scaling[var[5]];

    float Vx, Vy;
    float cur_x, cur_y;
    float sum_Ixx = 0;
    float sum_Ixy = 0;
    float sum_Iyy = 0;
    float sum_Ixt;
    float sum_Iyt;
    float Ix, Iy, It;
    int xx, yy;
    float det, D;
    float I, J;
    float vx, vy;
    int j;

    if(var[7]) {
        Vx = 0;
        Vy = 0;
        cur_x = prev_x;
        cur_y = prev_y;
    }
    else {
		
		Vx = dx[idx];
		Vy = dy[idx];
		
        cur_x = prev_x + Vx;
        cur_y = prev_y + Vy;
    }
  
    // Calculate spatial gradient 
    for(yy=-PATCH_R; yy <= PATCH_R; yy++) {
		if((int)(prev_y + yy +1)>= pyr_h)
			break;
		if((int)(prev_y + yy -1) < 0)
			continue;
        for(xx=-PATCH_R; xx <= PATCH_R; xx++) {  
            if(((int)prev_x+xx +1) >= pyr_w)
				break;
			if(((int)prev_x+xx -1) < 0)
				continue;
				
			//Ix = (tex2D(texRef_pyramid_prev, prev_x + xx+1, prev_y + yy) - tex2D(texRef_pyramid_prev, prev_x + xx-1, prev_y + yy))*0.5f;
            //Iy = (tex2D(texRef_pyramid_prev, prev_x + xx, prev_y + yy+1) - tex2D(texRef_pyramid_prev, prev_x + xx, prev_y + yy-1))*0.5f;

			Ix = (float)(prev_in[(int)(prev_y + yy)*var[3]+(int)prev_x+xx +1] - prev_in[(int)(prev_y + yy)*var[3]+(int)prev_x+xx -1])*0.5f;
			Iy = (float)(prev_in[(int)(prev_y + yy +1)*var[3]+(int)prev_x+xx] - prev_in[(int)(prev_y + yy -1)*var[3]+(int)prev_x+xx])*0.5f;
			
			sum_Ixx += Ix*Ix;
            sum_Ixy += Ix*Iy;
            sum_Iyy += Iy*Iy;
        }
    }

    det = sum_Ixx*sum_Iyy - sum_Ixy*sum_Ixy;

    if(det < 0.00001f) {
		if(rev == 0){
			state[idx] = 0;
			return;
		}
    }

    D = 1/det;

    // Iteration part
    for(j=0; j < 10; j++) {
        if(cur_x < 0 || cur_x > pyr_w || cur_y < 0 || cur_y > pyr_h) {
            if(rev == 0){
				state[idx] = 0;
				return;
			}
        }

        sum_Ixt = 0;
        sum_Iyt = 0;

        // No explicit handling of pixels outside the image ... maybe we don't have to because the hardware interpolation scheme
        // will always give a result for pixels outside the image. How greatly the duplicated pixel values affect the result is unknown at the moment.
        for(yy=-PATCH_R; yy <= PATCH_R; yy++) {
			if((int)(prev_y + yy +1)>= pyr_h)
				break;
			if((int)(prev_y + yy-1) < 0)
				continue;
            for(xx=-PATCH_R; xx <= PATCH_R; xx++) {            
                //I = tex2D(texRef_pyramid_prev, prev_x + xx, prev_y + yy);   
                //J = tex2D(texRef_pyramid_cur, cur_x + xx, cur_y + yy);
				if(((int)prev_x+xx +1) >= pyr_w)
					break;
				if(((int)prev_x+xx -1) < 0)
					continue;
				
				I = (float)prev_in[(int)(prev_y + yy)*var[3]+(int)prev_x+xx];
				J = (float)cur_in[(int)(cur_y + yy)*var[3]+(int)cur_x + xx];
				
                //Ix = (tex2D(texRef_pyramid_prev, prev_x + xx+1, prev_y + yy) - tex2D(texRef_pyramid_prev, prev_x + xx-1, prev_y + yy))*0.5f;
                //Iy = (tex2D(texRef_pyramid_prev, prev_x + xx, prev_y + yy+1) - tex2D(texRef_pyramid_prev, prev_x + xx, prev_y + yy-1))*0.5f;

				
				Ix = (float)(prev_in[(int)(prev_y + yy)*var[3]+(int)prev_x+xx +1] - prev_in[(int)(prev_y + yy)*var[3]+(int)prev_x+xx -1])*0.5f;
				Iy = (float)(prev_in[(int)(prev_y + yy +1)*var[3]+(int)prev_x+xx] - prev_in[(int)(prev_y + yy -1)*var[3]+(int)prev_x+xx])*0.5f;
				
                It = J - I;

                sum_Ixt += Ix*It;
                sum_Iyt += Iy*It;
            }            
        }

        // Find the inverse of the 2x2 matrix using a mix of determinant and adjugate matrix
        // http://cnx.org/content/m19446/latest/
        vx = D*(-sum_Iyy*sum_Ixt + sum_Ixy*sum_Iyt);
        vy = D*( sum_Ixy*sum_Ixt - sum_Ixx*sum_Iyt);

        Vx += vx;
        Vy += vy;
        cur_x += vx;
        cur_y += vy;
 
        // Movement very small
        if((vx < 0.01f && vx > -0.01f) && (vy < 0.01f && vy > -0.01f))
            break;
    }

    if(var[6] != 0) {
        cur_x += cur_x;
        cur_y += cur_y;

        Vx += Vx;
        Vy += Vy;
    }

	
	dx[idx] = Vx;
	dy[idx] = Vy;
	
}
	
	
