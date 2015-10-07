# 1 "Example.cu"
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_types.h"
#if 0
# 46
enum cudaRoundMode { 
# 48
cudaRoundNearest, 
# 49
cudaRoundZero, 
# 50
cudaRoundPosInf, 
# 51
cudaRoundMinInf
# 52
}; 
#endif
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t; 
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 96
enum cudaError { 
# 103
cudaSuccess, 
# 109
cudaErrorMissingConfiguration, 
# 115
cudaErrorMemoryAllocation, 
# 121
cudaErrorInitializationError, 
# 131
cudaErrorLaunchFailure, 
# 140
cudaErrorPriorLaunchFailure, 
# 150
cudaErrorLaunchTimeout, 
# 159
cudaErrorLaunchOutOfResources, 
# 165
cudaErrorInvalidDeviceFunction, 
# 174
cudaErrorInvalidConfiguration, 
# 180
cudaErrorInvalidDevice, 
# 186
cudaErrorInvalidValue, 
# 192
cudaErrorInvalidPitchValue, 
# 198
cudaErrorInvalidSymbol, 
# 203
cudaErrorMapBufferObjectFailed, 
# 208
cudaErrorUnmapBufferObjectFailed, 
# 214
cudaErrorInvalidHostPointer, 
# 220
cudaErrorInvalidDevicePointer, 
# 226
cudaErrorInvalidTexture, 
# 232
cudaErrorInvalidTextureBinding, 
# 239
cudaErrorInvalidChannelDescriptor, 
# 245
cudaErrorInvalidMemcpyDirection, 
# 255
cudaErrorAddressOfConstant, 
# 264
cudaErrorTextureFetchFailed, 
# 273
cudaErrorTextureNotBound, 
# 282
cudaErrorSynchronizationError, 
# 288
cudaErrorInvalidFilterSetting, 
# 294
cudaErrorInvalidNormSetting, 
# 302
cudaErrorMixedDeviceExecution, 
# 310
cudaErrorCudartUnloading, 
# 315
cudaErrorUnknown, 
# 321
cudaErrorNotYetImplemented, 
# 330
cudaErrorMemoryValueTooLarge, 
# 337
cudaErrorInvalidResourceHandle, 
# 345
cudaErrorNotReady, 
# 352
cudaErrorInsufficientDriver, 
# 365
cudaErrorSetOnActiveProcess, 
# 371
cudaErrorInvalidSurface, 
# 377
cudaErrorNoDevice, 
# 383
cudaErrorECCUncorrectable, 
# 388
cudaErrorSharedObjectSymbolNotFound, 
# 393
cudaErrorSharedObjectInitFailed, 
# 399
cudaErrorUnsupportedLimit, 
# 405
cudaErrorDuplicateVariableName, 
# 411
cudaErrorDuplicateTextureName, 
# 417
cudaErrorDuplicateSurfaceName, 
# 426
cudaErrorDevicesUnavailable, 
# 431
cudaErrorInvalidKernelImage, 
# 439
cudaErrorNoKernelImageForDevice, 
# 448
cudaErrorIncompatibleDriverContext, 
# 453
cudaErrorStartupFailure = 127, 
# 459
cudaErrorApiFailureBase = 10000
# 460
}; 
#endif
# 466 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 466
enum cudaChannelFormatKind { 
# 468
cudaChannelFormatKindSigned, 
# 469
cudaChannelFormatKindUnsigned, 
# 470
cudaChannelFormatKindFloat, 
# 471
cudaChannelFormatKindNone
# 472
}; 
#endif
# 478 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 478
struct cudaChannelFormatDesc { 
# 480
int x; 
# 481
int y; 
# 482
int z; 
# 483
int w; 
# 484
cudaChannelFormatKind f; 
# 485
}; 
#endif
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
struct cudaArray; 
#endif
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 497
enum cudaMemcpyKind { 
# 499
cudaMemcpyHostToHost, 
# 500
cudaMemcpyHostToDevice, 
# 501
cudaMemcpyDeviceToHost, 
# 502
cudaMemcpyDeviceToDevice
# 503
}; 
#endif
# 510 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 510
struct cudaPitchedPtr { 
# 512
void *ptr; 
# 513
size_t pitch; 
# 514
size_t xsize; 
# 515
size_t ysize; 
# 516
}; 
#endif
# 523 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 523
struct cudaExtent { 
# 525
size_t width; 
# 526
size_t height; 
# 527
size_t depth; 
# 528
}; 
#endif
# 535 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 535
struct cudaPos { 
# 537
size_t x; 
# 538
size_t y; 
# 539
size_t z; 
# 540
}; 
#endif
# 546 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 546
struct cudaMemcpy3DParms { 
# 548
cudaArray *srcArray; 
# 549
cudaPos srcPos; 
# 550
cudaPitchedPtr srcPtr; 
# 552
cudaArray *dstArray; 
# 553
cudaPos dstPos; 
# 554
cudaPitchedPtr dstPtr; 
# 556
cudaExtent extent; 
# 557
cudaMemcpyKind kind; 
# 558
}; 
#endif
# 564 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
struct cudaGraphicsResource; 
#endif
# 570 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 570
enum cudaGraphicsRegisterFlags { 
# 572
cudaGraphicsRegisterFlagsNone
# 573
}; 
#endif
# 579 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 579
enum cudaGraphicsMapFlags { 
# 581
cudaGraphicsMapFlagsNone, 
# 582
cudaGraphicsMapFlagsReadOnly, 
# 583
cudaGraphicsMapFlagsWriteDiscard
# 584
}; 
#endif
# 590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 590
enum cudaGraphicsCubeFace { 
# 591
cudaGraphicsCubeFacePositiveX, 
# 592
cudaGraphicsCubeFaceNegativeX, 
# 593
cudaGraphicsCubeFacePositiveY, 
# 594
cudaGraphicsCubeFaceNegativeY, 
# 595
cudaGraphicsCubeFacePositiveZ, 
# 596
cudaGraphicsCubeFaceNegativeZ
# 597
}; 
#endif
# 603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 603
struct cudaFuncAttributes { 
# 610
size_t sharedSizeBytes; 
# 616
size_t constSizeBytes; 
# 621
size_t localSizeBytes; 
# 628
int maxThreadsPerBlock; 
# 633
int numRegs; 
# 640
int ptxVersion; 
# 647
int binaryVersion; 
# 649
int __cudaReserved[6]; 
# 650
}; 
#endif
# 656 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 656
enum cudaFuncCache { 
# 658
cudaFuncCachePreferNone, 
# 659
cudaFuncCachePreferShared, 
# 660
cudaFuncCachePreferL1
# 661
}; 
#endif
# 667 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 667
enum cudaComputeMode { 
# 669
cudaComputeModeDefault, 
# 670
cudaComputeModeExclusive, 
# 671
cudaComputeModeProhibited
# 672
}; 
#endif
# 678 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 678
enum cudaLimit { 
# 680
cudaLimitStackSize, 
# 681
cudaLimitPrintfFifoSize, 
# 682
cudaLimitMallocHeapSize
# 683
}; 
#endif
# 689 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
# 689
struct cudaDeviceProp { 
# 691
char name[256]; 
# 692
size_t totalGlobalMem; 
# 693
size_t sharedMemPerBlock; 
# 694
int regsPerBlock; 
# 695
int warpSize; 
# 696
size_t memPitch; 
# 697
int maxThreadsPerBlock; 
# 698
int maxThreadsDim[3]; 
# 699
int maxGridSize[3]; 
# 700
int clockRate; 
# 701
size_t totalConstMem; 
# 702
int major; 
# 703
int minor; 
# 704
size_t textureAlignment; 
# 705
int deviceOverlap; 
# 706
int multiProcessorCount; 
# 707
int kernelExecTimeoutEnabled; 
# 708
int integrated; 
# 709
int canMapHostMemory; 
# 710
int computeMode; 
# 711
int maxTexture1D; 
# 712
int maxTexture2D[2]; 
# 713
int maxTexture3D[3]; 
# 714
int maxTexture2DArray[3]; 
# 715
size_t surfaceAlignment; 
# 716
int concurrentKernels; 
# 717
int ECCEnabled; 
# 718
int pciBusID; 
# 719
int pciDeviceID; 
# 720
int tccDriver; 
# 721
int __cudaReserved[21]; 
# 722
}; 
#endif
# 768 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
typedef cudaError 
# 768
cudaError_t; 
#endif
# 774 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 774
cudaStream_t; 
#endif
# 780 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 780
cudaEvent_t; 
#endif
# 786 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 786
cudaGraphicsResource_t; 
#endif
# 792 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 792
cudaUUID_t; 
#endif
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
#if 0
# 63
enum cudaSurfaceBoundaryMode { 
# 65
cudaBoundaryModeZero, 
# 66
cudaBoundaryModeClamp, 
# 67
cudaBoundaryModeTrap
# 68
}; 
#endif
# 74 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
#if 0
# 74
enum cudaSurfaceFormatMode { 
# 76
cudaFormatModeForced, 
# 77
cudaFormatModeAuto
# 78
}; 
#endif
# 84 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
#if 0
# 84
struct surfaceReference { 
# 89
cudaChannelFormatDesc channelDesc; 
# 90
}; 
#endif
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
#if 0
# 63
enum cudaTextureAddressMode { 
# 65
cudaAddressModeWrap, 
# 66
cudaAddressModeClamp, 
# 67
cudaAddressModeMirror, 
# 68
cudaAddressModeBorder
# 69
}; 
#endif
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
#if 0
# 75
enum cudaTextureFilterMode { 
# 77
cudaFilterModePoint, 
# 78
cudaFilterModeLinear
# 79
}; 
#endif
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
#if 0
# 85
enum cudaTextureReadMode { 
# 87
cudaReadModeElementType, 
# 88
cudaReadModeNormalizedFloat
# 89
}; 
#endif
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
#if 0
# 95
struct textureReference { 
# 100
int normalized; 
# 104
cudaTextureFilterMode filterMode; 
# 108
cudaTextureAddressMode addressMode[3]; 
# 112
cudaChannelFormatDesc channelDesc; 
# 113
int __cudaReserved[16]; 
# 114
}; 
#endif
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 75
struct char1 { 
# 77
signed char x; 
# 78
}; 
#endif
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 81
struct uchar1 { 
# 83
unsigned char x; 
# 84
}; 
#endif
# 87 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 87
struct __attribute__((__aligned__(2))) char2 { 
# 89
signed char x, y; 
# 90
}; 
#endif
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 93
struct __attribute__((__aligned__(2))) uchar2 { 
# 95
unsigned char x, y; 
# 96
}; 
#endif
# 99 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 99
struct char3 { 
# 101
signed char x, y, z; 
# 102
}; 
#endif
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 105
struct uchar3 { 
# 107
unsigned char x, y, z; 
# 108
}; 
#endif
# 111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 111
struct __attribute__((__aligned__(4))) char4 { 
# 113
signed char x, y, z, w; 
# 114
}; 
#endif
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 117
struct __attribute__((__aligned__(4))) uchar4 { 
# 119
unsigned char x, y, z, w; 
# 120
}; 
#endif
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 123
struct short1 { 
# 125
short x; 
# 126
}; 
#endif
# 129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 129
struct ushort1 { 
# 131
unsigned short x; 
# 132
}; 
#endif
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 135
struct __attribute__((__aligned__(4))) short2 { 
# 137
short x, y; 
# 138
}; 
#endif
# 141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 141
struct __attribute__((__aligned__(4))) ushort2 { 
# 143
unsigned short x, y; 
# 144
}; 
#endif
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 147
struct short3 { 
# 149
short x, y, z; 
# 150
}; 
#endif
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 153
struct ushort3 { 
# 155
unsigned short x, y, z; 
# 156
}; 
#endif
# 159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 159
struct __attribute__((__aligned__(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 162
struct __attribute__((__aligned__(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 165
struct int1 { 
# 167
int x; 
# 168
}; 
#endif
# 171 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 171
struct uint1 { 
# 173
unsigned x; 
# 174
}; 
#endif
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 177
struct __attribute__((__aligned__(8))) int2 { int x; int y; }; 
#endif
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 180
struct __attribute__((__aligned__(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 183
struct int3 { 
# 185
int x, y, z; 
# 186
}; 
#endif
# 189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 189
struct uint3 { 
# 191
unsigned x, y, z; 
# 192
}; 
#endif
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 195
struct __attribute__((__aligned__(16))) int4 { 
# 197
int x, y, z, w; 
# 198
}; 
#endif
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 201
struct __attribute__((__aligned__(16))) uint4 { 
# 203
unsigned x, y, z, w; 
# 204
}; 
#endif
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 207
struct long1 { 
# 209
long x; 
# 210
}; 
#endif
# 213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 213
struct ulong1 { 
# 215
unsigned long x; 
# 216
}; 
#endif
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 229
struct __attribute__((__aligned__(16))) long2 { 
# 231
long x, y; 
# 232
}; 
#endif
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 235
struct __attribute__((__aligned__(16))) ulong2 { 
# 237
unsigned long x, y; 
# 238
}; 
#endif
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 243
struct long3 { 
# 245
long x, y, z; 
# 246
}; 
#endif
# 249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 249
struct ulong3 { 
# 251
unsigned long x, y, z; 
# 252
}; 
#endif
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 255
struct __attribute__((__aligned__(16))) long4 { 
# 257
long x, y, z, w; 
# 258
}; 
#endif
# 261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 261
struct __attribute__((__aligned__(16))) ulong4 { 
# 263
unsigned long x, y, z, w; 
# 264
}; 
#endif
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 267
struct float1 { 
# 269
float x; 
# 270
}; 
#endif
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 273
struct __attribute__((__aligned__(8))) float2 { float x; float y; }; 
#endif
# 276 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 276
struct float3 { 
# 278
float x, y, z; 
# 279
}; 
#endif
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 282
struct __attribute__((__aligned__(16))) float4 { 
# 284
float x, y, z, w; 
# 285
}; 
#endif
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 288
struct longlong1 { 
# 290
long long x; 
# 291
}; 
#endif
# 294 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 294
struct ulonglong1 { 
# 296
unsigned long long x; 
# 297
}; 
#endif
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 300
struct __attribute__((__aligned__(16))) longlong2 { 
# 302
long long x, y; 
# 303
}; 
#endif
# 306 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 306
struct __attribute__((__aligned__(16))) ulonglong2 { 
# 308
unsigned long long x, y; 
# 309
}; 
#endif
# 312 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 312
struct longlong3 { 
# 314
long long x, y, z; 
# 315
}; 
#endif
# 318 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 318
struct ulonglong3 { 
# 320
unsigned long long x, y, z; 
# 321
}; 
#endif
# 324 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 324
struct __attribute__((__aligned__(16))) longlong4 { 
# 326
long long x, y, z, w; 
# 327
}; 
#endif
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 330
struct __attribute__((__aligned__(16))) ulonglong4 { 
# 332
unsigned long long x, y, z, w; 
# 333
}; 
#endif
# 336 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 336
struct double1 { 
# 338
double x; 
# 339
}; 
#endif
# 342 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 342
struct __attribute__((__aligned__(16))) double2 { 
# 344
double x, y; 
# 345
}; 
#endif
# 348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 348
struct double3 { 
# 350
double x, y, z; 
# 351
}; 
#endif
# 354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 354
struct __attribute__((__aligned__(16))) double4 { 
# 356
double x, y, z, w; 
# 357
}; 
#endif
# 366 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef char1 
# 366
char1; 
#endif
# 368 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uchar1 
# 368
uchar1; 
#endif
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef char2 
# 370
char2; 
#endif
# 372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uchar2 
# 372
uchar2; 
#endif
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef char3 
# 374
char3; 
#endif
# 376 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uchar3 
# 376
uchar3; 
#endif
# 378 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef char4 
# 378
char4; 
#endif
# 380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uchar4 
# 380
uchar4; 
#endif
# 382 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef short1 
# 382
short1; 
#endif
# 384 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ushort1 
# 384
ushort1; 
#endif
# 386 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef short2 
# 386
short2; 
#endif
# 388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ushort2 
# 388
ushort2; 
#endif
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef short3 
# 390
short3; 
#endif
# 392 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ushort3 
# 392
ushort3; 
#endif
# 394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef short4 
# 394
short4; 
#endif
# 396 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ushort4 
# 396
ushort4; 
#endif
# 398 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef int1 
# 398
int1; 
#endif
# 400 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uint1 
# 400
uint1; 
#endif
# 402 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef int2 
# 402
int2; 
#endif
# 404 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uint2 
# 404
uint2; 
#endif
# 406 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef int3 
# 406
int3; 
#endif
# 408 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uint3 
# 408
uint3; 
#endif
# 410 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef int4 
# 410
int4; 
#endif
# 412 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef uint4 
# 412
uint4; 
#endif
# 414 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef long1 
# 414
long1; 
#endif
# 416 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulong1 
# 416
ulong1; 
#endif
# 418 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef long2 
# 418
long2; 
#endif
# 420 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulong2 
# 420
ulong2; 
#endif
# 422 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef long3 
# 422
long3; 
#endif
# 424 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulong3 
# 424
ulong3; 
#endif
# 426 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef long4 
# 426
long4; 
#endif
# 428 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulong4 
# 428
ulong4; 
#endif
# 430 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef float1 
# 430
float1; 
#endif
# 432 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef float2 
# 432
float2; 
#endif
# 434 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef float3 
# 434
float3; 
#endif
# 436 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef float4 
# 436
float4; 
#endif
# 438 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef longlong1 
# 438
longlong1; 
#endif
# 440 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulonglong1 
# 440
ulonglong1; 
#endif
# 442 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef longlong2 
# 442
longlong2; 
#endif
# 444 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulonglong2 
# 444
ulonglong2; 
#endif
# 446 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef longlong3 
# 446
longlong3; 
#endif
# 448 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulonglong3 
# 448
ulonglong3; 
#endif
# 450 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef longlong4 
# 450
longlong4; 
#endif
# 452 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef ulonglong4 
# 452
ulonglong4; 
#endif
# 454 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef double1 
# 454
double1; 
#endif
# 456 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef double2 
# 456
double2; 
#endif
# 458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef double3 
# 458
double3; 
#endif
# 460 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef double4 
# 460
double4; 
#endif
# 469 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
# 469
struct dim3 { 
# 471
unsigned x, y, z; 
# 477
}; 
#endif
# 480 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
#if 0
typedef dim3 
# 480
dim3; 
#endif
# 115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit(); 
# 131
extern "C" cudaError_t cudaThreadSynchronize(); 
# 183
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t); 
# 207
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit); 
# 237
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *); 
# 278
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache); 
# 330
extern "C" cudaError_t cudaGetLastError(); 
# 373
extern "C" cudaError_t cudaPeekAtLastError(); 
# 387
extern "C" const char *cudaGetErrorString(cudaError_t); 
# 418
extern "C" cudaError_t cudaGetDeviceCount(int *); 
# 536
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int); 
# 555
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *); 
# 579
extern "C" cudaError_t cudaSetDevice(int); 
# 597
extern "C" cudaError_t cudaGetDevice(int *); 
# 626
extern "C" cudaError_t cudaSetValidDevices(int *, int); 
# 677
extern "C" cudaError_t cudaSetDeviceFlags(unsigned); 
# 703
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *); 
# 719
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t); 
# 753
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned); 
# 771
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t); 
# 789
extern "C" cudaError_t cudaStreamQuery(cudaStream_t); 
# 821
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *); 
# 852
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned); 
# 885
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0); 
# 914
extern "C" cudaError_t cudaEventQuery(cudaEvent_t); 
# 946
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t); 
# 966
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t); 
# 1007
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t); 
# 1046
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0); 
# 1073
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t); 
# 1119
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache); 
# 1154
extern "C" cudaError_t cudaLaunch(const char *); 
# 1187
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *); 
# 1209
extern "C" cudaError_t cudaSetDoubleForDevice(double *); 
# 1231
extern "C" cudaError_t cudaSetDoubleForHost(double *); 
# 1263
extern "C" cudaError_t cudaMalloc(void **, size_t); 
# 1292
extern "C" cudaError_t cudaMallocHost(void **, size_t); 
# 1331
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t); 
# 1370
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0)); 
# 1394
extern "C" cudaError_t cudaFree(void *); 
# 1414
extern "C" cudaError_t cudaFreeHost(void *); 
# 1436
extern "C" cudaError_t cudaFreeArray(cudaArray *); 
# 1495
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned); 
# 1522
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned); 
# 1541
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *); 
# 1576
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent); 
# 1626
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0)); 
# 1723
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *); 
# 1828
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0); 
# 1847
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *); 
# 1880
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind); 
# 1913
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind); 
# 1946
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind); 
# 1981
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
# 2023
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
# 2064
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
# 2105
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind); 
# 2144
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
# 2179
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice); 
# 2213
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost); 
# 2256
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2298
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2340
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2391
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2441
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2491
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2535
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2578
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2600
extern "C" cudaError_t cudaMemset(void *, int, size_t); 
# 2626
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t); 
# 2665
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent); 
# 2692
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0); 
# 2724
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0); 
# 2769
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0); 
# 2796
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *); 
# 2819
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *); 
# 2865
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t); 
# 2897
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned); 
# 2932
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0); 
# 2963
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0); 
# 2992
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t); 
# 3026
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned); 
# 3059
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *); 
# 3094
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind); 
# 3136
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U)); 
# 3179
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t); 
# 3207
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *); 
# 3228
extern "C" cudaError_t cudaUnbindTexture(const textureReference *); 
# 3253
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *); 
# 3277
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *); 
# 3310
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *); 
# 3328
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *); 
# 3355
extern "C" cudaError_t cudaDriverGetVersion(int *); 
# 3372
extern "C" cudaError_t cudaRuntimeGetVersion(int *); 
# 3377
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *); 
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 94
{ 
# 95
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 96
} 
# 98
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 99
{ 
# 100
int e = (((int)sizeof(unsigned short)) * 8); 
# 102
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 103
} 
# 105
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 106
{ 
# 107
int e = (((int)sizeof(unsigned short)) * 8); 
# 109
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 124
} 
# 126
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 127
{ 
# 128
int e = (((int)sizeof(char)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 135
} 
# 137
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 138
{ 
# 139
int e = (((int)sizeof(signed char)) * 8); 
# 141
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 142
} 
# 144
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 145
{ 
# 146
int e = (((int)sizeof(unsigned char)) * 8); 
# 148
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 194
{ 
# 195
int e = (((int)sizeof(short)) * 8); 
# 197
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned short)) * 8); 
# 204
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 250
{ 
# 251
int e = (((int)sizeof(int)) * 8); 
# 253
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned)) * 8); 
# 260
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 303
} 
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 366
{ 
# 367
int e = (((int)sizeof(float)) * 8); 
# 369
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 370
} 
# 372
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 373
{ 
# 374
int e = (((int)sizeof(float)) * 8); 
# 376
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 377
} 
# 379
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 391
} 
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 66
{ 
# 67
cudaPitchedPtr s; 
# 69
(s.ptr) = d; 
# 70
(s.pitch) = p; 
# 71
(s.xsize) = xsz; 
# 72
(s.ysize) = ysz; 
# 74
return s; 
# 75
} 
# 92
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 93
{ 
# 94
cudaPos p; 
# 96
(p.x) = x; 
# 97
(p.y) = y; 
# 98
(p.z) = z; 
# 100
return p; 
# 101
} 
# 118
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 119
{ 
# 120
cudaExtent e; 
# 122
(e.width) = w; 
# 123
(e.height) = h; 
# 124
(e.depth) = d; 
# 126
return e; 
# 127
} 
# 55 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x) 
# 56
{ 
# 57
char1 t; (t.x) = x; return t; 
# 58
} 
# 60
static inline uchar1 make_uchar1(unsigned char x) 
# 61
{ 
# 62
uchar1 t; (t.x) = x; return t; 
# 63
} 
# 65
static inline char2 make_char2(signed char x, signed char y) 
# 66
{ 
# 67
char2 t; (t.x) = x; (t.y) = y; return t; 
# 68
} 
# 70
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 71
{ 
# 72
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 73
} 
# 75
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 76
{ 
# 77
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 78
} 
# 80
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 81
{ 
# 82
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 83
} 
# 85
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 86
{ 
# 87
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 88
} 
# 90
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 91
{ 
# 92
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 93
} 
# 95
static inline short1 make_short1(short x) 
# 96
{ 
# 97
short1 t; (t.x) = x; return t; 
# 98
} 
# 100
static inline ushort1 make_ushort1(unsigned short x) 
# 101
{ 
# 102
ushort1 t; (t.x) = x; return t; 
# 103
} 
# 105
static inline short2 make_short2(short x, short y) 
# 106
{ 
# 107
short2 t; (t.x) = x; (t.y) = y; return t; 
# 108
} 
# 110
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 111
{ 
# 112
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 113
} 
# 115
static inline short3 make_short3(short x, short y, short z) 
# 116
{ 
# 117
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 118
} 
# 120
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 121
{ 
# 122
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 123
} 
# 125
static inline short4 make_short4(short x, short y, short z, short w) 
# 126
{ 
# 127
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 128
} 
# 130
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 131
{ 
# 132
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 133
} 
# 135
static inline int1 make_int1(int x) 
# 136
{ 
# 137
int1 t; (t.x) = x; return t; 
# 138
} 
# 140
static inline uint1 make_uint1(unsigned x) 
# 141
{ 
# 142
uint1 t; (t.x) = x; return t; 
# 143
} 
# 145
static inline int2 make_int2(int x, int y) 
# 146
{ 
# 147
int2 t; (t.x) = x; (t.y) = y; return t; 
# 148
} 
# 150
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 151
{ 
# 152
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 153
} 
# 155
static inline int3 make_int3(int x, int y, int z) 
# 156
{ 
# 157
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 158
} 
# 160
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 161
{ 
# 162
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 163
} 
# 165
static inline int4 make_int4(int x, int y, int z, int w) 
# 166
{ 
# 167
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 168
} 
# 170
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 171
{ 
# 172
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 173
} 
# 175
static inline long1 make_long1(long x) 
# 176
{ 
# 177
long1 t; (t.x) = x; return t; 
# 178
} 
# 180
static inline ulong1 make_ulong1(unsigned long x) 
# 181
{ 
# 182
ulong1 t; (t.x) = x; return t; 
# 183
} 
# 185
static inline long2 make_long2(long x, long y) 
# 186
{ 
# 187
long2 t; (t.x) = x; (t.y) = y; return t; 
# 188
} 
# 190
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 191
{ 
# 192
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 193
} 
# 195
static inline long3 make_long3(long x, long y, long z) 
# 196
{ 
# 197
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 198
} 
# 200
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 201
{ 
# 202
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 203
} 
# 205
static inline long4 make_long4(long x, long y, long z, long w) 
# 206
{ 
# 207
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 208
} 
# 210
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 211
{ 
# 212
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 213
} 
# 215
static inline float1 make_float1(float x) 
# 216
{ 
# 217
float1 t; (t.x) = x; return t; 
# 218
} 
# 220
static inline float2 make_float2(float x, float y) 
# 221
{ 
# 222
float2 t; (t.x) = x; (t.y) = y; return t; 
# 223
} 
# 225
static inline float3 make_float3(float x, float y, float z) 
# 226
{ 
# 227
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 228
} 
# 230
static inline float4 make_float4(float x, float y, float z, float w) 
# 231
{ 
# 232
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 233
} 
# 235
static inline longlong1 make_longlong1(long long x) 
# 236
{ 
# 237
longlong1 t; (t.x) = x; return t; 
# 238
} 
# 240
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 241
{ 
# 242
ulonglong1 t; (t.x) = x; return t; 
# 243
} 
# 245
static inline longlong2 make_longlong2(long long x, long long y) 
# 246
{ 
# 247
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 248
} 
# 250
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 251
{ 
# 252
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 253
} 
# 255
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 256
{ 
# 257
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 258
} 
# 260
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 261
{ 
# 262
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 263
} 
# 265
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 266
{ 
# 267
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 268
} 
# 270
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 271
{ 
# 272
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 273
} 
# 275
static inline double1 make_double1(double x) 
# 276
{ 
# 277
double1 t; (t.x) = x; return t; 
# 278
} 
# 280
static inline double2 make_double2(double x, double y) 
# 281
{ 
# 282
double2 t; (t.x) = x; (t.y) = y; return t; 
# 283
} 
# 285
static inline double3 make_double3(double x, double y, double z) 
# 286
{ 
# 287
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 288
} 
# 290
static inline double4 make_double4(double x, double y, double z, double w) 
# 291
{ 
# 292
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 293
} 
# 44 "/usr/include/string.h" 3
extern "C"  __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 49
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 57
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 65
extern "C"  __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1))); 
# 68
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 75
extern inline void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 77
extern inline const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 82
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memchr(void *__s, int __c, size_t __n) throw() 
# 83
{ 
# 84
return __builtin_memchr(__s, __c, __n); 
# 85
} 
# 88
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const void *memchr(const void *__s, int __c, size_t __n) throw() 
# 89
{ 
# 90
return __builtin_memchr(__s, __c, __n); 
# 91
} 
# 104
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 106
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 115
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 117
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 128
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 131
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 136
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 139
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 143
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 146
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 150
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 153
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2))); 
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef 
# 28
struct __locale_struct { 
# 31
struct __locale_data *__locales[13]; 
# 34
const unsigned short *__ctype_b; 
# 35
const int *__ctype_tolower; 
# 36
const int *__ctype_toupper; 
# 39
const char *__names[13]; 
# 40
} *__locale_t; }
# 43
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 168
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 175
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1))); 
# 183
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1))); 
# 215 "/usr/include/string.h" 3
extern inline char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 217
extern inline const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 222
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strchr(char *__s, int __c) throw() 
# 223
{ 
# 224
return __builtin_strchr(__s, __c); 
# 225
} 
# 228
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strchr(const char *__s, int __c) throw() 
# 229
{ 
# 230
return __builtin_strchr(__s, __c); 
# 231
} 
# 242
extern inline char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 244
extern inline const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 249
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strrchr(char *__s, int __c) throw() 
# 250
{ 
# 251
return __builtin_strrchr(__s, __c); 
# 252
} 
# 255
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strrchr(const char *__s, int __c) throw() 
# 256
{ 
# 257
return __builtin_strrchr(__s, __c); 
# 258
} 
# 271
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 273
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 284
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 288
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 294
extern inline char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 296
extern inline const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 301
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strpbrk(char *__s, const char *__accept) throw() 
# 302
{ 
# 303
return __builtin_strpbrk(__s, __accept); 
# 304
} 
# 307
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strpbrk(const char *__s, const char *__accept) throw() 
# 308
{ 
# 309
return __builtin_strpbrk(__s, __accept); 
# 310
} 
# 321
extern inline char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 323
extern inline const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 329
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strstr(char *__haystack, const char *__needle) throw() 
# 330
{ 
# 331
return __builtin_strstr(__haystack, __needle); 
# 332
} 
# 335
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strstr(const char *__haystack, const char *__needle) throw() 
# 336
{ 
# 337
return __builtin_strstr(__haystack, __needle); 
# 338
} 
# 348
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2))); 
# 354
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 359
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 367
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 369
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 382
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 388
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 391
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 399
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 406
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 413
extern "C" char *strerror(int) throw(); 
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2))); 
# 445
extern "C" char *strerror_l(int, __locale_t) throw(); 
# 451
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1))); 
# 455
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 459
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1))); 
# 462
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 469
extern inline char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 471
extern inline const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 476
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *index(char *__s, int __c) throw() 
# 477
{ 
# 478
return __builtin_index(__s, __c); 
# 479
} 
# 482
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *index(const char *__s, int __c) throw() 
# 483
{ 
# 484
return __builtin_index(__s, __c); 
# 485
} 
# 497
extern inline char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 499
extern inline const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 504
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *rindex(char *__s, int __c) throw() 
# 505
{ 
# 506
return __builtin_rindex(__s, __c); 
# 507
} 
# 510
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *rindex(const char *__s, int __c) throw() 
# 511
{ 
# 512
return __builtin_rindex(__s, __c); 
# 513
} 
# 523
extern "C" int ffs(int) throw() __attribute__((__const__)); 
# 528
extern "C" int ffsl(long) throw() __attribute__((__const__)); 
# 530
extern "C" int ffsll(long long) throw() __attribute__((__const__)); 
# 536
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 540
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 547
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 551
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 559
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 566
extern "C" char *strsignal(int) throw(); 
# 569
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 571
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 576
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 579
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 586
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 590
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1))); 
# 593
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1))); 
# 601
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1))); 
# 603
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1))); 
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32
extern "C" { typedef unsigned short __u_short; }
# 33
extern "C" { typedef unsigned __u_int; }
# 34
extern "C" { typedef unsigned long __u_long; }
# 37
extern "C" { typedef signed char __int8_t; }
# 38
extern "C" { typedef unsigned char __uint8_t; }
# 39
extern "C" { typedef signed short __int16_t; }
# 40
extern "C" { typedef unsigned short __uint16_t; }
# 41
extern "C" { typedef signed int __int32_t; }
# 42
extern "C" { typedef unsigned __uint32_t; }
# 44
extern "C" { typedef signed long __int64_t; }
# 45
extern "C" { typedef unsigned long __uint64_t; }
# 53
extern "C" { typedef long __quad_t; }
# 54
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135
extern "C" { typedef unsigned __uid_t; }
# 136
extern "C" { typedef unsigned __gid_t; }
# 137
extern "C" { typedef unsigned long __ino_t; }
# 138
extern "C" { typedef unsigned long __ino64_t; }
# 139
extern "C" { typedef unsigned __mode_t; }
# 140
extern "C" { typedef unsigned long __nlink_t; }
# 141
extern "C" { typedef long __off_t; }
# 142
extern "C" { typedef long __off64_t; }
# 143
extern "C" { typedef int __pid_t; }
# 144
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145
extern "C" { typedef long __clock_t; }
# 146
extern "C" { typedef unsigned long __rlim_t; }
# 147
extern "C" { typedef unsigned long __rlim64_t; }
# 148
extern "C" { typedef unsigned __id_t; }
# 149
extern "C" { typedef long __time_t; }
# 150
extern "C" { typedef unsigned __useconds_t; }
# 151
extern "C" { typedef long __suseconds_t; }
# 153
extern "C" { typedef int __daddr_t; }
# 154
extern "C" { typedef long __swblk_t; }
# 155
extern "C" { typedef int __key_t; }
# 158
extern "C" { typedef int __clockid_t; }
# 161
extern "C" { typedef void *__timer_t; }
# 164
extern "C" { typedef long __blksize_t; }
# 169
extern "C" { typedef long __blkcnt_t; }
# 170
extern "C" { typedef long __blkcnt64_t; }
# 173
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180
extern "C" { typedef long __ssize_t; }
# 184
extern "C" { typedef __off64_t __loff_t; }
# 185
extern "C" { typedef __quad_t *__qaddr_t; }
# 186
extern "C" { typedef char *__caddr_t; }
# 189
extern "C" { typedef long __intptr_t; }
# 192
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec { 
# 122
__time_t tv_sec; 
# 123
long tv_nsec; 
# 124
}; }
# 133
extern "C" { struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; }
# 161
extern "C" { struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; }
# 168
struct sigevent; 
# 174
extern "C" { typedef __pid_t pid_t; }
# 183
extern "C"  __attribute__((weak)) clock_t clock() throw(); 
# 186
extern "C" time_t time(time_t *) throw(); 
# 189
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__)); 
# 193
extern "C" time_t mktime(tm *) throw(); 
# 199
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw(); 
# 207
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw(); 
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw(); 
# 224
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw(); 
# 233
extern "C" tm *gmtime(const time_t *) throw(); 
# 237
extern "C" tm *localtime(const time_t *) throw(); 
# 243
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw(); 
# 248
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw(); 
# 255
extern "C" char *asctime(const tm *) throw(); 
# 258
extern "C" char *ctime(const time_t *) throw(); 
# 266
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw(); 
# 270
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw(); 
# 276
extern "C" { extern char *__tzname[2]; } 
# 277
extern "C" { extern int __daylight; } 
# 278
extern "C" { extern long __timezone; } 
# 283
extern "C" { extern char *tzname[2]; } 
# 287
extern "C" void tzset() throw(); 
# 291
extern "C" { extern int daylight; } 
# 292
extern "C" { extern long timezone; } 
# 298
extern "C" int stime(const time_t *) throw(); 
# 313
extern "C" time_t timegm(tm *) throw(); 
# 316
extern "C" time_t timelocal(tm *) throw(); 
# 319
extern "C" int dysize(int) throw() __attribute__((__const__)); 
# 328
extern "C" int nanosleep(const timespec *, timespec *); 
# 333
extern "C" int clock_getres(clockid_t, timespec *) throw(); 
# 336
extern "C" int clock_gettime(clockid_t, timespec *) throw(); 
# 339
extern "C" int clock_settime(clockid_t, const timespec *) throw(); 
# 347
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *); 
# 352
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw(); 
# 357
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw(); 
# 362
extern "C" int timer_delete(timer_t) throw(); 
# 365
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw(); 
# 370
extern "C" int timer_gettime(timer_t, itimerspec *) throw(); 
# 374
extern "C" int timer_getoverrun(timer_t) throw(); 
# 390
extern "C" { extern int getdate_err; } 
# 399
extern "C" tm *getdate(const char *); 
# 413
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__); 
# 57 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h"
extern "C"  __attribute__((weak)) clock_t clock() throw(); 
# 59
extern "C"  __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1))); 
# 61
extern "C"  __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int abs(int) throw() __attribute__((__const__)); 
# 68
extern "C"  __attribute__((weak)) long labs(long) throw() __attribute__((__const__)); 
# 70
extern "C"  __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__)); 
# 72
extern "C"  __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); 
# 74
extern "C"  __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); 
# 77
extern "C"  __attribute__((weak)) int min(int, int); 
# 79
extern "C"  __attribute__((weak)) unsigned umin(unsigned, unsigned); 
# 81
extern "C"  __attribute__((weak)) long long llmin(long long, long long); 
# 83
extern "C"  __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long); 
# 85
extern "C"  __attribute__((weak)) float fminf(float, float) throw(); 
# 87
extern "C"  __attribute__((weak)) double fmin(double, double) throw(); 
# 90
extern "C"  __attribute__((weak)) int max(int, int); 
# 92
extern "C"  __attribute__((weak)) unsigned umax(unsigned, unsigned); 
# 94
extern "C"  __attribute__((weak)) long long llmax(long long, long long); 
# 96
extern "C"  __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long); 
# 98
extern "C"  __attribute__((weak)) float fmaxf(float, float) throw(); 
# 100
extern "C"  __attribute__((weak)) double fmax(double, double) throw(); 
# 103
extern "C"  __attribute__((weak)) double sin(double) throw(); 
# 105
extern "C"  __attribute__((weak)) float sinf(float) throw(); 
# 108
extern "C"  __attribute__((weak)) double cos(double) throw(); 
# 110
extern "C"  __attribute__((weak)) float cosf(float) throw(); 
# 113
extern "C"  __attribute__((weak)) void sincos(double, double *, double *) throw(); 
# 115
extern "C"  __attribute__((weak)) void sincosf(float, float *, float *) throw(); 
# 118
extern "C"  __attribute__((weak)) double tan(double) throw(); 
# 120
extern "C"  __attribute__((weak)) float tanf(float) throw(); 
# 123
extern "C"  __attribute__((weak)) double sqrt(double) throw(); 
# 125
extern "C"  __attribute__((weak)) float sqrtf(float) throw(); 
# 128
extern "C"  __attribute__((weak)) double rsqrt(double); 
# 130
extern "C"  __attribute__((weak)) float rsqrtf(float); 
# 133
extern "C"  __attribute__((weak)) double exp2(double) throw(); 
# 135
extern "C"  __attribute__((weak)) float exp2f(float) throw(); 
# 138
extern "C"  __attribute__((weak)) double exp10(double) throw(); 
# 140
extern "C"  __attribute__((weak)) float exp10f(float) throw(); 
# 143
extern "C"  __attribute__((weak)) double expm1(double) throw(); 
# 145
extern "C"  __attribute__((weak)) float expm1f(float) throw(); 
# 148
extern "C"  __attribute__((weak)) double log2(double) throw(); 
# 150
extern "C"  __attribute__((weak)) float log2f(float) throw(); 
# 153
extern "C"  __attribute__((weak)) double log10(double) throw(); 
# 155
extern "C"  __attribute__((weak)) float log10f(float) throw(); 
# 158
extern "C"  __attribute__((weak)) double log(double) throw(); 
# 160
extern "C"  __attribute__((weak)) float logf(float) throw(); 
# 163
extern "C"  __attribute__((weak)) double log1p(double) throw(); 
# 165
extern "C"  __attribute__((weak)) float log1pf(float) throw(); 
# 168
extern "C"  __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); 
# 170
extern "C"  __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); 
# 173
extern "C"  __attribute__((weak)) double exp(double) throw(); 
# 175
extern "C"  __attribute__((weak)) float expf(float) throw(); 
# 178
extern "C"  __attribute__((weak)) double cosh(double) throw(); 
# 180
extern "C"  __attribute__((weak)) float coshf(float) throw(); 
# 183
extern "C"  __attribute__((weak)) double sinh(double) throw(); 
# 185
extern "C"  __attribute__((weak)) float sinhf(float) throw(); 
# 188
extern "C"  __attribute__((weak)) double tanh(double) throw(); 
# 190
extern "C"  __attribute__((weak)) float tanhf(float) throw(); 
# 193
extern "C"  __attribute__((weak)) double acosh(double) throw(); 
# 195
extern "C"  __attribute__((weak)) float acoshf(float) throw(); 
# 198
extern "C"  __attribute__((weak)) double asinh(double) throw(); 
# 200
extern "C"  __attribute__((weak)) float asinhf(float) throw(); 
# 203
extern "C"  __attribute__((weak)) double atanh(double) throw(); 
# 205
extern "C"  __attribute__((weak)) float atanhf(float) throw(); 
# 208
extern "C"  __attribute__((weak)) double ldexp(double, int) throw(); 
# 210
extern "C"  __attribute__((weak)) float ldexpf(float, int) throw(); 
# 213
extern "C"  __attribute__((weak)) double logb(double) throw(); 
# 215
extern "C"  __attribute__((weak)) float logbf(float) throw(); 
# 218
extern "C"  __attribute__((weak)) int ilogb(double) throw(); 
# 220
extern "C"  __attribute__((weak)) int ilogbf(float) throw(); 
# 223
extern "C"  __attribute__((weak)) double scalbn(double, int) throw(); 
# 225
extern "C"  __attribute__((weak)) float scalbnf(float, int) throw(); 
# 228
extern "C"  __attribute__((weak)) double scalbln(double, long) throw(); 
# 230
extern "C"  __attribute__((weak)) float scalblnf(float, long) throw(); 
# 233
extern "C"  __attribute__((weak)) double frexp(double, int *) throw(); 
# 235
extern "C"  __attribute__((weak)) float frexpf(float, int *) throw(); 
# 238
extern "C"  __attribute__((weak)) double round(double) throw() __attribute__((__const__)); 
# 240
extern "C"  __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); 
# 243
extern "C"  __attribute__((weak)) long lround(double) throw(); 
# 245
extern "C"  __attribute__((weak)) long lroundf(float) throw(); 
# 248
extern "C"  __attribute__((weak)) long long llround(double) throw(); 
# 250
extern "C"  __attribute__((weak)) long long llroundf(float) throw(); 
# 253
extern "C"  __attribute__((weak)) double rint(double) throw(); 
# 255
extern "C"  __attribute__((weak)) float rintf(float) throw(); 
# 258
extern "C"  __attribute__((weak)) long lrint(double) throw(); 
# 260
extern "C"  __attribute__((weak)) long lrintf(float) throw(); 
# 263
extern "C"  __attribute__((weak)) long long llrint(double) throw(); 
# 265
extern "C"  __attribute__((weak)) long long llrintf(float) throw(); 
# 268
extern "C"  __attribute__((weak)) double nearbyint(double) throw(); 
# 270
extern "C"  __attribute__((weak)) float nearbyintf(float) throw(); 
# 273
extern "C"  __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); 
# 275
extern "C"  __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); 
# 278
extern "C"  __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); 
# 280
extern "C"  __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); 
# 283
extern "C"  __attribute__((weak)) double fdim(double, double) throw(); 
# 285
extern "C"  __attribute__((weak)) float fdimf(float, float) throw(); 
# 288
extern "C"  __attribute__((weak)) double atan2(double, double) throw(); 
# 290
extern "C"  __attribute__((weak)) float atan2f(float, float) throw(); 
# 293
extern "C"  __attribute__((weak)) double atan(double) throw(); 
# 295
extern "C"  __attribute__((weak)) float atanf(float) throw(); 
# 298
extern "C"  __attribute__((weak)) double asin(double) throw(); 
# 300
extern "C"  __attribute__((weak)) float asinf(float) throw(); 
# 303
extern "C"  __attribute__((weak)) double acos(double) throw(); 
# 305
extern "C"  __attribute__((weak)) float acosf(float) throw(); 
# 308
extern "C"  __attribute__((weak)) double hypot(double, double) throw(); 
# 310
extern "C"  __attribute__((weak)) float hypotf(float, float) throw(); 
# 313
extern "C"  __attribute__((weak)) double cbrt(double) throw(); 
# 315
extern "C"  __attribute__((weak)) float cbrtf(float) throw(); 
# 318
extern "C"  __attribute__((weak)) double rcbrt(double); 
# 320
extern "C"  __attribute__((weak)) float rcbrtf(float); 
# 323
extern "C"  __attribute__((weak)) double sinpi(double); 
# 325
extern "C"  __attribute__((weak)) float sinpif(float); 
# 328
extern "C"  __attribute__((weak)) double pow(double, double) throw(); 
# 330
extern "C"  __attribute__((weak)) float powf(float, float) throw(); 
# 333
extern "C"  __attribute__((weak)) double modf(double, double *) throw(); 
# 335
extern "C"  __attribute__((weak)) float modff(float, float *) throw(); 
# 338
extern "C"  __attribute__((weak)) double fmod(double, double) throw(); 
# 340
extern "C"  __attribute__((weak)) float fmodf(float, float) throw(); 
# 343
extern "C"  __attribute__((weak)) double remainder(double, double) throw(); 
# 345
extern "C"  __attribute__((weak)) float remainderf(float, float) throw(); 
# 348
extern "C"  __attribute__((weak)) double remquo(double, double, int *) throw(); 
# 350
extern "C"  __attribute__((weak)) float remquof(float, float, int *) throw(); 
# 353
extern "C"  __attribute__((weak)) double erf(double) throw(); 
# 355
extern "C"  __attribute__((weak)) float erff(float) throw(); 
# 358
extern "C"  __attribute__((weak)) double erfinv(double); 
# 360
extern "C"  __attribute__((weak)) float erfinvf(float); 
# 363
extern "C"  __attribute__((weak)) double erfc(double) throw(); 
# 365
extern "C"  __attribute__((weak)) float erfcf(float) throw(); 
# 368
extern "C"  __attribute__((weak)) double erfcinv(double); 
# 370
extern "C"  __attribute__((weak)) float erfcinvf(float); 
# 373
extern "C"  __attribute__((weak)) double lgamma(double) throw(); 
# 375
extern "C"  __attribute__((weak)) float lgammaf(float) throw(); 
# 378
extern "C"  __attribute__((weak)) double tgamma(double) throw(); 
# 380
extern "C"  __attribute__((weak)) float tgammaf(float) throw(); 
# 383
extern "C"  __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); 
# 385
extern "C"  __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); 
# 388
extern "C"  __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); 
# 390
extern "C"  __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); 
# 393
extern "C"  __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); 
# 395
extern "C"  __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); 
# 398
extern "C"  __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__)); 
# 400
extern "C"  __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__)); 
# 403
extern "C"  __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__)); 
# 405
extern "C"  __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__)); 
# 419 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int __finite(double) throw() __attribute__((__const__)); 
# 421
extern "C"  __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__)); 
# 423
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 428
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 431
extern "C"  __attribute__((weak)) double fma(double, double, double) throw(); 
# 433
extern "C"  __attribute__((weak)) float fmaf(float, float, float) throw(); 
# 441
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 443
extern "C"  __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__)); 
# 445
extern "C"  __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__)); 
# 455 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__)); 
# 31 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32
extern "C" { typedef double double_t; }
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C"  __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw(); 
# 57
extern "C"  __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw(); 
# 59
extern "C"  __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw(); 
# 61
extern "C"  __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw(); 
# 64
extern "C"  __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw(); 
# 66
extern "C"  __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw(); 
# 68
extern "C"  __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw(); 
# 73
extern "C"  __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw(); 
# 75
extern "C"  __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw(); 
# 77
extern "C"  __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw(); 
# 82
extern "C"  __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw(); 
# 89
extern "C"  __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw(); 
# 91
extern "C"  __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw(); 
# 93
extern "C"  __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw(); 
# 101
extern "C"  __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw(); 
# 104
extern "C"  __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw(); 
# 107
extern "C"  __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw(); 
# 110
extern "C"  __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw(); 
# 113
extern "C"  __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw(); 
# 116
extern "C"  __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw(); 
# 121
extern "C"  __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw(); 
# 123
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw(); 
# 129
extern "C"  __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw(); 
# 132
extern "C"  __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw(); 
# 135
extern "C"  __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw(); 
# 142
extern "C"  __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw(); 
# 145
extern "C"  __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw(); 
# 154
extern "C"  __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw(); 
# 157
extern "C"  __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw(); 
# 163
extern "C"  __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw(); 
# 170
extern "C"  __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw(); 
# 179
extern "C"  __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__)); 
# 182
extern "C"  __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__)); 
# 185
extern "C"  __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__)); 
# 188
extern "C"  __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw(); 
# 193
extern "C"  __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__)); 
# 196
extern "C"  __attribute__((weak)) int __finite(double) throw() __attribute__((__const__)); 
# 202
extern "C" int isinf(double) throw() __attribute__((__const__)); 
# 205
extern "C" int finite(double) throw() __attribute__((__const__)); 
# 208
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw(); 
# 212
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw(); 
# 218
extern "C"  __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__)); 
# 225
extern "C"  __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__)); 
# 231
extern "C"  __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__)); 
# 235
extern "C" int isnan(double) throw() __attribute__((__const__)); 
# 238
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw(); 
# 239
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw(); 
# 240
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw(); 
# 241
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw(); 
# 242
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw(); 
# 243
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw(); 
# 250
extern "C"  __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw(); 
# 251
extern "C"  __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw(); 
# 252
extern "C"  __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw(); 
# 259
extern "C"  __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw(); 
# 265
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw(); 
# 272
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw(); 
# 280
extern "C"  __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw(); 
# 283
extern "C"  __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__)); 
# 285
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__)); 
# 289
extern "C"  __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw(); 
# 293
extern "C"  __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw(); 
# 297
extern "C"  __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw(); 
# 302
extern "C"  __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw(); 
# 306
extern "C"  __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw(); 
# 310
extern "C"  __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__)); 
# 314
extern "C"  __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__)); 
# 319
extern "C"  __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw(); 
# 326
extern "C"  __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw(); 
# 327
extern "C"  __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw(); 
# 331
extern "C"  __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw(); 
# 332
extern "C"  __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw(); 
# 336
extern "C"  __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw(); 
# 339
extern "C"  __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw(); 
# 342
extern "C"  __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw(); 
# 346
extern "C" int __fpclassify(double) throw() __attribute__((__const__)); 
# 350
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 355
extern "C"  __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw(); 
# 364
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw(); 
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C"  __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw(); 
# 57
extern "C"  __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw(); 
# 59
extern "C"  __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw(); 
# 61
extern "C"  __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw(); 
# 64
extern "C"  __attribute__((weak)) float cosf(float) throw(); 
# 66
extern "C"  __attribute__((weak)) float sinf(float) throw(); 
# 68
extern "C"  __attribute__((weak)) float tanf(float) throw(); 
# 73
extern "C"  __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw(); 
# 75
extern "C"  __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw(); 
# 77
extern "C"  __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw(); 
# 82
extern "C"  __attribute__((weak)) void sincosf(float, float *, float *) throw(); 
# 89
extern "C"  __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw(); 
# 91
extern "C"  __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw(); 
# 93
extern "C"  __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw(); 
# 101
extern "C"  __attribute__((weak)) float expf(float) throw(); 
# 104
extern "C"  __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw(); 
# 107
extern "C"  __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw(); 
# 110
extern "C"  __attribute__((weak)) float logf(float) throw(); 
# 113
extern "C"  __attribute__((weak)) float log10f(float) throw(); 
# 116
extern "C"  __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw(); 
# 121
extern "C"  __attribute__((weak)) float exp10f(float) throw(); 
# 123
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw(); 
# 129
extern "C"  __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw(); 
# 132
extern "C"  __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw(); 
# 135
extern "C"  __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw(); 
# 142
extern "C"  __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw(); 
# 145
extern "C"  __attribute__((weak)) float log2f(float) throw(); 
# 154
extern "C"  __attribute__((weak)) float powf(float, float) throw(); 
# 157
extern "C"  __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw(); 
# 163
extern "C"  __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw(); 
# 170
extern "C"  __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw(); 
# 179
extern "C"  __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__)); 
# 182
extern "C"  __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__)); 
# 185
extern "C"  __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__)); 
# 188
extern "C"  __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw(); 
# 193
extern "C"  __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__)); 
# 196
extern "C"  __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__)); 
# 202
extern "C" int isinff(float) throw() __attribute__((__const__)); 
# 205
extern "C" int finitef(float) throw() __attribute__((__const__)); 
# 208
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw(); 
# 212
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw(); 
# 218
extern "C"  __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__)); 
# 225
extern "C"  __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__)); 
# 231
extern "C"  __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__)); 
# 235
extern "C" int isnanf(float) throw() __attribute__((__const__)); 
# 238
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw(); 
# 239
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw(); 
# 240
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw(); 
# 241
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw(); 
# 242
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw(); 
# 243
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw(); 
# 250
extern "C"  __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw(); 
# 251
extern "C"  __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw(); 
# 252
extern "C"  __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw(); 
# 259
extern "C"  __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw(); 
# 265
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw(); 
# 272
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw(); 
# 280
extern "C"  __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw(); 
# 283
extern "C"  __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__)); 
# 285
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__)); 
# 289
extern "C"  __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw(); 
# 293
extern "C"  __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw(); 
# 297
extern "C"  __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw(); 
# 302
extern "C"  __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw(); 
# 306
extern "C"  __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw(); 
# 310
extern "C"  __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__)); 
# 314
extern "C"  __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__)); 
# 319
extern "C"  __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw(); 
# 326
extern "C"  __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw(); 
# 327
extern "C"  __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw(); 
# 331
extern "C"  __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw(); 
# 332
extern "C"  __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw(); 
# 336
extern "C"  __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw(); 
# 339
extern "C"  __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw(); 
# 342
extern "C"  __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw(); 
# 346
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__)); 
# 350
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 355
extern "C"  __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw(); 
# 364
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw(); 
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw(); 
# 57
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw(); 
# 59
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw(); 
# 61
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw(); 
# 64
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw(); 
# 66
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw(); 
# 68
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw(); 
# 73
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw(); 
# 75
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw(); 
# 77
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw(); 
# 82
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw(); 
# 89
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw(); 
# 91
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw(); 
# 93
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw(); 
# 101
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw(); 
# 104
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw(); 
# 107
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw(); 
# 110
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw(); 
# 113
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw(); 
# 116
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw(); 
# 121
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw(); 
# 123
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw(); 
# 129
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw(); 
# 132
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw(); 
# 135
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw(); 
# 142
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw(); 
# 145
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw(); 
# 154
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw(); 
# 157
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw(); 
# 163
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw(); 
# 170
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw(); 
# 179
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__)); 
# 182
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__)); 
# 185
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__)); 
# 188
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw(); 
# 193
extern "C"  __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__)); 
# 196
extern "C"  __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__)); 
# 202
extern "C" int isinfl(long double) throw() __attribute__((__const__)); 
# 205
extern "C" int finitel(long double) throw() __attribute__((__const__)); 
# 208
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw(); 
# 212
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw(); 
# 218
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__)); 
# 225
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__)); 
# 231
extern "C"  __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__)); 
# 235
extern "C" int isnanl(long double) throw() __attribute__((__const__)); 
# 238
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw(); 
# 239
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw(); 
# 240
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw(); 
# 241
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw(); 
# 242
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw(); 
# 243
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw(); 
# 250
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw(); 
# 251
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw(); 
# 252
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw(); 
# 259
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw(); 
# 265
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw(); 
# 272
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw(); 
# 280
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw(); 
# 283
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__)); 
# 285
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__)); 
# 289
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw(); 
# 293
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw(); 
# 297
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw(); 
# 302
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw(); 
# 306
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw(); 
# 310
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__)); 
# 314
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__)); 
# 319
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw(); 
# 326
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw(); 
# 327
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw(); 
# 331
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw(); 
# 332
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw(); 
# 336
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw(); 
# 339
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw(); 
# 342
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw(); 
# 346
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__)); 
# 350
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 355
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw(); 
# 364
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw(); 
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; } 
# 203
enum { 
# 204
FP_NAN, 
# 206
FP_INFINITE, 
# 208
FP_ZERO, 
# 210
FP_SUBNORMAL, 
# 212
FP_NORMAL
# 214
}; 
# 302 "/usr/include/math.h" 3
extern "C" { typedef 
# 296
enum { 
# 297
_IEEE_ = (-1), 
# 298
_SVID_ = 0, 
# 299
_XOPEN_, 
# 300
_POSIX_, 
# 301
_ISOC_
# 302
} _LIB_VERSION_TYPE; }
# 307
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; } 
# 318
extern "C" { struct __exception { 
# 323
int type; 
# 324
char *name; 
# 325
double arg1; 
# 326
double arg2; 
# 327
double retval; 
# 328
}; }
# 331
extern "C" int matherr(__exception *) throw(); 
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw() 
# 39
{ 
# 44
int __m; 
# 45
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x)); 
# 46
return __m & 8; 
# 48
} } 
# 50
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbit(double __x) throw() 
# 51
{ 
# 56
int __m; 
# 57
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x)); 
# 58
return __m & 128; 
# 60
} } 
# 62
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw() 
# 63
{ 
# 64
union { long double __l; int __i[3]; } __u = {__l: __x}; 
# 65
return (((__u.__i)[2]) & 32768) != 0; 
# 66
} } 
# 67 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
extern "C" { union wait { 
# 69
int w_status; 
# 71
struct { 
# 73
unsigned __w_termsig:7; 
# 74
unsigned __w_coredump:1; 
# 75
unsigned __w_retcode:8; 
# 76
unsigned:16; 
# 84
} __wait_terminated; 
# 86
struct { 
# 88
unsigned __w_stopval:8; 
# 89
unsigned __w_stopsig:8; 
# 90
unsigned:16; 
# 97
} __wait_stopped; 
# 98
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef 
# 99
struct { 
# 100
int quot; 
# 101
int rem; 
# 102
} div_t; }
# 110
extern "C" { typedef 
# 107
struct { 
# 108
long quot; 
# 109
long rem; 
# 110
} ldiv_t; }
# 122
extern "C" { typedef 
# 119
struct { 
# 120
long long quot; 
# 121
long long rem; 
# 122
} lldiv_t; }
# 140
extern "C" size_t __ctype_get_mb_cur_max() throw(); 
# 145
extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); } 
# 148
extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); } 
# 151
extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); } 
# 158
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); } 
# 165
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 173
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 176
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 184
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 188
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 196
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 201
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 210
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 215
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 244
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 250
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 256
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 261
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 265
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 269
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 279
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) double atof(const char *__nptr) throw() 
# 280
{ 
# 281
return strtod(__nptr, (char **)__null); 
# 282
} } 
# 284
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) int atoi(const char *__nptr) throw() 
# 285
{ 
# 286
return (int)strtol(__nptr, (char **)__null, 10); 
# 287
} } 
# 289
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) long atol(const char *__nptr) throw() 
# 290
{ 
# 291
return strtol(__nptr, (char **)__null, 10); 
# 292
} } 
# 298
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) long long atoll(const char *__nptr) throw() 
# 299
{ 
# 300
return strtoll(__nptr, (char **)__null, 10); 
# 301
} } 
# 311
extern "C" char *l64a(long) throw(); 
# 314
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35
extern "C" { typedef __u_short u_short; }
# 36
extern "C" { typedef __u_int u_int; }
# 37
extern "C" { typedef __u_long u_long; }
# 38
extern "C" { typedef __quad_t quad_t; }
# 39
extern "C" { typedef __u_quad_t u_quad_t; }
# 40
extern "C" { typedef __fsid_t fsid_t; }
# 45
extern "C" { typedef __loff_t loff_t; }
# 49
extern "C" { typedef __ino_t ino_t; }
# 56
extern "C" { typedef __ino64_t ino64_t; }
# 61
extern "C" { typedef __dev_t dev_t; }
# 66
extern "C" { typedef __gid_t gid_t; }
# 71
extern "C" { typedef __mode_t mode_t; }
# 76
extern "C" { typedef __nlink_t nlink_t; }
# 81
extern "C" { typedef __uid_t uid_t; }
# 87
extern "C" { typedef __off_t off_t; }
# 94
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110
extern "C" { typedef __ssize_t ssize_t; }
# 116
extern "C" { typedef __daddr_t daddr_t; }
# 117
extern "C" { typedef __caddr_t caddr_t; }
# 123
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152
extern "C" { typedef unsigned short ushort; }
# 153
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196
extern "C" { typedef short int16_t; }
# 197
extern "C" { typedef int int32_t; }
# 198
extern "C" { typedef long int64_t; }
# 201
extern "C" { typedef unsigned char u_int8_t; }
# 202
extern "C" { typedef unsigned short u_int16_t; }
# 203
extern "C" { typedef unsigned u_int32_t; }
# 204
extern "C" { typedef unsigned long u_int64_t; }
# 206
extern "C" { typedef long register_t; }
# 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32
extern "C" { typedef 
# 30
struct { 
# 31
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))]; 
# 32
} __sigset_t; }
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" { struct timeval { 
# 77
__time_t tv_sec; 
# 78
__suseconds_t tv_usec; 
# 79
}; }
# 55 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78
extern "C" { typedef 
# 68
struct { 
# 72
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))]; 
# 78
} fd_set; }
# 85
extern "C" { typedef __fd_mask fd_mask; }
# 109
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__); 
# 121
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__); 
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)); } 
# 34
extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)); } 
# 37
extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)); } 
# 43
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_major(unsigned long long __dev) throw() 
# 44
{ 
# 45
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095)); 
# 46
} } 
# 49
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_minor(unsigned long long __dev) throw() 
# 50
{ 
# 51
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255)); 
# 52
} } 
# 55
extern "C" { inline __attribute__((__gnu_inline__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw() 
# 56
{ 
# 57
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32); 
# 60
} } 
# 229 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57
extern "C" { typedef 
# 54
union { 
# 55
char __size[56]; 
# 56
long __align; 
# 57
} pthread_attr_t; }
# 65
extern "C" { typedef 
# 61
struct __pthread_internal_list { 
# 63
__pthread_internal_list *__prev; 
# 64
__pthread_internal_list *__next; 
# 65
} __pthread_list_t; }
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef 
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 78
struct __pthread_mutex_s { 
# 80
int __lock; 
# 81
unsigned __count; 
# 82
int __owner; 
# 84
unsigned __nusers; 
# 88
int __kind; 
# 90
int __spins; 
# 91
__pthread_list_t __list; 
# 101 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data; 
# 102
char __size[40]; 
# 103
long __align; 
# 104
} pthread_mutex_t; }
# 110
extern "C" { typedef 
# 107
union { 
# 108
char __size[4]; 
# 109
int __align; 
# 110
} pthread_mutexattr_t; }
# 130
extern "C" { typedef 
# 116
union { 
# 118
struct { 
# 119
int __lock; 
# 120
unsigned __futex; 
# 121
__extension__ unsigned long long __total_seq; 
# 122
__extension__ unsigned long long __wakeup_seq; 
# 123
__extension__ unsigned long long __woken_seq; 
# 124
void *__mutex; 
# 125
unsigned __nwaiters; 
# 126
unsigned __broadcast_seq; 
# 127
} __data; 
# 128
char __size[48]; 
# 129
__extension__ long long __align; 
# 130
} pthread_cond_t; }
# 136
extern "C" { typedef 
# 133
union { 
# 134
char __size[4]; 
# 135
int __align; 
# 136
} pthread_condattr_t; }
# 140
extern "C" { typedef unsigned pthread_key_t; }
# 144
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef 
# 151 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 154
struct { 
# 155
int __lock; 
# 156
unsigned __nr_readers; 
# 157
unsigned __readers_wakeup; 
# 158
unsigned __writer_wakeup; 
# 159
unsigned __nr_readers_queued; 
# 160
unsigned __nr_writers_queued; 
# 161
int __writer; 
# 162
int __shared; 
# 163
unsigned long __pad1; 
# 164
unsigned long __pad2; 
# 167
unsigned __flags; 
# 168
} __data; 
# 187 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56]; 
# 188
long __align; 
# 189
} pthread_rwlock_t; }
# 195
extern "C" { typedef 
# 192
union { 
# 193
char __size[8]; 
# 194
long __align; 
# 195
} pthread_rwlockattr_t; }
# 201
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210
extern "C" { typedef 
# 207
union { 
# 208
char __size[32]; 
# 209
long __align; 
# 210
} pthread_barrier_t; }
# 216
extern "C" { typedef 
# 213
union { 
# 214
char __size[4]; 
# 215
int __align; 
# 216
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw(); 
# 330
extern "C" void srandom(unsigned) throw(); 
# 336
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2))); 
# 341
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1))); 
# 349
extern "C" { struct random_data { 
# 351
int32_t *fptr; 
# 352
int32_t *rptr; 
# 353
int32_t *state; 
# 354
int rand_type; 
# 355
int rand_deg; 
# 356
int rand_sep; 
# 357
int32_t *end_ptr; 
# 358
}; }
# 360
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 363
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2))); 
# 366
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 371
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 380
extern "C" int rand() throw(); 
# 382
extern "C" void srand(unsigned) throw(); 
# 387
extern "C" int rand_r(unsigned *) throw(); 
# 395
extern "C" double drand48() throw(); 
# 396
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 399
extern "C" long lrand48() throw(); 
# 400
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 404
extern "C" long mrand48() throw(); 
# 405
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 409
extern "C" void srand48(long) throw(); 
# 410
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 412
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1))); 
# 418
extern "C" { struct drand48_data { 
# 420
unsigned short __x[3]; 
# 421
unsigned short __old_x[3]; 
# 422
unsigned short __c; 
# 423
unsigned short __init; 
# 424
unsigned long long __a; 
# 425
}; }
# 428
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 430
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 435
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 438
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 444
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 447
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 453
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2))); 
# 456
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 459
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 471
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__)); 
# 473
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__)); 
# 485
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__)); 
# 488
extern "C" void free(void *) throw(); 
# 493
extern "C" void cfree(void *) throw(); 
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw(); 
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__)); 
# 508
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1))); 
# 514
extern "C" void abort() throw() __attribute__((__noreturn__)); 
# 518
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1))); 
# 525
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1))); 
# 536
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1))); 
# 544
extern "C" void exit(int) throw() __attribute__((__noreturn__)); 
# 552
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__)); 
# 560
extern "C" void _Exit(int) throw() __attribute__((__noreturn__)); 
# 567
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1))); 
# 572
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1))); 
# 579
extern "C" int putenv(char *) throw() __attribute__((nonnull(1))); 
# 585
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2))); 
# 589
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1))); 
# 596
extern "C" int clearenv() throw(); 
# 606
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1))); 
# 620
extern "C" int mkstemp(char *) __attribute__((nonnull(1))); 
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1))); 
# 642
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1))); 
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1))); 
# 663
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1))); 
# 674
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1))); 
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1))); 
# 694
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1))); 
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1))); 
# 717
extern "C" int system(const char *); 
# 724
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1))); 
# 734
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw(); 
# 742
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5))); 
# 761
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 764
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 771
extern "C"  __attribute__((weak)) int abs(int) throw() __attribute__((__const__)); 
# 772
extern "C"  __attribute__((weak)) long labs(long) throw() __attribute__((__const__)); 
# 776
extern "C"  __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__)); 
# 785
extern "C" div_t div(int, int) throw() __attribute__((__const__)); 
# 787
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__)); 
# 793
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__)); 
# 808
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 814
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 820
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3))); 
# 826
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 829
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 832
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3))); 
# 838
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 841
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 845
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 849
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 860
extern "C" int mblen(const char *, size_t) throw(); 
# 863
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw(); 
# 867
extern "C" int wctomb(char *, wchar_t) throw(); 
# 871
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw(); 
# 874
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw(); 
# 885
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1))); 
# 896
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 905
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1))); 
# 913
extern "C" int posix_openpt(int); 
# 921
extern "C" int grantpt(int) throw(); 
# 925
extern "C" int unlockpt(int) throw(); 
# 930
extern "C" char *ptsname(int) throw(); 
# 937
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2))); 
# 941
extern "C" int getpt(); 
# 948
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1))); 
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 71
template< class _Iterator, class _Container> class __normal_iterator; 
# 74
}
# 76
namespace std __attribute__((visibility("default"))) { 
# 78
struct __true_type { }; 
# 79
struct __false_type { }; 
# 81
template< bool __T0> 
# 82
struct __truth_type { 
# 83
typedef __false_type __type; }; 
# 86
template<> struct __truth_type< true>  { 
# 87
typedef __true_type __type; }; 
# 91
template< class _Sp, class _Tp> 
# 92
struct __traitor { 
# 94
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))}; 
# 95
typedef typename __truth_type< __value> ::__type __type; 
# 96
}; 
# 99
template< class , class > 
# 100
struct __are_same { 
# 102
enum { __value}; 
# 103
typedef __false_type __type; 
# 104
}; 
# 106
template< class _Tp> 
# 107
struct __are_same< _Tp, _Tp>  { 
# 109
enum { __value = 1}; 
# 110
typedef __true_type __type; 
# 111
}; 
# 114
template< class _Tp> 
# 115
struct __is_void { 
# 117
enum { __value}; 
# 118
typedef __false_type __type; 
# 119
}; 
# 122
template<> struct __is_void< void>  { 
# 124
enum { __value = 1}; 
# 125
typedef __true_type __type; 
# 126
}; 
# 131
template< class _Tp> 
# 132
struct __is_integer { 
# 134
enum { __value}; 
# 135
typedef __false_type __type; 
# 136
}; 
# 142
template<> struct __is_integer< bool>  { 
# 144
enum { __value = 1}; 
# 145
typedef __true_type __type; 
# 146
}; 
# 149
template<> struct __is_integer< char>  { 
# 151
enum { __value = 1}; 
# 152
typedef __true_type __type; 
# 153
}; 
# 156
template<> struct __is_integer< signed char>  { 
# 158
enum { __value = 1}; 
# 159
typedef __true_type __type; 
# 160
}; 
# 163
template<> struct __is_integer< unsigned char>  { 
# 165
enum { __value = 1}; 
# 166
typedef __true_type __type; 
# 167
}; 
# 171
template<> struct __is_integer< wchar_t>  { 
# 173
enum { __value = 1}; 
# 174
typedef __true_type __type; 
# 175
}; 
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 
# 197
enum { __value = 1}; 
# 198
typedef __true_type __type; 
# 199
}; 
# 202
template<> struct __is_integer< unsigned short>  { 
# 204
enum { __value = 1}; 
# 205
typedef __true_type __type; 
# 206
}; 
# 209
template<> struct __is_integer< int>  { 
# 211
enum { __value = 1}; 
# 212
typedef __true_type __type; 
# 213
}; 
# 216
template<> struct __is_integer< unsigned>  { 
# 218
enum { __value = 1}; 
# 219
typedef __true_type __type; 
# 220
}; 
# 223
template<> struct __is_integer< long>  { 
# 225
enum { __value = 1}; 
# 226
typedef __true_type __type; 
# 227
}; 
# 230
template<> struct __is_integer< unsigned long>  { 
# 232
enum { __value = 1}; 
# 233
typedef __true_type __type; 
# 234
}; 
# 237
template<> struct __is_integer< long long>  { 
# 239
enum { __value = 1}; 
# 240
typedef __true_type __type; 
# 241
}; 
# 244
template<> struct __is_integer< unsigned long long>  { 
# 246
enum { __value = 1}; 
# 247
typedef __true_type __type; 
# 248
}; 
# 253
template< class _Tp> 
# 254
struct __is_floating { 
# 256
enum { __value}; 
# 257
typedef __false_type __type; 
# 258
}; 
# 262
template<> struct __is_floating< float>  { 
# 264
enum { __value = 1}; 
# 265
typedef __true_type __type; 
# 266
}; 
# 269
template<> struct __is_floating< double>  { 
# 271
enum { __value = 1}; 
# 272
typedef __true_type __type; 
# 273
}; 
# 276
template<> struct __is_floating< long double>  { 
# 278
enum { __value = 1}; 
# 279
typedef __true_type __type; 
# 280
}; 
# 285
template< class _Tp> 
# 286
struct __is_pointer { 
# 288
enum { __value}; 
# 289
typedef __false_type __type; 
# 290
}; 
# 292
template< class _Tp> 
# 293
struct __is_pointer< _Tp *>  { 
# 295
enum { __value = 1}; 
# 296
typedef __true_type __type; 
# 297
}; 
# 302
template< class _Tp> 
# 303
struct __is_normal_iterator { 
# 305
enum { __value}; 
# 306
typedef __false_type __type; 
# 307
}; 
# 309
template< class _Iterator, class _Container> 
# 310
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 313
enum { __value = 1}; 
# 314
typedef __true_type __type; 
# 315
}; 
# 320
template< class _Tp> 
# 321
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 323
}; 
# 328
template< class _Tp> 
# 329
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> >  { 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 339
}; 
# 344
template< class _Tp> 
# 345
struct __is_char { 
# 347
enum { __value}; 
# 348
typedef __false_type __type; 
# 349
}; 
# 352
template<> struct __is_char< char>  { 
# 354
enum { __value = 1}; 
# 355
typedef __true_type __type; 
# 356
}; 
# 360
template<> struct __is_char< wchar_t>  { 
# 362
enum { __value = 1}; 
# 363
typedef __true_type __type; 
# 364
}; 
# 367
template< class _Tp> 
# 368
struct __is_byte { 
# 370
enum { __value}; 
# 371
typedef __false_type __type; 
# 372
}; 
# 375
template<> struct __is_byte< char>  { 
# 377
enum { __value = 1}; 
# 378
typedef __true_type __type; 
# 379
}; 
# 382
template<> struct __is_byte< signed char>  { 
# 384
enum { __value = 1}; 
# 385
typedef __true_type __type; 
# 386
}; 
# 389
template<> struct __is_byte< unsigned char>  { 
# 391
enum { __value = 1}; 
# 392
typedef __true_type __type; 
# 393
}; 
# 398
template< class _Tp> 
# 399
struct __is_move_iterator { 
# 401
enum { __value}; 
# 402
typedef __false_type __type; 
# 403
}; 
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 40
template< bool __T1, class > 
# 41
struct __enable_if { 
# 42
}; 
# 44
template< class _Tp> 
# 45
struct __enable_if< true, _Tp>  { 
# 46
typedef _Tp __type; }; 
# 50
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 51
struct __conditional_type { 
# 52
typedef _Iftrue __type; }; 
# 54
template< class _Iftrue, class _Iffalse> 
# 55
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 56
typedef _Iffalse __type; }; 
# 60
template< class _Tp> 
# 61
struct __add_unsigned { 
# 64
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 67
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 68
}; 
# 71
template<> struct __add_unsigned< char>  { 
# 72
typedef unsigned char __type; }; 
# 75
template<> struct __add_unsigned< signed char>  { 
# 76
typedef unsigned char __type; }; 
# 79
template<> struct __add_unsigned< short>  { 
# 80
typedef unsigned short __type; }; 
# 83
template<> struct __add_unsigned< int>  { 
# 84
typedef unsigned __type; }; 
# 87
template<> struct __add_unsigned< long>  { 
# 88
typedef unsigned long __type; }; 
# 91
template<> struct __add_unsigned< long long>  { 
# 92
typedef unsigned long long __type; }; 
# 96
template<> struct __add_unsigned< bool> ; 
# 99
template<> struct __add_unsigned< wchar_t> ; 
# 103
template< class _Tp> 
# 104
struct __remove_unsigned { 
# 107
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 110
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 111
}; 
# 114
template<> struct __remove_unsigned< char>  { 
# 115
typedef signed char __type; }; 
# 118
template<> struct __remove_unsigned< unsigned char>  { 
# 119
typedef signed char __type; }; 
# 122
template<> struct __remove_unsigned< unsigned short>  { 
# 123
typedef short __type; }; 
# 126
template<> struct __remove_unsigned< unsigned>  { 
# 127
typedef int __type; }; 
# 130
template<> struct __remove_unsigned< unsigned long>  { 
# 131
typedef long __type; }; 
# 134
template<> struct __remove_unsigned< unsigned long long>  { 
# 135
typedef long long __type; }; 
# 139
template<> struct __remove_unsigned< bool> ; 
# 142
template<> struct __remove_unsigned< wchar_t> ; 
# 146
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value> 
# 159
struct __promote { 
# 160
typedef double __type; }; 
# 162
template< class _Tp> 
# 163
struct __promote< _Tp, false>  { 
# 164
typedef _Tp __type; }; 
# 166
template< class _Tp, class _Up> 
# 167
struct __promote_2 { 
# 170
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1; 
# 171
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2; 
# 174
public: typedef __typeof__(__type1() + __type2()) __type; 
# 175
}; 
# 177
template< class _Tp, class _Up, class _Vp> 
# 178
struct __promote_3 { 
# 181
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1; 
# 182
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2; 
# 183
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3; 
# 186
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type; 
# 187
}; 
# 189
template< class _Tp, class _Up, class _Vp, class _Wp> 
# 190
struct __promote_4 { 
# 193
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1; 
# 194
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2; 
# 195
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3; 
# 196
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4; 
# 199
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type; 
# 200
}; 
# 202
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) { 
# 81
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94
inline double abs(double __x) 
# 95
{ return __builtin_fabs(__x); } 
# 98
inline float abs(float __x) 
# 99
{ return __builtin_fabsf(__x); } 
# 102
inline long double abs(long double __x) 
# 103
{ return __builtin_fabsl(__x); } 
# 105
using ::acos;
# 108
inline float acos(float __x) 
# 109
{ return __builtin_acosf(__x); } 
# 112
inline long double acos(long double __x) 
# 113
{ return __builtin_acosl(__x); } 
# 115
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121
using ::asin;
# 124
inline float asin(float __x) 
# 125
{ return __builtin_asinf(__x); } 
# 128
inline long double asin(long double __x) 
# 129
{ return __builtin_asinl(__x); } 
# 131
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137
using ::atan;
# 140
inline float atan(float __x) 
# 141
{ return __builtin_atanf(__x); } 
# 144
inline long double atan(long double __x) 
# 145
{ return __builtin_atanl(__x); } 
# 147
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153
using ::atan2;
# 156
inline float atan2(float __y, float __x) 
# 157
{ return __builtin_atan2f(__y, __x); } 
# 160
inline long double atan2(long double __y, long double __x) 
# 161
{ return __builtin_atan2l(__y, __x); } 
# 163
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175
using ::ceil;
# 178
inline float ceil(float __x) 
# 179
{ return __builtin_ceilf(__x); } 
# 182
inline long double ceil(long double __x) 
# 183
{ return __builtin_ceill(__x); } 
# 185
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191
using ::cos;
# 194
inline float cos(float __x) 
# 195
{ return __builtin_cosf(__x); } 
# 198
inline long double cos(long double __x) 
# 199
{ return __builtin_cosl(__x); } 
# 201
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207
using ::cosh;
# 210
inline float cosh(float __x) 
# 211
{ return __builtin_coshf(__x); } 
# 214
inline long double cosh(long double __x) 
# 215
{ return __builtin_coshl(__x); } 
# 217
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223
using ::exp;
# 226
inline float exp(float __x) 
# 227
{ return __builtin_expf(__x); } 
# 230
inline long double exp(long double __x) 
# 231
{ return __builtin_expl(__x); } 
# 233
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239
using ::fabs;
# 242
inline float fabs(float __x) 
# 243
{ return __builtin_fabsf(__x); } 
# 246
inline long double fabs(long double __x) 
# 247
{ return __builtin_fabsl(__x); } 
# 249
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255
using ::floor;
# 258
inline float floor(float __x) 
# 259
{ return __builtin_floorf(__x); } 
# 262
inline long double floor(long double __x) 
# 263
{ return __builtin_floorl(__x); } 
# 265
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271
using ::fmod;
# 274
inline float fmod(float __x, float __y) 
# 275
{ return __builtin_fmodf(__x, __y); } 
# 278
inline long double fmod(long double __x, long double __y) 
# 279
{ return __builtin_fmodl(__x, __y); } 
# 281
using ::frexp;
# 284
inline float frexp(float __x, int *__exp) 
# 285
{ return __builtin_frexpf(__x, __exp); } 
# 288
inline long double frexp(long double __x, int *__exp) 
# 289
{ return __builtin_frexpl(__x, __exp); } 
# 291
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297
using ::ldexp;
# 300
inline float ldexp(float __x, int __exp) 
# 301
{ return __builtin_ldexpf(__x, __exp); } 
# 304
inline long double ldexp(long double __x, int __exp) 
# 305
{ return __builtin_ldexpl(__x, __exp); } 
# 307
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313
using ::log;
# 316
inline float log(float __x) 
# 317
{ return __builtin_logf(__x); } 
# 320
inline long double log(long double __x) 
# 321
{ return __builtin_logl(__x); } 
# 323
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329
using ::log10;
# 332
inline float log10(float __x) 
# 333
{ return __builtin_log10f(__x); } 
# 336
inline long double log10(long double __x) 
# 337
{ return __builtin_log10l(__x); } 
# 339
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345
using ::modf;
# 348
inline float modf(float __x, float *__iptr) 
# 349
{ return __builtin_modff(__x, __iptr); } 
# 352
inline long double modf(long double __x, long double *__iptr) 
# 353
{ return __builtin_modfl(__x, __iptr); } 
# 355
using ::pow;
# 358
inline float pow(float __x, float __y) 
# 359
{ return __builtin_powf(__x, __y); } 
# 362
inline long double pow(long double __x, long double __y) 
# 363
{ return __builtin_powl(__x, __y); } 
# 369
inline double pow(double __x, int __i) 
# 370
{ return __builtin_powi(__x, __i); } 
# 373
inline float pow(float __x, int __n) 
# 374
{ return __builtin_powif(__x, __n); } 
# 377
inline long double pow(long double __x, int __n) 
# 378
{ return __builtin_powil(__x, __n); } 
# 381
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393
using ::sin;
# 396
inline float sin(float __x) 
# 397
{ return __builtin_sinf(__x); } 
# 400
inline long double sin(long double __x) 
# 401
{ return __builtin_sinl(__x); } 
# 403
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409
using ::sinh;
# 412
inline float sinh(float __x) 
# 413
{ return __builtin_sinhf(__x); } 
# 416
inline long double sinh(long double __x) 
# 417
{ return __builtin_sinhl(__x); } 
# 419
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425
using ::sqrt;
# 428
inline float sqrt(float __x) 
# 429
{ return __builtin_sqrtf(__x); } 
# 432
inline long double sqrt(long double __x) 
# 433
{ return __builtin_sqrtl(__x); } 
# 435
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441
using ::tan;
# 444
inline float tan(float __x) 
# 445
{ return __builtin_tanf(__x); } 
# 448
inline long double tan(long double __x) 
# 449
{ return __builtin_tanl(__x); } 
# 451
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457
using ::tanh;
# 460
inline float tanh(float __x) 
# 461
{ return __builtin_tanhf(__x); } 
# 464
inline long double tanh(long double __x) 
# 465
{ return __builtin_tanhl(__x); } 
# 467
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) { 
# 494
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) { 
# 37
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) { 
# 51
using ::ptrdiff_t;
# 52
using ::size_t;
# 54
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) { 
# 102
using ::div_t;
# 103
using ::ldiv_t;
# 105
using ::abort;
# 106
using ::abs;
# 107
using ::atexit;
# 108
using ::atof;
# 109
using ::atoi;
# 110
using ::atol;
# 111
using ::bsearch;
# 112
using ::calloc;
# 113
using ::div;
# 114
using ::exit;
# 115
using ::free;
# 116
using ::getenv;
# 117
using ::labs;
# 118
using ::ldiv;
# 119
using ::malloc;
# 121
using ::mblen;
# 122
using ::mbstowcs;
# 123
using ::mbtowc;
# 125
using ::qsort;
# 126
using ::rand;
# 127
using ::realloc;
# 128
using ::srand;
# 129
using ::strtod;
# 130
using ::strtol;
# 131
using ::strtoul;
# 132
using ::system;
# 134
using ::wcstombs;
# 135
using ::wctomb;
# 139
inline long abs(long __i) { return labs(__i); } 
# 142
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 144
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 160
using ::lldiv_t;
# 166
using ::_Exit;
# 170
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); } 
# 173
using ::llabs;
# 176
inline lldiv_t div(long long __n, long long __d) 
# 177
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 179
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191
using ::strtoll;
# 192
using ::strtoull;
# 194
using ::strtof;
# 195
using ::strtold;
# 197
}
# 199
namespace std __attribute__((visibility("default"))) { 
# 202
using __gnu_cxx::lldiv_t;
# 204
using __gnu_cxx::_Exit;
# 205
using __gnu_cxx::abs;
# 207
using __gnu_cxx::llabs;
# 208
using __gnu_cxx::div;
# 209
using __gnu_cxx::lldiv;
# 211
using __gnu_cxx::atoll;
# 212
using __gnu_cxx::strtof;
# 213
using __gnu_cxx::strtoll;
# 214
using __gnu_cxx::strtoull;
# 215
using __gnu_cxx::strtold;
# 217
}
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
namespace __gnu_cxx { 
# 499
extern inline long long abs(long long) __attribute__((visibility("default"))); 
# 500
}
# 502
namespace std { 
# 504
template< class T> extern inline T __pow_helper(T, int); 
# 505
template< class T> extern inline T __cmath_power(T, unsigned); 
# 506
}
# 508
using std::abs;
# 509
using std::fabs;
# 510
using std::ceil;
# 511
using std::floor;
# 512
using std::sqrt;
# 513
using std::pow;
# 514
using std::log;
# 515
using std::log10;
# 516
using std::fmod;
# 517
using std::modf;
# 518
using std::exp;
# 519
using std::frexp;
# 520
using std::ldexp;
# 521
using std::asin;
# 522
using std::sin;
# 523
using std::sinh;
# 524
using std::acos;
# 525
using std::cos;
# 526
using std::cosh;
# 527
using std::atan;
# 528
using std::atan2;
# 529
using std::tan;
# 530
using std::tanh;
# 584 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
namespace std { 
# 587
extern inline long abs(long) __attribute__((visibility("default"))); 
# 588
extern inline float abs(float) __attribute__((visibility("default"))); 
# 589
extern inline double abs(double) __attribute__((visibility("default"))); 
# 590
extern inline float fabs(float) __attribute__((visibility("default"))); 
# 591
extern inline float ceil(float) __attribute__((visibility("default"))); 
# 592
extern inline float floor(float) __attribute__((visibility("default"))); 
# 593
extern inline float sqrt(float) __attribute__((visibility("default"))); 
# 594
extern inline float pow(float, float) __attribute__((visibility("default"))); 
# 595
extern inline float pow(float, int) __attribute__((visibility("default"))); 
# 596
extern inline double pow(double, int) __attribute__((visibility("default"))); 
# 597
extern inline float log(float) __attribute__((visibility("default"))); 
# 598
extern inline float log10(float) __attribute__((visibility("default"))); 
# 599
extern inline float fmod(float, float) __attribute__((visibility("default"))); 
# 600
extern inline float modf(float, float *) __attribute__((visibility("default"))); 
# 601
extern inline float exp(float) __attribute__((visibility("default"))); 
# 602
extern inline float frexp(float, int *) __attribute__((visibility("default"))); 
# 603
extern inline float ldexp(float, int) __attribute__((visibility("default"))); 
# 604
extern inline float asin(float) __attribute__((visibility("default"))); 
# 605
extern inline float sin(float) __attribute__((visibility("default"))); 
# 606
extern inline float sinh(float) __attribute__((visibility("default"))); 
# 607
extern inline float acos(float) __attribute__((visibility("default"))); 
# 608
extern inline float cos(float) __attribute__((visibility("default"))); 
# 609
extern inline float cosh(float) __attribute__((visibility("default"))); 
# 610
extern inline float atan(float) __attribute__((visibility("default"))); 
# 611
extern inline float atan2(float, float) __attribute__((visibility("default"))); 
# 612
extern inline float tan(float) __attribute__((visibility("default"))); 
# 613
extern inline float tanh(float) __attribute__((visibility("default"))); 
# 616
}
# 619
static inline float logb(float a) 
# 620
{ 
# 621
return logbf(a); 
# 622
} 
# 624
static inline int ilogb(float a) 
# 625
{ 
# 626
return ilogbf(a); 
# 627
} 
# 629
static inline float scalbn(float a, int b) 
# 630
{ 
# 631
return scalbnf(a, b); 
# 632
} 
# 634
static inline float scalbln(float a, long b) 
# 635
{ 
# 636
return scalblnf(a, b); 
# 637
} 
# 639
static inline float exp2(float a) 
# 640
{ 
# 641
return exp2f(a); 
# 642
} 
# 644
static inline float exp10(float a) 
# 645
{ 
# 646
return exp10f(a); 
# 647
} 
# 649
static inline float expm1(float a) 
# 650
{ 
# 651
return expm1f(a); 
# 652
} 
# 654
static inline float log2(float a) 
# 655
{ 
# 656
return log2f(a); 
# 657
} 
# 659
static inline float log1p(float a) 
# 660
{ 
# 661
return log1pf(a); 
# 662
} 
# 664
static inline float rsqrt(float a) 
# 665
{ 
# 666
return rsqrtf(a); 
# 667
} 
# 669
static inline float acosh(float a) 
# 670
{ 
# 671
return acoshf(a); 
# 672
} 
# 674
static inline float asinh(float a) 
# 675
{ 
# 676
return asinhf(a); 
# 677
} 
# 679
static inline float atanh(float a) 
# 680
{ 
# 681
return atanhf(a); 
# 682
} 
# 684
static inline float hypot(float a, float b) 
# 685
{ 
# 686
return hypotf(a, b); 
# 687
} 
# 689
static inline float cbrt(float a) 
# 690
{ 
# 691
return cbrtf(a); 
# 692
} 
# 694
static inline float rcbrt(float a) 
# 695
{ 
# 696
return rcbrtf(a); 
# 697
} 
# 699
static inline float sinpi(float a) 
# 700
{ 
# 701
return sinpif(a); 
# 702
} 
# 704
static inline void sincos(float a, float *sptr, float *cptr) 
# 705
{ 
# 706
sincosf(a, sptr, cptr); 
# 707
} 
# 709
static inline float erf(float a) 
# 710
{ 
# 711
return erff(a); 
# 712
} 
# 714
static inline float erfinv(float a) 
# 715
{ 
# 716
return erfinvf(a); 
# 717
} 
# 719
static inline float erfc(float a) 
# 720
{ 
# 721
return erfcf(a); 
# 722
} 
# 724
static inline float erfcinv(float a) 
# 725
{ 
# 726
return erfcinvf(a); 
# 727
} 
# 729
static inline float lgamma(float a) 
# 730
{ 
# 731
return lgammaf(a); 
# 732
} 
# 734
static inline float tgamma(float a) 
# 735
{ 
# 736
return tgammaf(a); 
# 737
} 
# 739
static inline float copysign(float a, float b) 
# 740
{ 
# 741
return copysignf(a, b); 
# 742
} 
# 744
static inline double copysign(double a, float b) 
# 745
{ 
# 746
return copysign(a, (double)b); 
# 747
} 
# 749
static inline float copysign(float a, double b) 
# 750
{ 
# 751
return copysignf(a, (float)b); 
# 752
} 
# 754
static inline float nextafter(float a, float b) 
# 755
{ 
# 756
return nextafterf(a, b); 
# 757
} 
# 759
static inline float remainder(float a, float b) 
# 760
{ 
# 761
return remainderf(a, b); 
# 762
} 
# 764
static inline float remquo(float a, float b, int *quo) 
# 765
{ 
# 766
return remquof(a, b, quo); 
# 767
} 
# 769
static inline float round(float a) 
# 770
{ 
# 771
return roundf(a); 
# 772
} 
# 774
static inline long lround(float a) 
# 775
{ 
# 776
return lroundf(a); 
# 777
} 
# 779
static inline long long llround(float a) 
# 780
{ 
# 781
return llroundf(a); 
# 782
} 
# 784
static inline float trunc(float a) 
# 785
{ 
# 786
return truncf(a); 
# 787
} 
# 789
static inline float rint(float a) 
# 790
{ 
# 791
return rintf(a); 
# 792
} 
# 794
static inline long lrint(float a) 
# 795
{ 
# 796
return lrintf(a); 
# 797
} 
# 799
static inline long long llrint(float a) 
# 800
{ 
# 801
return llrintf(a); 
# 802
} 
# 804
static inline float nearbyint(float a) 
# 805
{ 
# 806
return nearbyintf(a); 
# 807
} 
# 809
static inline float fdim(float a, float b) 
# 810
{ 
# 811
return fdimf(a, b); 
# 812
} 
# 814
static inline float fma(float a, float b, float c) 
# 815
{ 
# 816
return fmaf(a, b, c); 
# 817
} 
# 819
static inline float fmax(float a, float b) 
# 820
{ 
# 821
return fmaxf(a, b); 
# 822
} 
# 824
static inline float fmin(float a, float b) 
# 825
{ 
# 826
return fminf(a, b); 
# 827
} 
# 829
static inline unsigned min(unsigned a, unsigned b) 
# 830
{ 
# 831
return umin(a, b); 
# 832
} 
# 834
static inline unsigned min(int a, unsigned b) 
# 835
{ 
# 836
return umin((unsigned)a, b); 
# 837
} 
# 839
static inline unsigned min(unsigned a, int b) 
# 840
{ 
# 841
return umin(a, (unsigned)b); 
# 842
} 
# 844
static inline long long min(long long a, long long b) 
# 845
{ 
# 846
return llmin(a, b); 
# 847
} 
# 849
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 850
{ 
# 851
return ullmin(a, b); 
# 852
} 
# 854
static inline unsigned long long min(long long a, unsigned long long b) 
# 855
{ 
# 856
return ullmin((unsigned long long)a, b); 
# 857
} 
# 859
static inline unsigned long long min(unsigned long long a, long long b) 
# 860
{ 
# 861
return ullmin(a, (unsigned long long)b); 
# 862
} 
# 864
static inline float min(float a, float b) 
# 865
{ 
# 866
return fminf(a, b); 
# 867
} 
# 869
static inline double min(double a, double b) 
# 870
{ 
# 871
return fmin(a, b); 
# 872
} 
# 874
static inline double min(float a, double b) 
# 875
{ 
# 876
return fmin((double)a, b); 
# 877
} 
# 879
static inline double min(double a, float b) 
# 880
{ 
# 881
return fmin(a, (double)b); 
# 882
} 
# 884
static inline unsigned max(unsigned a, unsigned b) 
# 885
{ 
# 886
return umax(a, b); 
# 887
} 
# 889
static inline unsigned max(int a, unsigned b) 
# 890
{ 
# 891
return umax((unsigned)a, b); 
# 892
} 
# 894
static inline unsigned max(unsigned a, int b) 
# 895
{ 
# 896
return umax(a, (unsigned)b); 
# 897
} 
# 899
static inline long long max(long long a, long long b) 
# 900
{ 
# 901
return llmax(a, b); 
# 902
} 
# 904
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 905
{ 
# 906
return ullmax(a, b); 
# 907
} 
# 909
static inline unsigned long long max(long long a, unsigned long long b) 
# 910
{ 
# 911
return ullmax((unsigned long long)a, b); 
# 912
} 
# 914
static inline unsigned long long max(unsigned long long a, long long b) 
# 915
{ 
# 916
return ullmax(a, (unsigned long long)b); 
# 917
} 
# 919
static inline float max(float a, float b) 
# 920
{ 
# 921
return fmaxf(a, b); 
# 922
} 
# 924
static inline double max(double a, double b) 
# 925
{ 
# 926
return fmax(a, b); 
# 927
} 
# 929
static inline double max(float a, double b) 
# 930
{ 
# 931
return fmax((double)a, b); 
# 932
} 
# 934
static inline double max(double a, float b) 
# 935
{ 
# 936
return fmax(a, (double)b); 
# 937
} 
# 60 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 61
struct surface : public surfaceReference { 
# 63
surface() 
# 64
{ 
# 65
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 66
} 
# 68
surface(cudaChannelFormatDesc desc) 
# 69
{ 
# 70
(channelDesc) = desc; 
# 71
} 
# 72
}; 
# 75
template< int dim> 
# 76
struct surface< void, dim>  : public surfaceReference { 
# 78
surface() 
# 79
{ 
# 80
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 81
} 
# 82
}; 
# 60 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 61
struct texture : public textureReference { 
# 63
texture(int norm = 0, cudaTextureFilterMode 
# 64
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 65
aMode = cudaAddressModeClamp) 
# 66
{ 
# 67
(normalized) = norm; 
# 68
(filterMode) = fMode; 
# 69
((addressMode)[0]) = aMode; 
# 70
((addressMode)[1]) = aMode; 
# 71
((addressMode)[2]) = aMode; 
# 72
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 73
} 
# 75
texture(int norm, cudaTextureFilterMode 
# 76
fMode, cudaTextureAddressMode 
# 77
aMode, cudaChannelFormatDesc 
# 78
desc) 
# 79
{ 
# 80
(normalized) = norm; 
# 81
(filterMode) = fMode; 
# 82
((addressMode)[0]) = aMode; 
# 83
((addressMode)[1]) = aMode; 
# 84
((addressMode)[2]) = aMode; 
# 85
(channelDesc) = desc; 
# 86
} 
# 87
}; 
# 324 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 325
{int volatile ___ = 1;
# 327
exit(___);}
#if 0
# 325
{ 
# 326
return __mulhi(a, b); 
# 327
} 
#endif
# 329 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 330
{int volatile ___ = 1;
# 332
exit(___);}
#if 0
# 330
{ 
# 331
return __umulhi(a, b); 
# 332
} 
#endif
# 334 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 335
{int volatile ___ = 1;
# 337
exit(___);}
#if 0
# 335
{ 
# 336
return __umulhi((unsigned)a, b); 
# 337
} 
#endif
# 339 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 340
{int volatile ___ = 1;
# 342
exit(___);}
#if 0
# 340
{ 
# 341
return __umulhi(a, (unsigned)b); 
# 342
} 
#endif
# 344 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 345
{int volatile ___ = 1;
# 347
exit(___);}
#if 0
# 345
{ 
# 346
return __mul64hi(a, b); 
# 347
} 
#endif
# 349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 350
{int volatile ___ = 1;
# 352
exit(___);}
#if 0
# 350
{ 
# 351
return __umul64hi(a, b); 
# 352
} 
#endif
# 354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 355
{int volatile ___ = 1;
# 357
exit(___);}
#if 0
# 355
{ 
# 356
return __umul64hi((unsigned long long)a, b); 
# 357
} 
#endif
# 359 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 360
{int volatile ___ = 1;
# 362
exit(___);}
#if 0
# 360
{ 
# 361
return __umul64hi(a, (unsigned long long)b); 
# 362
} 
#endif
# 364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a) 
# 365
{int volatile ___ = 1;
# 367
exit(___);}
#if 0
# 365
{ 
# 366
return __float_as_int(a); 
# 367
} 
#endif
# 369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a) 
# 370
{int volatile ___ = 1;
# 372
exit(___);}
#if 0
# 370
{ 
# 371
return __int_as_float(a); 
# 372
} 
#endif
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a) 
# 375
{int volatile ___ = 1;
# 377
exit(___);}
#if 0
# 375
{ 
# 376
return __saturatef(a); 
# 377
} 
#endif
# 379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 380
{int volatile ___ = 1;
# 382
exit(___);}
#if 0
# 380
{ 
# 381
return __mul24(a, b); 
# 382
} 
#endif
# 384 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 385
{int volatile ___ = 1;
# 387
exit(___);}
#if 0
# 385
{ 
# 386
return __umul24(a, b); 
# 387
} 
#endif
# 389 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap() 
# 390
{int volatile ___ = 1;
# 392
exit(___);}
#if 0
# 390
{ 
# 391
__trap(); 
# 392
} 
#endif
# 394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c) 
# 395
{int volatile ___ = 1;
# 397
exit(___);}
#if 0
# 395
{ 
# 396
__brkpt(c); 
# 397
} 
#endif
# 399 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads() 
# 400
{int volatile ___ = 1;
# 402
exit(___);}
#if 0
# 400
{ 
# 401
__syncthreads(); 
# 402
} 
#endif
# 404 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e) 
# 405
{int volatile ___ = 1;
# 422
exit(___);}
#if 0
# 405
{ 
# 406
if (e == 0) { __prof_trigger(0); } else { 
# 407
if (e == 1) { __prof_trigger(1); } else { 
# 408
if (e == 2) { __prof_trigger(2); } else { 
# 409
if (e == 3) { __prof_trigger(3); } else { 
# 410
if (e == 4) { __prof_trigger(4); } else { 
# 411
if (e == 5) { __prof_trigger(5); } else { 
# 412
if (e == 6) { __prof_trigger(6); } else { 
# 413
if (e == 7) { __prof_trigger(7); } else { 
# 414
if (e == 8) { __prof_trigger(8); } else { 
# 415
if (e == 9) { __prof_trigger(9); } else { 
# 416
if (e == 10) { __prof_trigger(10); } else { 
# 417
if (e == 11) { __prof_trigger(11); } else { 
# 418
if (e == 12) { __prof_trigger(12); } else { 
# 419
if (e == 13) { __prof_trigger(13); } else { 
# 420
if (e == 14) { __prof_trigger(14); } else { 
# 421
if (e == 15) { __prof_trigger(15); }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  
# 422
} 
#endif
# 424 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true) 
# 425
{int volatile ___ = 1;
# 427
exit(___);}
#if 0
# 425
{ 
# 426
global ? __threadfence() : __threadfence_block(); 
# 427
} 
#endif
# 429 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero) 
# 430
{int volatile ___ = 1;
# 435
exit(___);}
#if 0
# 430
{ 
# 431
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 435
} 
#endif
# 437 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero) 
# 438
{int volatile ___ = 1;
# 443
exit(___);}
#if 0
# 438
{ 
# 439
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 443
} 
#endif
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest) 
# 446
{int volatile ___ = 1;
# 451
exit(___);}
#if 0
# 446
{ 
# 447
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 451
} 
#endif
# 453 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 454
{int volatile ___ = 1;
# 459
exit(___);}
#if 0
# 454
{ 
# 455
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 459
} 
#endif
# 102 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) 
# 103
{int volatile ___ = 1;
# 105
exit(___);}
#if 0
# 103
{ 
# 104
return __iAtomicAdd(address, val); 
# 105
} 
#endif
# 107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) 
# 108
{int volatile ___ = 1;
# 110
exit(___);}
#if 0
# 108
{ 
# 109
return __uAtomicAdd(address, val); 
# 110
} 
#endif
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) 
# 113
{int volatile ___ = 1;
# 115
exit(___);}
#if 0
# 113
{ 
# 114
return __iAtomicAdd(address, (unsigned)(-((int)val))); 
# 115
} 
#endif
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) 
# 118
{int volatile ___ = 1;
# 120
exit(___);}
#if 0
# 118
{ 
# 119
return __uAtomicAdd(address, (unsigned)(-((int)val))); 
# 120
} 
#endif
# 122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) 
# 123
{int volatile ___ = 1;
# 125
exit(___);}
#if 0
# 123
{ 
# 124
return __iAtomicExch(address, val); 
# 125
} 
#endif
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) 
# 128
{int volatile ___ = 1;
# 130
exit(___);}
#if 0
# 128
{ 
# 129
return __uAtomicExch(address, val); 
# 130
} 
#endif
# 132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) 
# 133
{int volatile ___ = 1;
# 135
exit(___);}
#if 0
# 133
{ 
# 134
return __fAtomicExch(address, val); 
# 135
} 
#endif
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) 
# 138
{int volatile ___ = 1;
# 140
exit(___);}
#if 0
# 138
{ 
# 139
return __iAtomicMin(address, val); 
# 140
} 
#endif
# 142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) 
# 143
{int volatile ___ = 1;
# 145
exit(___);}
#if 0
# 143
{ 
# 144
return __uAtomicMin(address, val); 
# 145
} 
#endif
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) 
# 148
{int volatile ___ = 1;
# 150
exit(___);}
#if 0
# 148
{ 
# 149
return __iAtomicMax(address, val); 
# 150
} 
#endif
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) 
# 153
{int volatile ___ = 1;
# 155
exit(___);}
#if 0
# 153
{ 
# 154
return __uAtomicMax(address, val); 
# 155
} 
#endif
# 157 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) 
# 158
{int volatile ___ = 1;
# 160
exit(___);}
#if 0
# 158
{ 
# 159
return __uAtomicInc(address, val); 
# 160
} 
#endif
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) 
# 163
{int volatile ___ = 1;
# 165
exit(___);}
#if 0
# 163
{ 
# 164
return __uAtomicDec(address, val); 
# 165
} 
#endif
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) 
# 168
{int volatile ___ = 1;
# 170
exit(___);}
#if 0
# 168
{ 
# 169
return __iAtomicAnd(address, val); 
# 170
} 
#endif
# 172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) 
# 173
{int volatile ___ = 1;
# 175
exit(___);}
#if 0
# 173
{ 
# 174
return __uAtomicAnd(address, val); 
# 175
} 
#endif
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) 
# 178
{int volatile ___ = 1;
# 180
exit(___);}
#if 0
# 178
{ 
# 179
return __iAtomicOr(address, val); 
# 180
} 
#endif
# 182 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) 
# 183
{int volatile ___ = 1;
# 185
exit(___);}
#if 0
# 183
{ 
# 184
return __uAtomicOr(address, val); 
# 185
} 
#endif
# 187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) 
# 188
{int volatile ___ = 1;
# 190
exit(___);}
#if 0
# 188
{ 
# 189
return __iAtomicXor(address, val); 
# 190
} 
#endif
# 192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) 
# 193
{int volatile ___ = 1;
# 195
exit(___);}
#if 0
# 193
{ 
# 194
return __uAtomicXor(address, val); 
# 195
} 
#endif
# 197 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) 
# 198
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 198
{ 
# 199
return __iAtomicCAS(address, compare, val); 
# 200
} 
#endif
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
# 203
{int volatile ___ = 1;
# 205
exit(___);}
#if 0
# 203
{ 
# 204
return __uAtomicCAS(address, compare, val); 
# 205
} 
#endif
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) 
# 76
{int volatile ___ = 1;
# 78
exit(___);}
#if 0
# 76
{ 
# 77
return __ullAtomicAdd(address, val); 
# 78
} 
#endif
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) 
# 81
{int volatile ___ = 1;
# 83
exit(___);}
#if 0
# 81
{ 
# 82
return __ullAtomicExch(address, val); 
# 83
} 
#endif
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) 
# 86
{int volatile ___ = 1;
# 88
exit(___);}
#if 0
# 86
{ 
# 87
return __ullAtomicCAS(address, compare, val); 
# 88
} 
#endif
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond) 
# 91
{int volatile ___ = 1;
# 93
exit(___);}
#if 0
# 91
{ 
# 92
return (bool)__any((int)cond); 
# 93
} 
#endif
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond) 
# 96
{int volatile ___ = 1;
# 98
exit(___);}
#if 0
# 96
{ 
# 97
return (bool)__all((int)cond); 
# 98
} 
#endif
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 171
{int volatile ___ = 1;
# 176
exit(___);}
#if 0
# 171
{ 
# 172
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 176
} 
#endif
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 179
{int volatile ___ = 1;
# 184
exit(___);}
#if 0
# 179
{ 
# 180
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 184
} 
#endif
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 187
{int volatile ___ = 1;
# 192
exit(___);}
#if 0
# 187
{ 
# 188
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 192
} 
#endif
# 194 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero) 
# 195
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 195
{ 
# 196
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 200
} 
#endif
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero) 
# 203
{int volatile ___ = 1;
# 208
exit(___);}
#if 0
# 203
{ 
# 204
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 208
} 
#endif
# 210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero) 
# 211
{int volatile ___ = 1;
# 216
exit(___);}
#if 0
# 211
{ 
# 212
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 216
} 
#endif
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero) 
# 219
{int volatile ___ = 1;
# 224
exit(___);}
#if 0
# 219
{ 
# 220
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 224
} 
#endif
# 226 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest) 
# 227
{int volatile ___ = 1;
# 232
exit(___);}
#if 0
# 227
{ 
# 228
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 232
} 
#endif
# 234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest) 
# 235
{int volatile ___ = 1;
# 240
exit(___);}
#if 0
# 235
{ 
# 236
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 240
} 
#endif
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest) 
# 243
{int volatile ___ = 1;
# 245
exit(___);}
#if 0
# 243
{ 
# 244
return (double)a; 
# 245
} 
#endif
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 248
{int volatile ___ = 1;
# 250
exit(___);}
#if 0
# 248
{ 
# 249
return (double)a; 
# 250
} 
#endif
# 252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest) 
# 253
{int volatile ___ = 1;
# 255
exit(___);}
#if 0
# 253
{ 
# 254
return (double)a; 
# 255
} 
#endif
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) 
# 67
{int volatile ___ = 1;
# 69
exit(___);}
#if 0
# 67
{ 
# 68
return __fAtomicAdd(address, val); 
# 69
} 
#endif
# 124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred) 
# 125
{int volatile ___ = 1;
# 127
exit(___);}
#if 0
# 125
{ 
# 126
return __ballot((int)pred); 
# 127
} 
#endif
# 129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) 
# 130
{int volatile ___ = 1;
# 132
exit(___);}
#if 0
# 130
{ 
# 131
return __syncthreads_count((int)pred); 
# 132
} 
#endif
# 134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) 
# 135
{int volatile ___ = 1;
# 137
exit(___);}
#if 0
# 135
{ 
# 136
return (bool)__syncthreads_and((int)pred); 
# 137
} 
#endif
# 139 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) 
# 140
{int volatile ___ = 1;
# 142
exit(___);}
#if 0
# 140
{ 
# 141
return (bool)__syncthreads_or((int)pred); 
# 142
} 
#endif
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 98
surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 99
{int volatile ___ = 1;
# 106
exit(___);}
#if 0
# 99
{ 
# 100
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf1Dreadc1(surf, x, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf1Dreads1(surf, x, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf1Dreadu1(surf, x, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap))) : ((void)0))))); 
# 106
} 
#endif
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 109
surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 110
{int volatile ___ = 1;
# 116
exit(___);}
#if 0
# 110
{ 
# 111
T tmp; 
# 113
surf1Dread(&tmp, surf, x, (int)sizeof(T), mode); 
# 115
return tmp; 
# 116
} 
#endif
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 119
surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;
# 122
exit(___);}
#if 0
# 120
{ 
# 121
(*res) = surf1Dread< T> (surf, x, mode); 
# 122
} 
#endif
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 126
{int volatile ___ = 1;
# 128
exit(___);}
#if 0
# 126
{ 
# 127
return (char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 128
} 
#endif
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 132
{int volatile ___ = 1;
# 134
exit(___);}
#if 0
# 132
{ 
# 133
return (signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 134
} 
#endif
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 138
{int volatile ___ = 1;
# 140
exit(___);}
#if 0
# 138
{ 
# 139
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x; 
# 140
} 
#endif
# 143 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 144
{int volatile ___ = 1;
# 146
exit(___);}
#if 0
# 144
{ 
# 145
return make_char1((signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x)); 
# 146
} 
#endif
# 149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 150
{int volatile ___ = 1;
# 152
exit(___);}
#if 0
# 150
{ 
# 151
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap); 
# 152
} 
#endif
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 156
{int volatile ___ = 1;
# 160
exit(___);}
#if 0
# 156
{ 
# 157
uchar2 tmp = __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 159
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 160
} 
#endif
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 164
{int volatile ___ = 1;
# 166
exit(___);}
#if 0
# 164
{ 
# 165
return __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 166
} 
#endif
# 169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 170
{int volatile ___ = 1;
# 174
exit(___);}
#if 0
# 170
{ 
# 171
uchar4 tmp = __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 173
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 174
} 
#endif
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 178
{int volatile ___ = 1;
# 180
exit(___);}
#if 0
# 178
{ 
# 179
return __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 180
} 
#endif
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 184
{int volatile ___ = 1;
# 186
exit(___);}
#if 0
# 184
{ 
# 185
return (short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x); 
# 186
} 
#endif
# 189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 190
{int volatile ___ = 1;
# 192
exit(___);}
#if 0
# 190
{ 
# 191
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap).x; 
# 192
} 
#endif
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 196
{int volatile ___ = 1;
# 198
exit(___);}
#if 0
# 196
{ 
# 197
return make_short1((signed short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x)); 
# 198
} 
#endif
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 202
{int volatile ___ = 1;
# 204
exit(___);}
#if 0
# 202
{ 
# 203
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap); 
# 204
} 
#endif
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 208
{int volatile ___ = 1;
# 212
exit(___);}
#if 0
# 208
{ 
# 209
ushort2 tmp = __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 211
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 212
} 
#endif
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 216
{int volatile ___ = 1;
# 218
exit(___);}
#if 0
# 216
{ 
# 217
return __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 218
} 
#endif
# 221 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 222
{int volatile ___ = 1;
# 226
exit(___);}
#if 0
# 222
{ 
# 223
ushort4 tmp = __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 225
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 226
} 
#endif
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 230
{int volatile ___ = 1;
# 232
exit(___);}
#if 0
# 230
{ 
# 231
return __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 232
} 
#endif
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 236
{int volatile ___ = 1;
# 238
exit(___);}
#if 0
# 236
{ 
# 237
return (int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
# 238
} 
#endif
# 241 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 242
{int volatile ___ = 1;
# 244
exit(___);}
#if 0
# 242
{ 
# 243
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x; 
# 244
} 
#endif
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 248
{int volatile ___ = 1;
# 250
exit(___);}
#if 0
# 248
{ 
# 249
return make_int1((signed int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 250
} 
#endif
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 254
{int volatile ___ = 1;
# 256
exit(___);}
#if 0
# 254
{ 
# 255
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap); 
# 256
} 
#endif
# 259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 260
{int volatile ___ = 1;
# 264
exit(___);}
#if 0
# 260
{ 
# 261
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 263
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 264
} 
#endif
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 268
{int volatile ___ = 1;
# 270
exit(___);}
#if 0
# 268
{ 
# 269
return __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 270
} 
#endif
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 274
{int volatile ___ = 1;
# 278
exit(___);}
#if 0
# 274
{ 
# 275
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 277
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 278
} 
#endif
# 281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 282
{int volatile ___ = 1;
# 284
exit(___);}
#if 0
# 282
{ 
# 283
return __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 284
} 
#endif
# 287 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 288
{int volatile ___ = 1;
# 290
exit(___);}
#if 0
# 288
{ 
# 289
return (long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x); 
# 290
} 
#endif
# 293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 294
{int volatile ___ = 1;
# 296
exit(___);}
#if 0
# 294
{ 
# 295
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x; 
# 296
} 
#endif
# 299 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 300
{int volatile ___ = 1;
# 302
exit(___);}
#if 0
# 300
{ 
# 301
return make_longlong1((long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x)); 
# 302
} 
#endif
# 305 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 306
{int volatile ___ = 1;
# 308
exit(___);}
#if 0
# 306
{ 
# 307
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap); 
# 308
} 
#endif
# 311 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 312
{int volatile ___ = 1;
# 316
exit(___);}
#if 0
# 312
{ 
# 313
ulonglong2 tmp = __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 315
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 316
} 
#endif
# 319 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 320
{int volatile ___ = 1;
# 322
exit(___);}
#if 0
# 320
{ 
# 321
return __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 322
} 
#endif
# 385 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 386
{int volatile ___ = 1;
# 388
exit(___);}
#if 0
# 386
{ 
# 387
return __int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 388
} 
#endif
# 391 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 392
{int volatile ___ = 1;
# 394
exit(___);}
#if 0
# 392
{ 
# 393
return make_float1(__int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x))); 
# 394
} 
#endif
# 397 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 398
{int volatile ___ = 1;
# 402
exit(___);}
#if 0
# 398
{ 
# 399
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 401
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 402
} 
#endif
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 406
{int volatile ___ = 1;
# 410
exit(___);}
#if 0
# 406
{ 
# 407
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 409
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 410
} 
#endif
# 457 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 458
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 459
{int volatile ___ = 1;
# 466
exit(___);}
#if 0
# 459
{ 
# 460
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap))) : ((void)0))))); 
# 466
} 
#endif
# 468 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 469
surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 470
{int volatile ___ = 1;
# 476
exit(___);}
#if 0
# 470
{ 
# 471
T tmp; 
# 473
surf2Dread(&tmp, surf, x, y, (int)sizeof(T), mode); 
# 475
return tmp; 
# 476
} 
#endif
# 478 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 479
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 480
{int volatile ___ = 1;
# 482
exit(___);}
#if 0
# 480
{ 
# 481
(*res) = surf2Dread< T> (surf, x, y, mode); 
# 482
} 
#endif
# 485 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 486
{int volatile ___ = 1;
# 488
exit(___);}
#if 0
# 486
{ 
# 487
return (char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 488
} 
#endif
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 492
{int volatile ___ = 1;
# 494
exit(___);}
#if 0
# 492
{ 
# 493
return (signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 494
} 
#endif
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 498
{int volatile ___ = 1;
# 500
exit(___);}
#if 0
# 498
{ 
# 499
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x; 
# 500
} 
#endif
# 503 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 504
{int volatile ___ = 1;
# 506
exit(___);}
#if 0
# 504
{ 
# 505
return make_char1((signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 506
} 
#endif
# 509 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 510
{int volatile ___ = 1;
# 512
exit(___);}
#if 0
# 510
{ 
# 511
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap); 
# 512
} 
#endif
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 516
{int volatile ___ = 1;
# 520
exit(___);}
#if 0
# 516
{ 
# 517
uchar2 tmp = __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 519
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 520
} 
#endif
# 523 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 524
{int volatile ___ = 1;
# 526
exit(___);}
#if 0
# 524
{ 
# 525
return __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 526
} 
#endif
# 529 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 530
{int volatile ___ = 1;
# 534
exit(___);}
#if 0
# 530
{ 
# 531
uchar4 tmp = __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 533
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 534
} 
#endif
# 537 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 538
{int volatile ___ = 1;
# 540
exit(___);}
#if 0
# 538
{ 
# 539
return __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 540
} 
#endif
# 543 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 544
{int volatile ___ = 1;
# 546
exit(___);}
#if 0
# 544
{ 
# 545
return (short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x); 
# 546
} 
#endif
# 549 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 550
{int volatile ___ = 1;
# 552
exit(___);}
#if 0
# 550
{ 
# 551
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x; 
# 552
} 
#endif
# 555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 556
{int volatile ___ = 1;
# 558
exit(___);}
#if 0
# 556
{ 
# 557
return make_short1((signed short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 558
} 
#endif
# 561 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 562
{int volatile ___ = 1;
# 564
exit(___);}
#if 0
# 562
{ 
# 563
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap); 
# 564
} 
#endif
# 567 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 568
{int volatile ___ = 1;
# 572
exit(___);}
#if 0
# 568
{ 
# 569
ushort2 tmp = __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 571
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 572
} 
#endif
# 575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 576
{int volatile ___ = 1;
# 578
exit(___);}
#if 0
# 576
{ 
# 577
return __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 578
} 
#endif
# 581 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 582
{int volatile ___ = 1;
# 586
exit(___);}
#if 0
# 582
{ 
# 583
ushort4 tmp = __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 585
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 586
} 
#endif
# 589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 590
{int volatile ___ = 1;
# 592
exit(___);}
#if 0
# 590
{ 
# 591
return __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 592
} 
#endif
# 595 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 596
{int volatile ___ = 1;
# 598
exit(___);}
#if 0
# 596
{ 
# 597
return (int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
# 598
} 
#endif
# 601 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 602
{int volatile ___ = 1;
# 604
exit(___);}
#if 0
# 602
{ 
# 603
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x; 
# 604
} 
#endif
# 607 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 608
{int volatile ___ = 1;
# 610
exit(___);}
#if 0
# 608
{ 
# 609
return make_int1((signed int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 610
} 
#endif
# 613 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 614
{int volatile ___ = 1;
# 616
exit(___);}
#if 0
# 614
{ 
# 615
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap); 
# 616
} 
#endif
# 619 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 620
{int volatile ___ = 1;
# 624
exit(___);}
#if 0
# 620
{ 
# 621
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 623
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 624
} 
#endif
# 627 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 628
{int volatile ___ = 1;
# 630
exit(___);}
#if 0
# 628
{ 
# 629
return __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 630
} 
#endif
# 633 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 634
{int volatile ___ = 1;
# 638
exit(___);}
#if 0
# 634
{ 
# 635
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 637
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 638
} 
#endif
# 641 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 642
{int volatile ___ = 1;
# 644
exit(___);}
#if 0
# 642
{ 
# 643
return __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 644
} 
#endif
# 647 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 648
{int volatile ___ = 1;
# 650
exit(___);}
#if 0
# 648
{ 
# 649
return (long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x); 
# 650
} 
#endif
# 653 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 654
{int volatile ___ = 1;
# 656
exit(___);}
#if 0
# 654
{ 
# 655
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x; 
# 656
} 
#endif
# 659 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 660
{int volatile ___ = 1;
# 662
exit(___);}
#if 0
# 660
{ 
# 661
return make_longlong1((long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 662
} 
#endif
# 665 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 666
{int volatile ___ = 1;
# 668
exit(___);}
#if 0
# 666
{ 
# 667
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap); 
# 668
} 
#endif
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 672
{int volatile ___ = 1;
# 676
exit(___);}
#if 0
# 672
{ 
# 673
ulonglong2 tmp = __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 675
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 676
} 
#endif
# 679 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 680
{int volatile ___ = 1;
# 682
exit(___);}
#if 0
# 680
{ 
# 681
return __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 682
} 
#endif
# 745 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 746
{int volatile ___ = 1;
# 748
exit(___);}
#if 0
# 746
{ 
# 747
return __int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 748
} 
#endif
# 751 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 752
{int volatile ___ = 1;
# 754
exit(___);}
#if 0
# 752
{ 
# 753
return make_float1(__int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x))); 
# 754
} 
#endif
# 757 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 758
{int volatile ___ = 1;
# 762
exit(___);}
#if 0
# 758
{ 
# 759
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 761
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 762
} 
#endif
# 765 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 766
{int volatile ___ = 1;
# 770
exit(___);}
#if 0
# 766
{ 
# 767
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 769
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 770
} 
#endif
# 817 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 818
surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 819
{int volatile ___ = 1;
# 837
exit(___);}
#if 0
# 819
{ 
# 820
union { 
# 821
T val; 
# 822
uchar1 c1; 
# 823
ushort1 s1; 
# 824
uint1 u1; 
# 825
uint2 u2; 
# 826
uint4 u4; 
# 827
} tmp; 
# 829
(tmp.val) = val; 
# 831
(s == 1) ? ((void)__surf1Dwritec1(tmp.c1, surf, x, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf1Dwrites1(tmp.s1, surf, x, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf1Dwriteu1(tmp.u1, surf, x, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf1Dwriteu2(tmp.u2, surf, x, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf1Dwriteu4(tmp.u4, surf, x, cudaBoundaryModeTrap)) : ((void)0))))); 
# 837
} 
#endif
# 839 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 840
surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 841
{int volatile ___ = 1;
# 843
exit(___);}
#if 0
# 841
{ ; 
# 842
surf1Dwrite(val, surf, x, (int)sizeof(T), mode); 
# 843
} 
#endif
# 846 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 847
{int volatile ___ = 1;
# 849
exit(___);}
#if 0
# 847
{ 
# 848
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 849
} 
#endif
# 851 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 852
{int volatile ___ = 1;
# 854
exit(___);}
#if 0
# 852
{ 
# 853
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 854
} 
#endif
# 856 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 857
{int volatile ___ = 1;
# 859
exit(___);}
#if 0
# 857
{ 
# 858
__surf1Dwritec1(make_uchar1(val), surf, x, cudaBoundaryModeTrap); 
# 859
} 
#endif
# 861 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 862
{int volatile ___ = 1;
# 864
exit(___);}
#if 0
# 862
{ 
# 863
__surf1Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 864
} 
#endif
# 866 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 867
{int volatile ___ = 1;
# 869
exit(___);}
#if 0
# 867
{ 
# 868
__surf1Dwritec1(val, surf, x, cudaBoundaryModeTrap); 
# 869
} 
#endif
# 871 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 872
{int volatile ___ = 1;
# 874
exit(___);}
#if 0
# 872
{ 
# 873
__surf1Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 874
} 
#endif
# 876 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 877
{int volatile ___ = 1;
# 879
exit(___);}
#if 0
# 877
{ 
# 878
__surf1Dwritec2(val, surf, x, cudaBoundaryModeTrap); 
# 879
} 
#endif
# 881 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 882
{int volatile ___ = 1;
# 884
exit(___);}
#if 0
# 882
{ 
# 883
__surf1Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 884
} 
#endif
# 886 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 887
{int volatile ___ = 1;
# 889
exit(___);}
#if 0
# 887
{ 
# 888
__surf1Dwritec4(val, surf, x, cudaBoundaryModeTrap); 
# 889
} 
#endif
# 891 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 892
{int volatile ___ = 1;
# 894
exit(___);}
#if 0
# 892
{ 
# 893
__surf1Dwrites1(make_ushort1((unsigned short)val), surf, x, cudaBoundaryModeTrap); 
# 894
} 
#endif
# 896 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 897
{int volatile ___ = 1;
# 899
exit(___);}
#if 0
# 897
{ 
# 898
__surf1Dwrites1(make_ushort1(val), surf, x, cudaBoundaryModeTrap); 
# 899
} 
#endif
# 901 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 902
{int volatile ___ = 1;
# 904
exit(___);}
#if 0
# 902
{ 
# 903
__surf1Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 904
} 
#endif
# 906 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 907
{int volatile ___ = 1;
# 909
exit(___);}
#if 0
# 907
{ 
# 908
__surf1Dwrites1(val, surf, x, cudaBoundaryModeTrap); 
# 909
} 
#endif
# 911 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 912
{int volatile ___ = 1;
# 914
exit(___);}
#if 0
# 912
{ 
# 913
__surf1Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 914
} 
#endif
# 916 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 917
{int volatile ___ = 1;
# 919
exit(___);}
#if 0
# 917
{ 
# 918
__surf1Dwrites2(val, surf, x, cudaBoundaryModeTrap); 
# 919
} 
#endif
# 921 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 922
{int volatile ___ = 1;
# 924
exit(___);}
#if 0
# 922
{ 
# 923
__surf1Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 924
} 
#endif
# 926 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 927
{int volatile ___ = 1;
# 929
exit(___);}
#if 0
# 927
{ 
# 928
__surf1Dwrites4(val, surf, x, cudaBoundaryModeTrap); 
# 929
} 
#endif
# 931 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 932
{int volatile ___ = 1;
# 934
exit(___);}
#if 0
# 932
{ 
# 933
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
# 934
} 
#endif
# 936 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 937
{int volatile ___ = 1;
# 939
exit(___);}
#if 0
# 937
{ 
# 938
__surf1Dwriteu1(make_uint1(val), surf, x, cudaBoundaryModeTrap); 
# 939
} 
#endif
# 941 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 942
{int volatile ___ = 1;
# 944
exit(___);}
#if 0
# 942
{ 
# 943
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 944
} 
#endif
# 946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 947
{int volatile ___ = 1;
# 949
exit(___);}
#if 0
# 947
{ 
# 948
__surf1Dwriteu1(val, surf, x, cudaBoundaryModeTrap); 
# 949
} 
#endif
# 951 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 952
{int volatile ___ = 1;
# 954
exit(___);}
#if 0
# 952
{ 
# 953
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 954
} 
#endif
# 956 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 957
{int volatile ___ = 1;
# 959
exit(___);}
#if 0
# 957
{ 
# 958
__surf1Dwriteu2(val, surf, x, cudaBoundaryModeTrap); 
# 959
} 
#endif
# 961 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 962
{int volatile ___ = 1;
# 964
exit(___);}
#if 0
# 962
{ 
# 963
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 964
} 
#endif
# 966 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 967
{int volatile ___ = 1;
# 969
exit(___);}
#if 0
# 967
{ 
# 968
__surf1Dwriteu4(val, surf, x, cudaBoundaryModeTrap); 
# 969
} 
#endif
# 971 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 972
{int volatile ___ = 1;
# 974
exit(___);}
#if 0
# 972
{ 
# 973
__surf1Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, cudaBoundaryModeTrap); 
# 974
} 
#endif
# 976 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 977
{int volatile ___ = 1;
# 979
exit(___);}
#if 0
# 977
{ 
# 978
__surf1Dwritel1(make_ulonglong1(val), surf, x, cudaBoundaryModeTrap); 
# 979
} 
#endif
# 981 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 982
{int volatile ___ = 1;
# 984
exit(___);}
#if 0
# 982
{ 
# 983
__surf1Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 984
} 
#endif
# 986 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 987
{int volatile ___ = 1;
# 989
exit(___);}
#if 0
# 987
{ 
# 988
__surf1Dwritel1(val, surf, x, cudaBoundaryModeTrap); 
# 989
} 
#endif
# 991 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 992
{int volatile ___ = 1;
# 994
exit(___);}
#if 0
# 992
{ 
# 993
__surf1Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 994
} 
#endif
# 996 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 997
{int volatile ___ = 1;
# 999
exit(___);}
#if 0
# 997
{ 
# 998
__surf1Dwritel2(val, surf, x, cudaBoundaryModeTrap); 
# 999
} 
#endif
# 1045 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1046
{int volatile ___ = 1;
# 1048
exit(___);}
#if 0
# 1046
{ 
# 1047
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, cudaBoundaryModeTrap); 
# 1048
} 
#endif
# 1050 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1051
{int volatile ___ = 1;
# 1053
exit(___);}
#if 0
# 1051
{ 
# 1052
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, cudaBoundaryModeTrap); 
# 1053
} 
#endif
# 1055 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1056
{int volatile ___ = 1;
# 1058
exit(___);}
#if 0
# 1056
{ 
# 1057
__surf1Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, cudaBoundaryModeTrap); 
# 1058
} 
#endif
# 1060 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1061
{int volatile ___ = 1;
# 1063
exit(___);}
#if 0
# 1061
{ 
# 1062
__surf1Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, cudaBoundaryModeTrap); 
# 1063
} 
#endif
# 1110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1111
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1112
{int volatile ___ = 1;
# 1130
exit(___);}
#if 0
# 1112
{ 
# 1113
union { 
# 1114
T val; 
# 1115
uchar1 c1; 
# 1116
ushort1 s1; 
# 1117
uint1 u1; 
# 1118
uint2 u2; 
# 1119
uint4 u4; 
# 1120
} tmp; 
# 1122
(tmp.val) = val; 
# 1124
(s == 1) ? ((void)__surf2Dwritec1(tmp.c1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf2Dwrites1(tmp.s1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf2Dwriteu1(tmp.u1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf2Dwriteu2(tmp.u2, surf, x, y, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf2Dwriteu4(tmp.u4, surf, x, y, cudaBoundaryModeTrap)) : ((void)0))))); 
# 1130
} 
#endif
# 1132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1133
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1134
{int volatile ___ = 1;
# 1136
exit(___);}
#if 0
# 1134
{ ; 
# 1135
surf2Dwrite(val, surf, x, y, (int)sizeof(T), mode); 
# 1136
} 
#endif
# 1139 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1140
{int volatile ___ = 1;
# 1142
exit(___);}
#if 0
# 1140
{ 
# 1141
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 1142
} 
#endif
# 1144 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1145
{int volatile ___ = 1;
# 1147
exit(___);}
#if 0
# 1145
{ 
# 1146
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 1147
} 
#endif
# 1149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1150
{int volatile ___ = 1;
# 1152
exit(___);}
#if 0
# 1150
{ 
# 1151
__surf2Dwritec1(make_uchar1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1152
} 
#endif
# 1154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1155
{int volatile ___ = 1;
# 1157
exit(___);}
#if 0
# 1155
{ 
# 1156
__surf2Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1157
} 
#endif
# 1159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1160
{int volatile ___ = 1;
# 1162
exit(___);}
#if 0
# 1160
{ 
# 1161
__surf2Dwritec1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1162
} 
#endif
# 1164 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1165
{int volatile ___ = 1;
# 1167
exit(___);}
#if 0
# 1165
{ 
# 1166
__surf2Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1167
} 
#endif
# 1169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1170
{int volatile ___ = 1;
# 1172
exit(___);}
#if 0
# 1170
{ 
# 1171
__surf2Dwritec2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1172
} 
#endif
# 1174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1175
{int volatile ___ = 1;
# 1177
exit(___);}
#if 0
# 1175
{ 
# 1176
__surf2Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1177
} 
#endif
# 1179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1180
{int volatile ___ = 1;
# 1182
exit(___);}
#if 0
# 1180
{ 
# 1181
__surf2Dwritec4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1182
} 
#endif
# 1184 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1185
{int volatile ___ = 1;
# 1187
exit(___);}
#if 0
# 1185
{ 
# 1186
__surf2Dwrites1(make_ushort1((unsigned short)val), surf, x, y, cudaBoundaryModeTrap); 
# 1187
} 
#endif
# 1189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1190
{int volatile ___ = 1;
# 1192
exit(___);}
#if 0
# 1190
{ 
# 1191
__surf2Dwrites1(make_ushort1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1192
} 
#endif
# 1194 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1195
{int volatile ___ = 1;
# 1197
exit(___);}
#if 0
# 1195
{ 
# 1196
__surf2Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1197
} 
#endif
# 1199 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1200
{int volatile ___ = 1;
# 1202
exit(___);}
#if 0
# 1200
{ 
# 1201
__surf2Dwrites1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1202
} 
#endif
# 1204 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1205
{int volatile ___ = 1;
# 1207
exit(___);}
#if 0
# 1205
{ 
# 1206
__surf2Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1207
} 
#endif
# 1209 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1210
{int volatile ___ = 1;
# 1212
exit(___);}
#if 0
# 1210
{ 
# 1211
__surf2Dwrites2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1212
} 
#endif
# 1214 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1215
{int volatile ___ = 1;
# 1217
exit(___);}
#if 0
# 1215
{ 
# 1216
__surf2Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1217
} 
#endif
# 1219 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1220
{int volatile ___ = 1;
# 1222
exit(___);}
#if 0
# 1220
{ 
# 1221
__surf2Dwrites4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1222
} 
#endif
# 1224 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1225
{int volatile ___ = 1;
# 1227
exit(___);}
#if 0
# 1225
{ 
# 1226
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
# 1227
} 
#endif
# 1229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1230
{int volatile ___ = 1;
# 1232
exit(___);}
#if 0
# 1230
{ 
# 1231
__surf2Dwriteu1(make_uint1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1232
} 
#endif
# 1234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1235
{int volatile ___ = 1;
# 1237
exit(___);}
#if 0
# 1235
{ 
# 1236
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1237
} 
#endif
# 1239 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1240
{int volatile ___ = 1;
# 1242
exit(___);}
#if 0
# 1240
{ 
# 1241
__surf2Dwriteu1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1242
} 
#endif
# 1244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1245
{int volatile ___ = 1;
# 1247
exit(___);}
#if 0
# 1245
{ 
# 1246
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1247
} 
#endif
# 1249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1250
{int volatile ___ = 1;
# 1252
exit(___);}
#if 0
# 1250
{ 
# 1251
__surf2Dwriteu2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1252
} 
#endif
# 1254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1255
{int volatile ___ = 1;
# 1257
exit(___);}
#if 0
# 1255
{ 
# 1256
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1257
} 
#endif
# 1259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1260
{int volatile ___ = 1;
# 1262
exit(___);}
#if 0
# 1260
{ 
# 1261
__surf2Dwriteu4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1262
} 
#endif
# 1264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1265
{int volatile ___ = 1;
# 1267
exit(___);}
#if 0
# 1265
{ 
# 1266
__surf2Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, cudaBoundaryModeTrap); 
# 1267
} 
#endif
# 1269 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1270
{int volatile ___ = 1;
# 1272
exit(___);}
#if 0
# 1270
{ 
# 1271
__surf2Dwritel1(make_ulonglong1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1272
} 
#endif
# 1274 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1275
{int volatile ___ = 1;
# 1277
exit(___);}
#if 0
# 1275
{ 
# 1276
__surf2Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1277
} 
#endif
# 1279 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1280
{int volatile ___ = 1;
# 1282
exit(___);}
#if 0
# 1280
{ 
# 1281
__surf2Dwritel1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1282
} 
#endif
# 1284 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1285
{int volatile ___ = 1;
# 1287
exit(___);}
#if 0
# 1285
{ 
# 1286
__surf2Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1287
} 
#endif
# 1289 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1290
{int volatile ___ = 1;
# 1292
exit(___);}
#if 0
# 1290
{ 
# 1291
__surf2Dwritel2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1292
} 
#endif
# 1338 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1339
{int volatile ___ = 1;
# 1341
exit(___);}
#if 0
# 1339
{ 
# 1340
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, cudaBoundaryModeTrap); 
# 1341
} 
#endif
# 1343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1344
{int volatile ___ = 1;
# 1346
exit(___);}
#if 0
# 1344
{ 
# 1345
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1346
} 
#endif
# 1348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1349
{int volatile ___ = 1;
# 1351
exit(___);}
#if 0
# 1349
{ 
# 1350
__surf2Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, cudaBoundaryModeTrap); 
# 1351
} 
#endif
# 1353 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1354
{int volatile ___ = 1;
# 1356
exit(___);}
#if 0
# 1354
{ 
# 1355
__surf2Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1356
} 
#endif
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4); 
# 63
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4); 
# 65
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4); 
# 68
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 70
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 72
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 80
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType>  t, int x) 
# 81
{int volatile ___ = 1;
# 89
exit(___);}
#if 0
# 81
{ 
# 85
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 88
return (char)(v.x); 
# 89
} 
#endif
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType>  t, int x) 
# 92
{int volatile ___ = 1;
# 96
exit(___);}
#if 0
# 92
{ 
# 93
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 95
return (signed char)(v.x); 
# 96
} 
#endif
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType>  t, int x) 
# 99
{int volatile ___ = 1;
# 103
exit(___);}
#if 0
# 99
{ 
# 100
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 102
return (unsigned char)(v.x); 
# 103
} 
#endif
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType>  t, int x) 
# 106
{int volatile ___ = 1;
# 110
exit(___);}
#if 0
# 106
{ 
# 107
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 109
return make_char1(v.x); 
# 110
} 
#endif
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType>  t, int x) 
# 113
{int volatile ___ = 1;
# 117
exit(___);}
#if 0
# 113
{ 
# 114
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 116
return make_uchar1(v.x); 
# 117
} 
#endif
# 119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType>  t, int x) 
# 120
{int volatile ___ = 1;
# 124
exit(___);}
#if 0
# 120
{ 
# 121
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 123
return make_char2(v.x, v.y); 
# 124
} 
#endif
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType>  t, int x) 
# 127
{int volatile ___ = 1;
# 131
exit(___);}
#if 0
# 127
{ 
# 128
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 130
return make_uchar2(v.x, v.y); 
# 131
} 
#endif
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType>  t, int x) 
# 134
{int volatile ___ = 1;
# 138
exit(___);}
#if 0
# 134
{ 
# 135
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 137
return make_char4(v.x, v.y, v.z, v.w); 
# 138
} 
#endif
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType>  t, int x) 
# 141
{int volatile ___ = 1;
# 145
exit(___);}
#if 0
# 141
{ 
# 142
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 144
return make_uchar4(v.x, v.y, v.z, v.w); 
# 145
} 
#endif
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType>  t, int x) 
# 154
{int volatile ___ = 1;
# 158
exit(___);}
#if 0
# 154
{ 
# 155
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 157
return (short)(v.x); 
# 158
} 
#endif
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType>  t, int x) 
# 161
{int volatile ___ = 1;
# 165
exit(___);}
#if 0
# 161
{ 
# 162
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 164
return (unsigned short)(v.x); 
# 165
} 
#endif
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType>  t, int x) 
# 168
{int volatile ___ = 1;
# 172
exit(___);}
#if 0
# 168
{ 
# 169
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 171
return make_short1(v.x); 
# 172
} 
#endif
# 174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType>  t, int x) 
# 175
{int volatile ___ = 1;
# 179
exit(___);}
#if 0
# 175
{ 
# 176
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 178
return make_ushort1(v.x); 
# 179
} 
#endif
# 181 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType>  t, int x) 
# 182
{int volatile ___ = 1;
# 186
exit(___);}
#if 0
# 182
{ 
# 183
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 185
return make_short2(v.x, v.y); 
# 186
} 
#endif
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType>  t, int x) 
# 189
{int volatile ___ = 1;
# 193
exit(___);}
#if 0
# 189
{ 
# 190
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 192
return make_ushort2(v.x, v.y); 
# 193
} 
#endif
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType>  t, int x) 
# 196
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 196
{ 
# 197
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 199
return make_short4(v.x, v.y, v.z, v.w); 
# 200
} 
#endif
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType>  t, int x) 
# 203
{int volatile ___ = 1;
# 207
exit(___);}
#if 0
# 203
{ 
# 204
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 206
return make_ushort4(v.x, v.y, v.z, v.w); 
# 207
} 
#endif
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType>  t, int x) 
# 216
{int volatile ___ = 1;
# 220
exit(___);}
#if 0
# 216
{ 
# 217
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 219
return (int)(v.x); 
# 220
} 
#endif
# 222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType>  t, int x) 
# 223
{int volatile ___ = 1;
# 227
exit(___);}
#if 0
# 223
{ 
# 224
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 226
return (unsigned)(v.x); 
# 227
} 
#endif
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType>  t, int x) 
# 230
{int volatile ___ = 1;
# 234
exit(___);}
#if 0
# 230
{ 
# 231
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 233
return make_int1(v.x); 
# 234
} 
#endif
# 236 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType>  t, int x) 
# 237
{int volatile ___ = 1;
# 241
exit(___);}
#if 0
# 237
{ 
# 238
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 240
return make_uint1(v.x); 
# 241
} 
#endif
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType>  t, int x) 
# 244
{int volatile ___ = 1;
# 248
exit(___);}
#if 0
# 244
{ 
# 245
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 247
return make_int2(v.x, v.y); 
# 248
} 
#endif
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType>  t, int x) 
# 251
{int volatile ___ = 1;
# 255
exit(___);}
#if 0
# 251
{ 
# 252
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 254
return make_uint2(v.x, v.y); 
# 255
} 
#endif
# 257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType>  t, int x) 
# 258
{int volatile ___ = 1;
# 262
exit(___);}
#if 0
# 258
{ 
# 259
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 261
return make_int4(v.x, v.y, v.z, v.w); 
# 262
} 
#endif
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType>  t, int x) 
# 265
{int volatile ___ = 1;
# 269
exit(___);}
#if 0
# 265
{ 
# 266
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 268
return make_uint4(v.x, v.y, v.z, v.w); 
# 269
} 
#endif
# 343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType>  t, int x) 
# 344
{int volatile ___ = 1;
# 348
exit(___);}
#if 0
# 344
{ 
# 345
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 347
return v.x; 
# 348
} 
#endif
# 350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType>  t, int x) 
# 351
{int volatile ___ = 1;
# 355
exit(___);}
#if 0
# 351
{ 
# 352
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 354
return make_float1(v.x); 
# 355
} 
#endif
# 357 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType>  t, int x) 
# 358
{int volatile ___ = 1;
# 362
exit(___);}
#if 0
# 358
{ 
# 359
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 361
return make_float2(v.x, v.y); 
# 362
} 
#endif
# 364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType>  t, int x) 
# 365
{int volatile ___ = 1;
# 369
exit(___);}
#if 0
# 365
{ 
# 366
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 368
return make_float4(v.x, v.y, v.z, v.w); 
# 369
} 
#endif
# 377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 378
{int volatile ___ = 1;
# 387
exit(___);}
#if 0
# 378
{ 
# 382
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 384
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 386
return w.x; 
# 387
} 
#endif
# 389 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 390
{int volatile ___ = 1;
# 395
exit(___);}
#if 0
# 390
{ 
# 391
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 392
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 394
return w.x; 
# 395
} 
#endif
# 397 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 398
{int volatile ___ = 1;
# 403
exit(___);}
#if 0
# 398
{ 
# 399
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 400
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 402
return w.x; 
# 403
} 
#endif
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 406
{int volatile ___ = 1;
# 411
exit(___);}
#if 0
# 406
{ 
# 407
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 408
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 410
return make_float1(w.x); 
# 411
} 
#endif
# 413 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 414
{int volatile ___ = 1;
# 419
exit(___);}
#if 0
# 414
{ 
# 415
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 416
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 418
return make_float1(w.x); 
# 419
} 
#endif
# 421 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 422
{int volatile ___ = 1;
# 427
exit(___);}
#if 0
# 422
{ 
# 423
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 424
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 426
return make_float2(w.x, w.y); 
# 427
} 
#endif
# 429 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 430
{int volatile ___ = 1;
# 435
exit(___);}
#if 0
# 430
{ 
# 431
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 432
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 434
return make_float2(w.x, w.y); 
# 435
} 
#endif
# 437 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 438
{int volatile ___ = 1;
# 443
exit(___);}
#if 0
# 438
{ 
# 439
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 440
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 442
return make_float4(w.x, w.y, w.z, w.w); 
# 443
} 
#endif
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 446
{int volatile ___ = 1;
# 451
exit(___);}
#if 0
# 446
{ 
# 447
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 448
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 450
return make_float4(w.x, w.y, w.z, w.w); 
# 451
} 
#endif
# 459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 460
{int volatile ___ = 1;
# 465
exit(___);}
#if 0
# 460
{ 
# 461
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 462
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 464
return w.x; 
# 465
} 
#endif
# 467 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 468
{int volatile ___ = 1;
# 473
exit(___);}
#if 0
# 468
{ 
# 469
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 470
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 472
return w.x; 
# 473
} 
#endif
# 475 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 476
{int volatile ___ = 1;
# 481
exit(___);}
#if 0
# 476
{ 
# 477
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 478
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 480
return make_float1(w.x); 
# 481
} 
#endif
# 483 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 484
{int volatile ___ = 1;
# 489
exit(___);}
#if 0
# 484
{ 
# 485
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 486
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 488
return make_float1(w.x); 
# 489
} 
#endif
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 492
{int volatile ___ = 1;
# 497
exit(___);}
#if 0
# 492
{ 
# 493
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 494
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 496
return make_float2(w.x, w.y); 
# 497
} 
#endif
# 499 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 500
{int volatile ___ = 1;
# 505
exit(___);}
#if 0
# 500
{ 
# 501
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 502
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 504
return make_float2(w.x, w.y); 
# 505
} 
#endif
# 507 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 508
{int volatile ___ = 1;
# 513
exit(___);}
#if 0
# 508
{ 
# 509
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 510
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 512
return make_float4(w.x, w.y, w.z, w.w); 
# 513
} 
#endif
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 516
{int volatile ___ = 1;
# 521
exit(___);}
#if 0
# 516
{ 
# 517
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 518
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 520
return make_float4(w.x, w.y, w.z, w.w); 
# 521
} 
#endif
# 529 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType>  t, float x) 
# 530
{int volatile ___ = 1;
# 538
exit(___);}
#if 0
# 530
{ 
# 534
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 537
return (char)(v.x); 
# 538
} 
#endif
# 540 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType>  t, float x) 
# 541
{int volatile ___ = 1;
# 545
exit(___);}
#if 0
# 541
{ 
# 542
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 544
return (signed char)(v.x); 
# 545
} 
#endif
# 547 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType>  t, float x) 
# 548
{int volatile ___ = 1;
# 552
exit(___);}
#if 0
# 548
{ 
# 549
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 551
return (unsigned char)(v.x); 
# 552
} 
#endif
# 554 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType>  t, float x) 
# 555
{int volatile ___ = 1;
# 559
exit(___);}
#if 0
# 555
{ 
# 556
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 558
return make_char1(v.x); 
# 559
} 
#endif
# 561 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType>  t, float x) 
# 562
{int volatile ___ = 1;
# 566
exit(___);}
#if 0
# 562
{ 
# 563
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 565
return make_uchar1(v.x); 
# 566
} 
#endif
# 568 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType>  t, float x) 
# 569
{int volatile ___ = 1;
# 573
exit(___);}
#if 0
# 569
{ 
# 570
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 572
return make_char2(v.x, v.y); 
# 573
} 
#endif
# 575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType>  t, float x) 
# 576
{int volatile ___ = 1;
# 580
exit(___);}
#if 0
# 576
{ 
# 577
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 579
return make_uchar2(v.x, v.y); 
# 580
} 
#endif
# 582 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType>  t, float x) 
# 583
{int volatile ___ = 1;
# 587
exit(___);}
#if 0
# 583
{ 
# 584
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 586
return make_char4(v.x, v.y, v.z, v.w); 
# 587
} 
#endif
# 589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType>  t, float x) 
# 590
{int volatile ___ = 1;
# 594
exit(___);}
#if 0
# 590
{ 
# 591
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 593
return make_uchar4(v.x, v.y, v.z, v.w); 
# 594
} 
#endif
# 602 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType>  t, float x) 
# 603
{int volatile ___ = 1;
# 607
exit(___);}
#if 0
# 603
{ 
# 604
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 606
return (short)(v.x); 
# 607
} 
#endif
# 609 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType>  t, float x) 
# 610
{int volatile ___ = 1;
# 614
exit(___);}
#if 0
# 610
{ 
# 611
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 613
return (unsigned short)(v.x); 
# 614
} 
#endif
# 616 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType>  t, float x) 
# 617
{int volatile ___ = 1;
# 621
exit(___);}
#if 0
# 617
{ 
# 618
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 620
return make_short1(v.x); 
# 621
} 
#endif
# 623 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType>  t, float x) 
# 624
{int volatile ___ = 1;
# 628
exit(___);}
#if 0
# 624
{ 
# 625
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 627
return make_ushort1(v.x); 
# 628
} 
#endif
# 630 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType>  t, float x) 
# 631
{int volatile ___ = 1;
# 635
exit(___);}
#if 0
# 631
{ 
# 632
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 634
return make_short2(v.x, v.y); 
# 635
} 
#endif
# 637 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType>  t, float x) 
# 638
{int volatile ___ = 1;
# 642
exit(___);}
#if 0
# 638
{ 
# 639
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 641
return make_ushort2(v.x, v.y); 
# 642
} 
#endif
# 644 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType>  t, float x) 
# 645
{int volatile ___ = 1;
# 649
exit(___);}
#if 0
# 645
{ 
# 646
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 648
return make_short4(v.x, v.y, v.z, v.w); 
# 649
} 
#endif
# 651 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType>  t, float x) 
# 652
{int volatile ___ = 1;
# 656
exit(___);}
#if 0
# 652
{ 
# 653
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 655
return make_ushort4(v.x, v.y, v.z, v.w); 
# 656
} 
#endif
# 664 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType>  t, float x) 
# 665
{int volatile ___ = 1;
# 669
exit(___);}
#if 0
# 665
{ 
# 666
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 668
return (int)(v.x); 
# 669
} 
#endif
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType>  t, float x) 
# 672
{int volatile ___ = 1;
# 676
exit(___);}
#if 0
# 672
{ 
# 673
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 675
return (unsigned)(v.x); 
# 676
} 
#endif
# 678 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType>  t, float x) 
# 679
{int volatile ___ = 1;
# 683
exit(___);}
#if 0
# 679
{ 
# 680
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 682
return make_int1(v.x); 
# 683
} 
#endif
# 685 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType>  t, float x) 
# 686
{int volatile ___ = 1;
# 690
exit(___);}
#if 0
# 686
{ 
# 687
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 689
return make_uint1(v.x); 
# 690
} 
#endif
# 692 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType>  t, float x) 
# 693
{int volatile ___ = 1;
# 697
exit(___);}
#if 0
# 693
{ 
# 694
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 696
return make_int2(v.x, v.y); 
# 697
} 
#endif
# 699 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType>  t, float x) 
# 700
{int volatile ___ = 1;
# 704
exit(___);}
#if 0
# 700
{ 
# 701
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 703
return make_uint2(v.x, v.y); 
# 704
} 
#endif
# 706 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType>  t, float x) 
# 707
{int volatile ___ = 1;
# 711
exit(___);}
#if 0
# 707
{ 
# 708
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 710
return make_int4(v.x, v.y, v.z, v.w); 
# 711
} 
#endif
# 713 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType>  t, float x) 
# 714
{int volatile ___ = 1;
# 718
exit(___);}
#if 0
# 714
{ 
# 715
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 717
return make_uint4(v.x, v.y, v.z, v.w); 
# 718
} 
#endif
# 798 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType>  t, float x) 
# 799
{int volatile ___ = 1;
# 803
exit(___);}
#if 0
# 799
{ 
# 800
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 802
return v.x; 
# 803
} 
#endif
# 805 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType>  t, float x) 
# 806
{int volatile ___ = 1;
# 810
exit(___);}
#if 0
# 806
{ 
# 807
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 809
return make_float1(v.x); 
# 810
} 
#endif
# 812 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType>  t, float x) 
# 813
{int volatile ___ = 1;
# 817
exit(___);}
#if 0
# 813
{ 
# 814
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 816
return make_float2(v.x, v.y); 
# 817
} 
#endif
# 819 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType>  t, float x) 
# 820
{int volatile ___ = 1;
# 824
exit(___);}
#if 0
# 820
{ 
# 821
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 823
return make_float4(v.x, v.y, v.z, v.w); 
# 824
} 
#endif
# 832 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 833
{int volatile ___ = 1;
# 842
exit(___);}
#if 0
# 833
{ 
# 837
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 841
return w.x; 
# 842
} 
#endif
# 844 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 845
{int volatile ___ = 1;
# 850
exit(___);}
#if 0
# 845
{ 
# 846
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 849
return w.x; 
# 850
} 
#endif
# 852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 853
{int volatile ___ = 1;
# 858
exit(___);}
#if 0
# 853
{ 
# 854
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 857
return w.x; 
# 858
} 
#endif
# 860 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 861
{int volatile ___ = 1;
# 866
exit(___);}
#if 0
# 861
{ 
# 862
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 865
return make_float1(w.x); 
# 866
} 
#endif
# 868 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 869
{int volatile ___ = 1;
# 874
exit(___);}
#if 0
# 869
{ 
# 870
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 873
return make_float1(w.x); 
# 874
} 
#endif
# 876 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 877
{int volatile ___ = 1;
# 882
exit(___);}
#if 0
# 877
{ 
# 878
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 879
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 881
return make_float2(w.x, w.y); 
# 882
} 
#endif
# 884 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 885
{int volatile ___ = 1;
# 890
exit(___);}
#if 0
# 885
{ 
# 886
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 887
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 889
return make_float2(w.x, w.y); 
# 890
} 
#endif
# 892 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 893
{int volatile ___ = 1;
# 898
exit(___);}
#if 0
# 893
{ 
# 894
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 895
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 897
return make_float4(w.x, w.y, w.z, w.w); 
# 898
} 
#endif
# 900 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 901
{int volatile ___ = 1;
# 906
exit(___);}
#if 0
# 901
{ 
# 902
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 903
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 905
return make_float4(w.x, w.y, w.z, w.w); 
# 906
} 
#endif
# 914 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 915
{int volatile ___ = 1;
# 920
exit(___);}
#if 0
# 915
{ 
# 916
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 917
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 919
return w.x; 
# 920
} 
#endif
# 922 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 923
{int volatile ___ = 1;
# 928
exit(___);}
#if 0
# 923
{ 
# 924
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 925
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 927
return w.x; 
# 928
} 
#endif
# 930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 931
{int volatile ___ = 1;
# 936
exit(___);}
#if 0
# 931
{ 
# 932
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 933
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 935
return make_float1(w.x); 
# 936
} 
#endif
# 938 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 939
{int volatile ___ = 1;
# 944
exit(___);}
#if 0
# 939
{ 
# 940
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 941
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 943
return make_float1(w.x); 
# 944
} 
#endif
# 946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 947
{int volatile ___ = 1;
# 952
exit(___);}
#if 0
# 947
{ 
# 948
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 949
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 951
return make_float2(w.x, w.y); 
# 952
} 
#endif
# 954 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 955
{int volatile ___ = 1;
# 960
exit(___);}
#if 0
# 955
{ 
# 956
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 957
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 959
return make_float2(w.x, w.y); 
# 960
} 
#endif
# 962 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 963
{int volatile ___ = 1;
# 968
exit(___);}
#if 0
# 963
{ 
# 964
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 965
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 967
return make_float4(w.x, w.y, w.z, w.w); 
# 968
} 
#endif
# 970 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 971
{int volatile ___ = 1;
# 976
exit(___);}
#if 0
# 971
{ 
# 972
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 973
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 975
return make_float4(w.x, w.y, w.z, w.w); 
# 976
} 
#endif
# 984 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType>  t, float x, float y) 
# 985
{int volatile ___ = 1;
# 993
exit(___);}
#if 0
# 985
{ 
# 989
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 992
return (char)(v.x); 
# 993
} 
#endif
# 995 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y) 
# 996
{int volatile ___ = 1;
# 1000
exit(___);}
#if 0
# 996
{ 
# 997
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 999
return (signed char)(v.x); 
# 1000
} 
#endif
# 1002 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y) 
# 1003
{int volatile ___ = 1;
# 1007
exit(___);}
#if 0
# 1003
{ 
# 1004
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1006
return (unsigned char)(v.x); 
# 1007
} 
#endif
# 1009 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1010
{int volatile ___ = 1;
# 1014
exit(___);}
#if 0
# 1010
{ 
# 1011
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1013
return make_char1(v.x); 
# 1014
} 
#endif
# 1016 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1017
{int volatile ___ = 1;
# 1021
exit(___);}
#if 0
# 1017
{ 
# 1018
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1020
return make_uchar1(v.x); 
# 1021
} 
#endif
# 1023 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1024
{int volatile ___ = 1;
# 1028
exit(___);}
#if 0
# 1024
{ 
# 1025
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1027
return make_char2(v.x, v.y); 
# 1028
} 
#endif
# 1030 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1031
{int volatile ___ = 1;
# 1035
exit(___);}
#if 0
# 1031
{ 
# 1032
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1034
return make_uchar2(v.x, v.y); 
# 1035
} 
#endif
# 1037 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1038
{int volatile ___ = 1;
# 1042
exit(___);}
#if 0
# 1038
{ 
# 1039
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1041
return make_char4(v.x, v.y, v.z, v.w); 
# 1042
} 
#endif
# 1044 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1045
{int volatile ___ = 1;
# 1049
exit(___);}
#if 0
# 1045
{ 
# 1046
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1048
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1049
} 
#endif
# 1057 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1058
{int volatile ___ = 1;
# 1062
exit(___);}
#if 0
# 1058
{ 
# 1059
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1061
return (short)(v.x); 
# 1062
} 
#endif
# 1064 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1065
{int volatile ___ = 1;
# 1069
exit(___);}
#if 0
# 1065
{ 
# 1066
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1068
return (unsigned short)(v.x); 
# 1069
} 
#endif
# 1071 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1072
{int volatile ___ = 1;
# 1076
exit(___);}
#if 0
# 1072
{ 
# 1073
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1075
return make_short1(v.x); 
# 1076
} 
#endif
# 1078 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1079
{int volatile ___ = 1;
# 1083
exit(___);}
#if 0
# 1079
{ 
# 1080
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1082
return make_ushort1(v.x); 
# 1083
} 
#endif
# 1085 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1086
{int volatile ___ = 1;
# 1090
exit(___);}
#if 0
# 1086
{ 
# 1087
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1089
return make_short2(v.x, v.y); 
# 1090
} 
#endif
# 1092 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1093
{int volatile ___ = 1;
# 1097
exit(___);}
#if 0
# 1093
{ 
# 1094
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1096
return make_ushort2(v.x, v.y); 
# 1097
} 
#endif
# 1099 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1100
{int volatile ___ = 1;
# 1104
exit(___);}
#if 0
# 1100
{ 
# 1101
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1103
return make_short4(v.x, v.y, v.z, v.w); 
# 1104
} 
#endif
# 1106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1107
{int volatile ___ = 1;
# 1111
exit(___);}
#if 0
# 1107
{ 
# 1108
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1110
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1111
} 
#endif
# 1119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType>  t, float x, float y) 
# 1120
{int volatile ___ = 1;
# 1124
exit(___);}
#if 0
# 1120
{ 
# 1121
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1123
return (int)(v.x); 
# 1124
} 
#endif
# 1126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y) 
# 1127
{int volatile ___ = 1;
# 1131
exit(___);}
#if 0
# 1127
{ 
# 1128
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1130
return (unsigned)(v.x); 
# 1131
} 
#endif
# 1133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1134
{int volatile ___ = 1;
# 1138
exit(___);}
#if 0
# 1134
{ 
# 1135
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1137
return make_int1(v.x); 
# 1138
} 
#endif
# 1140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1141
{int volatile ___ = 1;
# 1145
exit(___);}
#if 0
# 1141
{ 
# 1142
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1144
return make_uint1(v.x); 
# 1145
} 
#endif
# 1147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1148
{int volatile ___ = 1;
# 1152
exit(___);}
#if 0
# 1148
{ 
# 1149
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1151
return make_int2(v.x, v.y); 
# 1152
} 
#endif
# 1154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1155
{int volatile ___ = 1;
# 1159
exit(___);}
#if 0
# 1155
{ 
# 1156
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1158
return make_uint2(v.x, v.y); 
# 1159
} 
#endif
# 1161 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1162
{int volatile ___ = 1;
# 1166
exit(___);}
#if 0
# 1162
{ 
# 1163
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1165
return make_int4(v.x, v.y, v.z, v.w); 
# 1166
} 
#endif
# 1168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1169
{int volatile ___ = 1;
# 1173
exit(___);}
#if 0
# 1169
{ 
# 1170
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1172
return make_uint4(v.x, v.y, v.z, v.w); 
# 1173
} 
#endif
# 1247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType>  t, float x, float y) 
# 1248
{int volatile ___ = 1;
# 1252
exit(___);}
#if 0
# 1248
{ 
# 1249
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1251
return v.x; 
# 1252
} 
#endif
# 1254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1255
{int volatile ___ = 1;
# 1259
exit(___);}
#if 0
# 1255
{ 
# 1256
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1258
return make_float1(v.x); 
# 1259
} 
#endif
# 1261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1262
{int volatile ___ = 1;
# 1266
exit(___);}
#if 0
# 1262
{ 
# 1263
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1265
return make_float2(v.x, v.y); 
# 1266
} 
#endif
# 1268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1269
{int volatile ___ = 1;
# 1273
exit(___);}
#if 0
# 1269
{ 
# 1270
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1272
return make_float4(v.x, v.y, v.z, v.w); 
# 1273
} 
#endif
# 1281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1282
{int volatile ___ = 1;
# 1291
exit(___);}
#if 0
# 1282
{ 
# 1286
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1288
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1290
return w.x; 
# 1291
} 
#endif
# 1293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1294
{int volatile ___ = 1;
# 1299
exit(___);}
#if 0
# 1294
{ 
# 1295
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1296
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1298
return w.x; 
# 1299
} 
#endif
# 1301 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1302
{int volatile ___ = 1;
# 1307
exit(___);}
#if 0
# 1302
{ 
# 1303
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1304
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1306
return w.x; 
# 1307
} 
#endif
# 1309 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1310
{int volatile ___ = 1;
# 1315
exit(___);}
#if 0
# 1310
{ 
# 1311
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1312
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1314
return make_float1(w.x); 
# 1315
} 
#endif
# 1317 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1318
{int volatile ___ = 1;
# 1323
exit(___);}
#if 0
# 1318
{ 
# 1319
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1320
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1322
return make_float1(w.x); 
# 1323
} 
#endif
# 1325 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1326
{int volatile ___ = 1;
# 1331
exit(___);}
#if 0
# 1326
{ 
# 1327
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1328
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1330
return make_float2(w.x, w.y); 
# 1331
} 
#endif
# 1333 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1334
{int volatile ___ = 1;
# 1339
exit(___);}
#if 0
# 1334
{ 
# 1335
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1336
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1338
return make_float2(w.x, w.y); 
# 1339
} 
#endif
# 1341 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1342
{int volatile ___ = 1;
# 1347
exit(___);}
#if 0
# 1342
{ 
# 1343
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1344
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1346
return make_float4(w.x, w.y, w.z, w.w); 
# 1347
} 
#endif
# 1349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1350
{int volatile ___ = 1;
# 1355
exit(___);}
#if 0
# 1350
{ 
# 1351
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1352
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1354
return make_float4(w.x, w.y, w.z, w.w); 
# 1355
} 
#endif
# 1363 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1364
{int volatile ___ = 1;
# 1369
exit(___);}
#if 0
# 1364
{ 
# 1365
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1366
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1368
return w.x; 
# 1369
} 
#endif
# 1371 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1372
{int volatile ___ = 1;
# 1377
exit(___);}
#if 0
# 1372
{ 
# 1373
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1374
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1376
return w.x; 
# 1377
} 
#endif
# 1379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1380
{int volatile ___ = 1;
# 1385
exit(___);}
#if 0
# 1380
{ 
# 1381
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1382
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1384
return make_float1(w.x); 
# 1385
} 
#endif
# 1387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1388
{int volatile ___ = 1;
# 1393
exit(___);}
#if 0
# 1388
{ 
# 1389
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1390
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1392
return make_float1(w.x); 
# 1393
} 
#endif
# 1395 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1396
{int volatile ___ = 1;
# 1401
exit(___);}
#if 0
# 1396
{ 
# 1397
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1398
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1400
return make_float2(w.x, w.y); 
# 1401
} 
#endif
# 1403 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1404
{int volatile ___ = 1;
# 1409
exit(___);}
#if 0
# 1404
{ 
# 1405
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1406
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1408
return make_float2(w.x, w.y); 
# 1409
} 
#endif
# 1411 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1412
{int volatile ___ = 1;
# 1417
exit(___);}
#if 0
# 1412
{ 
# 1413
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1414
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1416
return make_float4(w.x, w.y, w.z, w.w); 
# 1417
} 
#endif
# 1419 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1420
{int volatile ___ = 1;
# 1425
exit(___);}
#if 0
# 1420
{ 
# 1421
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1422
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1424
return make_float4(w.x, w.y, w.z, w.w); 
# 1425
} 
#endif
# 1433 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1434
{int volatile ___ = 1;
# 1442
exit(___);}
#if 0
# 1434
{ 
# 1438
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1441
return (char)(v.x); 
# 1442
} 
#endif
# 1444 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1445
{int volatile ___ = 1;
# 1449
exit(___);}
#if 0
# 1445
{ 
# 1446
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1448
return (signed char)(v.x); 
# 1449
} 
#endif
# 1451 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1452
{int volatile ___ = 1;
# 1456
exit(___);}
#if 0
# 1452
{ 
# 1453
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1455
return (unsigned char)(v.x); 
# 1456
} 
#endif
# 1458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1459
{int volatile ___ = 1;
# 1463
exit(___);}
#if 0
# 1459
{ 
# 1460
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1462
return make_char1(v.x); 
# 1463
} 
#endif
# 1465 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1466
{int volatile ___ = 1;
# 1470
exit(___);}
#if 0
# 1466
{ 
# 1467
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1469
return make_uchar1(v.x); 
# 1470
} 
#endif
# 1472 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1473
{int volatile ___ = 1;
# 1477
exit(___);}
#if 0
# 1473
{ 
# 1474
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1476
return make_char2(v.x, v.y); 
# 1477
} 
#endif
# 1479 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1480
{int volatile ___ = 1;
# 1484
exit(___);}
#if 0
# 1480
{ 
# 1481
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1483
return make_uchar2(v.x, v.y); 
# 1484
} 
#endif
# 1486 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1487
{int volatile ___ = 1;
# 1491
exit(___);}
#if 0
# 1487
{ 
# 1488
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1490
return make_char4(v.x, v.y, v.z, v.w); 
# 1491
} 
#endif
# 1493 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1494
{int volatile ___ = 1;
# 1498
exit(___);}
#if 0
# 1494
{ 
# 1495
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1497
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1498
} 
#endif
# 1506 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1507
{int volatile ___ = 1;
# 1511
exit(___);}
#if 0
# 1507
{ 
# 1508
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1510
return (short)(v.x); 
# 1511
} 
#endif
# 1513 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1514
{int volatile ___ = 1;
# 1518
exit(___);}
#if 0
# 1514
{ 
# 1515
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1517
return (unsigned short)(v.x); 
# 1518
} 
#endif
# 1520 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1521
{int volatile ___ = 1;
# 1525
exit(___);}
#if 0
# 1521
{ 
# 1522
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1524
return make_short1(v.x); 
# 1525
} 
#endif
# 1527 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1528
{int volatile ___ = 1;
# 1532
exit(___);}
#if 0
# 1528
{ 
# 1529
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1531
return make_ushort1(v.x); 
# 1532
} 
#endif
# 1534 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1535
{int volatile ___ = 1;
# 1539
exit(___);}
#if 0
# 1535
{ 
# 1536
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1538
return make_short2(v.x, v.y); 
# 1539
} 
#endif
# 1541 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1542
{int volatile ___ = 1;
# 1546
exit(___);}
#if 0
# 1542
{ 
# 1543
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1545
return make_ushort2(v.x, v.y); 
# 1546
} 
#endif
# 1548 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1549
{int volatile ___ = 1;
# 1553
exit(___);}
#if 0
# 1549
{ 
# 1550
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1552
return make_short4(v.x, v.y, v.z, v.w); 
# 1553
} 
#endif
# 1555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1556
{int volatile ___ = 1;
# 1560
exit(___);}
#if 0
# 1556
{ 
# 1557
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1559
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1560
} 
#endif
# 1568 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1569
{int volatile ___ = 1;
# 1573
exit(___);}
#if 0
# 1569
{ 
# 1570
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1572
return (int)(v.x); 
# 1573
} 
#endif
# 1575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1576
{int volatile ___ = 1;
# 1580
exit(___);}
#if 0
# 1576
{ 
# 1577
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1579
return (unsigned)(v.x); 
# 1580
} 
#endif
# 1582 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1583
{int volatile ___ = 1;
# 1587
exit(___);}
#if 0
# 1583
{ 
# 1584
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1586
return make_int1(v.x); 
# 1587
} 
#endif
# 1589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1590
{int volatile ___ = 1;
# 1594
exit(___);}
#if 0
# 1590
{ 
# 1591
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1593
return make_uint1(v.x); 
# 1594
} 
#endif
# 1596 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1597
{int volatile ___ = 1;
# 1601
exit(___);}
#if 0
# 1597
{ 
# 1598
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1600
return make_int2(v.x, v.y); 
# 1601
} 
#endif
# 1603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1604
{int volatile ___ = 1;
# 1608
exit(___);}
#if 0
# 1604
{ 
# 1605
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1607
return make_uint2(v.x, v.y); 
# 1608
} 
#endif
# 1610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1611
{int volatile ___ = 1;
# 1615
exit(___);}
#if 0
# 1611
{ 
# 1612
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1614
return make_int4(v.x, v.y, v.z, v.w); 
# 1615
} 
#endif
# 1617 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1618
{int volatile ___ = 1;
# 1622
exit(___);}
#if 0
# 1618
{ 
# 1619
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1621
return make_uint4(v.x, v.y, v.z, v.w); 
# 1622
} 
#endif
# 1696 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1697
{int volatile ___ = 1;
# 1701
exit(___);}
#if 0
# 1697
{ 
# 1698
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1700
return v.x; 
# 1701
} 
#endif
# 1703 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1704
{int volatile ___ = 1;
# 1708
exit(___);}
#if 0
# 1704
{ 
# 1705
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1707
return make_float1(v.x); 
# 1708
} 
#endif
# 1710 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1711
{int volatile ___ = 1;
# 1715
exit(___);}
#if 0
# 1711
{ 
# 1712
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1714
return make_float2(v.x, v.y); 
# 1715
} 
#endif
# 1717 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1718
{int volatile ___ = 1;
# 1722
exit(___);}
#if 0
# 1718
{ 
# 1719
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1721
return make_float4(v.x, v.y, v.z, v.w); 
# 1722
} 
#endif
# 1730 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1731
{int volatile ___ = 1;
# 1740
exit(___);}
#if 0
# 1731
{ 
# 1735
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1737
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1739
return w.x; 
# 1740
} 
#endif
# 1742 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1743
{int volatile ___ = 1;
# 1748
exit(___);}
#if 0
# 1743
{ 
# 1744
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1745
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1747
return w.x; 
# 1748
} 
#endif
# 1750 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1751
{int volatile ___ = 1;
# 1756
exit(___);}
#if 0
# 1751
{ 
# 1752
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1753
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1755
return w.x; 
# 1756
} 
#endif
# 1758 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1759
{int volatile ___ = 1;
# 1764
exit(___);}
#if 0
# 1759
{ 
# 1760
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1761
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1763
return make_float1(w.x); 
# 1764
} 
#endif
# 1766 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1767
{int volatile ___ = 1;
# 1772
exit(___);}
#if 0
# 1767
{ 
# 1768
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1769
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1771
return make_float1(w.x); 
# 1772
} 
#endif
# 1774 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1775
{int volatile ___ = 1;
# 1780
exit(___);}
#if 0
# 1775
{ 
# 1776
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1777
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1779
return make_float2(w.x, w.y); 
# 1780
} 
#endif
# 1782 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1783
{int volatile ___ = 1;
# 1788
exit(___);}
#if 0
# 1783
{ 
# 1784
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1785
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1787
return make_float2(w.x, w.y); 
# 1788
} 
#endif
# 1790 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1791
{int volatile ___ = 1;
# 1796
exit(___);}
#if 0
# 1791
{ 
# 1792
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1793
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1795
return make_float4(w.x, w.y, w.z, w.w); 
# 1796
} 
#endif
# 1798 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1799
{int volatile ___ = 1;
# 1804
exit(___);}
#if 0
# 1799
{ 
# 1800
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1801
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1803
return make_float4(w.x, w.y, w.z, w.w); 
# 1804
} 
#endif
# 1812 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1813
{int volatile ___ = 1;
# 1818
exit(___);}
#if 0
# 1813
{ 
# 1814
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1815
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1817
return w.x; 
# 1818
} 
#endif
# 1820 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1821
{int volatile ___ = 1;
# 1826
exit(___);}
#if 0
# 1821
{ 
# 1822
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1823
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1825
return w.x; 
# 1826
} 
#endif
# 1828 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1829
{int volatile ___ = 1;
# 1834
exit(___);}
#if 0
# 1829
{ 
# 1830
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1831
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1833
return make_float1(w.x); 
# 1834
} 
#endif
# 1836 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1837
{int volatile ___ = 1;
# 1842
exit(___);}
#if 0
# 1837
{ 
# 1838
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1841
return make_float1(w.x); 
# 1842
} 
#endif
# 1844 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1845
{int volatile ___ = 1;
# 1850
exit(___);}
#if 0
# 1845
{ 
# 1846
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1849
return make_float2(w.x, w.y); 
# 1850
} 
#endif
# 1852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1853
{int volatile ___ = 1;
# 1858
exit(___);}
#if 0
# 1853
{ 
# 1854
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1857
return make_float2(w.x, w.y); 
# 1858
} 
#endif
# 1860 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1861
{int volatile ___ = 1;
# 1866
exit(___);}
#if 0
# 1861
{ 
# 1862
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1865
return make_float4(w.x, w.y, w.z, w.w); 
# 1866
} 
#endif
# 1868 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1869
{int volatile ___ = 1;
# 1874
exit(___);}
#if 0
# 1869
{ 
# 1870
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1873
return make_float4(w.x, w.y, w.z, w.w); 
# 1874
} 
#endif
# 1930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1932
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1934
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1954 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1955
{int volatile ___ = 1;
# 1957
exit(___);}
#if 0
# 1955
{ 
# 1956
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1957
} 
#endif
# 1959 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1960
{int volatile ___ = 1;
# 1962
exit(___);}
#if 0
# 1960
{ 
# 1961
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1962
} 
#endif
# 1964 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1965
{int volatile ___ = 1;
# 1967
exit(___);}
#if 0
# 1965
{ 
# 1966
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 1967
} 
#endif
# 1969 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1970
{int volatile ___ = 1;
# 1972
exit(___);}
#if 0
# 1970
{ 
# 1971
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1972
} 
#endif
# 1974 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1975
{int volatile ___ = 1;
# 1977
exit(___);}
#if 0
# 1975
{ 
# 1976
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 1977
} 
#endif
# 1979 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1980
{int volatile ___ = 1;
# 1982
exit(___);}
#if 0
# 1980
{ 
# 1981
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  ; 
# 1982
} 
#endif
# 1984 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1985
{int volatile ___ = 1;
# 1987
exit(___);}
#if 0
# 1985
{ 
# 1986
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  ; 
# 1987
} 
#endif
# 1989 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1990
{int volatile ___ = 1;
# 1992
exit(___);}
#if 0
# 1990
{ 
# 1991
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  ; 
# 1992
} 
#endif
# 1994 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1995
{int volatile ___ = 1;
# 1997
exit(___);}
#if 0
# 1995
{ 
# 1996
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  ; 
# 1997
} 
#endif
# 1999 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2000
{int volatile ___ = 1;
# 2002
exit(___);}
#if 0
# 2000
{ 
# 2001
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2002
} 
#endif
# 2004 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2005
{int volatile ___ = 1;
# 2007
exit(___);}
#if 0
# 2005
{ 
# 2006
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2007
} 
#endif
# 2009 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2010
{int volatile ___ = 1;
# 2012
exit(___);}
#if 0
# 2010
{ 
# 2011
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 2012
} 
#endif
# 2014 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2015
{int volatile ___ = 1;
# 2017
exit(___);}
#if 0
# 2015
{ 
# 2016
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 2017
} 
#endif
# 2019 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2020
{int volatile ___ = 1;
# 2022
exit(___);}
#if 0
# 2020
{ 
# 2021
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 2022
} 
#endif
# 2024 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2025
{int volatile ___ = 1;
# 2027
exit(___);}
#if 0
# 2025
{ 
# 2026
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 2027
} 
#endif
# 2029 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2030
{int volatile ___ = 1;
# 2032
exit(___);}
#if 0
# 2030
{ 
# 2031
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  ; 
# 2032
} 
#endif
# 2034 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2035
{int volatile ___ = 1;
# 2037
exit(___);}
#if 0
# 2035
{ 
# 2036
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  ; 
# 2037
} 
#endif
# 2039 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2040
{int volatile ___ = 1;
# 2042
exit(___);}
#if 0
# 2040
{ 
# 2041
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  ; 
# 2042
} 
#endif
# 2044 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2045
{int volatile ___ = 1;
# 2047
exit(___);}
#if 0
# 2045
{ 
# 2046
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  ; 
# 2047
} 
#endif
# 2049 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2050
{int volatile ___ = 1;
# 2052
exit(___);}
#if 0
# 2050
{ 
# 2051
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2052
} 
#endif
# 2054 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2055
{int volatile ___ = 1;
# 2057
exit(___);}
#if 0
# 2055
{ 
# 2056
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2057
} 
#endif
# 2059 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2060
{int volatile ___ = 1;
# 2062
exit(___);}
#if 0
# 2060
{ 
# 2061
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2062
} 
#endif
# 2064 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2065
{int volatile ___ = 1;
# 2067
exit(___);}
#if 0
# 2065
{ 
# 2066
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2067
} 
#endif
# 2069 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2070
{int volatile ___ = 1;
# 2072
exit(___);}
#if 0
# 2070
{ 
# 2071
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2072
} 
#endif
# 2074 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2075
{int volatile ___ = 1;
# 2077
exit(___);}
#if 0
# 2075
{ 
# 2076
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2077
} 
#endif
# 2079 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2080
{int volatile ___ = 1;
# 2082
exit(___);}
#if 0
# 2080
{ 
# 2081
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2082
} 
#endif
# 2084 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2085
{int volatile ___ = 1;
# 2087
exit(___);}
#if 0
# 2085
{ 
# 2086
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2087
} 
#endif
# 2089 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2090
{int volatile ___ = 1;
# 2092
exit(___);}
#if 0
# 2090
{ 
# 2091
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2092
} 
#endif
# 2094 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2095
{int volatile ___ = 1;
# 2097
exit(___);}
#if 0
# 2095
{ 
# 2096
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2097
} 
#endif
# 2099 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2100
{int volatile ___ = 1;
# 2102
exit(___);}
#if 0
# 2100
{ 
# 2101
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2102
} 
#endif
# 2104 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2105
{int volatile ___ = 1;
# 2107
exit(___);}
#if 0
# 2105
{ 
# 2106
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2107
} 
#endif
# 2109 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2110
{int volatile ___ = 1;
# 2112
exit(___);}
#if 0
# 2110
{ 
# 2111
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2112
} 
#endif
# 2114 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2115
{int volatile ___ = 1;
# 2117
exit(___);}
#if 0
# 2115
{ 
# 2116
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2117
} 
#endif
# 2119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2120
{int volatile ___ = 1;
# 2122
exit(___);}
#if 0
# 2120
{ 
# 2121
if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2122
} 
#endif
# 2124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2125
{int volatile ___ = 1;
# 2127
exit(___);}
#if 0
# 2125
{ 
# 2126
if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2127
} 
#endif
# 2129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2130
{int volatile ___ = 1;
# 2132
exit(___);}
#if 0
# 2130
{ 
# 2131
if (comp == 3) { float4 v = __ftex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2132
} 
#endif
# 53 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; } 
# 55
extern "C" { extern const uint3 blockIdx; } 
# 57
extern "C" { extern const dim3 blockDim; } 
# 59
extern "C" { extern const dim3 gridDim; } 
# 61
extern "C" { extern const int warpSize; } 
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 107
cudaSetupArgument(T 
# 108
arg, size_t 
# 109
offset) 
# 111
{ 
# 112
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 113
} 
# 145
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146
event, unsigned 
# 147
flags) 
# 149
{ 
# 150
return cudaEventCreateWithFlags(event, 0); 
# 151
} 
# 208
static inline cudaError_t cudaMallocHost(void **
# 209
ptr, size_t 
# 210
size, unsigned 
# 211
flags) 
# 213
{ 
# 214
return cudaHostAlloc(ptr, size, flags); 
# 215
} 
# 217
template< class T> inline cudaError_t 
# 218
cudaHostAlloc(T **
# 219
ptr, size_t 
# 220
size, unsigned 
# 221
flags) 
# 223
{ 
# 224
return cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 225
} 
# 227
template< class T> inline cudaError_t 
# 228
cudaHostGetDevicePointer(T **
# 229
pDevice, void *
# 230
pHost, unsigned 
# 231
flags) 
# 233
{ 
# 234
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 235
} 
# 237
template< class T> inline cudaError_t 
# 238
cudaMalloc(T **
# 239
devPtr, size_t 
# 240
size) 
# 242
{ 
# 243
return cudaMalloc((void **)((void *)devPtr), size); 
# 244
} 
# 246
template< class T> inline cudaError_t 
# 247
cudaMallocHost(T **
# 248
ptr, size_t 
# 249
size, unsigned 
# 250
flags = (0)) 
# 252
{ 
# 253
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 254
} 
# 256
template< class T> inline cudaError_t 
# 257
cudaMallocPitch(T **
# 258
devPtr, size_t *
# 259
pitch, size_t 
# 260
width, size_t 
# 261
height) 
# 263
{ 
# 264
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 265
} 
# 275
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276
symbol, const void *
# 277
src, size_t 
# 278
count, size_t 
# 279
offset = (0), cudaMemcpyKind 
# 280
kind = cudaMemcpyHostToDevice) 
# 282
{ 
# 283
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
# 284
} 
# 286
template< class T> inline cudaError_t 
# 287
cudaMemcpyToSymbol(const T &
# 288
symbol, const void *
# 289
src, size_t 
# 290
count, size_t 
# 291
offset = (0), cudaMemcpyKind 
# 292
kind = cudaMemcpyHostToDevice) 
# 294
{ 
# 295
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
# 296
} 
# 298
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299
symbol, const void *
# 300
src, size_t 
# 301
count, size_t 
# 302
offset = (0), cudaMemcpyKind 
# 303
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 304
stream = 0) 
# 306
{ 
# 307
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
# 308
} 
# 310
template< class T> inline cudaError_t 
# 311
cudaMemcpyToSymbolAsync(const T &
# 312
symbol, const void *
# 313
src, size_t 
# 314
count, size_t 
# 315
offset = (0), cudaMemcpyKind 
# 316
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 317
stream = 0) 
# 319
{ 
# 320
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
# 321
} 
# 329
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330
dst, char *
# 331
symbol, size_t 
# 332
count, size_t 
# 333
offset = (0), cudaMemcpyKind 
# 334
kind = cudaMemcpyDeviceToHost) 
# 336
{ 
# 337
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
# 338
} 
# 340
template< class T> inline cudaError_t 
# 341
cudaMemcpyFromSymbol(void *
# 342
dst, const T &
# 343
symbol, size_t 
# 344
count, size_t 
# 345
offset = (0), cudaMemcpyKind 
# 346
kind = cudaMemcpyDeviceToHost) 
# 348
{ 
# 349
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
# 350
} 
# 352
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353
dst, char *
# 354
symbol, size_t 
# 355
count, size_t 
# 356
offset = (0), cudaMemcpyKind 
# 357
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 358
stream = 0) 
# 360
{ 
# 361
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
# 362
} 
# 364
template< class T> inline cudaError_t 
# 365
cudaMemcpyFromSymbolAsync(void *
# 366
dst, const T &
# 367
symbol, size_t 
# 368
count, size_t 
# 369
offset = (0), cudaMemcpyKind 
# 370
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 371
stream = 0) 
# 373
{ 
# 374
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
# 375
} 
# 377
static inline cudaError_t cudaGetSymbolAddress(void **
# 378
devPtr, char *
# 379
symbol) 
# 381
{ 
# 382
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
# 383
} 
# 410
template< class T> inline cudaError_t 
# 411
cudaGetSymbolAddress(void **
# 412
devPtr, const T &
# 413
symbol) 
# 415
{ 
# 416
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
# 417
} 
# 425
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426
size, char *
# 427
symbol) 
# 429
{ 
# 430
return cudaGetSymbolSize(size, (const char *)symbol); 
# 431
} 
# 458
template< class T> inline cudaError_t 
# 459
cudaGetSymbolSize(size_t *
# 460
size, const T &
# 461
symbol) 
# 463
{ 
# 464
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
# 465
} 
# 507
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 508
cudaBindTexture(size_t *
# 509
offset, const texture< T, dim, readMode>  &
# 510
tex, const void *
# 511
devPtr, const cudaChannelFormatDesc &
# 512
desc, size_t 
# 513
size = (((2147483647) * 2U) + 1U)) 
# 515
{ 
# 516
return cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 517
} 
# 552
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 553
cudaBindTexture(size_t *
# 554
offset, const texture< T, dim, readMode>  &
# 555
tex, const void *
# 556
devPtr, size_t 
# 557
size = (((2147483647) * 2U) + 1U)) 
# 559
{ 
# 560
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 561
} 
# 608
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 609
cudaBindTexture2D(size_t *
# 610
offset, const texture< T, dim, readMode>  &
# 611
tex, const void *
# 612
devPtr, const cudaChannelFormatDesc &
# 613
desc, size_t 
# 614
width, size_t 
# 615
height, size_t 
# 616
pitch) 
# 618
{ 
# 619
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 620
} 
# 666
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 667
cudaBindTexture2D(size_t *
# 668
offset, const texture< T, dim, readMode>  &
# 669
tex, const void *
# 670
devPtr, size_t 
# 671
width, size_t 
# 672
height, size_t 
# 673
pitch) 
# 675
{ 
# 676
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch); 
# 677
} 
# 708
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 709
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 710
tex, const cudaArray *
# 711
array, const cudaChannelFormatDesc &
# 712
desc) 
# 714
{ 
# 715
return cudaBindTextureToArray(&tex, array, &desc); 
# 716
} 
# 746
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 747
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 748
tex, const cudaArray *
# 749
array) 
# 751
{ 
# 752
cudaChannelFormatDesc desc; 
# 753
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 755
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 756
} 
# 785
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 786
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 787
tex) 
# 789
{ 
# 790
return cudaUnbindTexture(&tex); 
# 791
} 
# 825
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 826
cudaGetTextureAlignmentOffset(size_t *
# 827
offset, const texture< T, dim, readMode>  &
# 828
tex) 
# 830
{ 
# 831
return cudaGetTextureAlignmentOffset(offset, &tex); 
# 832
} 
# 886
template< class T> inline cudaError_t 
# 887
cudaFuncSetCacheConfig(T *
# 888
func, cudaFuncCache 
# 889
cacheConfig) 
# 891
{ 
# 892
return cudaFuncSetCacheConfig((const char *)func, cacheConfig); 
# 893
} 
# 930
template< class T> inline cudaError_t 
# 931
cudaLaunch(T *
# 932
entry) 
# 934
{ 
# 935
return cudaLaunch((const char *)entry); 
# 936
} 
# 970
template< class T> inline cudaError_t 
# 971
cudaFuncGetAttributes(cudaFuncAttributes *
# 972
attr, T *
# 973
entry) 
# 975
{ 
# 976
return cudaFuncGetAttributes(attr, (const char *)entry); 
# 977
} 
# 999
template< class T, int dim> inline cudaError_t 
# 1000
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1001
surf, const cudaArray *
# 1002
array, const cudaChannelFormatDesc &
# 1003
desc) 
# 1005
{ 
# 1006
return cudaBindSurfaceToArray(&surf, array, &desc); 
# 1007
} 
# 1028
template< class T, int dim> inline cudaError_t 
# 1029
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1030
surf, const cudaArray *
# 1031
array) 
# 1033
{ 
# 1034
cudaChannelFormatDesc desc; 
# 1035
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 1037
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 1038
} 
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE; 
# 49
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef 
# 84
struct { 
# 85
int __count; 
# 87
union { 
# 89
unsigned __wch; 
# 93
char __wchb[4]; 
# 94
} __value; 
# 95
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef 
# 23
struct { 
# 24
__off_t __pos; 
# 25
__mbstate_t __state; 
# 26
} _G_fpos_t; }
# 31
extern "C" { typedef 
# 28
struct { 
# 29
__off64_t __pos; 
# 30
__mbstate_t __state; 
# 31
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54
extern "C" { typedef int _G_int32_t; }
# 55
extern "C" { typedef unsigned short _G_uint16_t; }
# 56
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE; 
# 180
extern "C" { typedef void _IO_lock_t; }
# 186
extern "C" { struct _IO_marker { 
# 187
_IO_marker *_next; 
# 188
_IO_FILE *_sbuf; 
# 192
int _pos; 
# 203 "/usr/include/libio.h" 3
}; }
# 206
enum __codecvt_result { 
# 208
__codecvt_ok, 
# 209
__codecvt_partial, 
# 210
__codecvt_error, 
# 211
__codecvt_noconv
# 212
}; 
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE { 
# 272
int _flags; 
# 277
char *_IO_read_ptr; 
# 278
char *_IO_read_end; 
# 279
char *_IO_read_base; 
# 280
char *_IO_write_base; 
# 281
char *_IO_write_ptr; 
# 282
char *_IO_write_end; 
# 283
char *_IO_buf_base; 
# 284
char *_IO_buf_end; 
# 286
char *_IO_save_base; 
# 287
char *_IO_backup_base; 
# 288
char *_IO_save_end; 
# 290
_IO_marker *_markers; 
# 292
_IO_FILE *_chain; 
# 294
int _fileno; 
# 298
int _flags2; 
# 300
__off_t _old_offset; 
# 304
unsigned short _cur_column; 
# 305
signed char _vtable_offset; 
# 306
char _shortbuf[1]; 
# 310
_IO_lock_t *_lock; 
# 319 "/usr/include/libio.h" 3
__off64_t _offset; 
# 328 "/usr/include/libio.h" 3
void *__pad1; 
# 329
void *__pad2; 
# 330
void *__pad3; 
# 331
void *__pad4; 
# 332
size_t __pad5; 
# 334
int _mode; 
# 336
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))]; 
# 338
}; }
# 344
struct _IO_FILE_plus; 
# 346
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; } 
# 347
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; } 
# 348
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; } 
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384
extern "C" { typedef int __io_close_fn(void *); }
# 389
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401
extern "C" { typedef 
# 396
struct { 
# 397
__io_read_fn *read; 
# 398
__io_write_fn *write; 
# 399
__io_seek_fn *seek; 
# 400
__io_close_fn *close; 
# 401
} _IO_cookie_io_functions_t; }
# 402
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404
struct _IO_cookie_file; 
# 407
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t); 
# 416
extern "C" int __underflow(_IO_FILE *); 
# 417
extern "C" int __uflow(_IO_FILE *); 
# 418
extern "C" int __overflow(_IO_FILE *, int); 
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *); 
# 461
extern "C" int _IO_putc(int, _IO_FILE *); 
# 462
extern "C" int _IO_feof(_IO_FILE *) throw(); 
# 463
extern "C" int _IO_ferror(_IO_FILE *) throw(); 
# 465
extern "C" int _IO_peekc_locked(_IO_FILE *); 
# 471
extern "C" void _IO_flockfile(_IO_FILE *) throw(); 
# 472
extern "C" void _IO_funlockfile(_IO_FILE *) throw(); 
# 473
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw(); 
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__); 
# 492
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list); 
# 494
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t); 
# 495
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t); 
# 497
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int); 
# 498
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int); 
# 500
extern "C" void _IO_free_backup_area(_IO_FILE *) throw(); 
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; } 
# 166
extern "C" { extern _IO_FILE *stdout; } 
# 167
extern "C" { extern _IO_FILE *stderr; } 
# 175
extern "C" int remove(const char *) throw(); 
# 177
extern "C" int rename(const char *, const char *) throw(); 
# 182
extern "C" int renameat(int, const char *, int, const char *) throw(); 
# 192
extern "C" FILE *tmpfile(); 
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64(); 
# 206
extern "C" char *tmpnam(char *) throw(); 
# 212
extern "C" char *tmpnam_r(char *) throw(); 
# 224
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__)); 
# 234
extern "C" int fclose(FILE *); 
# 239
extern "C" int fflush(FILE *); 
# 249
extern "C" int fflush_unlocked(FILE *); 
# 259
extern "C" int fcloseall(); 
# 269
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__); 
# 275
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__); 
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__); 
# 296
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__); 
# 303
extern "C" FILE *fdopen(int, const char *) throw(); 
# 309
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw(); 
# 316
extern "C" FILE *fmemopen(void *, size_t, const char *) throw(); 
# 322
extern "C" FILE *open_memstream(char **, size_t *) throw(); 
# 329
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw(); 
# 333
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw(); 
# 340
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw(); 
# 344
extern "C" void setlinebuf(FILE *) throw(); 
# 353
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...); 
# 359
extern "C" int printf(const char *__restrict__, ...); 
# 361
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw(); 
# 368
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list); 
# 374
extern "C" { extern inline int vprintf(const char *__restrict__, __gnuc_va_list) __attribute__((__gnu_inline__)); } 
# 376
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw(); 
# 383
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw(); 
# 387
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw(); 
# 396
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw(); 
# 399
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw(); 
# 402
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw(); 
# 414
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list); 
# 417
extern "C" int dprintf(int, const char *__restrict__, ...); 
# 427
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...); 
# 433
extern "C" int scanf(const char *__restrict__, ...); 
# 435
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw(); 
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list); 
# 481
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list); 
# 485
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw(); 
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *); 
# 534
extern "C" int getc(FILE *); 
# 540
extern "C" { extern inline int getchar() __attribute__((__gnu_inline__)); } 
# 552
extern "C" { extern inline int getc_unlocked(FILE *) __attribute__((__gnu_inline__)); } 
# 553
extern "C" { extern inline int getchar_unlocked() __attribute__((__gnu_inline__)); } 
# 563
extern "C" { extern inline int fgetc_unlocked(FILE *) __attribute__((__gnu_inline__)); } 
# 575
extern "C" int fputc(int, FILE *); 
# 576
extern "C" int putc(int, FILE *); 
# 582
extern "C" { extern inline int putchar(int) __attribute__((__gnu_inline__)); } 
# 596
extern "C" { extern inline int fputc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); } 
# 604
extern "C" { extern inline int putc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); } 
# 605
extern "C" { extern inline int putchar_unlocked(int) __attribute__((__gnu_inline__)); } 
# 612
extern "C" int getw(FILE *); 
# 615
extern "C" int putw(int, FILE *); 
# 624
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__); 
# 632
extern "C" char *gets(char *); 
# 642
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__); 
# 658
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__); 
# 661
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__); 
# 671
extern "C" { extern inline __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__) __attribute__((__gnu_inline__)); } 
# 682
extern "C" int fputs(const char *__restrict__, FILE *__restrict__); 
# 688
extern "C" int puts(const char *); 
# 695
extern "C" int ungetc(int, FILE *); 
# 702
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__); 
# 708
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__); 
# 719
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__); 
# 730
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__); 
# 732
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__); 
# 742
extern "C" int fseek(FILE *, long, int); 
# 747
extern "C" long ftell(FILE *); 
# 752
extern "C" void rewind(FILE *); 
# 766
extern "C" int fseeko(FILE *, __off_t, int); 
# 771
extern "C" __off_t ftello(FILE *); 
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__); 
# 796
extern "C" int fsetpos(FILE *, const fpos_t *); 
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int); 
# 812
extern "C" __off64_t ftello64(FILE *); 
# 813
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__); 
# 814
extern "C" int fsetpos64(FILE *, const fpos64_t *); 
# 819
extern "C" void clearerr(FILE *) throw(); 
# 821
extern "C" int feof(FILE *) throw(); 
# 823
extern "C" int ferror(FILE *) throw(); 
# 828
extern "C" void clearerr_unlocked(FILE *) throw(); 
# 829
extern "C" { extern inline int feof_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); } 
# 830
extern "C" { extern inline int ferror_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); } 
# 839
extern "C" void perror(const char *); 
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; } 
# 28
extern "C" { extern const char *const sys_errlist[]; } 
# 31
extern "C" { extern int _sys_nerr; } 
# 32
extern "C" { extern const char *const _sys_errlist[]; } 
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw(); 
# 856
extern "C" int fileno_unlocked(FILE *) throw(); 
# 866
extern "C" FILE *popen(const char *, const char *); 
# 872
extern "C" int pclose(FILE *); 
# 878
extern "C" char *ctermid(char *) throw(); 
# 884
extern "C" char *cuserid(char *); 
# 889
struct obstack; 
# 892
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw(); 
# 895
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw(); 
# 906
extern "C" void flockfile(FILE *) throw(); 
# 910
extern "C" int ftrylockfile(FILE *) throw(); 
# 913
extern "C" void funlockfile(FILE *) throw(); 
# 37 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int vprintf(const char *__restrict__ __fmt, __gnuc_va_list __arg) 
# 38
{ 
# 39
return vfprintf(stdout, __fmt, __arg); 
# 40
} } 
# 45
extern "C" { inline __attribute__((__gnu_inline__)) int getchar() 
# 46
{ 
# 47
return _IO_getc(stdin); 
# 48
} } 
# 54
extern "C" { inline __attribute__((__gnu_inline__)) int fgetc_unlocked(FILE *__fp) 
# 55
{ 
# 56
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
# 57
} } 
# 64
extern "C" { inline __attribute__((__gnu_inline__)) int getc_unlocked(FILE *__fp) 
# 65
{ 
# 66
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
# 67
} } 
# 71
extern "C" { inline __attribute__((__gnu_inline__)) int getchar_unlocked() 
# 72
{ 
# 73
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++))); 
# 74
} } 
# 80
extern "C" { inline __attribute__((__gnu_inline__)) int putchar(int __c) 
# 81
{ 
# 82
return _IO_putc(__c, stdout); 
# 83
} } 
# 89
extern "C" { inline __attribute__((__gnu_inline__)) int fputc_unlocked(int __c, FILE *__stream) 
# 90
{ 
# 91
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c)); 
# 92
} } 
# 99
extern "C" { inline __attribute__((__gnu_inline__)) int putc_unlocked(int __c, FILE *__stream) 
# 100
{ 
# 101
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c)); 
# 102
} } 
# 106
extern "C" { inline __attribute__((__gnu_inline__)) int putchar_unlocked(int __c) 
# 107
{ 
# 108
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c)); 
# 109
} } 
# 116
extern "C" { inline __attribute__((__gnu_inline__)) __ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream) 
# 117
{ 
# 118
return __getdelim(__lineptr, __n, '\n', __stream); 
# 119
} } 
# 126
extern "C" { inline __attribute__((__gnu_inline__)) int feof_unlocked(FILE *__stream) throw() 
# 127
{ 
# 128
return ((__stream->_flags) & 16) != 0; 
# 129
} } 
# 133
extern "C" { inline __attribute__((__gnu_inline__)) int ferror_unlocked(FILE *__stream) throw() 
# 134
{ 
# 135
return ((__stream->_flags) & 32) != 0; 
# 136
} } 
# 60 "/home/bachelor/deicide218/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
enum CUTBoolean { 
# 62
CUTFalse, 
# 63
CUTTrue
# 64
}; 
# 72
extern "C" void cutFree(void *); 
# 90
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int); 
# 103
extern "C" char *cutFindFilePath(const char *, const char *); 
# 118
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false); 
# 134
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false); 
# 150
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false); 
# 165
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false); 
# 181
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false); 
# 197
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false); 
# 211
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false); 
# 225
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false); 
# 237
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false); 
# 249
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false); 
# 261
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false); 
# 273
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false); 
# 289
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *); 
# 302
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *); 
# 316
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *); 
# 332
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *); 
# 348
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *); 
# 363
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *); 
# 375
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned); 
# 387
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned); 
# 400
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned); 
# 412
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned); 
# 424
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned); 
# 436
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned); 
# 457
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *); 
# 471
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *); 
# 485
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *); 
# 499
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **); 
# 514
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *); 
# 528
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int); 
# 540
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned); 
# 553
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned); 
# 567
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float); 
# 580
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned); 
# 595
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float); 
# 609
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float); 
# 623
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float); 
# 638
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float); 
# 653
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float); 
# 668
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false); 
# 681
extern "C" CUTBoolean cutCreateTimer(unsigned *); 
# 690
extern "C" CUTBoolean cutDeleteTimer(unsigned); 
# 698
extern "C" CUTBoolean cutStartTimer(const unsigned); 
# 706
extern "C" CUTBoolean cutStopTimer(const unsigned); 
# 714
extern "C" CUTBoolean cutResetTimer(const unsigned); 
# 723
extern "C" float cutGetTimerValue(const unsigned); 
# 734
extern "C" float cutGetAverageTimerValue(const unsigned); 
# 30 "CudaCuts_kernel.cu"
void kernel_push1_atomic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 31
g_sink_weight, int *g_push_reser, int *g_pull_left, int *g_pull_right, int *g_pull_down, int *
# 32
g_pull_up, int *g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 33
graph_size, int width, int rows, int graph_size1, int width1, int rows1) ;
#if 0
# 34
{ 
# 35
int x1 = (threadIdx.x); 
# 36
int y1 = (threadIdx.y); 
# 37
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 38
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 39
int thid = (__umul24(y, width1) + x); 
# 41
__attribute__((unused)) static int height_fn[356]; 
# 44
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 46
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 48
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 49
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 50
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 51
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 53
__syncthreads(); 
# 55
int flow_push = 0, min_flow_pushed = 0; 
# 56
flow_push = (g_push_reser[thid]); 
# 59
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 60
{ 
# 61
int temp_weight = 0; 
# 64
temp_weight = (g_sink_weight[thid]); 
# 65
min_flow_pushed = flow_push; 
# 67
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 68
{ 
# 69
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 70
temp_weight = (temp_weight - min_flow_pushed); 
# 71
(g_sink_weight[thid]) = temp_weight; 
# 72
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 73
}  
# 76
flow_push = (g_push_reser[thid]); 
# 78
min_flow_pushed = flow_push; 
# 80
temp_weight = (g_left_weight[thid]); 
# 82
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 83
{ 
# 84
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 85
temp_weight = (temp_weight - min_flow_pushed); 
# 86
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 87
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 88
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 89
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 91
} else { atomicSub(&(g_pull_left[thid - 1]), 1); }  
# 93
flow_push = (g_push_reser[thid]); 
# 94
min_flow_pushed = flow_push; 
# 95
temp_weight = (g_up_weight[thid]); 
# 97
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 98
{ 
# 99
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 100
temp_weight = (temp_weight - min_flow_pushed); 
# 102
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 103
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 104
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 105
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 107
} else { atomicSub(&(g_pull_up[thid - width1]), 1); }  
# 110
flow_push = (g_push_reser[thid]); 
# 111
min_flow_pushed = flow_push; 
# 112
temp_weight = (g_right_weight[thid]); 
# 114
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 115
{ 
# 116
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 117
temp_weight = (temp_weight - min_flow_pushed); 
# 118
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 119
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 120
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 121
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 122
} else { atomicSub(&(g_pull_right[thid + 1]), 1); }  
# 125
flow_push = (g_push_reser[thid]); 
# 127
min_flow_pushed = flow_push; 
# 128
temp_weight = (g_down_weight[thid]); 
# 131
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 132
{ 
# 133
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 134
temp_weight = (temp_weight - min_flow_pushed); 
# 135
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 136
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 137
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 138
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 139
} else { atomicSub(&(g_pull_down[thid + width1]), 1); }  
# 140
}  
# 142
} 
#endif
# 145 "CudaCuts_kernel.cu"
void kernel_relabel_atomic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 146
g_sink_weight, int *g_push_reser, int *g_pull_left, int *g_pull_right, int *g_pull_down, int *
# 147
g_pull_up, int *g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 148
graph_size, int width, int rows, int graph_size1, int width1, int rows1) ;
#if 0
# 149
{ 
# 150
int x1 = (threadIdx.x); 
# 151
int y1 = (threadIdx.y); 
# 152
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 153
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 154
int thid = (__umul24(y, width1) + x); 
# 156
__attribute__((unused)) static int height_fn[356]; 
# 159
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 161
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 163
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 164
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 165
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 166
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 168
__syncthreads(); 
# 171
int min_flow_pushed = (g_left_weight[thid]); 
# 172
int flow_push = (g_push_reser[thid]); 
# 174
if ((flow_push <= 0) || ((((((g_left_weight[thid]) == 0) && ((g_right_weight[thid]) == 0)) && ((g_down_weight[thid]) == 0)) && ((g_up_weight[thid]) == 0)) && ((g_sink_weight[thid]) == 0))) { 
# 175
(g_relabel_mask[thid]) = 2; } else 
# 177
{ 
# 178
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && ((g_left_weight[thid]) > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 179
}  
# 182
__syncthreads(); 
# 184
if (((((thid < graph_size1) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 185
{ 
# 186
if ((g_sink_weight[thid]) > 0) 
# 187
{ 
# 188
(g_height_write[thid]) = 1; 
# 189
} else 
# 191
{ 
# 192
int min_height = graph_size; 
# 193
((min_flow_pushed > 0) && (min_height > ((height_fn)[temp_mult - 1]))) ? (min_height = ((height_fn)[temp_mult - 1])) : 0; 
# 194
(((g_right_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 1]))) ? (min_height = ((height_fn)[temp_mult + 1])) : 0; 
# 195
(((g_down_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 34]))) ? (min_height = ((height_fn)[temp_mult + 34])) : 0; 
# 196
(((g_up_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult - 34]))) ? (min_height = ((height_fn)[temp_mult - 34])) : 0; 
# 197
(g_height_write[thid]) = (min_height + 1); 
# 198
}  
# 199
}  
# 201
} 
#endif
# 205 "CudaCuts_kernel.cu"
void kernel_relabel_stochastic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 206
g_sink_weight, int *g_push_reser, int *
# 207
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 208
graph_size, int width, int rows, int graph_size1, int width1, int rows1, int *d_stochastic, int *g_block_num) ;
#if 0
# 209
{ 
# 210
int x1 = (threadIdx.x); 
# 211
int y1 = (threadIdx.y); 
# 212
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 213
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 214
int thid = (__umul24(y, width1) + x); 
# 216
__attribute__((unused)) static int height_fn[356]; 
# 219
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 221
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 223
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 224
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 225
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 226
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 228
__syncthreads(); 
# 231
int min_flow_pushed = (g_left_weight[thid]); 
# 232
int flow_push = (g_push_reser[thid]); 
# 234
if ((flow_push <= 0) || ((((((g_left_weight[thid]) == 0) && ((g_right_weight[thid]) == 0)) && ((g_down_weight[thid]) == 0)) && ((g_up_weight[thid]) == 0)) && ((g_sink_weight[thid]) == 0))) { 
# 235
(g_relabel_mask[thid]) = 2; } else 
# 237
{ 
# 238
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && ((g_left_weight[thid]) > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 239
}  
# 242
__syncthreads(); 
# 244
if (((((thid < graph_size1) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 245
{ 
# 246
if ((g_sink_weight[thid]) > 0) 
# 247
{ 
# 248
(g_height_write[thid]) = 1; 
# 249
} else 
# 251
{ 
# 252
int min_height = graph_size; 
# 253
((min_flow_pushed > 0) && (min_height > ((height_fn)[temp_mult - 1]))) ? (min_height = ((height_fn)[temp_mult - 1])) : 0; 
# 254
(((g_right_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 1]))) ? (min_height = ((height_fn)[temp_mult + 1])) : 0; 
# 255
(((g_down_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 34]))) ? (min_height = ((height_fn)[temp_mult + 34])) : 0; 
# 256
(((g_up_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult - 34]))) ? (min_height = ((height_fn)[temp_mult - 34])) : 0; 
# 257
(g_height_write[thid]) = (min_height + 1); 
# 258
}  
# 259
}  
# 261
} 
#endif
# 272 "CudaCuts_kernel.cu"
void kernel_push2_atomic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 273
g_sink_weight, int *g_push_reser, int *g_pull_left, int *g_pull_right, int *g_pull_down, int *g_pull_up, int *
# 274
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 275
graph_size, int width, int rows, int graph_size1, int width1, int rows1) ;
#if 0
# 276
{ 
# 277
int x1 = (threadIdx.x); 
# 278
int y1 = (threadIdx.y); 
# 279
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 280
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 281
int thid = (__umul24(y, width1) + x); 
# 283
__attribute__((unused)) static int height_fn[356]; 
# 286
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 288
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 290
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 291
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 292
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 293
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 295
__syncthreads(); 
# 297
int flow_push = 0, min_flow_pushed = 0; 
# 298
flow_push = (g_push_reser[thid]); 
# 301
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 302
{ 
# 304
int temp_weight = 0; 
# 307
temp_weight = (g_sink_weight[thid]); 
# 308
min_flow_pushed = flow_push; 
# 310
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 311
{ 
# 312
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 313
temp_weight = (temp_weight - min_flow_pushed); 
# 314
(g_sink_weight[thid]) = temp_weight; 
# 315
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 316
}  
# 319
flow_push = (g_push_reser[thid]); 
# 321
min_flow_pushed = flow_push; 
# 323
temp_weight = (g_left_weight[thid]); 
# 325
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 326
{ 
# 327
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 328
temp_weight = (temp_weight - min_flow_pushed); 
# 329
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 330
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 331
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 332
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 334
} else { atomicSub(&(g_pull_left[thid - 1]), 1); }  
# 336
flow_push = (g_push_reser[thid]); 
# 337
min_flow_pushed = flow_push; 
# 338
temp_weight = (g_up_weight[thid]); 
# 340
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 341
{ 
# 342
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 343
temp_weight = (temp_weight - min_flow_pushed); 
# 345
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 346
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 347
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 348
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 350
} else { atomicSub(&(g_pull_up[thid - width1]), 1); }  
# 353
flow_push = (g_push_reser[thid]); 
# 354
min_flow_pushed = flow_push; 
# 355
temp_weight = (g_right_weight[thid]); 
# 357
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 358
{ 
# 359
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 360
temp_weight = (temp_weight - min_flow_pushed); 
# 361
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 362
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 363
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 364
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 365
} else { atomicSub(&(g_pull_right[thid + 1]), 1); }  
# 368
flow_push = (g_push_reser[thid]); 
# 370
min_flow_pushed = flow_push; 
# 371
temp_weight = (g_down_weight[thid]); 
# 374
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 375
{ 
# 376
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 377
temp_weight = (temp_weight - min_flow_pushed); 
# 378
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 379
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 380
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 381
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 382
} else { atomicSub(&(g_pull_down[thid + width1]), 1); }  
# 383
}  
# 385
__syncthreads(); 
# 386
min_flow_pushed = (g_left_weight[thid]); 
# 387
flow_push = (g_push_reser[thid]); 
# 389
if ((flow_push <= 0) || ((((((g_left_weight[thid]) == 0) && ((g_right_weight[thid]) == 0)) && ((g_down_weight[thid]) == 0)) && ((g_up_weight[thid]) == 0)) && ((g_sink_weight[thid]) == 0))) { 
# 390
(g_relabel_mask[thid]) = 2; } else 
# 392
{ 
# 393
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && ((g_left_weight[thid]) > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 394
}  
# 399
__syncthreads(); 
# 402
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 403
{ 
# 404
int temp_weight = 0; 
# 407
temp_weight = (g_sink_weight[thid]); 
# 408
min_flow_pushed = flow_push; 
# 410
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 411
{ 
# 412
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 413
temp_weight = (temp_weight - min_flow_pushed); 
# 414
(g_sink_weight[thid]) = temp_weight; 
# 415
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 416
}  
# 419
flow_push = (g_push_reser[thid]); 
# 421
min_flow_pushed = flow_push; 
# 423
temp_weight = (g_left_weight[thid]); 
# 425
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 426
{ 
# 427
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 428
temp_weight = (temp_weight - min_flow_pushed); 
# 429
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 430
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 431
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 432
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 434
} else { atomicSub(&(g_pull_left[thid - 1]), 1); }  
# 436
flow_push = (g_push_reser[thid]); 
# 437
min_flow_pushed = flow_push; 
# 438
temp_weight = (g_up_weight[thid]); 
# 440
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 441
{ 
# 442
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 443
temp_weight = (temp_weight - min_flow_pushed); 
# 445
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 446
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 447
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 448
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 450
} else { atomicSub(&(g_pull_up[thid - width1]), 1); }  
# 453
flow_push = (g_push_reser[thid]); 
# 454
min_flow_pushed = flow_push; 
# 455
temp_weight = (g_right_weight[thid]); 
# 457
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 458
{ 
# 459
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 460
temp_weight = (temp_weight - min_flow_pushed); 
# 461
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 462
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 463
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 464
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 465
} else { atomicSub(&(g_pull_right[thid + 1]), 1); }  
# 468
flow_push = (g_push_reser[thid]); 
# 470
min_flow_pushed = flow_push; 
# 471
temp_weight = (g_down_weight[thid]); 
# 474
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 475
{ 
# 476
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 477
temp_weight = (temp_weight - min_flow_pushed); 
# 478
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 479
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 480
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 481
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 482
} else { atomicSub(&(g_pull_down[thid + width1]), 1); }  
# 483
}  
# 484
} 
#endif
# 487 "CudaCuts_kernel.cu"
void kernel_End(int *g_stochastic, int *g_count_blocks, int *g_counter) ;
#if 0
# 488
{ 
# 489
int thid = (((blockIdx.x) * (blockDim.x)) + (threadIdx.x)); 
# 490
if (thid < (*g_counter)) 
# 491
{ 
# 492
if ((g_stochastic[thid]) == 1) { 
# 493
atomicAdd(g_count_blocks, 1); }  
# 495
}  
# 496
} 
#endif
# 515 "CudaCuts_kernel.cu"
void kernel_push1_start_atomic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 516
g_sink_weight, int *g_push_reser, int *
# 517
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 518
graph_size, int width, int rows, int graph_size1, int width1, int rows1, int *d_relabel, int *d_stochastic, int *d_counter, bool *d_finish) ;
#if 0
# 519
{ 
# 520
int x1 = (threadIdx.x); 
# 521
int y1 = (threadIdx.y); 
# 522
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 523
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 524
int thid = (__umul24(y, width1) + x); 
# 526
__attribute__((unused)) static int height_fn[356]; 
# 529
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 531
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 533
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 534
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 535
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 536
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 538
__syncthreads(); 
# 540
int flow_push = 0, min_flow_pushed = 0; 
# 541
flow_push = (g_push_reser[thid]); 
# 544
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 545
{ 
# 546
int temp_weight = 0; 
# 549
temp_weight = (g_sink_weight[thid]); 
# 550
min_flow_pushed = flow_push; 
# 552
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 553
{ 
# 554
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 555
temp_weight = (temp_weight - min_flow_pushed); 
# 556
(g_sink_weight[thid]) = temp_weight; 
# 557
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 559
flow_push = (flow_push - min_flow_pushed); 
# 560
}  
# 564
}  
# 567
__syncthreads(); 
# 568
min_flow_pushed = (g_left_weight[thid]); 
# 570
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && (min_flow_pushed > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 574
if (((((thid < graph_size1) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 575
{ 
# 576
if ((g_sink_weight[thid]) > 0) 
# 577
{ 
# 578
(g_height_write[thid]) = 1; 
# 579
} else 
# 581
{ 
# 582
int min_height = graph_size; 
# 583
((min_flow_pushed > 0) && (min_height > ((height_fn)[temp_mult - 1]))) ? (min_height = ((height_fn)[temp_mult - 1])) : 0; 
# 584
(((g_right_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 1]))) ? (min_height = ((height_fn)[temp_mult + 1])) : 0; 
# 585
(((g_down_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 34]))) ? (min_height = ((height_fn)[temp_mult + 34])) : 0; 
# 586
(((g_up_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult - 34]))) ? (min_height = ((height_fn)[temp_mult - 34])) : 0; 
# 587
(g_height_write[thid]) = (min_height + 1); 
# 588
}  
# 589
}  
# 591
} 
#endif
# 596 "CudaCuts_kernel.cu"
void kernel_push1_stochastic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 597
g_sink_weight, int *g_push_reser, int *
# 598
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 599
graph_size, int width, int rows, int graph_size1, int width1, int rows1, int *d_stochastic, int *g_block_num) ;
#if 0
# 600
{ 
# 601
if ((d_stochastic[((blockIdx.y) * (*g_block_num)) + (blockIdx.x)]) == 1) 
# 602
{ 
# 603
int x1 = (threadIdx.x); 
# 604
int y1 = (threadIdx.y); 
# 605
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 606
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 607
int thid = (__umul24(y, width1) + x); 
# 609
__attribute__((unused)) static int height_fn[356]; 
# 611
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 613
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 615
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 616
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 617
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 618
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 620
__syncthreads(); 
# 622
int flow_push = 0, min_flow_pushed = 0; 
# 623
flow_push = (g_push_reser[thid]); 
# 626
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 627
{ 
# 628
int temp_weight = 0; 
# 631
temp_weight = (g_sink_weight[thid]); 
# 632
min_flow_pushed = flow_push; 
# 634
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 635
{ 
# 636
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 637
temp_weight = (temp_weight - min_flow_pushed); 
# 638
(g_sink_weight[thid]) = temp_weight; 
# 639
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 640
}  
# 643
flow_push = (g_push_reser[thid]); 
# 645
min_flow_pushed = flow_push; 
# 647
temp_weight = (g_left_weight[thid]); 
# 649
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 650
{ 
# 651
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 652
temp_weight = (temp_weight - min_flow_pushed); 
# 653
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 654
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 655
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 656
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 658
}  
# 662
flow_push = (g_push_reser[thid]); 
# 663
min_flow_pushed = flow_push; 
# 664
temp_weight = (g_up_weight[thid]); 
# 666
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 667
{ 
# 668
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 669
temp_weight = (temp_weight - min_flow_pushed); 
# 671
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 672
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 673
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 674
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 676
}  
# 679
flow_push = (g_push_reser[thid]); 
# 680
min_flow_pushed = flow_push; 
# 681
temp_weight = (g_right_weight[thid]); 
# 683
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 684
{ 
# 685
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 686
temp_weight = (temp_weight - min_flow_pushed); 
# 687
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 688
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 689
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 690
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 691
}  
# 694
flow_push = (g_push_reser[thid]); 
# 696
min_flow_pushed = flow_push; 
# 697
temp_weight = (g_down_weight[thid]); 
# 700
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 701
{ 
# 702
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 703
temp_weight = (temp_weight - min_flow_pushed); 
# 704
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 705
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 706
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 707
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 708
}  
# 709
}  
# 710
}  
# 712
} 
#endif
# 717 "CudaCuts_kernel.cu"
void kernel_push2_stochastic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 718
g_sink_weight, int *g_push_reser, int *g_pull_left, int *g_pull_right, int *g_pull_down, int *g_pull_up, int *
# 719
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 720
graph_size, int width, int rows, int graph_size1, int width1, int rows1, int *d_relabel, int *d_stochastic, int *d_counter, bool *d_finish, int *g_block_num) ;
#if 0
# 721
{ 
# 722
if ((d_stochastic[((blockIdx.y) * (*g_block_num)) + (blockIdx.x)]) == 1) 
# 723
{ 
# 724
int x1 = (threadIdx.x); 
# 725
int y1 = (threadIdx.y); 
# 726
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 727
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 728
int thid = (__umul24(y, width1) + x); 
# 730
__attribute__((unused)) static int height_fn[356]; 
# 733
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 735
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 737
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 738
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 739
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 740
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 742
__syncthreads(); 
# 744
int flow_push = 0, min_flow_pushed = 0; 
# 745
flow_push = (g_push_reser[thid]); 
# 748
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 749
{ 
# 750
int temp_weight = 0; 
# 753
temp_weight = (g_sink_weight[thid]); 
# 754
min_flow_pushed = flow_push; 
# 756
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 757
{ 
# 758
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 759
temp_weight = (temp_weight - min_flow_pushed); 
# 760
(g_sink_weight[thid]) = temp_weight; 
# 761
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 762
}  
# 765
flow_push = (g_push_reser[thid]); 
# 767
min_flow_pushed = flow_push; 
# 769
temp_weight = (g_left_weight[thid]); 
# 771
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 772
{ 
# 773
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 774
temp_weight = (temp_weight - min_flow_pushed); 
# 775
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 776
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 777
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 778
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 780
} else { atomicSub(&(g_pull_left[thid - 1]), 1); }  
# 784
flow_push = (g_push_reser[thid]); 
# 785
min_flow_pushed = flow_push; 
# 786
temp_weight = (g_up_weight[thid]); 
# 788
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 789
{ 
# 790
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 791
temp_weight = (temp_weight - min_flow_pushed); 
# 793
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 794
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 795
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 796
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 798
} else { atomicSub(&(g_pull_up[thid - width1]), 1); }  
# 801
flow_push = (g_push_reser[thid]); 
# 802
min_flow_pushed = flow_push; 
# 803
temp_weight = (g_right_weight[thid]); 
# 805
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 806
{ 
# 807
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 808
temp_weight = (temp_weight - min_flow_pushed); 
# 809
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 810
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 811
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 812
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 813
} else { atomicSub(&(g_pull_right[thid + 1]), 1); }  
# 816
flow_push = (g_push_reser[thid]); 
# 818
min_flow_pushed = flow_push; 
# 819
temp_weight = (g_down_weight[thid]); 
# 822
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 823
{ 
# 824
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 825
temp_weight = (temp_weight - min_flow_pushed); 
# 826
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 827
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 828
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 829
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 830
} else { atomicSub(&(g_pull_down[thid + width1]), 1); }  
# 831
}  
# 834
__syncthreads(); 
# 835
min_flow_pushed = (g_left_weight[thid]); 
# 836
flow_push = (g_push_reser[thid]); 
# 838
if ((flow_push <= 0) || ((((((g_left_weight[thid]) == 0) && ((g_right_weight[thid]) == 0)) && ((g_down_weight[thid]) == 0)) && ((g_up_weight[thid]) == 0)) && ((g_sink_weight[thid]) == 0))) { 
# 839
(g_relabel_mask[thid]) = 2; } else 
# 841
{ 
# 842
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && ((g_left_weight[thid]) > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 843
}  
# 848
__syncthreads(); 
# 853
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 854
{ 
# 855
int temp_weight = 0; 
# 858
temp_weight = (g_sink_weight[thid]); 
# 859
min_flow_pushed = flow_push; 
# 861
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 862
{ 
# 863
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 864
temp_weight = (temp_weight - min_flow_pushed); 
# 865
(g_sink_weight[thid]) = temp_weight; 
# 866
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 867
}  
# 870
flow_push = (g_push_reser[thid]); 
# 872
min_flow_pushed = flow_push; 
# 874
temp_weight = (g_left_weight[thid]); 
# 876
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1))) 
# 877
{ 
# 878
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 879
temp_weight = (temp_weight - min_flow_pushed); 
# 880
atomicSub(&(g_left_weight[thid]), min_flow_pushed); 
# 881
atomicAdd(&(g_right_weight[thid - 1]), min_flow_pushed); 
# 882
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 883
atomicAdd(&(g_push_reser[thid - 1]), min_flow_pushed); 
# 885
} else { atomicSub(&(g_pull_left[thid - 1]), 1); }  
# 889
flow_push = (g_push_reser[thid]); 
# 890
min_flow_pushed = flow_push; 
# 891
temp_weight = (g_up_weight[thid]); 
# 893
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1))) 
# 894
{ 
# 895
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 896
temp_weight = (temp_weight - min_flow_pushed); 
# 898
atomicSub(&(g_up_weight[thid]), min_flow_pushed); 
# 899
atomicAdd(&(g_down_weight[thid - width1]), min_flow_pushed); 
# 900
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 901
atomicAdd(&(g_push_reser[thid - width1]), min_flow_pushed); 
# 903
} else { atomicSub(&(g_pull_up[thid - width1]), 1); }  
# 906
flow_push = (g_push_reser[thid]); 
# 907
min_flow_pushed = flow_push; 
# 908
temp_weight = (g_right_weight[thid]); 
# 910
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1))) 
# 911
{ 
# 912
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 913
temp_weight = (temp_weight - min_flow_pushed); 
# 914
atomicSub(&(g_right_weight[thid]), min_flow_pushed); 
# 915
atomicAdd(&(g_left_weight[thid + 1]), min_flow_pushed); 
# 916
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 917
atomicAdd(&(g_push_reser[thid + 1]), min_flow_pushed); 
# 918
} else { atomicSub(&(g_pull_right[thid + 1]), 1); }  
# 921
flow_push = (g_push_reser[thid]); 
# 923
min_flow_pushed = flow_push; 
# 924
temp_weight = (g_down_weight[thid]); 
# 927
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1))) 
# 928
{ 
# 929
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 930
temp_weight = (temp_weight - min_flow_pushed); 
# 931
atomicSub(&(g_down_weight[thid]), min_flow_pushed); 
# 932
atomicAdd(&(g_up_weight[thid + width1]), min_flow_pushed); 
# 933
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 934
atomicAdd(&(g_push_reser[thid + width1]), min_flow_pushed); 
# 935
} else { atomicSub(&(g_pull_down[thid + width1]), 1); }  
# 936
}  
# 940
}  
# 941
} 
#endif
# 949 "CudaCuts_kernel.cu"
void kernel_bfs_t(int *g_push_reser, int *g_sink_weight, int *g_graph_height, bool *g_pixel_mask, int 
# 950
vertex_num, int width, int height, int vertex_num1, int width1, int height1) ;
#if 0
# 951
{ 
# 953
int thid = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 955
if ((thid < vertex_num) && ((g_pixel_mask[thid]) == (true))) 
# 956
{ 
# 957
int col = (thid % width1), row = (thid / width1); 
# 959
if (((((col > 0) && (row > 0)) && (col < (width - 1))) && (row < (height - 1))) && ((g_push_reser[thid]) > 0)) 
# 960
{ 
# 961
(g_graph_height[thid]) = 1; 
# 962
(g_pixel_mask[thid]) = false; 
# 963
} else { 
# 965
if ((g_sink_weight[thid]) > 0) 
# 966
{ 
# 967
(g_graph_height[thid]) = (-1); 
# 968
(g_pixel_mask[thid]) = false; 
# 969
}  }  
# 970
}  
# 971
} 
#endif
# 976 "CudaCuts_kernel.cu"
void kernel_push_stochastic1(int *g_push_reser, int *s_push_reser, int *g_count_blocks, bool *g_finish, int *g_block_num, int width1) ;
#if 0
# 977
{ 
# 978
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 979
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 980
int thid = (__umul24(y, width1) + x); 
# 982
(s_push_reser[thid]) = (g_push_reser[thid]); 
# 984
if (thid == 0) 
# 985
{ 
# 986
if ((*g_count_blocks) == 0) { 
# 987
(*g_finish) = false; }  
# 988
}  
# 989
} 
#endif
# 993 "CudaCuts_kernel.cu"
void kernel_push_atomic2(int *g_terminate, int *g_push_reser, int *s_push_reser, int *g_block_num, int width1) ;
#if 0
# 994
{ 
# 996
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 997
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 998
int thid = (__umul24(y, width1) + x); 
# 1000
if (((s_push_reser[thid]) - (g_push_reser[thid])) != 0) 
# 1001
{ 
# 1002
(g_terminate[((blockIdx.y) * (*g_block_num)) + (blockIdx.x)]) = 1; 
# 1003
}  
# 1005
} 
#endif
# 1010 "CudaCuts_kernel.cu"
void kernel_push_stochastic2(int *g_terminate, int *g_relabel_mask, int *g_push_reser, int *s_push_reser, int *d_stochastic, int *g_block_num, int width1) ;
#if 0
# 1011
{ 
# 1013
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 1014
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 1015
int thid = (__umul24(y, width1) + x); 
# 1017
if (((s_push_reser[thid]) - (g_push_reser[thid])) != 0) 
# 1018
{ 
# 1019
(g_terminate[((blockIdx.y) * (*g_block_num)) + (blockIdx.x)]) = 1; 
# 1020
}  
# 1022
if ((g_relabel_mask[thid]) == 1) 
# 1023
{ 
# 1024
(d_stochastic[((blockIdx.y) * (*g_block_num)) + (blockIdx.x)]) = 1; 
# 1025
}  
# 1027
} 
#endif
# 1032 "CudaCuts_kernel.cu"
void kernel_push1_start_stochastic(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 1033
g_sink_weight, int *g_push_reser, int *
# 1034
g_relabel_mask, int *g_graph_height, int *g_height_write, int 
# 1035
graph_size, int width, int rows, int graph_size1, int width1, int rows1, int *d_relabel, int *d_stochastic, int *d_counter, bool *d_finish) ;
#if 0
# 1036
{ 
# 1037
int x1 = (threadIdx.x); 
# 1038
int y1 = (threadIdx.y); 
# 1039
int x = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 1040
int y = (__umul24(blockIdx.y, blockDim.y) + (threadIdx.y)); 
# 1041
int thid = (__umul24(y, width1) + x); 
# 1043
__attribute__((unused)) static int height_fn[356]; 
# 1046
int temp_mult = ((__umul24(y1 + 1, 34) + x1) + (1)), temp_mult1 = (__umul24(y1, 32) + x1); 
# 1048
((height_fn)[temp_mult]) = (g_graph_height[thid]); 
# 1050
(((threadIdx.x) == (31)) && (x < (width1 - 1))) ? (((height_fn)[temp_mult + 1]) = (g_graph_height[thid + 1])) : 0; 
# 1051
(((threadIdx.x) == (0)) && (x > 0)) ? (((height_fn)[temp_mult - 1]) = (g_graph_height[thid - 1])) : 0; 
# 1052
(((threadIdx.y) == (7)) && (y < (rows1 - 1))) ? (((height_fn)[temp_mult + 34]) = (g_graph_height[thid + width1])) : 0; 
# 1053
(((threadIdx.y) == (0)) && (y > 0)) ? (((height_fn)[temp_mult - 34]) = (g_graph_height[thid - width1])) : 0; 
# 1055
__syncthreads(); 
# 1057
int flow_push = 0, min_flow_pushed = 0; 
# 1058
flow_push = (g_push_reser[thid]); 
# 1061
if ((((((thid < graph_size1) && ((g_relabel_mask[thid]) == 1)) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 1062
{ 
# 1063
int temp_weight = 0; 
# 1066
temp_weight = (g_sink_weight[thid]); 
# 1067
min_flow_pushed = flow_push; 
# 1069
if (((temp_weight > 0) && (flow_push > 0)) && (((height_fn)[temp_mult]) == 1)) 
# 1070
{ 
# 1071
(temp_weight < flow_push) ? (min_flow_pushed = temp_weight) : 0; 
# 1072
temp_weight = (temp_weight - min_flow_pushed); 
# 1073
(g_sink_weight[thid]) = temp_weight; 
# 1074
atomicSub(&(g_push_reser[thid]), min_flow_pushed); 
# 1076
flow_push = (flow_push - min_flow_pushed); 
# 1077
}  
# 1081
}  
# 1084
__syncthreads(); 
# 1085
min_flow_pushed = (g_left_weight[thid]); 
# 1087
((flow_push > 0) && ((((((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 1]) + 1)) && (min_flow_pushed > 0)) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 1]) + 1)) && ((g_right_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult + 34]) + 1)) && ((g_down_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == (((height_fn)[temp_mult - 34]) + 1)) && ((g_up_weight[thid]) > 0))) || ((((height_fn)[temp_mult]) == 1) && ((g_sink_weight[thid]) > 0)))) ? ((g_relabel_mask[thid]) = 1) : ((g_relabel_mask[thid]) = 0); 
# 1091
if (((((thid < graph_size1) && (x < (width - 1))) && (x > 0)) && (y < (rows - 1))) && (y > 0)) 
# 1092
{ 
# 1093
if ((g_sink_weight[thid]) > 0) 
# 1094
{ 
# 1095
(g_height_write[thid]) = 1; 
# 1096
} else 
# 1098
{ 
# 1099
int min_height = graph_size; 
# 1100
((min_flow_pushed > 0) && (min_height > ((height_fn)[temp_mult - 1]))) ? (min_height = ((height_fn)[temp_mult - 1])) : 0; 
# 1101
(((g_right_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 1]))) ? (min_height = ((height_fn)[temp_mult + 1])) : 0; 
# 1102
(((g_down_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult + 34]))) ? (min_height = ((height_fn)[temp_mult + 34])) : 0; 
# 1103
(((g_up_weight[thid]) > 0) && (min_height > ((height_fn)[temp_mult - 34]))) ? (min_height = ((height_fn)[temp_mult - 34])) : 0; 
# 1104
(g_height_write[thid]) = (min_height + 1); 
# 1105
}  
# 1106
}  
# 1108
} 
#endif
# 1113 "CudaCuts_kernel.cu"
void kernel_bfs(int *g_left_weight, int *g_right_weight, int *g_down_weight, int *g_up_weight, int *
# 1114
g_graph_height, bool *g_pixel_mask, int vertex_num, int width, int height, int 
# 1115
vertex_num1, int width1, int height1, bool *g_over, int *g_counter) ;
#if 0
# 1116
{ 
# 1121
int thid = (__umul24(blockIdx.x, blockDim.x) + (threadIdx.x)); 
# 1123
if ((thid < vertex_num) && ((g_pixel_mask[thid]) == (true))) 
# 1124
{ 
# 1125
int col = (thid % width1), row = (thid / width1); 
# 1127
if ((((col < (width - 1)) && (col > 0)) && (row < (height - 1))) && (row > 0)) 
# 1128
{ 
# 1129
int height_l = 0, height_d = 0, height_u = 0, height_r = 0; 
# 1130
height_r = (g_graph_height[thid + 1]); 
# 1131
height_l = (g_graph_height[thid - 1]); 
# 1132
height_d = (g_graph_height[thid + width1]); 
# 1133
height_u = (g_graph_height[thid - width1]); 
# 1135
if (((height_l == (*g_counter)) && ((g_right_weight[thid - 1]) > 0)) || ((((height_d == (*g_counter)) && ((g_up_weight[thid + width1]) > 0)) || ((height_r == (*g_counter)) && ((g_left_weight[thid + 1]) > 0))) || ((height_u == (*g_counter)) && ((g_down_weight[thid - width1]) > 0)))) 
# 1136
{ 
# 1137
(g_graph_height[thid]) = ((*g_counter) + 1); 
# 1138
(g_pixel_mask[thid]) = false; 
# 1139
(*g_over) = true; 
# 1140
}  
# 1141
}  
# 1142
}  
# 1143
} 
#endif
# 1152 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_edge(int from, int to, int cap, int rev_cap, int type, int *d_left_weight, int *
# 1153
d_right_weight, int *d_down_weight, int *d_up_weight) 
# 1154
{int volatile ___ = 1;
# 1175
exit(___);}
#if 0
# 1154
{ 
# 1155
if (type == 1) 
# 1156
{ 
# 1157
(d_left_weight[from]) = ((d_left_weight[from]) + cap); 
# 1158
(d_right_weight[to]) = ((d_right_weight[to]) + rev_cap); 
# 1159
}  
# 1160
if (type == 2) 
# 1161
{ 
# 1162
(d_right_weight[from]) = ((d_right_weight[from]) + cap); 
# 1163
(d_left_weight[to]) = ((d_left_weight[to]) + rev_cap); 
# 1164
}  
# 1165
if (type == 3) 
# 1166
{ 
# 1167
(d_down_weight[from]) = ((d_down_weight[from]) + cap); 
# 1168
(d_up_weight[to]) = ((d_up_weight[to]) + rev_cap); 
# 1169
}  
# 1170
if (type == 4) 
# 1171
{ 
# 1172
(d_up_weight[from]) = ((d_up_weight[from]) + cap); 
# 1173
(d_down_weight[to]) = ((d_down_weight[to]) + cap); 
# 1174
}  
# 1175
} 
#endif
# 1178 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_tweights(int i, int cap_source, int cap_sink, int *d_push_reser, int *d_sink_weight) 
# 1179
{int volatile ___ = 1;
# 1190
exit(___);}
#if 0
# 1179
{ 
# 1180
int diff = (cap_source - cap_sink); 
# 1182
if (diff > 0) 
# 1183
{ 
# 1184
(d_push_reser[i]) = ((d_push_reser[i]) + diff); 
# 1185
} else 
# 1187
{ 
# 1188
(d_sink_weight[i]) = ((d_sink_weight[i]) - diff); 
# 1189
}  
# 1190
} 
#endif
# 1193 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_term1(int i, int A, int B, int *d_push_reser, int *d_sink_weight) 
# 1194
{int volatile ___ = 1;
# 1196
exit(___);}
#if 0
# 1194
{ 
# 1195
add_tweights(i, B, A, d_push_reser, d_sink_weight); 
# 1196
} 
#endif
# 1199 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_t_links_Cue(int alpha_label, int thid, int *d_left_weight, int *d_right_weight, int *
# 1200
d_down_weight, int *d_up_weight, int *d_push_reser, int *d_sink_weight, int *
# 1201
dPixelLabel, int *dDataTerm, int width, int height, int num_labels) 
# 1202
{int volatile ___ = 1;
# 1208
exit(___);}
#if 0
# 1202
{ 
# 1203
{ 
# 1204
if ((dPixelLabel[thid]) != alpha_label) { 
# 1205
add_term1(thid, dDataTerm[(thid * num_labels) + alpha_label], dDataTerm[(thid * num_labels) + (dPixelLabel[thid])], d_push_reser, d_sink_weight); 
# 1206
}  
# 1207
} 
# 1208
} 
#endif
# 1212 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_t_links(int alpha_label, int thid, int *d_left_weight, int *d_right_weight, int *
# 1213
d_down_weight, int *d_up_weight, int *d_push_reser, int *d_sink_weight, int *
# 1214
dPixelLabel, int *dDataTerm, int width, int height, int num_labels) 
# 1215
{int volatile ___ = 1;
# 1221
exit(___);}
#if 0
# 1215
{ 
# 1216
{ 
# 1217
if ((dPixelLabel[thid]) != alpha_label) { 
# 1218
add_term1(thid, dDataTerm[(thid * num_labels) + alpha_label], dDataTerm[(thid * num_labels) + (dPixelLabel[thid])], d_push_reser, d_sink_weight); 
# 1219
}  
# 1220
} 
# 1221
} 
#endif
# 1226 "CudaCuts_kernel.cu"
__attribute__((unused)) void add_term2(int x, int y, int A, int B, int C, int D, int type, int *d_left_weight, int *
# 1227
d_right_weight, int *d_down_weight, int *d_up_weight, int *d_push_reser, int *d_sink_weight) 
# 1228
{int volatile ___ = 1;
# 1264
exit(___);}
#if 0
# 1228
{ 
# 1229
if ((A + D) > (C + B)) { 
# 1230
int delta = (((A + D) - C) - B); 
# 1231
int subtrA = (delta / 3); 
# 1233
A = (A - subtrA); 
# 1234
C = (C + subtrA); 
# 1235
B = (B + (delta - (subtrA * 2))); 
# 1239
}  
# 1244
add_tweights(x, D, A, d_push_reser, d_sink_weight); 
# 1246
B -= A; C -= D; 
# 1248
if (B < 0) 
# 1249
{ 
# 1250
add_tweights(x, 0, B, d_push_reser, d_sink_weight); 
# 1251
add_tweights(y, 0, -B, d_push_reser, d_sink_weight); 
# 1252
add_edge(x, y, 0, B + C, type, d_left_weight, d_right_weight, d_down_weight, d_up_weight); 
# 1253
} else { 
# 1254
if (C < 0) 
# 1255
{ 
# 1256
add_tweights(x, 0, -C, d_push_reser, d_sink_weight); 
# 1257
add_tweights(y, 0, C, d_push_reser, d_sink_weight); 
# 1258
add_edge(x, y, B + C, 0, type, d_left_weight, d_right_weight, d_down_weight, d_up_weight); 
# 1259
} else 
# 1261
{ 
# 1262
add_edge(x, y, B, C, type, d_left_weight, d_right_weight, d_down_weight, d_up_weight); 
# 1263
}  }  
# 1264
} 
#endif
# 1268 "CudaCuts_kernel.cu"
__attribute__((unused)) void set_up_expansion_energy_G_ARRAY(int alpha_label, int thid, int *d_left_weight, int *d_right_weight, int *
# 1269
d_down_weight, int *d_up_weight, int *d_push_reser, int *
# 1270
d_sink_weight, int *dPixelLabel, int *dDataTerm, int *dSmoothTerm, int 
# 1271
width, int height, int num_labels) 
# 1272
{int volatile ___ = 1;
# 1351
exit(___);}
#if 0
# 1272
{ 
# 1273
int x, y, nPix; 
# 1275
int weight; 
# 1277
int i = thid; 
# 1278
{ 
# 1279
if ((dPixelLabel[i]) != alpha_label) 
# 1280
{ 
# 1281
y = (i / width); 
# 1282
x = (i - (y * width)); 
# 1284
if (x < (width - 1)) 
# 1285
{ 
# 1286
nPix = (i + 1); 
# 1287
weight = 1; 
# 1288
if ((dPixelLabel[nPix]) != alpha_label) 
# 1289
{ 
# 1290
add_term2(i, nPix, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + ((dPixelLabel[nPix]) * num_labels)]) * weight, 2, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight); 
# 1297
} else { 
# 1298
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1302
}  
# 1304
if (y < (height - 1)) 
# 1305
{ 
# 1306
nPix = (i + width); 
# 1307
weight = 1; 
# 1308
if ((dPixelLabel[nPix]) != alpha_label) 
# 1309
{ 
# 1310
add_term2(i, nPix, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + ((dPixelLabel[nPix]) * num_labels)]) * weight, 3, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight); 
# 1319
} else { 
# 1320
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1324
}  
# 1325
if (x > 0) 
# 1326
{ 
# 1327
nPix = (i - 1); 
# 1328
weight = 1; 
# 1329
if ((dPixelLabel[nPix]) == alpha_label) { 
# 1330
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1334
}  
# 1336
if (y > 0) 
# 1337
{ 
# 1338
nPix = (i - width); 
# 1339
weight = 1; 
# 1340
if ((dPixelLabel[nPix]) == alpha_label) 
# 1341
{ 
# 1342
add_term1(i, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); 
# 1347
}  
# 1348
}  
# 1349
}  
# 1350
} 
# 1351
} 
#endif
# 1356 "CudaCuts_kernel.cu"
__attribute__((unused)) void set_up_expansion_energy_G_ARRAY_Cue(int alpha_label, int thid, int *d_left_weight, int *d_right_weight, int *
# 1357
d_down_weight, int *d_up_weight, int *d_push_reser, int *
# 1358
d_sink_weight, int *dPixelLabel, int *dDataTerm, int *dSmoothTerm, int *
# 1359
dHcue, int *dVcue, int width, int height, int num_labels) 
# 1360
{int volatile ___ = 1;
# 1440
exit(___);}
#if 0
# 1360
{ 
# 1361
int x, y, nPix; 
# 1363
int weight; 
# 1365
int i = thid; 
# 1366
{ 
# 1367
if ((dPixelLabel[i]) != alpha_label) 
# 1368
{ 
# 1369
y = (i / width); 
# 1370
x = (i - (y * width)); 
# 1372
if (x < (width - 1)) 
# 1373
{ 
# 1374
nPix = (i + 1); 
# 1375
weight = (dHcue[i]); 
# 1376
if ((dPixelLabel[nPix]) != alpha_label) 
# 1377
{ 
# 1378
add_term2(i, nPix, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + ((dPixelLabel[nPix]) * num_labels)]) * weight, 2, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight); 
# 1385
} else { 
# 1386
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1390
}  
# 1393
if (y < (height - 1)) 
# 1394
{ 
# 1395
nPix = (i + width); 
# 1396
weight = (dVcue[i]); 
# 1397
if ((dPixelLabel[nPix]) != alpha_label) 
# 1398
{ 
# 1399
add_term2(i, nPix, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + ((dPixelLabel[nPix]) * num_labels)]) * weight, 3, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight); 
# 1408
} else { 
# 1409
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1413
}  
# 1414
if (x > 0) 
# 1415
{ 
# 1416
nPix = (i - 1); 
# 1417
weight = (dHcue[nPix]); 
# 1418
if ((dPixelLabel[nPix]) == alpha_label) { 
# 1419
add_term1(i, (dSmoothTerm[alpha_label + ((dPixelLabel[nPix]) * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); }  
# 1423
}  
# 1425
if (y > 0) 
# 1426
{ 
# 1427
nPix = (i - width); 
# 1428
weight = (dVcue[nPix]); 
# 1429
if ((dPixelLabel[nPix]) == alpha_label) 
# 1430
{ 
# 1431
add_term1(i, (dSmoothTerm[alpha_label + (alpha_label * num_labels)]) * weight, (dSmoothTerm[(dPixelLabel[i]) + (alpha_label * num_labels)]) * weight, d_push_reser, d_sink_weight); 
# 1436
}  
# 1437
}  
# 1438
}  
# 1439
} 
# 1440
} 
#endif
# 1445 "CudaCuts_kernel.cu"
void CudaWeightCue(int alpha_label, int *d_left_weight, int *d_right_weight, int *d_down_weight, int *
# 1446
d_up_weight, int *d_push_reser, int *d_sink_weight, int *dPixelLabel, int *
# 1447
dDataTerm, int *dSmoothTerm, int *dHcue, int *dVcue, int width, int height, int num_labels) ;
#if 0
# 1448
{ 
# 1449
int thid = (((blockIdx.x) * (256)) + (threadIdx.x)); 
# 1451
add_t_links_Cue(alpha_label, thid, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, width, height, num_labels); 
# 1453
set_up_expansion_energy_G_ARRAY_Cue(alpha_label, thid, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, dSmoothTerm, dHcue, dVcue, width, height, num_labels); 
# 1454
} 
#endif
# 1458 "CudaCuts_kernel.cu"
void CudaWeight(int alpha_label, int *d_left_weight, int *d_right_weight, int *d_down_weight, int *
# 1459
d_up_weight, int *d_push_reser, int *d_sink_weight, int *dPixelLabel, int *
# 1460
dDataTerm, int *dSmoothTerm, int width, int height, int num_labels) ;
#if 0
# 1461
{ 
# 1462
int thid = (((blockIdx.x) * (256)) + (threadIdx.x)); 
# 1464
add_t_links(alpha_label, thid, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, width, height, num_labels); 
# 1466
set_up_expansion_energy_G_ARRAY(alpha_label, thid, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, dSmoothTerm, width, height, num_labels); 
# 1467
} 
#endif
# 1477 "CudaCuts_kernel.cu"
void adjustedgeweight(int *d_left_weight, int *d_right_weight, int *d_down_weight, int *d_up_weight, int *
# 1478
d_push_reser, int *d_sink_weight, int *temp_left_weight, int *temp_right_weight, int *
# 1479
temp_down_weight, int *temp_up_weight, int *temp_push_reser, int *temp_sink_weight, int 
# 1480
width, int height, int graph_size, int width1, int height1, int graph_size1) ;
#if 0
# 1481
{ 
# 1482
int thid = (((blockIdx.x) * (256)) + (threadIdx.x)); 
# 1484
if (thid < graph_size1) 
# 1485
{ 
# 1486
int row = (thid / width1), col = (thid % width1); 
# 1488
if ((row < height) && (col < width)) 
# 1489
{ 
# 1490
(temp_left_weight[(row * width1) + col]) = (d_left_weight[(row * width) + col]); 
# 1491
(temp_right_weight[(row * width1) + col]) = (d_right_weight[(row * width) + col]); 
# 1492
(temp_down_weight[(row * width1) + col]) = (d_down_weight[(row * width) + col]); 
# 1493
(temp_up_weight[(row * width1) + col]) = (d_up_weight[(row * width) + col]); 
# 1494
(temp_push_reser[(row * width1) + col]) = (d_push_reser[(row * width) + col]); 
# 1495
(temp_sink_weight[(row * width1) + col]) = (d_sink_weight[(row * width) + col]); 
# 1497
} else 
# 1499
{ 
# 1500
(temp_left_weight[(row * width1) + col]) = 0; 
# 1501
(temp_right_weight[(row * width1) + col]) = 0; 
# 1502
(temp_down_weight[(row * width1) + col]) = 0; 
# 1503
(temp_up_weight[(row * width1) + col]) = 0; 
# 1504
(temp_push_reser[(row * width1) + col]) = 0; 
# 1505
(temp_sink_weight[(row * width1) + col]) = 0; 
# 1506
}  
# 1507
}  
# 1508
} 
#endif
# 1517 "CudaCuts_kernel.cu"
void copyedgeweight(int *d_left_weight, int *d_right_weight, int *d_down_weight, int *d_up_weight, int *
# 1518
d_push_reser, int *d_sink_weight, int *temp_left_weight, int *temp_right_weight, int *
# 1519
temp_down_weight, int *temp_up_weight, int *temp_push_reser, int *temp_sink_weight, int *
# 1520
d_pull_left, int *d_pull_right, int *d_pull_down, int *d_pull_up, int *d_relabel_mask, int *
# 1521
d_graph_heightr, int *d_graph_heightw, int width, int height, int graph_size, int width1, int height1, int graph_size1) ;
#if 0
# 1522
{ 
# 1523
int thid = (((blockIdx.x) * (256)) + (threadIdx.x)); 
# 1525
if (thid < graph_size1) 
# 1526
{ 
# 1527
(d_left_weight[thid]) = (temp_left_weight[thid]); 
# 1528
(d_right_weight[thid]) = (temp_right_weight[thid]); 
# 1529
(d_down_weight[thid]) = (temp_down_weight[thid]); 
# 1530
(d_up_weight[thid]) = (temp_up_weight[thid]); 
# 1531
(d_push_reser[thid]) = (temp_push_reser[thid]); 
# 1532
(d_sink_weight[thid]) = (temp_sink_weight[thid]); 
# 1534
(d_pull_left[thid]) = 0; 
# 1535
(d_pull_right[thid]) = 0; 
# 1536
(d_pull_down[thid]) = 0; 
# 1537
(d_pull_up[thid]) = 0; 
# 1538
(d_relabel_mask[thid]) = 0; 
# 1539
(d_graph_heightr[thid]) = 1; 
# 1540
(d_graph_heightw[thid]) = 1; 
# 1542
}  
# 1543
} 
#endif
# 75 "CudaCuts.h"
int cudaCutsInit(int, int, int); 
# 84 "CudaCuts.h"
int checkDevice(); 
# 91 "CudaCuts.h"
void h_mem_init(); 
# 99 "CudaCuts.h"
void d_mem_init(); 
# 107 "CudaCuts.h"
int cudaCutsSetupDataTerm(int *); 
# 115 "CudaCuts.h"
int cudaCutsSetupSmoothTerm(int *); 
# 123 "CudaCuts.h"
int cudaCutsSetupHCue(int *); 
# 124
int cudaCutsSetupVCue(int *); 
# 130 "CudaCuts.h"
int cudaCutsSetupGraph(); 
# 138 "CudaCuts.h"
int cudaCutsAtomicOptimize(); 
# 139
int cudaCutsStochasticOptimize(); 
# 146 "CudaCuts.h"
void cudaCutsStochastic(); 
# 147
void cudaCutsAtomic(); 
# 154 "CudaCuts.h"
void bfsLabeling(); 
# 161 "CudaCuts.h"
int cudaCutsGetResult(); 
# 168 "CudaCuts.h"
void cudaCutsFreeMem(); 
# 175 "CudaCuts.h"
int cudaCutsGetEnergy(); 
# 176
int data_energy(); 
# 177
int smooth_energy(); 
# 187 "CudaCuts.h"
int *d_left_weight, *d_right_weight, *d_down_weight, *d_up_weight, *d_push_reser, *d_sink_weight; 
# 188
int *s_left_weight, *s_right_weight, *s_down_weight, *s_up_weight, *s_push_reser, *s_sink_weight; 
# 189
int *d_pull_left, *d_pull_right, *d_pull_down, *d_pull_up; 
# 191
int *d_stochastic, *d_stochastic_pixel, *d_terminate; 
# 197 "CudaCuts.h"
int *hcue, *vcue, *datacost, *smoothnesscost; 
# 198
int *dataTerm, *smoothTerm, *hCue, *vCue; 
# 199
int *dDataTerm, *dSmoothTerm, *dHcue, *dVcue, *dPixelLabel; 
# 206 "CudaCuts.h"
int *d_relabel_mask, *d_graph_heightr, *d_graph_heightw; 
# 212 "CudaCuts.h"
int graph_size, size_int, width, height, graph_size1, width1, height1, depth, num_Labels; 
# 213
int blocks_x, blocks_y, threads_x, threads_y, num_of_blocks, num_of_threads_per_block; 
# 219 "CudaCuts.h"
int *pixelLabel; 
# 221
bool *d_pixel_mask, h_over, *d_over, *h_pixel_mask; 
# 222
int *d_counter, *h_graph_height; 
# 223
int *h_reset_mem; 
# 224
int cueValues, deviceCheck, deviceCount; 
# 226
int *h_stochastic, *h_stochastic_pixel, *h_relabel_mask; 
# 227
int counter; 
# 41 "CudaCuts.cu"
int cudaCutsInit(int widthGrid, int heightGrid, int labels) 
# 42
{ 
# 43
deviceCount = checkDevice(); 
# 45
printf("No. of devices %d\n", deviceCount); 
# 46
if (deviceCount < 1) { 
# 47
return -1; }  
# 49
int cuda_device = 0; 
# 51
cudaSetDevice(cuda_device); 
# 53
cudaDeviceProp device_properties; 
# 55
{ cudaError err = cudaGetDeviceProperties(&device_properties, cuda_device); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 55, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 57
if ((1 == (device_properties.major)) && ((device_properties.minor) < 1)) { 
# 58
deviceCheck = 2; } else { 
# 60
if ((1 == (device_properties.major)) && ((device_properties.minor) >= 1)) { 
# 61
deviceCheck = 1; } else { 
# 63
deviceCheck = 0; }  }  
# 67
width = widthGrid; 
# 68
height = heightGrid; 
# 69
num_Labels = labels; 
# 71
blocks_x = 1; 
# 72
blocks_y = 1; 
# 73
num_of_blocks = 1; 
# 75
num_of_threads_per_block = 256; 
# 76
threads_x = 32; 
# 77
threads_y = 8; 
# 79
width1 = (threads_x * ((int)ceil(((float)width) / ((float)threads_x)))); 
# 80
height1 = (threads_y * ((int)ceil(((float)height) / ((float)threads_y)))); 
# 82
graph_size = (width * height); 
# 83
graph_size1 = (width1 * height1); 
# 84
size_int = (sizeof(int) * graph_size1); 
# 86
blocks_x = ((int)(ceil)(((float)width1) / ((float)threads_x))); 
# 87
blocks_y = ((int)(ceil)(((float)height1) / ((float)threads_y))); 
# 89
num_of_blocks = ((int)(ceil)(((float)graph_size1) / ((float)num_of_threads_per_block))); 
# 91
h_mem_init(); 
# 92
d_mem_init(); 
# 93
cueValues = 0; 
# 95
return deviceCheck; 
# 97
} 
# 100
int checkDevice() 
# 101
{ 
# 102
int deviceCount; 
# 104
cudaGetDeviceCount(&deviceCount); 
# 106
if (deviceCount == 0) 
# 107
{ 
# 108
return -1; 
# 109
}  
# 112
return deviceCount; 
# 113
} 
# 116
void h_mem_init() 
# 117
{ 
# 118
h_reset_mem = ((int *)malloc(sizeof(int) * graph_size1)); 
# 119
h_graph_height = ((int *)malloc(size_int)); 
# 120
pixelLabel = ((int *)malloc(size_int)); 
# 121
h_pixel_mask = ((bool *)malloc(sizeof(bool) * graph_size1)); 
# 123
for (int i = 0; i < graph_size1; i++) 
# 124
{ 
# 125
(pixelLabel[i]) = 0; 
# 126
(h_graph_height[i]) = 0; 
# 127
}  
# 129
for (int i = 0; i < graph_size1; i++) 
# 130
{ 
# 131
(h_reset_mem[i]) = 0; 
# 132
}  
# 133
} 
# 136
void d_mem_init() 
# 137
{ 
# 138
{ cudaError err = cudaMalloc((void **)(&d_left_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 138, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 139
{ cudaError err = cudaMalloc((void **)(&d_right_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 139, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 140
{ cudaError err = cudaMalloc((void **)(&d_down_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 140, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 141
{ cudaError err = cudaMalloc((void **)(&d_up_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 141, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 142
{ cudaError err = cudaMalloc((void **)(&d_push_reser), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 142, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 143
{ cudaError err = cudaMalloc((void **)(&d_sink_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 143, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 145
{ cudaError err = cudaMalloc((void **)(&s_left_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 145, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 146
{ cudaError err = cudaMalloc((void **)(&s_right_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 146, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 147
{ cudaError err = cudaMalloc((void **)(&s_down_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 147, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 148
{ cudaError err = cudaMalloc((void **)(&s_up_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 148, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 149
{ cudaError err = cudaMalloc((void **)(&s_push_reser), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 149, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 150
{ cudaError err = cudaMalloc((void **)(&s_sink_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 150, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 153
{ cudaError err = cudaMalloc((void **)(&d_stochastic), sizeof(int) * num_of_blocks); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 153, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 154
{ cudaError err = cudaMalloc((void **)(&d_stochastic_pixel), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 154, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 155
{ cudaError err = cudaMalloc((void **)(&d_terminate), sizeof(int) * num_of_blocks); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 155, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 164
{ cudaError err = cudaMalloc((void **)(&d_pull_left), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 164, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 165
{ cudaError err = cudaMalloc((void **)(&d_pull_right), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 165, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 166
{ cudaError err = cudaMalloc((void **)(&d_pull_down), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 166, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 167
{ cudaError err = cudaMalloc((void **)(&d_pull_up), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 167, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 169
{ cudaError err = cudaMalloc((void **)(&d_graph_heightr), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 169, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 170
{ cudaError err = cudaMalloc((void **)(&d_graph_heightw), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 170, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 171
{ cudaError err = cudaMalloc((void **)(&d_relabel_mask), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 171, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 173
{ cudaError err = cudaMalloc((void **)(&d_pixel_mask), sizeof(bool) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 173, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 174
{ cudaError err = cudaMalloc((void **)(&d_over), sizeof(bool) * (1)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 174, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 175
{ cudaError err = cudaMalloc((void **)(&d_counter), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 175, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 177
{ cudaError err = cudaMalloc((void **)(&dPixelLabel), (sizeof(int) * width1) * height1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 177, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 178
{ cudaError err = cudaMemcpy(d_left_weight, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 178, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 179
{ cudaError err = cudaMemcpy(d_right_weight, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 179, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 180
{ cudaError err = cudaMemcpy(d_down_weight, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 180, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 181
{ cudaError err = cudaMemcpy(d_up_weight, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 181, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 182
{ cudaError err = cudaMemcpy(d_push_reser, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 182, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 183
{ cudaError err = cudaMemcpy(d_sink_weight, h_reset_mem, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 183, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 185
{ cudaError err = cudaMalloc((void **)(&d_pull_left), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 185, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 186
{ cudaError err = cudaMalloc((void **)(&d_pull_right), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 186, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 187
{ cudaError err = cudaMalloc((void **)(&d_pull_down), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 187, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 188
{ cudaError err = cudaMalloc((void **)(&d_pull_up), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 188, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 190
h_relabel_mask = ((int *)malloc((sizeof(int) * width1) * height1)); 
# 192
h_stochastic = ((int *)malloc(sizeof(int) * num_of_blocks)); 
# 193
h_stochastic_pixel = ((int *)malloc(sizeof(int) * graph_size1)); 
# 197
for (int i = 0; i < graph_size1; i++) { 
# 198
(h_relabel_mask[i]) = 1; }  
# 201
{ cudaError err = cudaMemcpy(d_relabel_mask, h_relabel_mask, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 201, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 203
int *dpixlab = ((int *)malloc((sizeof(int) * width1) * height1)); 
# 205
for (int i = 0; i < (width1 * height1); i++) 
# 206
{ 
# 207
(dpixlab[i]) = 0; 
# 208
(h_stochastic_pixel[i]) = 1; 
# 209
}  
# 211
for (int i = 0; i < num_of_blocks; i++) 
# 212
{ 
# 213
(h_stochastic[i]) = 1; 
# 214
}  
# 216
{ cudaError err = cudaMemcpy(d_stochastic, h_stochastic, sizeof(int) * num_of_blocks, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 216, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 217
{ cudaError err = cudaMemcpy(d_terminate, h_stochastic, sizeof(int) * num_of_blocks, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 217, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 218
{ cudaError err = cudaMemcpy(d_stochastic_pixel, h_stochastic_pixel, sizeof(int) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 218, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 221
{ cudaError err = cudaMemcpy(dPixelLabel, dpixlab, (sizeof(int) * width1) * height1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 221, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 222
} 
# 225
int cudaCutsSetupDataTerm(int *dataTerm) 
# 226
{ 
# 227
if (deviceCheck < 1) { 
# 228
return -1; }  
# 230
datacost = ((int *)malloc(((sizeof(int) * width) * height) * num_Labels)); 
# 232
{ cudaError err = cudaMalloc((void **)(&dDataTerm), ((sizeof(int) * width) * height) * num_Labels); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 232, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 234
{ cudaError err = cudaMemcpy(dDataTerm, dataTerm, ((sizeof(int) * width) * height) * num_Labels, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 234, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 236
for (int i = 0; i < ((width * height) * num_Labels); i++) 
# 237
{ 
# 238
(datacost[i]) = (dataTerm[i]); 
# 239
}  
# 241
return 0; 
# 242
} 
# 245
int cudaCutsSetupSmoothTerm(int *smoothTerm) 
# 246
{ 
# 247
if (deviceCheck < 1) { 
# 248
return -1; }  
# 251
smoothnesscost = ((int *)malloc((sizeof(int) * num_Labels) * num_Labels)); 
# 253
{ cudaError err = cudaMalloc((void **)(&dSmoothTerm), (sizeof(int) * num_Labels) * num_Labels); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 253, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 255
{ cudaError err = cudaMemcpy(dSmoothTerm, smoothTerm, (sizeof(int) * num_Labels) * num_Labels, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 255, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 257
for (int i = 0; i < (num_Labels * num_Labels); i++) 
# 258
{ 
# 259
(smoothnesscost[i]) = (smoothTerm[i]); 
# 260
}  
# 262
return 0; 
# 263
} 
# 265
int cudaCutsSetupHCue(int *hCue) 
# 266
{ 
# 268
if (deviceCheck < 1) { 
# 269
return -1; }  
# 271
hcue = ((int *)malloc((sizeof(int) * width) * height)); 
# 273
{ cudaError err = cudaMalloc((void **)(&dHcue), (sizeof(int) * width) * height); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 273, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 275
{ cudaError err = cudaMemcpy(dHcue, hCue, (sizeof(int) * width) * height, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 275, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 277
for (int i = 0; i < (width * height); i++) 
# 278
{ 
# 279
(hcue[i]) = (hCue[i]); 
# 280
}  
# 282
cueValues = 1; 
# 284
return 0; 
# 285
} 
# 287
int cudaCutsSetupVCue(int *vCue) 
# 288
{ 
# 289
if (deviceCheck < 1) { 
# 290
return -1; }  
# 292
vcue = ((int *)malloc((sizeof(int) * width) * height)); 
# 294
{ cudaError err = cudaMalloc((void **)(&dVcue), (sizeof(int) * width) * height); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 294, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 296
{ cudaError err = cudaMemcpy(dVcue, vCue, (sizeof(int) * width) * height, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 296, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 298
for (int i = 0; i < (width * height); i++) 
# 299
{ 
# 300
(vcue[i]) = (vCue[i]); 
# 301
}  
# 303
return 0; 
# 304
} 
# 307
int cudaCutsSetupGraph() 
# 308
{ 
# 310
if (deviceCheck < 1) { 
# 311
return -1; }  
# 313
int alpha_label = 1; 
# 315
for (int i = 0; i < graph_size1; i++) 
# 316
{ 
# 317
(h_reset_mem[i]) = 0; 
# 318
(h_graph_height[i]) = 0; 
# 319
}  
# 321
int blockEdge = ((int)(ceil)(((float)(width * height)) / ((float)256))); 
# 322
dim3 block_weight(256, 1, 1); 
# 323
dim3 grid_weight(blockEdge, 1, 1); 
# 325
if (cueValues == 1) 
# 326
{ 
# 327
cudaConfigureCall(grid_weight, block_weight) ? ((void)0) : CudaWeightCue(alpha_label, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, dSmoothTerm, dHcue, dVcue, width, height, 2); 
# 330
} else 
# 331
{ 
# 332
cudaConfigureCall(grid_weight, block_weight) ? ((void)0) : CudaWeight(alpha_label, d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, dPixelLabel, dDataTerm, dSmoothTerm, width, height, 2); 
# 336
}  
# 338
int *temp_left_weight, *temp_right_weight, *temp_down_weight, *temp_up_weight, *temp_source_weight, *temp_terminal_weight; 
# 340
{ cudaError err = cudaMalloc((void **)(&temp_left_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 340, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 341
{ cudaError err = cudaMalloc((void **)(&temp_right_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 341, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 342
{ cudaError err = cudaMalloc((void **)(&temp_down_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 342, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 343
{ cudaError err = cudaMalloc((void **)(&temp_up_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 343, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 344
{ cudaError err = cudaMalloc((void **)(&temp_source_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 344, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 345
{ cudaError err = cudaMalloc((void **)(&temp_terminal_weight), sizeof(int) * graph_size1); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 345, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 347
int blockEdge1 = ((int)(ceil)(((float)(width1 * height1)) / ((float)256))); 
# 348
dim3 block_weight1(256, 1, 1); 
# 349
dim3 grid_weight1(blockEdge1, 1, 1); 
# 351
cudaConfigureCall(grid_weight1, block_weight1) ? ((void)0) : adjustedgeweight(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, temp_left_weight, temp_right_weight, temp_down_weight, temp_up_weight, temp_source_weight, temp_terminal_weight, width, height, graph_size, width1, height1, graph_size1); 
# 356
cudaConfigureCall(grid_weight1, block_weight1) ? ((void)0) : copyedgeweight(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_push_reser, d_sink_weight, temp_left_weight, temp_right_weight, temp_down_weight, temp_up_weight, temp_source_weight, temp_terminal_weight, d_pull_left, d_pull_right, d_pull_down, d_pull_up, d_relabel_mask, d_graph_heightr, d_graph_heightw, width, height, graph_size, width1, height1, graph_size1); 
# 362
return 0; 
# 363
} 
# 366
int cudaCutsAtomicOptimize() 
# 367
{ 
# 368
if (deviceCheck < 1) 
# 369
{ 
# 370
return -1; 
# 371
}  
# 373
cudaCutsAtomic(); 
# 375
bfsLabeling(); 
# 377
return 0; 
# 379
} 
# 383
int cudaCutsStochasticOptimize() 
# 384
{ 
# 385
if (deviceCheck < 1) 
# 386
{ 
# 387
return -1; 
# 388
}  
# 390
cudaCutsStochastic(); 
# 392
bfsLabeling(); 
# 394
return 0; 
# 396
} 
# 398
void cudaCutsAtomic() 
# 399
{ 
# 401
dim3 block_push(threads_x, threads_y, 1); 
# 402
dim3 grid_push(blocks_x, blocks_y, 1); 
# 404
dim3 d_block(num_of_threads_per_block, 1, 1); 
# 405
dim3 d_grid(num_of_blocks, 1, 1); 
# 407
bool finish = true; 
# 409
counter = num_of_blocks; 
# 411
int numThreadsEnd = 256, numBlocksEnd = 1; 
# 412
if (numThreadsEnd > counter) 
# 413
{ 
# 414
numBlocksEnd = 1; 
# 415
numThreadsEnd = counter; 
# 416
} else 
# 418
{ 
# 419
numBlocksEnd = ((int)ceil(counter / ((double)numThreadsEnd))); 
# 420
}  
# 422
dim3 End_block(numThreadsEnd, 1, 1); 
# 423
dim3 End_grid(numBlocksEnd, 1, 1); 
# 425
int *d_counter; 
# 427
bool *d_finish; 
# 428
for (int i = 0; i < num_of_blocks; i++) 
# 429
{ 
# 430
(h_stochastic[i]) = 0; 
# 431
}  
# 433
{ cudaError err = cudaMalloc((void **)(&d_counter), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 433, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 434
{ cudaError err = cudaMalloc((void **)(&d_finish), sizeof(bool)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 434, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 436
{ cudaError err = cudaMemcpy(d_counter, &counter, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 436, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 438
counter = 0; 
# 439
int *d_relabel; 
# 441
{ cudaError err = cudaMalloc((void **)(&d_relabel), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 441, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 443
int h_relabel = 0; 
# 445
int block_num = (width1 / 32); 
# 447
int *d_block_num; 
# 449
{ cudaError err = cudaMalloc((void **)(&d_block_num), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 449, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 450
{ cudaError err = cudaMemcpy(d_block_num, &block_num, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 450, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 452
int h_count_blocks = num_of_blocks; 
# 453
int *d_count_blocks; 
# 455
{ cudaError err = cudaMalloc((void **)(&d_count_blocks), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 455, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 456
{ cudaError err = cudaMemcpy(d_count_blocks, &h_count_blocks, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 456, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 458
h_count_blocks = 0; 
# 462
{ cudaError err = cudaMemcpy(d_relabel, &h_relabel, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 462, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 464
counter = 1; 
# 465
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_start_atomic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1, d_relabel, d_stochastic, d_counter, d_finish); 
# 470
int h_terminate_condition = 0; 
# 471
{ cudaError err = cudaThreadSynchronize(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 471, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 472
unsigned timer = (0); 
# 473
if ((CUTTrue) != (cutCreateTimer(&timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 473); exit(1); }  ; 
# 474
if ((CUTTrue) != (cutStartTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 474); exit(1); }  ; 
# 476
do 
# 477
{ 
# 479
if ((counter % 10) == 0) 
# 480
{ 
# 481
finish = true; 
# 482
{ cudaError err = cudaMemcpy(d_finish, &finish, sizeof(bool), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 482, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 483
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push_stochastic1(d_push_reser, s_push_reser, d_count_blocks, d_finish, d_block_num, width1); 
# 484
{ cudaError err = cudaMemcpy(&finish, d_finish, sizeof(bool), cudaMemcpyDeviceToHost); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 484, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 485
if (finish == (false)) { 
# 486
h_terminate_condition++; }  
# 487
}  
# 488
if ((counter % 11) == 0) 
# 489
{ 
# 490
{ cudaError err = cudaMemset(d_terminate, 0, sizeof(int) * num_of_blocks); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 490, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 491
h_count_blocks = 0; 
# 492
{ cudaError err = cudaMemcpy(d_count_blocks, &h_count_blocks, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 492, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 493
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push_atomic2(d_terminate, d_push_reser, s_push_reser, d_block_num, width1); 
# 495
cudaConfigureCall(End_grid, End_block) ? ((void)0) : kernel_End(d_terminate, d_count_blocks, d_counter); 
# 497
}  
# 499
if ((counter % 2) == 0) 
# 500
{ 
# 502
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_atomic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_pull_left, d_pull_right, d_pull_down, d_pull_up, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1); 
# 512 "CudaCuts.cu"
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_relabel_atomic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_pull_left, d_pull_right, d_pull_down, d_pull_up, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1); 
# 516
} else 
# 518
{ 
# 519
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_atomic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_pull_left, d_pull_right, d_pull_down, d_pull_up, d_relabel_mask, d_graph_heightw, d_graph_heightr, graph_size, width, height, graph_size1, width1, height1); 
# 529 "CudaCuts.cu"
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_relabel_atomic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_pull_left, d_pull_right, d_pull_down, d_pull_up, d_relabel_mask, d_graph_heightw, d_graph_heightr, graph_size, width, height, graph_size1, width1, height1); 
# 534
}  
# 535
counter++; 
# 536
} while (h_terminate_condition != 2); 
# 539
{ cudaError err = cudaThreadSynchronize(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 539, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 540
if ((CUTTrue) != (cutStopTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 540); exit(1); }  ; 
# 541
printf("TT Cuts :: %f\n", cutGetTimerValue(timer)); 
# 542
if ((CUTTrue) != (cutDeleteTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 542); exit(1); }  ; 
# 544
} 
# 547
void cudaCutsStochastic() 
# 548
{ 
# 550
dim3 block_push(threads_x, threads_y, 1); 
# 551
dim3 grid_push(blocks_x, blocks_y, 1); 
# 553
dim3 d_block(num_of_threads_per_block, 1, 1); 
# 554
dim3 d_grid(num_of_blocks, 1, 1); 
# 556
bool finish = true; 
# 558
counter = num_of_blocks; 
# 560
int numThreadsEnd = 256, numBlocksEnd = 1; 
# 561
if (numThreadsEnd > counter) 
# 562
{ 
# 563
numBlocksEnd = 1; 
# 564
numThreadsEnd = counter; 
# 565
} else 
# 567
{ 
# 568
numBlocksEnd = ((int)ceil(counter / ((double)numThreadsEnd))); 
# 569
}  
# 571
dim3 End_block(numThreadsEnd, 1, 1); 
# 572
dim3 End_grid(numBlocksEnd, 1, 1); 
# 577
bool *d_finish; 
# 578
for (int i = 0; i < num_of_blocks; i++) 
# 579
{ 
# 580
(h_stochastic[i]) = 0; 
# 581
}  
# 583
{ cudaError err = cudaMalloc((void **)(&d_counter), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 583, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 584
{ cudaError err = cudaMalloc((void **)(&d_finish), sizeof(bool)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 584, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 586
{ cudaError err = cudaMemcpy(d_counter, &counter, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 586, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 588
counter = 0; 
# 589
int *d_relabel; 
# 591
{ cudaError err = cudaMalloc((void **)(&d_relabel), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 591, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 593
int h_relabel = 0; 
# 596
int block_num = (width1 / 32); 
# 598
int *d_block_num; 
# 600
{ cudaError err = cudaMalloc((void **)(&d_block_num), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 600, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 601
{ cudaError err = cudaMemcpy(d_block_num, &block_num, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 601, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 604
int h_count_blocks = num_of_blocks; 
# 605
int *d_count_blocks; 
# 607
{ cudaError err = cudaMalloc((void **)(&d_count_blocks), sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 607, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 608
{ cudaError err = cudaMemcpy(d_count_blocks, &h_count_blocks, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 608, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 610
h_count_blocks = 0; 
# 612
{ cudaError err = cudaMemcpy(d_relabel, &h_relabel, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 612, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 614
counter = 1; 
# 615
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_start_stochastic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1, d_relabel, d_stochastic, d_counter, d_finish); 
# 619
int h_terminate_condition = 0; 
# 620
{ cudaError err = cudaThreadSynchronize(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 620, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 621
unsigned timer = (0); 
# 622
if ((CUTTrue) != (cutCreateTimer(&timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 622); exit(1); }  ; 
# 623
if ((CUTTrue) != (cutStartTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 623); exit(1); }  ; 
# 626
do 
# 627
{ 
# 628
if ((counter % 10) == 0) 
# 629
{ 
# 630
finish = true; 
# 631
{ cudaError err = cudaMemcpy(d_finish, &finish, sizeof(bool), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 631, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 632
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push_stochastic1(d_push_reser, s_push_reser, d_count_blocks, d_finish, d_block_num, width1); 
# 633
{ cudaError err = cudaMemcpy(&finish, d_finish, sizeof(bool), cudaMemcpyDeviceToHost); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 633, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 634
}  
# 635
if ((counter % 11) == 0) 
# 636
{ 
# 637
{ cudaError err = cudaMemset(d_stochastic, 0, sizeof(int) * num_of_blocks); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 637, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 638
{ cudaError err = cudaMemset(d_terminate, 0, sizeof(int) * num_of_blocks); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 638, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 639
h_count_blocks = 0; 
# 640
{ cudaError err = cudaMemcpy(d_count_blocks, &h_count_blocks, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 640, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 641
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push_stochastic2(d_terminate, d_relabel_mask, d_push_reser, s_push_reser, d_stochastic, d_block_num, width1); 
# 643
cudaConfigureCall(End_grid, End_block) ? ((void)0) : kernel_End(d_terminate, d_count_blocks, d_counter); 
# 646
if (((finish == (false)) && ((counter % 121) != 0)) && (counter > 0)) { 
# 647
h_terminate_condition++; }  
# 649
}  
# 650
if ((counter % 2) == 0) 
# 651
{ 
# 653
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_stochastic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1, d_stochastic, d_block_num); 
# 663 "CudaCuts.cu"
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_relabel_stochastic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightr, d_graph_heightw, graph_size, width, height, graph_size1, width1, height1, d_stochastic, d_block_num); 
# 668
} else 
# 670
{ 
# 671
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_push1_stochastic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightw, d_graph_heightr, graph_size, width, height, graph_size1, width1, height1, d_stochastic, d_block_num); 
# 683 "CudaCuts.cu"
cudaConfigureCall(grid_push, block_push) ? ((void)0) : kernel_relabel_stochastic(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_sink_weight, d_push_reser, d_relabel_mask, d_graph_heightw, d_graph_heightr, graph_size, width, height, graph_size1, width1, height1, d_stochastic, d_block_num); 
# 688
}  
# 689
counter++; 
# 690
} while ((h_terminate_condition == 0) && (counter < 500)); 
# 694
{ cudaError err = cudaThreadSynchronize(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 694, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 695
if ((CUTTrue) != (cutStopTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 695); exit(1); }  ; 
# 696
printf("TT Cuts :: %f %d\n", cutGetTimerValue(timer), counter); 
# 697
if ((CUTTrue) != (cutDeleteTimer(timer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "CudaCuts.cu", 697); exit(1); }  ; 
# 699
} 
# 701
void bfsLabeling() 
# 702
{ 
# 704
dim3 block_push(threads_x, threads_y, 1); 
# 705
dim3 grid_push(blocks_x, blocks_y, 1); 
# 707
dim3 d_block(num_of_threads_per_block, 1, 1); 
# 708
dim3 d_grid(num_of_blocks, 1, 1); 
# 710
{ cudaError err = cudaMemcpy(d_graph_heightr, h_graph_height, size_int, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 710, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 712
for (int i = 0; i < graph_size; i++) { 
# 713
(h_pixel_mask[i]) = true; }  
# 715
{ cudaError err = cudaMemcpy(d_pixel_mask, h_pixel_mask, sizeof(bool) * graph_size1, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 715, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 717
cudaConfigureCall(d_grid, d_block, 0) ? ((void)0) : kernel_bfs_t(d_push_reser, d_sink_weight, d_graph_heightr, d_pixel_mask, graph_size, width, height, graph_size1, width1, height1); 
# 718
counter = 1; 
# 720
{ cudaError err = cudaMemcpy(d_counter, &counter, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 720, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 722
do 
# 723
{ 
# 724
h_over = false; 
# 726
{ cudaError err = cudaMemcpy(d_over, &h_over, sizeof(bool), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 726, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 728
cudaConfigureCall(d_grid, d_block, 0) ? ((void)0) : kernel_bfs(d_left_weight, d_right_weight, d_down_weight, d_up_weight, d_graph_heightr, d_pixel_mask, graph_size, width, height, graph_size1, width1, height1, d_over, d_counter); 
# 731
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "Kernel execution failed", "CudaCuts.cu", 731, cudaGetErrorString(err)); exit(1); }  } ; 
# 733
{ cudaError err = cudaMemcpy(&h_over, d_over, sizeof(bool), cudaMemcpyDeviceToHost); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 733, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 735
counter++; 
# 737
{ cudaError err = cudaMemcpy(d_counter, &counter, sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 737, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 738
} while (h_over); 
# 741
{ cudaError err = cudaMemcpy(h_graph_height, d_graph_heightr, size_int, cudaMemcpyDeviceToHost); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 741, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 742
} 
# 745
int cudaCutsGetResult() 
# 746
{ 
# 747
if (deviceCheck < 1) { 
# 748
return -1; }  
# 750
int alpha = 1; 
# 752
for (int i = 0; i < graph_size1; i++) 
# 753
{ 
# 754
int row_here = (i / width1), col_here = (i % width1); 
# 755
if ((((((h_graph_height[i]) > 0) && (row_here < height)) && (row_here > 0)) && (col_here < width)) && (col_here > 0)) { 
# 756
(pixelLabel[i]) = alpha; 
# 757
}  
# 758
}  
# 760
return 0; 
# 762
} 
# 764
int cudaCutsGetEnergy() 
# 765
{ 
# 766
return data_energy() + smooth_energy(); 
# 767
} 
# 769
int data_energy() 
# 770
{ 
# 771
int eng = 0; 
# 773
for (int i = 0; i < height; i++) 
# 774
{ 
# 775
for (int j = 0; j < width; j++) 
# 776
{ 
# 778
eng += (datacost[(((i * width) + j) * num_Labels) + (pixelLabel[(i * width1) + j])]); 
# 779
}  
# 780
}  
# 782
printf("DATA ENERGY: %d\n", eng); 
# 783
return eng; 
# 784
} 
# 786
int smooth_energy() 
# 787
{ 
# 788
int eng = 0; 
# 790
int x, y; 
# 793
for (y = 0; y < height; y++) { 
# 794
for (x = 1; x < width; x++) 
# 795
{ 
# 796
if (cueValues == 1) { 
# 797
eng = (eng + ((smoothnesscost[(pixelLabel[(y * width1) + x]) + ((pixelLabel[((y * width1) + x) - 1]) * num_Labels)]) * (hcue[((y * width) + x) - 1]))); } else { 
# 799
eng = (eng + (smoothnesscost[(pixelLabel[(y * width1) + x]) + ((pixelLabel[((y * width1) + x) - 1]) * num_Labels)])); }  
# 801
}  }  
# 803
for (y = 1; y < height1; y++) { 
# 804
for (x = 0; x < width1; x++) 
# 805
{ 
# 806
if (cueValues == 1) { 
# 807
eng = (eng + ((smoothnesscost[(pixelLabel[(y * width1) + x]) + ((pixelLabel[((y * width1) + x) - width1]) * num_Labels)]) * (vcue[((y * width) + x) - width]))); } else { 
# 809
eng = (eng + (smoothnesscost[(pixelLabel[(y * width1) + x]) + ((pixelLabel[((y * width1) + x) - width1]) * num_Labels)])); }  
# 811
}  }  
# 812
printf("SMOOTHNESS ENERGY: %d\n", eng); 
# 813
return eng; 
# 814
} 
# 817
void cudaCutsFreeMem() 
# 818
{ 
# 819
free(h_reset_mem); 
# 820
free(h_graph_height); 
# 822
{ cudaError err = cudaFree(d_left_weight); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 822, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 823
{ cudaError err = cudaFree(d_right_weight); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 823, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 824
{ cudaError err = cudaFree(d_down_weight); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 824, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 825
{ cudaError err = cudaFree(d_up_weight); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 825, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 826
{ cudaError err = cudaFree(d_sink_weight); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 826, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 827
{ cudaError err = cudaFree(d_push_reser); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 827, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 829
{ cudaError err = cudaFree(d_pull_left); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 829, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 830
{ cudaError err = cudaFree(d_pull_right); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 830, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 831
{ cudaError err = cudaFree(d_pull_down); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 831, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 832
{ cudaError err = cudaFree(d_pull_up); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 832, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 834
{ cudaError err = cudaFree(d_graph_heightr); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 834, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 835
{ cudaError err = cudaFree(d_graph_heightw); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "CudaCuts.cu", 835, cudaGetErrorString(err)); exit(1); }  } ; ; 
# 836
} 
# 25 "Example.h"
void write_image(); 
# 26
void load_files(char *); 
# 27
void writeImage(); 
# 28
void initFinalImage(); 
# 29
void LoadDataFile(char *, int &, int &, int &, int *&, int *&, int *&, int *&); 
# 32
int **pixel_values, **out_pixel_values; 
# 49 "/usr/include/stdint.h" 3
typedef unsigned char uint8_t; 
# 50
typedef unsigned short uint16_t; 
# 52
typedef unsigned uint32_t; 
# 56
typedef unsigned long uint64_t; 
# 66
typedef signed char int_least8_t; 
# 67
typedef short int_least16_t; 
# 68
typedef int int_least32_t; 
# 70
typedef long int_least64_t; 
# 77
typedef unsigned char uint_least8_t; 
# 78
typedef unsigned short uint_least16_t; 
# 79
typedef unsigned uint_least32_t; 
# 81
typedef unsigned long uint_least64_t; 
# 91
typedef signed char int_fast8_t; 
# 93
typedef long int_fast16_t; 
# 94
typedef long int_fast32_t; 
# 95
typedef long int_fast64_t; 
# 104
typedef unsigned char uint_fast8_t; 
# 106
typedef unsigned long uint_fast16_t; 
# 107
typedef unsigned long uint_fast32_t; 
# 108
typedef unsigned long uint_fast64_t; 
# 120 "/usr/include/stdint.h" 3
typedef long intptr_t; 
# 123
typedef unsigned long uintptr_t; 
# 135 "/usr/include/stdint.h" 3
typedef long intmax_t; 
# 136
typedef unsigned long uintmax_t; 
# 26 "Example.cu"
extern "C" void m5_work_begin(uint64_t, uint64_t); 
# 27
extern "C" void m5_work_end(uint64_t, uint64_t); 
# 31
using namespace std;
# 33
int main(int argc, char **argv) 
# 34
{ 
# 36
load_files(argv[1]); 
# 39
m5_work_begin(0, 0); 
# 42
int initCheck = cudaCutsInit(width, height, num_Labels); 
# 44
printf("Compute Capability %d\n", initCheck); 
# 46
if (initCheck > 0) 
# 47
{ 
# 48
printf("The grid is initialized successfully\n"); 
# 49
} else { 
# 51
if (initCheck == (-1)) 
# 52
{ 
# 53
printf("Error: Please check the device present on the system\n"); 
# 54
}  }  
# 57
int dataCheck = cudaCutsSetupDataTerm(dataTerm); 
# 59
if (dataCheck == 0) 
# 60
{ 
# 61
printf("The dataterm is set properly\n"); 
# 63
} else { 
# 65
if (dataCheck == (-1)) 
# 66
{ 
# 67
printf("Error: Please check the device present on the system\n"); 
# 68
}  }  
# 71
int smoothCheck = cudaCutsSetupSmoothTerm(smoothTerm); 
# 74
if (smoothCheck == 0) 
# 75
{ 
# 76
printf("The smoothnessterm is set properly\n"); 
# 77
} else { 
# 79
if (smoothCheck == (-1)) 
# 80
{ 
# 81
printf("Error: Please check the device present on the system\n"); 
# 82
}  }  
# 85
int hcueCheck = cudaCutsSetupHCue(hCue); 
# 87
if (hcueCheck == 0) 
# 88
{ 
# 89
printf("The HCue is set properly\n"); 
# 90
} else { 
# 92
if (hcueCheck == (-1)) 
# 93
{ 
# 94
printf("Error: Please check the device present on the system\n"); 
# 95
}  }  
# 97
int vcueCheck = cudaCutsSetupVCue(vCue); 
# 100
if (vcueCheck == 0) 
# 101
{ 
# 102
printf("The VCue is set properly\n"); 
# 103
} else { 
# 105
if (vcueCheck == (-1)) 
# 106
{ 
# 107
printf("Error: Please check the device present on the system\n"); 
# 108
}  }  
# 111
int graphCheck = cudaCutsSetupGraph(); 
# 113
if (graphCheck == 0) 
# 114
{ 
# 115
printf("The graph is constructed successfully\n"); 
# 116
} else { 
# 118
if (graphCheck == (-1)) 
# 119
{ 
# 120
printf("Error: Please check the device present on the system\n"); 
# 121
}  }  
# 123
int optimizeCheck = (-1); 
# 124
if (initCheck == 1) 
# 125
{ 
# 129
optimizeCheck = cudaCutsStochasticOptimize(); 
# 130
}  
# 133
if (optimizeCheck == 0) 
# 134
{ 
# 135
printf("The algorithm successfully converged\n"); 
# 136
} else { 
# 138
if (optimizeCheck == (-1)) 
# 139
{ 
# 140
printf("Error: Please check the device present on the system\n"); 
# 141
}  }  
# 143
int resultCheck = cudaCutsGetResult(); 
# 145
if (resultCheck == 0) 
# 146
{ 
# 147
printf("The pixel labels are successfully stored\n"); 
# 148
} else { 
# 150
if (resultCheck == (-1)) 
# 151
{ 
# 152
printf("Error: Please check the device present on the system\n"); 
# 153
}  }  
# 155
int energy = cudaCutsGetEnergy(); 
# 158
initFinalImage(); 
# 160
cudaCutsFreeMem(); 
# 163
m5_work_end(0, 0); 
# 166
exit(1); 
# 167
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) { printf("\nPress ENTER to exit...\n"); fflush(stdout); fflush(stderr); getchar(); }  exit(0); ; return 0; 
# 168
} 
# 171
void load_files(char *filename) 
# 172
{ 
# 173
LoadDataFile(filename, width, height, num_Labels, dataTerm, smoothTerm, hCue, vCue); 
# 175
} 
# 177
void initFinalImage() 
# 178
{ 
# 179
out_pixel_values = ((int **)malloc(sizeof(int *) * height)); 
# 181
for (int i = 0; i < height; i++) 
# 182
{ 
# 183
(out_pixel_values[i]) = ((int *)malloc(sizeof(int) * width)); 
# 184
for (int j = 0; j < width; j++) { 
# 185
((out_pixel_values[i])[j]) = 0; 
# 186
}  
# 187
}  
# 189
writeImage(); 
# 190
} 
# 192
void writeImage() 
# 193
{ 
# 195
for (int i = 0; i < graph_size1; i++) 
# 196
{ 
# 198
int row = (i / width1), col = (i % width1); 
# 200
if ((((row >= 0) && (col >= 0)) && (row <= (height - 1))) && (col <= (width - 1))) { 
# 201
((out_pixel_values[row])[col]) = ((pixelLabel[i]) * 255); }  
# 202
}  
# 204
write_image(); 
# 205
} 
# 207
void write_image() 
# 208
{ 
# 210
FILE *fp = fopen("result_sponge/flower_cuda_test.pgm", "w"); 
# 212
fprintf(fp, "%c", 'P'); 
# 213
fprintf(fp, "%c", '2'); 
# 214
fprintf(fp, "%c", '\n'); 
# 215
fprintf(fp, "%d %c %d %c ", width, ' ', height, '\n'); 
# 216
fprintf(fp, "%d %c", 255, '\n'); 
# 218
for (int i = 0; i < height; i++) 
# 219
{ 
# 220
for (int j = 0; j < width; j++) 
# 221
{ 
# 222
fprintf(fp, "%d\n", (out_pixel_values[i])[j]); 
# 223
}  
# 224
}  
# 225
fclose(fp); 
# 226
} 
# 230
void LoadDataFile(char *filename, int &width, int &height, int &nLabels, int *&
# 231
dataCostArray, int *&
# 232
smoothCostArray, int *&
# 233
hCue, int *&
# 234
vCue) 
# 235
{ 
# 236
printf("enterd\n"); 
# 238
FILE *fp = fopen(filename, "r"); 
# 242
fscanf(fp, "%d %d %d", &width, &height, &nLabels); 
# 244
int i, n, x, y; 
# 245
int gt; 
# 246
for (i = 0; i < (width * height); i++) { 
# 247
fscanf(fp, "%d", &gt); }  
# 249
dataCostArray = (new int [(width * height) * nLabels]); 
# 250
for (int c = 0; c < nLabels; c++) { 
# 251
n = c; 
# 252
for (i = 0; i < (width * height); i++) { 
# 253
fscanf(fp, "%d", &(dataCostArray[n])); 
# 254
n += nLabels; 
# 255
}  
# 256
}  
# 258
hCue = (new int [width * height]); 
# 259
vCue = (new int [width * height]); 
# 261
n = 0; 
# 262
for (y = 0; y < height; y++) { 
# 263
for (x = 0; x < (width - 1); x++) { 
# 264
fscanf(fp, "%d", &(hCue[n++])); 
# 265
}  
# 266
(hCue[n++]) = 0; 
# 267
}  
# 269
n = 0; 
# 270
for (y = 0; y < (height - 1); y++) { 
# 271
for (x = 0; x < width; x++) { 
# 272
fscanf(fp, "%d", &(vCue[n++])); 
# 273
}  
# 274
}  
# 275
for (x = 0; x < width; x++) { 
# 276
(vCue[n++]) = 0; 
# 277
}  
# 279
fclose(fp); 
# 280
smoothCostArray = (new int [nLabels * nLabels]); 
# 282
(smoothCostArray[0]) = 0; 
# 283
(smoothCostArray[1]) = 1; 
# 284
(smoothCostArray[2]) = 1; 
# 285
(smoothCostArray[3]) = 0; 
# 288
} 
# 1 "Example.cudafe1.stub.c"
#include "Example.cudafe1.stub.c"
