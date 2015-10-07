/***************************************************************************
 * cr
 *cr            (C) Copyright 2010 The Board of Trustees of the
 *cr                        University of Illinois
 *cr                         All Rights Reserved
 *cr
 ***************************************************************************/

/* 
 * Main entry of dense matrix-matrix multiplication kernel
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <malloc.h>
#include <vector>
#include <assert.h>

#include "../common/parboil.h"
#include <iostream>
#include "sgemm_kernel.cu"

// I/O routines
extern bool readColMajorMatrixFile(const char *fn, int &nr_row, int &nr_col, std::vector<float>&v);
extern bool writeColMajorMatrixFile(const char *fn, int, int, std::vector<float>&);

extern "C"
void computeGold(float *, const float*, const float*, unsigned int, unsigned int, unsigned int);

int
main (int argc, char *argv[]) {
	struct pb_Parameters *params = (struct pb_Parameters *)malloc(sizeof(struct pb_Parameters));;
	struct pb_TimerSet timers;
	
	float *dA, *dB, *dC;
	size_t A_sz, B_sz, C_sz;
	int matArow, matAcol;
	int matBrow, matBcol;
	std::vector<float> matA, matBT;
	
	pb_InitializeTimerSet(&timers);
	
	/* Read command line. Expect 3 inputs: A, B and B^T 
	 *     in column-major layout*/

	params->outFile = NULL;

	if ( argc != 4 ) {
		fprintf(stderr, "Expecting three input filenames got:\n");
		exit(-1);
	}
	fprintf(stderr, "In-File 1: %s\n", argv[1]);
	fprintf(stderr, "In-File 2: %s\n", argv[2]);
	fprintf(stderr, "In-File 3: %s\n", argv[3]);

	/* Read in data */
	pb_SwitchToTimer(&timers, pb_TimerID_IO);
	
	// load A
	readColMajorMatrixFile(argv[1], matArow, matAcol, matA);
	// copy A to device memory
	A_sz = matArow*matAcol*sizeof(float);

	// load B^T
	readColMajorMatrixFile(argv[3], matBcol, matBrow, matBT);

	pb_SwitchToTimer( &timers, pb_TimerID_COMPUTE );
	B_sz = matBrow*matBcol*sizeof(float);
	
	// allocate space for C
	C_sz = matArow*matBcol*sizeof(float);
	
	// CUDA memory allocation
	std::vector<float> matC(matArow*matBcol);
//	cudaMalloc((void**)&dA, A_sz);
//	cudaMalloc((void**)&dB, B_sz);
//	cudaMalloc((void**)&dC, C_sz);

	dA = (float *)malloc(A_sz);
	dB = (float *)malloc(B_sz);
	dC = (float *)malloc(C_sz);

	assert(dA && dB && dC);

	// Copy A and B^T into device memory
	pb_SwitchToTimer( &timers, pb_TimerID_COPY );

//	cudaMemcpy(dA, &matA.front(), A_sz, cudaMemcpyHostToDevice); 
//	cudaMemcpy(dB, &matBT.front(), B_sz, cudaMemcpyHostToDevice); 

	memcpy(dA, &matA.front(), A_sz); 
	memcpy(dB, &matBT.front(), B_sz); 

	pb_SwitchToTimer( &timers, pb_TimerID_GPU );
	
	// Use standard sgemm interface
	regtileSgemm('N', 'T', matArow, matBcol, matAcol, 1.0f, \
	dA, matArow, dB, matBcol, 0.0f, dC, matArow);
	
	if (params->outFile) {
		pb_SwitchToTimer( &timers, pb_TimerID_COPY );
//		cudaMemcpy(&matC.front(), dC, C_sz, cudaMemcpyDeviceToHost);
		memcpy(&matC.front(), dC, C_sz);
		/* Write C to file */
		pb_SwitchToTimer(&timers, pb_TimerID_IO);
		writeColMajorMatrixFile(params->outFile,matArow, matBcol, matC); 
	}
	
	pb_SwitchToTimer(&timers, pb_TimerID_NONE);
	
	double GPUtime = pb_GetElapsedTime(&(timers.timers[pb_TimerID_GPU]));
	std::cout<< "GFLOPs = " << 2.* matArow * matBcol * matAcol/GPUtime/1e9 << std::endl;
	pb_PrintTimerSet(&timers);
	pb_FreeParameters(params);
//	cudaFree(dA);
//	cudaFree(dB);
//	cudaFree(dC);

	free(dA);
	free(dB);
	free(dC);

	return 0;
}
