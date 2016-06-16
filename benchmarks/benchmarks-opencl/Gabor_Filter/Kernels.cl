#define PI 3.14159265358979323846  
#define PI_2 1.57079632679489661923


__kernel void convolution_direct(const __global  float * input,
                         __constant float * filter,
                         //const __global float * filter,
                         __global  float * output,
                         const int input_width,
                         const int FILTER_WIDTH)
{
    const int width = get_global_size(0);

    const int x = get_global_id(0);
    const int y = get_global_id(1);

    const int xTopLeft = x;
    const int yTopLeft = y;

    float4 sum4 = 0;
    for (int q = 0; q < FILTER_WIDTH; q++)
    {
        const int indexFilterTmp = q * FILTER_WIDTH;

        const int indexImageTmp = (yTopLeft + q) * input_width + xTopLeft;

        int p = 0;
        int p4 = 0;
        while (p <= FILTER_WIDTH-4)
        {
            float4 filter4 = vload4(p4, filter + indexFilterTmp);
            float4 in4     = vload4(p4, input + indexImageTmp);
            sum4 += in4 * filter4;
            p += 4;
            p4++;
        }

        int pMod = FILTER_WIDTH - p;
        if (pMod == 1)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter] * input[indexImage];
        }
        else if (pMod == 2)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter]   * input[indexImage];
            sum4.y += filter[indexFilter+1] * input[indexImage+1];
        }
        else if (pMod == 3)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter]   * input[indexImage];
            sum4.y += filter[indexFilter+1] * input[indexImage+1];
            sum4.z += filter[indexFilter+2] * input[indexImage+2];
        }
    }
    const int index_output = y * width + x;
    output[index_output] = sum4.x + sum4.y + sum4.z + sum4.w;
}


     
__kernel void spinFact(__global float2* w, int n)  
{  
    unsigned int i = get_global_id(0); 
         
    float2 angle = (float2)(2*i*PI/(float)n,(2*i*PI/(float)n)+PI_2);   
    w[i] = cos(angle); 
}  
     
__kernel void bitReverse(__global float2 *dst, __global float2 *src, int m, int n) 
{  
    unsigned int gid = get_global_id(0);   
    unsigned int nid = get_global_id(1);   
         
    unsigned int j = gid;  
    j = (j & 0x55555555) << 1 | (j & 0xAAAAAAAA) >> 1; 
    j = (j & 0x33333333) << 2 | (j & 0xCCCCCCCC) >> 2; 
    j = (j & 0x0F0F0F0F) << 4 | (j & 0xF0F0F0F0) >> 4; 
    j = (j & 0x00FF00FF) << 8 | (j & 0xFF00FF00) >> 8; 
    j = (j & 0x0000FFFF) << 16 | (j & 0xFFFF0000) >> 16;   
         
    j >>= (32-m);
         
    dst[nid*n+j] = src[nid*n+gid]; 
}  
     
__kernel void norm(__global float2 *x, int n)  
{  
    unsigned int gid = get_global_id(0);   
    unsigned int nid = get_global_id(1);   
         
    x[nid*n+gid] = x[nid*n+gid] / (float2)((float)n, (float)n);
}  
     
__kernel void butterfly(__global float2 *x, __global float2* w, int m, int n, int iter, uint flag) 
{  
    unsigned int gid = get_global_id(0);   
    unsigned int nid = get_global_id(1);   
         
    int butterflySize = 1 << (iter-1);   
    int butterflyGrpDist = 1 << iter;
    int butterflyGrpNum = n >> iter; 
    int butterflyGrpBase = (gid >> (iter-1))*(butterflyGrpDist); 
    int butterflyGrpOffset = gid & (butterflySize-1);  
         
    int a = nid * n + butterflyGrpBase + butterflyGrpOffset;   
    int b = a + butterflySize; 
         
    int l = butterflyGrpNum * butterflyGrpOffset;  
         
    float2 xa, xb, xbxx, xbyy, wab, wayx, wbyx, resa, resb;
         
    xa = x[a]; 
    xb = x[b]; 
    xbxx = xb.xx;  
    xbyy = xb.yy;  
         
    wab = as_float2(as_uint2(w[l]) ^ (uint2)(0x0, flag));  
    wayx = as_float2(as_uint2(wab.yx) ^ (uint2)(0x80000000, 0x0)); 
    wbyx = as_float2(as_uint2(wab.yx) ^ (uint2)(0x0, 0x80000000)); 
         
    resa = xa + xbxx*wab + xbyy*wayx;  
    resb = xa - xbxx*wab + xbyy*wbyx;  
         
    x[a] = resa;   
    x[b] = resb;   
}  
     
__kernel void transpose(__global float2 *dst, __global float2* src, int n) 
{  
    unsigned int xgid = get_global_id(0);  
    unsigned int ygid = get_global_id(1);  
         
    unsigned int iid = ygid * n + xgid;
    unsigned int oid = xgid * n + ygid;
         
    dst[oid] = src[iid];   
}  

__kernel void transposeMatrix(__global float *dst, __global float* src, int n) 
{  
    unsigned int xgid = get_global_id(0);  
    unsigned int ygid = get_global_id(1);  
         
    unsigned int iid = ygid * n + xgid;
    unsigned int oid = xgid * n + ygid;
         
    dst[oid] = src[iid];   
} 

__kernel void multiply(__global float2 *dst, __global float2 *src) 
{  
    unsigned int gid = get_global_id(0);    
    float2 complex;
    complex.x = src[gid].x * dst[gid].x - src[gid].y * dst[gid].y; 
    complex.y = src[gid].x * dst[gid].y + src[gid].y * dst[gid].x; 
    dst[gid] = complex;
}  


__kernel void mySeparableConvolution(__global  float * output,
                         __global  float * input,
                         __constant float * filter,
                         //__global float * filter,
                         const int input_width,
                         const int FILTER_WIDTH)
{
    const int width = get_global_size(0);

    const int x = get_global_id(0);
    const int y = get_global_id(1);

    if(x < input_width - FILTER_WIDTH && y < input_width - FILTER_WIDTH){

        const int xTopLeft = x;
        const int yTopLeft = y;

        float4 sum4 = 0;
        const int indexFilterTmp = 0;

        const int indexImageTmp = yTopLeft * input_width + xTopLeft;

        int p = 0;
        int p4 = 0;
        while (p <= FILTER_WIDTH-4)
        {
            float4 filter4 = vload4(p4, filter + indexFilterTmp);
            float4 in4     = vload4(p4, input + indexImageTmp);
            sum4 += in4 * filter4;
            p += 4;
            p4++;
        }
        
        int pMod = FILTER_WIDTH - p;
        if (pMod == 1)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter] * input[indexImage];
        }
        else if (pMod == 2)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter]   * input[indexImage];
            sum4.y += filter[indexFilter+1] * input[indexImage+1];
        }
        else if (pMod == 3)
        {
            int indexFilter  = indexFilterTmp  + p;
            int indexImage = indexImageTmp + p;    
            sum4.x += filter[indexFilter]   * input[indexImage];
            sum4.y += filter[indexFilter+1] * input[indexImage+1];
            sum4.z += filter[indexFilter+2] * input[indexImage+2];
        }
        
        const int index_output = y * width + x;
        output[index_output] = sum4.x + sum4.y + sum4.z + sum4.w;
    }
}
