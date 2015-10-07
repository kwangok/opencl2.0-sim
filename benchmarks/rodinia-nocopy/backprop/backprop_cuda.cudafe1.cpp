# 1 "backprop_cuda.cu"
# 61 "/home/bachelor/deicide218/cuda-4.2/include/device_types.h"
#if 0
# 61
enum cudaRoundMode { 
# 63
cudaRoundNearest, 
# 64
cudaRoundZero, 
# 65
cudaRoundPosInf, 
# 66
cudaRoundMinInf
# 67
}; 
#endif
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t; 
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 126 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 126
enum cudaError { 
# 133
cudaSuccess, 
# 139
cudaErrorMissingConfiguration, 
# 145
cudaErrorMemoryAllocation, 
# 151
cudaErrorInitializationError, 
# 161 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorLaunchFailure, 
# 170 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 180 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorLaunchTimeout, 
# 189 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 195
cudaErrorInvalidDeviceFunction, 
# 204 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorInvalidConfiguration, 
# 210
cudaErrorInvalidDevice, 
# 216
cudaErrorInvalidValue, 
# 222
cudaErrorInvalidPitchValue, 
# 228
cudaErrorInvalidSymbol, 
# 233
cudaErrorMapBufferObjectFailed, 
# 238
cudaErrorUnmapBufferObjectFailed, 
# 244
cudaErrorInvalidHostPointer, 
# 250
cudaErrorInvalidDevicePointer, 
# 256
cudaErrorInvalidTexture, 
# 262
cudaErrorInvalidTextureBinding, 
# 269
cudaErrorInvalidChannelDescriptor, 
# 275
cudaErrorInvalidMemcpyDirection, 
# 285 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorAddressOfConstant, 
# 294 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 303 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorTextureNotBound, 
# 312 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorSynchronizationError, 
# 318
cudaErrorInvalidFilterSetting, 
# 324
cudaErrorInvalidNormSetting, 
# 332
cudaErrorMixedDeviceExecution, 
# 339
cudaErrorCudartUnloading, 
# 344
cudaErrorUnknown, 
# 352
cudaErrorNotYetImplemented, 
# 361 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 368
cudaErrorInvalidResourceHandle, 
# 376
cudaErrorNotReady, 
# 383
cudaErrorInsufficientDriver, 
# 396 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorSetOnActiveProcess, 
# 402
cudaErrorInvalidSurface, 
# 408
cudaErrorNoDevice, 
# 414
cudaErrorECCUncorrectable, 
# 419
cudaErrorSharedObjectSymbolNotFound, 
# 424
cudaErrorSharedObjectInitFailed, 
# 430
cudaErrorUnsupportedLimit, 
# 436
cudaErrorDuplicateVariableName, 
# 442
cudaErrorDuplicateTextureName, 
# 448
cudaErrorDuplicateSurfaceName, 
# 458 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 463
cudaErrorInvalidKernelImage, 
# 471
cudaErrorNoKernelImageForDevice, 
# 484 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
cudaErrorIncompatibleDriverContext, 
# 491
cudaErrorPeerAccessAlreadyEnabled, 
# 498
cudaErrorPeerAccessNotEnabled, 
# 504
cudaErrorDeviceAlreadyInUse = 54, 
# 512
cudaErrorProfilerDisabled, 
# 519
cudaErrorProfilerNotInitialized, 
# 526
cudaErrorProfilerAlreadyStarted, 
# 532
cudaErrorProfilerAlreadyStopped, 
# 540
cudaErrorAssert, 
# 547
cudaErrorTooManyPeers, 
# 553
cudaErrorHostMemoryAlreadyRegistered, 
# 559
cudaErrorHostMemoryNotRegistered, 
# 564
cudaErrorOperatingSystem, 
# 569
cudaErrorStartupFailure = 127, 
# 577
cudaErrorApiFailureBase = 10000
# 578
}; 
#endif
# 583 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 583
enum cudaChannelFormatKind { 
# 585
cudaChannelFormatKindSigned, 
# 586
cudaChannelFormatKindUnsigned, 
# 587
cudaChannelFormatKindFloat, 
# 588
cudaChannelFormatKindNone
# 589
}; 
#endif
# 594 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 594
struct cudaChannelFormatDesc { 
# 596
int x; 
# 597
int y; 
# 598
int z; 
# 599
int w; 
# 600
cudaChannelFormatKind f; 
# 601
}; 
#endif
# 606 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct cudaArray; 
# 611
#if 0
# 611
enum cudaMemoryType { 
# 613
cudaMemoryTypeHost = 1, 
# 614
cudaMemoryTypeDevice
# 615
}; 
#endif
# 620 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 620
enum cudaMemcpyKind { 
# 622
cudaMemcpyHostToHost, 
# 623
cudaMemcpyHostToDevice, 
# 624
cudaMemcpyDeviceToHost, 
# 625
cudaMemcpyDeviceToDevice, 
# 626
cudaMemcpyDefault
# 627
}; 
#endif
# 633 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 633
struct cudaPitchedPtr { 
# 635
void *ptr; 
# 636
size_t pitch; 
# 637
size_t xsize; 
# 638
size_t ysize; 
# 639
}; 
#endif
# 645 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 645
struct cudaExtent { 
# 647
size_t width; 
# 648
size_t height; 
# 649
size_t depth; 
# 650
}; 
#endif
# 656 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 656
struct cudaPos { 
# 658
size_t x; 
# 659
size_t y; 
# 660
size_t z; 
# 661
}; 
#endif
# 666 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 666
struct cudaMemcpy3DParms { 
# 668
cudaArray *srcArray; 
# 669
cudaPos srcPos; 
# 670
cudaPitchedPtr srcPtr; 
# 672
cudaArray *dstArray; 
# 673
cudaPos dstPos; 
# 674
cudaPitchedPtr dstPtr; 
# 676
cudaExtent extent; 
# 677
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 678
}; 
#endif
# 683 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 683
struct cudaMemcpy3DPeerParms { 
# 685
cudaArray *srcArray; 
# 686
cudaPos srcPos; 
# 687
cudaPitchedPtr srcPtr; 
# 688
int srcDevice; 
# 690
cudaArray *dstArray; 
# 691
cudaPos dstPos; 
# 692
cudaPitchedPtr dstPtr; 
# 693
int dstDevice; 
# 695
cudaExtent extent; 
# 696
}; 
#endif
# 701 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
struct cudaGraphicsResource; 
# 706
#if 0
# 706
enum cudaGraphicsRegisterFlags { 
# 708
cudaGraphicsRegisterFlagsNone, 
# 709
cudaGraphicsRegisterFlagsReadOnly, 
# 710
cudaGraphicsRegisterFlagsWriteDiscard, 
# 711
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 712
cudaGraphicsRegisterFlagsTextureGather = 8
# 713
}; 
#endif
# 718 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 718
enum cudaGraphicsMapFlags { 
# 720
cudaGraphicsMapFlagsNone, 
# 721
cudaGraphicsMapFlagsReadOnly, 
# 722
cudaGraphicsMapFlagsWriteDiscard
# 723
}; 
#endif
# 728 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 728
enum cudaGraphicsCubeFace { 
# 730
cudaGraphicsCubeFacePositiveX, 
# 731
cudaGraphicsCubeFaceNegativeX, 
# 732
cudaGraphicsCubeFacePositiveY, 
# 733
cudaGraphicsCubeFaceNegativeY, 
# 734
cudaGraphicsCubeFacePositiveZ, 
# 735
cudaGraphicsCubeFaceNegativeZ
# 736
}; 
#endif
# 741 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 741
struct cudaPointerAttributes { 
# 747
cudaMemoryType memoryType; 
# 758 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
int device; 
# 764
void *devicePointer; 
# 770
void *hostPointer; 
# 771
}; 
#endif
# 776 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 776
struct cudaFuncAttributes { 
# 783
size_t sharedSizeBytes; 
# 789
size_t constSizeBytes; 
# 794
size_t localSizeBytes; 
# 801
int maxThreadsPerBlock; 
# 806
int numRegs; 
# 813
int ptxVersion; 
# 820
int binaryVersion; 
# 821
}; 
#endif
# 826 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 826
enum cudaFuncCache { 
# 828
cudaFuncCachePreferNone, 
# 829
cudaFuncCachePreferShared, 
# 830
cudaFuncCachePreferL1, 
# 831
cudaFuncCachePreferEqual
# 832
}; 
#endif
# 838 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 838
enum cudaSharedMemConfig { 
# 840
cudaSharedMemBankSizeDefault, 
# 841
cudaSharedMemBankSizeFourByte, 
# 842
cudaSharedMemBankSizeEightByte
# 843
}; 
#endif
# 848 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 848
enum cudaComputeMode { 
# 850
cudaComputeModeDefault, 
# 851
cudaComputeModeExclusive, 
# 852
cudaComputeModeProhibited, 
# 853
cudaComputeModeExclusiveProcess
# 854
}; 
#endif
# 859 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 859
enum cudaLimit { 
# 861
cudaLimitStackSize, 
# 862
cudaLimitPrintfFifoSize, 
# 863
cudaLimitMallocHeapSize
# 864
}; 
#endif
# 869 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 869
enum cudaOutputMode { 
# 871
cudaKeyValuePair, 
# 872
cudaCSV
# 873
}; 
#endif
# 878 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 878
struct cudaDeviceProp { 
# 880
char name[256]; 
# 881
size_t totalGlobalMem; 
# 882
size_t sharedMemPerBlock; 
# 883
int regsPerBlock; 
# 884
int warpSize; 
# 885
size_t memPitch; 
# 886
int maxThreadsPerBlock; 
# 887
int maxThreadsDim[3]; 
# 888
int maxGridSize[3]; 
# 889
int clockRate; 
# 890
size_t totalConstMem; 
# 891
int major; 
# 892
int minor; 
# 893
size_t textureAlignment; 
# 894
size_t texturePitchAlignment; 
# 895
int deviceOverlap; 
# 896
int multiProcessorCount; 
# 897
int kernelExecTimeoutEnabled; 
# 898
int integrated; 
# 899
int canMapHostMemory; 
# 900
int computeMode; 
# 901
int maxTexture1D; 
# 902
int maxTexture1DLinear; 
# 903
int maxTexture2D[2]; 
# 904
int maxTexture2DLinear[3]; 
# 905
int maxTexture2DGather[2]; 
# 906
int maxTexture3D[3]; 
# 907
int maxTextureCubemap; 
# 908
int maxTexture1DLayered[2]; 
# 909
int maxTexture2DLayered[3]; 
# 910
int maxTextureCubemapLayered[2]; 
# 911
int maxSurface1D; 
# 912
int maxSurface2D[2]; 
# 913
int maxSurface3D[3]; 
# 914
int maxSurface1DLayered[2]; 
# 915
int maxSurface2DLayered[3]; 
# 916
int maxSurfaceCubemap; 
# 917
int maxSurfaceCubemapLayered[2]; 
# 918
size_t surfaceAlignment; 
# 919
int concurrentKernels; 
# 920
int ECCEnabled; 
# 921
int pciBusID; 
# 922
int pciDeviceID; 
# 923
int pciDomainID; 
# 924
int tccDriver; 
# 925
int asyncEngineCount; 
# 926
int unifiedAddressing; 
# 927
int memoryClockRate; 
# 928
int memoryBusWidth; 
# 929
int l2CacheSize; 
# 930
int maxThreadsPerMultiProcessor; 
# 931
}; 
#endif
# 993 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 993
struct cudaIpcEventHandle_st { 
# 995
char reserved[64]; 
# 996
}; 
#endif
# 998 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
# 998
struct cudaIpcMemHandle_st { 
# 1000
char reserved[64]; 
# 1001
}; 
#endif
# 1012 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef cudaError 
# 1012
cudaError_t; 
#endif
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 1017
cudaStream_t; 
#endif
# 1022 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 1022
cudaEvent_t; 
#endif
# 1027 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 1027
cudaGraphicsResource_t; 
#endif
# 1032 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 1032
cudaUUID_t; 
#endif
# 1037 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef cudaIpcEventHandle_st 
# 1037
cudaIpcEventHandle_t; 
#endif
# 1038 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef cudaIpcMemHandle_st 
# 1038
cudaIpcMemHandle_t; 
#endif
# 1043 "/home/bachelor/deicide218/cuda-4.2/include/driver_types.h"
#if 0
typedef cudaOutputMode 
# 1043
cudaOutputMode_t; 
#endif
# 84 "/home/bachelor/deicide218/cuda-4.2/include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/home/bachelor/deicide218/cuda-4.2/include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/home/bachelor/deicide218/cuda-4.2/include/surface_types.h"
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 84 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/home/bachelor/deicide218/cuda-4.2/include/texture_types.h"
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 135
int __cudaReserved[15]; 
# 136
}; 
#endif
# 94 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 94
struct char1 { 
# 96
signed char x; 
# 97
}; 
#endif
# 99 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 99
struct uchar1 { 
# 101
unsigned char x; 
# 102
}; 
#endif
# 105 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 105
struct __attribute((aligned(2))) char2 { 
# 107
signed char x, y; 
# 108
}; 
#endif
# 110 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 110
struct __attribute((aligned(2))) uchar2 { 
# 112
unsigned char x, y; 
# 113
}; 
#endif
# 115 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 115
struct char3 { 
# 117
signed char x, y, z; 
# 118
}; 
#endif
# 120 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 120
struct uchar3 { 
# 122
unsigned char x, y, z; 
# 123
}; 
#endif
# 125 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 125
struct __attribute((aligned(4))) char4 { 
# 127
signed char x, y, z, w; 
# 128
}; 
#endif
# 130 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 130
struct __attribute((aligned(4))) uchar4 { 
# 132
unsigned char x, y, z, w; 
# 133
}; 
#endif
# 135 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 135
struct short1 { 
# 137
short x; 
# 138
}; 
#endif
# 140 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 140
struct ushort1 { 
# 142
unsigned short x; 
# 143
}; 
#endif
# 145 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 145
struct __attribute((aligned(4))) short2 { 
# 147
short x, y; 
# 148
}; 
#endif
# 150 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 150
struct __attribute((aligned(4))) ushort2 { 
# 152
unsigned short x, y; 
# 153
}; 
#endif
# 155 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 155
struct short3 { 
# 157
short x, y, z; 
# 158
}; 
#endif
# 160 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 160
struct ushort3 { 
# 162
unsigned short x, y, z; 
# 163
}; 
#endif
# 165 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 165
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 166 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 166
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 168 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 168
struct int1 { 
# 170
int x; 
# 171
}; 
#endif
# 173 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 173
struct uint1 { 
# 175
unsigned x; 
# 176
}; 
#endif
# 178 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 178
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 179 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 179
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 181 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 181
struct int3 { 
# 183
int x, y, z; 
# 184
}; 
#endif
# 186 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 186
struct uint3 { 
# 188
unsigned x, y, z; 
# 189
}; 
#endif
# 191 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 191
struct __attribute((aligned(16))) int4 { 
# 193
int x, y, z, w; 
# 194
}; 
#endif
# 196 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 196
struct __attribute((aligned(16))) uint4 { 
# 198
unsigned x, y, z, w; 
# 199
}; 
#endif
# 201 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 201
struct long1 { 
# 203
long x; 
# 204
}; 
#endif
# 206 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 206
struct ulong1 { 
# 208
unsigned long x; 
# 209
}; 
#endif
# 216 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 216
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 218
long x, y; 
# 219
}; 
#endif
# 221 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 221
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 223
unsigned long x, y; 
# 224
}; 
#endif
# 228 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 228
struct long3 { 
# 230
long x, y, z; 
# 231
}; 
#endif
# 233 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 233
struct ulong3 { 
# 235
unsigned long x, y, z; 
# 236
}; 
#endif
# 238 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 238
struct __attribute((aligned(16))) long4 { 
# 240
long x, y, z, w; 
# 241
}; 
#endif
# 243 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 243
struct __attribute((aligned(16))) ulong4 { 
# 245
unsigned long x, y, z, w; 
# 246
}; 
#endif
# 248 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 248
struct float1 { 
# 250
float x; 
# 251
}; 
#endif
# 253 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 253
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 255 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 255
struct float3 { 
# 257
float x, y, z; 
# 258
}; 
#endif
# 260 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 260
struct __attribute((aligned(16))) float4 { 
# 262
float x, y, z, w; 
# 263
}; 
#endif
# 265 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 265
struct longlong1 { 
# 267
long long x; 
# 268
}; 
#endif
# 270 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 270
struct ulonglong1 { 
# 272
unsigned long long x; 
# 273
}; 
#endif
# 275 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 275
struct __attribute((aligned(16))) longlong2 { 
# 277
long long x, y; 
# 278
}; 
#endif
# 280 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 280
struct __attribute((aligned(16))) ulonglong2 { 
# 282
unsigned long long x, y; 
# 283
}; 
#endif
# 285 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 285
struct longlong3 { 
# 287
long long x, y, z; 
# 288
}; 
#endif
# 290 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 290
struct ulonglong3 { 
# 292
unsigned long long x, y, z; 
# 293
}; 
#endif
# 295 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 295
struct __attribute((aligned(16))) longlong4 { 
# 297
long long x, y, z, w; 
# 298
}; 
#endif
# 300 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 300
struct __attribute((aligned(16))) ulonglong4 { 
# 302
unsigned long long x, y, z, w; 
# 303
}; 
#endif
# 305 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 305
struct double1 { 
# 307
double x; 
# 308
}; 
#endif
# 310 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 310
struct __attribute((aligned(16))) double2 { 
# 312
double x, y; 
# 313
}; 
#endif
# 315 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 315
struct double3 { 
# 317
double x, y, z; 
# 318
}; 
#endif
# 320 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 320
struct __attribute((aligned(16))) double4 { 
# 322
double x, y, z, w; 
# 323
}; 
#endif
# 338 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef char1 
# 338
char1; 
#endif
# 339 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uchar1 
# 339
uchar1; 
#endif
# 340 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef char2 
# 340
char2; 
#endif
# 341 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uchar2 
# 341
uchar2; 
#endif
# 342 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef char3 
# 342
char3; 
#endif
# 343 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uchar3 
# 343
uchar3; 
#endif
# 344 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef char4 
# 344
char4; 
#endif
# 345 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uchar4 
# 345
uchar4; 
#endif
# 346 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef short1 
# 346
short1; 
#endif
# 347 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ushort1 
# 347
ushort1; 
#endif
# 348 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef short2 
# 348
short2; 
#endif
# 349 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ushort2 
# 349
ushort2; 
#endif
# 350 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef short3 
# 350
short3; 
#endif
# 351 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ushort3 
# 351
ushort3; 
#endif
# 352 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef short4 
# 352
short4; 
#endif
# 353 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ushort4 
# 353
ushort4; 
#endif
# 354 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef int1 
# 354
int1; 
#endif
# 355 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uint1 
# 355
uint1; 
#endif
# 356 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef int2 
# 356
int2; 
#endif
# 357 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uint2 
# 357
uint2; 
#endif
# 358 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef int3 
# 358
int3; 
#endif
# 359 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uint3 
# 359
uint3; 
#endif
# 360 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef int4 
# 360
int4; 
#endif
# 361 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef uint4 
# 361
uint4; 
#endif
# 362 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef long1 
# 362
long1; 
#endif
# 363 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulong1 
# 363
ulong1; 
#endif
# 364 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef long2 
# 364
long2; 
#endif
# 365 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulong2 
# 365
ulong2; 
#endif
# 366 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef long3 
# 366
long3; 
#endif
# 367 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulong3 
# 367
ulong3; 
#endif
# 368 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef long4 
# 368
long4; 
#endif
# 369 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulong4 
# 369
ulong4; 
#endif
# 370 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef float1 
# 370
float1; 
#endif
# 371 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef float2 
# 371
float2; 
#endif
# 372 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef float3 
# 372
float3; 
#endif
# 373 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef float4 
# 373
float4; 
#endif
# 374 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef longlong1 
# 374
longlong1; 
#endif
# 375 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulonglong1 
# 375
ulonglong1; 
#endif
# 376 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef longlong2 
# 376
longlong2; 
#endif
# 377 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulonglong2 
# 377
ulonglong2; 
#endif
# 378 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef longlong3 
# 378
longlong3; 
#endif
# 379 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulonglong3 
# 379
ulonglong3; 
#endif
# 380 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef longlong4 
# 380
longlong4; 
#endif
# 381 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef ulonglong4 
# 381
ulonglong4; 
#endif
# 382 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef double1 
# 382
double1; 
#endif
# 383 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef double2 
# 383
double2; 
#endif
# 384 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef double3 
# 384
double3; 
#endif
# 385 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef double4 
# 385
double4; 
#endif
# 393 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
# 393
struct dim3 { 
# 395
unsigned x, y, z; 
# 401
}; 
#endif
# 403 "/home/bachelor/deicide218/cuda-4.2/include/vector_types.h"
#if 0
typedef dim3 
# 403
dim3; 
#endif
# 200 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceReset(); 
# 217 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSynchronize(); 
# 269 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetLimit(cudaLimit , size_t ); 
# 293 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetLimit(size_t * , cudaLimit ); 
# 323 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * ); 
# 364 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache ); 
# 393 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * ); 
# 435 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig ); 
# 458 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetByPCIBusId(int * , char * ); 
# 485 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetPCIBusId(char * , int , int ); 
# 527 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * , cudaEvent_t ); 
# 562 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * , cudaIpcEventHandle_t ); 
# 600 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * , void * ); 
# 647 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenMemHandle(void ** , cudaIpcMemHandle_t , unsigned ); 
# 677 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcCloseMemHandle(void * ); 
# 711 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit(); 
# 735 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize(); 
# 794 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit , size_t ); 
# 825 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t * , cudaLimit ); 
# 860 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * ); 
# 906 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache ); 
# 958 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError(); 
# 999 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError(); 
# 1013 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t ); 
# 1043 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int * ); 
# 1246 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp * , int ); 
# 1265 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int * , const cudaDeviceProp * ); 
# 1298 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int ); 
# 1315 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int * ); 
# 1344 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int * , int ); 
# 1404 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned ); 
# 1430 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t * ); 
# 1451 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t ); 
# 1487 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t , cudaEvent_t , unsigned ); 
# 1506 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t ); 
# 1524 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t ); 
# 1556 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t * ); 
# 1587 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t * , unsigned ); 
# 1620 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t , cudaStream_t  = 0); 
# 1649 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t ); 
# 1681 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t ); 
# 1706 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t ); 
# 1747 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float * , cudaEvent_t , cudaEvent_t ); 
# 1786 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3 , dim3 , size_t  = (0), cudaStream_t  = 0); 
# 1813 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void * , size_t , size_t ); 
# 1859 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char * , cudaFuncCache ); 
# 1910 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetSharedMemConfig(const char * , cudaSharedMemConfig ); 
# 1946 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char * ); 
# 1979 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * , const char * ); 
# 2001 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double * ); 
# 2023 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double * ); 
# 2055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void ** , size_t ); 
# 2084 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void ** , size_t ); 
# 2123 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void ** , size_t * , size_t , size_t ); 
# 2165 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray ** , const cudaChannelFormatDesc * , size_t , size_t  = (0), unsigned  = (0)); 
# 2189 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void * ); 
# 2209 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void * ); 
# 2231 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray * ); 
# 2290 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void ** , size_t , unsigned ); 
# 2343 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostRegister(void * , size_t , unsigned ); 
# 2362 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostUnregister(void * ); 
# 2389 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void ** , void * , unsigned ); 
# 2408 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned * , void * ); 
# 2443 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr * , cudaExtent ); 
# 2543 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray ** , const cudaChannelFormatDesc * , cudaExtent , unsigned  = (0)); 
# 2641 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * ); 
# 2669 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * ); 
# 2773 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * , cudaStream_t  = 0); 
# 2795 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * , cudaStream_t  = 0); 
# 2814 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t * , size_t * ); 
# 2835 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * , cudaExtent * , unsigned * , cudaArray * ); 
# 2870 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void * , const void * , size_t , cudaMemcpyKind ); 
# 2902 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeer(void * , int , const void * , int , size_t ); 
# 2936 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind ); 
# 2970 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind ); 
# 3005 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind  = cudaMemcpyDeviceToDevice); 
# 3047 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind ); 
# 3089 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind ); 
# 3131 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind ); 
# 3171 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind  = cudaMemcpyDeviceToDevice); 
# 3206 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char * , const void * , size_t , size_t  = (0), cudaMemcpyKind  = cudaMemcpyHostToDevice); 
# 3241 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void * , const char * , size_t , size_t  = (0), cudaMemcpyKind  = cudaMemcpyDeviceToHost); 
# 3283 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void * , const void * , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3314 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeerAsync(void * , int , const void * , int , size_t , cudaStream_t  = 0); 
# 3355 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3396 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3447 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3497 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3546 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3588 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char * , const void * , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3630 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void * , const char * , size_t , size_t , cudaMemcpyKind , cudaStream_t  = 0); 
# 3653 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void * , int , size_t ); 
# 3680 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void * , size_t , int , size_t , size_t ); 
# 3720 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr , int , cudaExtent ); 
# 3748 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void * , int , size_t , cudaStream_t  = 0); 
# 3781 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void * , size_t , int , size_t , size_t , cudaStream_t  = 0); 
# 3827 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr , int , cudaExtent , cudaStream_t  = 0); 
# 3854 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void ** , const char * ); 
# 3876 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t * , const char * ); 
# 4021 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * , const void * ); 
# 4055 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceCanAccessPeer(int * , int , int ); 
# 4096 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceEnablePeerAccess(int , unsigned ); 
# 4121 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceDisablePeerAccess(int ); 
# 4167 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t ); 
# 4199 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t , unsigned ); 
# 4234 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int , cudaGraphicsResource_t * , cudaStream_t  = 0); 
# 4265 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int , cudaGraphicsResource_t * , cudaStream_t  = 0); 
# 4294 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void ** , size_t * , cudaGraphicsResource_t ); 
# 4328 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray ** , cudaGraphicsResource_t , unsigned , unsigned ); 
# 4361 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * , const cudaArray * ); 
# 4396 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int , int , int , int , cudaChannelFormatKind ); 
# 4443 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t  = (((2147483647) * 2U) + 1U)); 
# 4494 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t , size_t , size_t ); 
# 4522 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference * , const cudaArray * , const cudaChannelFormatDesc * ); 
# 4543 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference * ); 
# 4568 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t * , const textureReference * ); 
# 4602 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference ** , const char * ); 
# 4636 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference * , const cudaArray * , const cudaChannelFormatDesc * ); 
# 4664 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference ** , const char * ); 
# 4692 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int * ); 
# 4709 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int * ); 
# 4714
extern "C" cudaError_t cudaGetExportTable(const void ** , const cudaUUID_t * ); 
# 107 "/home/bachelor/deicide218/cuda-4.2/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 108
{ 
# 109
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 124
} 
# 126
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 127
{ 
# 128
int e = (((int)sizeof(unsigned short)) * 8); 
# 130
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 131
} 
# 133
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 134
{ 
# 135
int e = (((int)sizeof(unsigned short)) * 8); 
# 137
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 138
} 
# 140
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 141
{ 
# 142
int e = (((int)sizeof(char)) * 8); 
# 147
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 194
{ 
# 195
int e = (((int)sizeof(signed char)) * 8); 
# 197
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned char)) * 8); 
# 204
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 250
{ 
# 251
int e = (((int)sizeof(short)) * 8); 
# 253
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned short)) * 8); 
# 260
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 303
} 
# 305
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 306
{ 
# 307
int e = (((int)sizeof(int)) * 8); 
# 309
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 310
} 
# 312
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 313
{ 
# 314
int e = (((int)sizeof(unsigned)) * 8); 
# 316
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 317
} 
# 379 "/home/bachelor/deicide218/cuda-4.2/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 391
} 
# 393
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 394
{ 
# 395
int e = (((int)sizeof(float)) * 8); 
# 397
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 398
} 
# 400
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 401
{ 
# 402
int e = (((int)sizeof(float)) * 8); 
# 404
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 405
} 
# 79 "/home/bachelor/deicide218/cuda-4.2/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/home/bachelor/deicide218/cuda-4.2/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/home/bachelor/deicide218/cuda-4.2/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 69 "/home/bachelor/deicide218/cuda-4.2/include/vector_functions.h"
static inline char1 make_char1(signed char x) 
# 70
{ 
# 71
char1 t; (t.x) = x; return t; 
# 72
} 
# 74
static inline uchar1 make_uchar1(unsigned char x) 
# 75
{ 
# 76
uchar1 t; (t.x) = x; return t; 
# 77
} 
# 79
static inline char2 make_char2(signed char x, signed char y) 
# 80
{ 
# 81
char2 t; (t.x) = x; (t.y) = y; return t; 
# 82
} 
# 84
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 85
{ 
# 86
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 87
} 
# 89
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 90
{ 
# 91
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 92
} 
# 94
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 95
{ 
# 96
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 97
} 
# 99
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 100
{ 
# 101
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 102
} 
# 104
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 105
{ 
# 106
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 107
} 
# 109
static inline short1 make_short1(short x) 
# 110
{ 
# 111
short1 t; (t.x) = x; return t; 
# 112
} 
# 114
static inline ushort1 make_ushort1(unsigned short x) 
# 115
{ 
# 116
ushort1 t; (t.x) = x; return t; 
# 117
} 
# 119
static inline short2 make_short2(short x, short y) 
# 120
{ 
# 121
short2 t; (t.x) = x; (t.y) = y; return t; 
# 122
} 
# 124
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 125
{ 
# 126
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 127
} 
# 129
static inline short3 make_short3(short x, short y, short z) 
# 130
{ 
# 131
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 132
} 
# 134
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 135
{ 
# 136
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 137
} 
# 139
static inline short4 make_short4(short x, short y, short z, short w) 
# 140
{ 
# 141
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 142
} 
# 144
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 145
{ 
# 146
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 147
} 
# 149
static inline int1 make_int1(int x) 
# 150
{ 
# 151
int1 t; (t.x) = x; return t; 
# 152
} 
# 154
static inline uint1 make_uint1(unsigned x) 
# 155
{ 
# 156
uint1 t; (t.x) = x; return t; 
# 157
} 
# 159
static inline int2 make_int2(int x, int y) 
# 160
{ 
# 161
int2 t; (t.x) = x; (t.y) = y; return t; 
# 162
} 
# 164
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 165
{ 
# 166
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 167
} 
# 169
static inline int3 make_int3(int x, int y, int z) 
# 170
{ 
# 171
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 172
} 
# 174
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 175
{ 
# 176
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 177
} 
# 179
static inline int4 make_int4(int x, int y, int z, int w) 
# 180
{ 
# 181
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 182
} 
# 184
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 185
{ 
# 186
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 187
} 
# 189
static inline long1 make_long1(long x) 
# 190
{ 
# 191
long1 t; (t.x) = x; return t; 
# 192
} 
# 194
static inline ulong1 make_ulong1(unsigned long x) 
# 195
{ 
# 196
ulong1 t; (t.x) = x; return t; 
# 197
} 
# 199
static inline long2 make_long2(long x, long y) 
# 200
{ 
# 201
long2 t; (t.x) = x; (t.y) = y; return t; 
# 202
} 
# 204
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 205
{ 
# 206
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 207
} 
# 209
static inline long3 make_long3(long x, long y, long z) 
# 210
{ 
# 211
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 212
} 
# 214
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 215
{ 
# 216
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 217
} 
# 219
static inline long4 make_long4(long x, long y, long z, long w) 
# 220
{ 
# 221
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 222
} 
# 224
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 225
{ 
# 226
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 227
} 
# 229
static inline float1 make_float1(float x) 
# 230
{ 
# 231
float1 t; (t.x) = x; return t; 
# 232
} 
# 234
static inline float2 make_float2(float x, float y) 
# 235
{ 
# 236
float2 t; (t.x) = x; (t.y) = y; return t; 
# 237
} 
# 239
static inline float3 make_float3(float x, float y, float z) 
# 240
{ 
# 241
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 242
} 
# 244
static inline float4 make_float4(float x, float y, float z, float w) 
# 245
{ 
# 246
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 247
} 
# 249
static inline longlong1 make_longlong1(long long x) 
# 250
{ 
# 251
longlong1 t; (t.x) = x; return t; 
# 252
} 
# 254
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 255
{ 
# 256
ulonglong1 t; (t.x) = x; return t; 
# 257
} 
# 259
static inline longlong2 make_longlong2(long long x, long long y) 
# 260
{ 
# 261
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 262
} 
# 264
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 265
{ 
# 266
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 267
} 
# 269
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 270
{ 
# 271
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 272
} 
# 274
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 275
{ 
# 276
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 277
} 
# 279
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 280
{ 
# 281
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 282
} 
# 284
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 285
{ 
# 286
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 287
} 
# 289
static inline double1 make_double1(double x) 
# 290
{ 
# 291
double1 t; (t.x) = x; return t; 
# 292
} 
# 294
static inline double2 make_double2(double x, double y) 
# 295
{ 
# 296
double2 t; (t.x) = x; (t.y) = y; return t; 
# 297
} 
# 299
static inline double3 make_double3(double x, double y, double z) 
# 300
{ 
# 301
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 302
} 
# 304
static inline double4 make_double4(double x, double y, double z, double w) 
# 305
{ 
# 306
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 307
} 
# 44 "/usr/include/string.h" 3
extern "C" void *memcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 46
 __attribute((__nonnull__(1, 2))); 
# 49
extern "C" void *memmove(void * , const void * , size_t ) throw()
# 50
 __attribute((__nonnull__(1, 2))); 
# 57
extern "C" void *memccpy(void *__restrict__ , const void *__restrict__ , int , size_t ) throw()
# 59
 __attribute((__nonnull__(1, 2))); 
# 65
extern "C" void *memset(void * , int , size_t ) throw() __attribute((__nonnull__(1))); 
# 68
extern "C" int memcmp(const void * , const void * , size_t ) throw()
# 69
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 75
extern __attribute((gnu_inline)) inline void *memchr(void * , int , size_t ) throw() __asm__("memchr")
# 76
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 77
extern __attribute((gnu_inline)) inline const void *memchr(const void * , int , size_t ) throw() __asm__("memchr")
# 78
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 81
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline void *
# 82
memchr(void *__s, int __c, size_t __n) throw() 
# 83
{ 
# 84
return __builtin_memchr(__s, __c, __n); 
# 85
} 
# 87
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const void *
# 88
memchr(const void *__s, int __c, size_t __n) throw() 
# 89
{ 
# 90
return __builtin_memchr(__s, __c, __n); 
# 91
} 
# 104
void *rawmemchr(void * , int ) throw() __asm__("rawmemchr")
# 105
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 106
const void *rawmemchr(const void * , int ) throw() __asm__("rawmemchr")
# 107
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 115
void *memrchr(void * , int , size_t ) throw() __asm__("memrchr")
# 116
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 117
const void *memrchr(const void * , int , size_t ) throw() __asm__("memrchr")
# 118
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 128
extern "C" char *strcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 129
 __attribute((__nonnull__(1, 2))); 
# 131
extern "C" char *strncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 133
 __attribute((__nonnull__(1, 2))); 
# 136
extern "C" char *strcat(char *__restrict__ , const char *__restrict__ ) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 139
extern "C" char *strncat(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 140
 __attribute((__nonnull__(1, 2))); 
# 143
extern "C" int strcmp(const char * , const char * ) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 146
extern "C" int strncmp(const char * , const char * , size_t ) throw()
# 147
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern "C" int strcoll(const char * , const char * ) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 153
extern "C" size_t strxfrm(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 155
 __attribute((__nonnull__(2))); 
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
extern "C" int strcoll_l(const char * , const char * , __locale_t ) throw()
# 166
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 168
extern "C" size_t strxfrm_l(char * , const char * , size_t , __locale_t ) throw()
# 169
 __attribute((__nonnull__(2, 4))); 
# 175
extern "C" char *strdup(const char * ) throw()
# 176
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 183
extern "C" char *strndup(const char * , size_t ) throw()
# 184
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 215 "/usr/include/string.h" 3
extern __attribute((gnu_inline)) inline char *strchr(char * , int ) throw() __asm__("strchr")
# 216
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 217
extern __attribute((gnu_inline)) inline const char *strchr(const char * , int ) throw() __asm__("strchr")
# 218
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 221
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 222
strchr(char *__s, int __c) throw() 
# 223
{ 
# 224
return __builtin_strchr(__s, __c); 
# 225
} 
# 227
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 228
strchr(const char *__s, int __c) throw() 
# 229
{ 
# 230
return __builtin_strchr(__s, __c); 
# 231
} 
# 242
extern __attribute((gnu_inline)) inline char *strrchr(char * , int ) throw() __asm__("strrchr")
# 243
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 244
extern __attribute((gnu_inline)) inline const char *strrchr(const char * , int ) throw() __asm__("strrchr")
# 245
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 248
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 249
strrchr(char *__s, int __c) throw() 
# 250
{ 
# 251
return __builtin_strrchr(__s, __c); 
# 252
} 
# 254
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 255
strrchr(const char *__s, int __c) throw() 
# 256
{ 
# 257
return __builtin_strrchr(__s, __c); 
# 258
} 
# 271
char *strchrnul(char * , int ) throw() __asm__("strchrnul")
# 272
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 273
const char *strchrnul(const char * , int ) throw() __asm__("strchrnul")
# 274
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 284
extern "C" size_t strcspn(const char * , const char * ) throw()
# 285
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 288
extern "C" size_t strspn(const char * , const char * ) throw()
# 289
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 294
extern __attribute((gnu_inline)) inline char *strpbrk(char * , const char * ) throw() __asm__("strpbrk")
# 295
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 296
extern __attribute((gnu_inline)) inline const char *strpbrk(const char * , const char * ) throw() __asm__("strpbrk")
# 297
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 300
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 301
strpbrk(char *__s, const char *__accept) throw() 
# 302
{ 
# 303
return __builtin_strpbrk(__s, __accept); 
# 304
} 
# 306
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 307
strpbrk(const char *__s, const char *__accept) throw() 
# 308
{ 
# 309
return __builtin_strpbrk(__s, __accept); 
# 310
} 
# 321
extern __attribute((gnu_inline)) inline char *strstr(char * , const char * ) throw() __asm__("strstr")
# 322
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 323
extern __attribute((gnu_inline)) inline const char *strstr(const char * , const char * ) throw() __asm__("strstr")
# 325
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 328
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 329
strstr(char *__haystack, const char *__needle) throw() 
# 330
{ 
# 331
return __builtin_strstr(__haystack, __needle); 
# 332
} 
# 334
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 335
strstr(const char *__haystack, const char *__needle) throw() 
# 336
{ 
# 337
return __builtin_strstr(__haystack, __needle); 
# 338
} 
# 348
extern "C" char *strtok(char *__restrict__ , const char *__restrict__ ) throw()
# 349
 __attribute((__nonnull__(2))); 
# 354
extern "C" char *__strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 357
 __attribute((__nonnull__(2, 3))); 
# 359
extern "C" char *strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 361
 __attribute((__nonnull__(2, 3))); 
# 367
char *strcasestr(char * , const char * ) throw() __asm__("strcasestr")
# 368
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 369
const char *strcasestr(const char * , const char * ) throw() __asm__("strcasestr")
# 371
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void * , size_t , const void * , size_t ) throw()
# 384
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 388
extern "C" void *__mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 390
 __attribute((__nonnull__(1, 2))); 
# 391
extern "C" void *mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 393
 __attribute((__nonnull__(1, 2))); 
# 399
extern "C" size_t strlen(const char * ) throw()
# 400
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 406
extern "C" size_t strnlen(const char * , size_t ) throw()
# 407
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 413
extern "C" char *strerror(int ) throw(); 
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int , char * , size_t ) throw()
# 439
 __attribute((__nonnull__(2))); 
# 445
extern "C" char *strerror_l(int , __locale_t ) throw(); 
# 451
extern "C" void __bzero(void * , size_t ) throw() __attribute((__nonnull__(1))); 
# 455
extern "C" void bcopy(const void * , void * , size_t ) throw()
# 456
 __attribute((__nonnull__(1, 2))); 
# 459
extern "C" void bzero(void * , size_t ) throw() __attribute((__nonnull__(1))); 
# 462
extern "C" int bcmp(const void * , const void * , size_t ) throw()
# 463
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 469
extern __attribute((gnu_inline)) inline char *index(char * , int ) throw() __asm__("index")
# 470
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 471
extern __attribute((gnu_inline)) inline const char *index(const char * , int ) throw() __asm__("index")
# 472
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 475
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 476
index(char *__s, int __c) throw() 
# 477
{ 
# 478
return __builtin_index(__s, __c); 
# 479
} 
# 481
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 482
index(const char *__s, int __c) throw() 
# 483
{ 
# 484
return __builtin_index(__s, __c); 
# 485
} 
# 497
extern __attribute((gnu_inline)) inline char *rindex(char * , int ) throw() __asm__("rindex")
# 498
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 499
extern __attribute((gnu_inline)) inline const char *rindex(const char * , int ) throw() __asm__("rindex")
# 500
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 503
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline char *
# 504
rindex(char *__s, int __c) throw() 
# 505
{ 
# 506
return __builtin_rindex(__s, __c); 
# 507
} 
# 509
__attribute((__always_inline__)) __attribute((__gnu_inline__, __artificial__)) inline const char *
# 510
rindex(const char *__s, int __c) throw() 
# 511
{ 
# 512
return __builtin_rindex(__s, __c); 
# 513
} 
# 523
extern "C" int ffs(int ) throw() __attribute((const)); 
# 528
extern "C" int ffsl(long ) throw() __attribute((const)); 
# 530
extern "C" int ffsll(long long ) throw()
# 531
 __attribute((const)); 
# 536
extern "C" int strcasecmp(const char * , const char * ) throw()
# 537
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 540
extern "C" int strncasecmp(const char * , const char * , size_t ) throw()
# 541
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 547
extern "C" int strcasecmp_l(const char * , const char * , __locale_t ) throw()
# 549
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 551
extern "C" int strncasecmp_l(const char * , const char * , size_t , __locale_t ) throw()
# 553
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 559
extern "C" char *strsep(char **__restrict__ , const char *__restrict__ ) throw()
# 561
 __attribute((__nonnull__(1, 2))); 
# 566
extern "C" char *strsignal(int ) throw(); 
# 569
extern "C" char *__stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 570
 __attribute((__nonnull__(1, 2))); 
# 571
extern "C" char *stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 572
 __attribute((__nonnull__(1, 2))); 
# 576
extern "C" char *__stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 578
 __attribute((__nonnull__(1, 2))); 
# 579
extern "C" char *stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 581
 __attribute((__nonnull__(1, 2))); 
# 586
extern "C" int strverscmp(const char * , const char * ) throw()
# 587
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 590
extern "C" char *strfry(char * ) throw() __attribute((__nonnull__(1))); 
# 593
extern "C" void *memfrob(void * , size_t ) throw() __attribute((__nonnull__(1))); 
# 601
char *basename(char * ) throw() __asm__("basename")
# 602
 __attribute((__nonnull__(1))); 
# 603
const char *basename(const char * ) throw() __asm__("basename")
# 604
 __attribute((__nonnull__(1))); 
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
extern "C" clock_t clock() throw(); 
# 186
extern "C" time_t time(time_t * ) throw(); 
# 189
extern "C" double difftime(time_t , time_t ) throw()
# 190
 __attribute((const)); 
# 193
extern "C" time_t mktime(tm * ) throw(); 
# 199
extern "C" size_t strftime(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ ) throw(); 
# 207
extern "C" char *strptime(const char *__restrict__ , const char *__restrict__ , tm * ) throw(); 
# 217
extern "C" size_t strftime_l(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ , __locale_t ) throw(); 
# 224
extern "C" char *strptime_l(const char *__restrict__ , const char *__restrict__ , tm * , __locale_t ) throw(); 
# 233
extern "C" tm *gmtime(const time_t * ) throw(); 
# 237
extern "C" tm *localtime(const time_t * ) throw(); 
# 243
extern "C" tm *gmtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw(); 
# 248
extern "C" tm *localtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw(); 
# 255
extern "C" char *asctime(const tm * ) throw(); 
# 258
extern "C" char *ctime(const time_t * ) throw(); 
# 266
extern "C" char *asctime_r(const tm *__restrict__ , char *__restrict__ ) throw(); 
# 270
extern "C" char *ctime_r(const time_t *__restrict__ , char *__restrict__ ) throw(); 
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
extern "C" int stime(const time_t * ) throw(); 
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm * ) throw(); 
# 316
extern "C" time_t timelocal(tm * ) throw(); 
# 319
extern "C" int dysize(int ) throw() __attribute((const)); 
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec * , timespec * ); 
# 333
extern "C" int clock_getres(clockid_t , timespec * ) throw(); 
# 336
extern "C" int clock_gettime(clockid_t , timespec * ) throw(); 
# 339
extern "C" int clock_settime(clockid_t , const timespec * ) throw(); 
# 347
extern "C" int clock_nanosleep(clockid_t , int , const timespec * , timespec * ); 
# 352
extern "C" int clock_getcpuclockid(pid_t , clockid_t * ) throw(); 
# 357
extern "C" int timer_create(clockid_t , sigevent *__restrict__ , timer_t *__restrict__ ) throw(); 
# 362
extern "C" int timer_delete(timer_t ) throw(); 
# 365
extern "C" int timer_settime(timer_t , int , const itimerspec *__restrict__ , itimerspec *__restrict__ ) throw(); 
# 370
extern "C" int timer_gettime(timer_t , itimerspec * ) throw(); 
# 374
extern "C" int timer_getoverrun(timer_t ) throw(); 
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; } 
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char * ); 
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__ , tm *__restrict__ ); 
# 69 "/home/bachelor/deicide218/cuda-4.2/include/common_functions.h"
extern "C" clock_t clock() throw(); 
# 70
extern "C" void *memset(void *, int, size_t) throw(); 
# 71
extern "C" void *memcpy(void *, const void *, size_t) throw(); 
# 160 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" int abs(int) throw(); 
# 161
extern "C" long labs(long) throw(); 
# 162
extern "C" long long llabs(long long) throw(); 
# 175 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fabs(double ) throw(); 
# 188 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fabsf(float ) throw(); 
# 189
extern "C" int min(int, int); 
# 190
extern "C" unsigned umin(unsigned, unsigned); 
# 191
extern "C" long long llmin(long long, long long); 
# 192
extern "C" unsigned long long ullmin(unsigned long long, unsigned long long); 
# 208 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fminf(float , float ) throw(); 
# 224 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fmin(double , double ) throw(); 
# 225
extern "C" int max(int, int); 
# 226
extern "C" unsigned umax(unsigned, unsigned); 
# 227
extern "C" long long llmax(long long, long long); 
# 228
extern "C" unsigned long long ullmax(unsigned long long, unsigned long long); 
# 244 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fmaxf(float , float ) throw(); 
# 260 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fmax(double, double) throw(); 
# 273 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double sin(double ) throw(); 
# 286 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double cos(double ) throw(); 
# 301 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" void sincos(double , double * , double * ) throw(); 
# 317 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" void sincosf(float , float * , float * ) throw(); 
# 330 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double tan(double ) throw(); 
# 345 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double sqrt(double ) throw(); 
# 360 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double rsqrt(double ); 
# 375 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float rsqrtf(float ); 
# 390 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double log2(double ) throw(); 
# 401 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double exp2(double ) throw(); 
# 412 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float exp2f(float ) throw(); 
# 423 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double exp10(double ) throw(); 
# 435 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float exp10f(float ) throw(); 
# 446 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double expm1(double ) throw(); 
# 457 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float expm1f(float ) throw(); 
# 472 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float log2f(float ) throw(); 
# 487 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double log10(double ) throw(); 
# 502 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double log(double ) throw(); 
# 517 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double log1p(double ) throw(); 
# 532 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float log1pf(float ) throw(); 
# 546 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double floor(double ) throw(); 
# 557 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double exp(double ) throw(); 
# 570 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double cosh(double ) throw(); 
# 582 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double sinh(double ) throw(); 
# 594 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double tanh(double ) throw(); 
# 608 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double acosh(double ) throw(); 
# 622 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float acoshf(float ) throw(); 
# 634 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double asinh(double ) throw(); 
# 646 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float asinhf(float ) throw(); 
# 660 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double atanh(double ) throw(); 
# 674 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float atanhf(float ) throw(); 
# 686 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double ldexp(double , int ) throw(); 
# 698 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float ldexpf(float , int ) throw(); 
# 711 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double logb(double ) throw(); 
# 724 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float logbf(float ) throw(); 
# 742 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" int ilogb(double ) throw(); 
# 760 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" int ilogbf(float ) throw(); 
# 774 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double scalbn(double , int ) throw(); 
# 788 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float scalbnf(float , int ) throw(); 
# 802 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double scalbln(double , long ) throw(); 
# 816 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float scalblnf(float , long ) throw(); 
# 837 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double frexp(double , int * ) throw(); 
# 858 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float frexpf(float , int * ) throw(); 
# 871 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double round(double ) throw(); 
# 884 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float roundf(float ) throw(); 
# 898 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long lround(double ) throw(); 
# 912 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long lroundf(float ) throw(); 
# 926 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long long llround(double ) throw(); 
# 940 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long long llroundf(float ) throw(); 
# 951 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double rint(double ) throw(); 
# 962 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float rintf(float ) throw(); 
# 974 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long lrint(double ) throw(); 
# 986 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long lrintf(float ) throw(); 
# 998 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long long llrint(double ) throw(); 
# 1010 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" long long llrintf(float ) throw(); 
# 1023 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double nearbyint(double ) throw(); 
# 1036 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float nearbyintf(float ) throw(); 
# 1048 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double ceil(double ) throw(); 
# 1059 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double trunc(double ) throw(); 
# 1070 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float truncf(float ) throw(); 
# 1084 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fdim(double , double ) throw(); 
# 1098 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fdimf(float , float ) throw(); 
# 1113 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double atan2(double , double ) throw(); 
# 1126 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double atan(double ) throw(); 
# 1140 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double acos(double ) throw(); 
# 1154 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double asin(double ) throw(); 
# 1169 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double hypot(double , double ) throw(); 
# 1186 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float hypotf(float , float ) throw(); 
# 1200 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double cbrt(double ) throw(); 
# 1214 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float cbrtf(float ) throw(); 
# 1227 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double rcbrt(double ); 
# 1240 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float rcbrtf(float ); 
# 1254 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double sinpi(double ); 
# 1268 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float sinpif(float ); 
# 1282 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double cospi(double ); 
# 1296 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float cospif(float ); 
# 1324 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double pow(double , double ) throw(); 
# 1341 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double modf(double , double * ) throw(); 
# 1361 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fmod(double , double ) throw(); 
# 1379 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double remainder(double , double ) throw(); 
# 1398 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float remainderf(float , float ) throw(); 
# 1417 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double remquo(double , double , int * ) throw(); 
# 1436 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float remquof(float , float , int * ) throw(); 
# 1451 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double j0(double ) throw(); 
# 1466 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float j0f(float ) throw(); 
# 1482 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double j1(double ) throw(); 
# 1498 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float j1f(float ) throw(); 
# 1514 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double jn(int , double ) throw(); 
# 1530 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float jnf(int , float ) throw(); 
# 1547 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double y0(double ) throw(); 
# 1564 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float y0f(float ) throw(); 
# 1581 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double y1(double ) throw(); 
# 1598 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float y1f(float ) throw(); 
# 1616 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double yn(int , double ) throw(); 
# 1634 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float ynf(int , float ) throw(); 
# 1648 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double erf(double ) throw(); 
# 1662 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float erff(float ) throw(); 
# 1677 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double erfinv(double ); 
# 1692 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float erfinvf(float ); 
# 1706 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double erfc(double ) throw(); 
# 1720 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float erfcf(float ) throw(); 
# 1738 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double lgamma(double ) throw(); 
# 1753 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double erfcinv(double ); 
# 1768 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float erfcinvf(float ); 
# 1778 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double erfcx(double ); 
# 1788 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float erfcxf(float ); 
# 1806 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float lgammaf(float ) throw(); 
# 1824 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double tgamma(double ) throw(); 
# 1842 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float tgammaf(float ) throw(); 
# 1851 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double copysign(double , double ) throw(); 
# 1860 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float copysignf(float , float ) throw(); 
# 1875 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double nextafter(double , double ) throw(); 
# 1890 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float nextafterf(float , float ) throw(); 
# 1902 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double nan(const char * ) throw(); 
# 1914 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float nanf(const char * ) throw(); 
# 1915
extern "C" int __isinff(float) throw(); 
# 1916
extern "C" int __isnanf(float) throw(); 
# 1925 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" int __finite(double) throw(); 
# 1926
extern "C" int __finitef(float) throw(); 
# 1927
extern "C" { extern __attribute((gnu_inline)) inline int __signbit(double) throw(); } 
# 1928
extern "C" int __isnan(double) throw(); 
# 1929
extern "C" int __isinf(double) throw(); 
# 1932
extern "C" { extern __attribute((gnu_inline)) inline int __signbitf(float) throw(); } 
# 1949 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" double fma(double , double , double ) throw(); 
# 1966 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fmaf(float , float , float ) throw(); 
# 1971
extern "C" { extern __attribute((gnu_inline)) inline int __signbitl(long double) throw(); } 
# 1977
extern "C" int __finitel(long double) throw(); 
# 1978
extern "C" int __isinfl(long double) throw(); 
# 1979
extern "C" int __isnanl(long double) throw(); 
# 2017 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float acosf(float ) throw(); 
# 2031 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float asinf(float ) throw(); 
# 2045 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float atanf(float ) throw(); 
# 2060 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float atan2f(float , float ) throw(); 
# 2074 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float cosf(float ) throw(); 
# 2088 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float sinf(float ) throw(); 
# 2102 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float tanf(float ) throw(); 
# 2116 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float coshf(float ) throw(); 
# 2129 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float sinhf(float ) throw(); 
# 2141 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float tanhf(float ) throw(); 
# 2156 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float logf(float ) throw(); 
# 2168 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float expf(float ) throw(); 
# 2183 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float log10f(float ) throw(); 
# 2199 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float modff(float , float * ) throw(); 
# 2227 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float powf(float , float ) throw(); 
# 2242 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float sqrtf(float ) throw(); 
# 2254 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float ceilf(float ) throw(); 
# 2268 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float floorf(float ) throw(); 
# 2288 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
extern "C" float fmodf(float , float ) throw(); 
# 31 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32
extern "C" { typedef double double_t; }
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double acos(double ) throw(); extern "C" double __acos(double ) throw(); 
# 57
extern "C" double asin(double ) throw(); extern "C" double __asin(double ) throw(); 
# 59
extern "C" double atan(double ) throw(); extern "C" double __atan(double ) throw(); 
# 61
extern "C" double atan2(double , double ) throw(); extern "C" double __atan2(double , double ) throw(); 
# 64
extern "C" double cos(double ) throw(); extern "C" double __cos(double ) throw(); 
# 66
extern "C" double sin(double ) throw(); extern "C" double __sin(double ) throw(); 
# 68
extern "C" double tan(double ) throw(); extern "C" double __tan(double ) throw(); 
# 73
extern "C" double cosh(double ) throw(); extern "C" double __cosh(double ) throw(); 
# 75
extern "C" double sinh(double ) throw(); extern "C" double __sinh(double ) throw(); 
# 77
extern "C" double tanh(double ) throw(); extern "C" double __tanh(double ) throw(); 
# 82
extern "C" void sincos(double , double * , double * ) throw(); extern "C" void __sincos(double , double * , double * ) throw(); 
# 89
extern "C" double acosh(double ) throw(); extern "C" double __acosh(double ) throw(); 
# 91
extern "C" double asinh(double ) throw(); extern "C" double __asinh(double ) throw(); 
# 93
extern "C" double atanh(double ) throw(); extern "C" double __atanh(double ) throw(); 
# 101
extern "C" double exp(double ) throw(); extern "C" double __exp(double ) throw(); 
# 104
extern "C" double frexp(double , int * ) throw(); extern "C" double __frexp(double , int * ) throw(); 
# 107
extern "C" double ldexp(double , int ) throw(); extern "C" double __ldexp(double , int ) throw(); 
# 110
extern "C" double log(double ) throw(); extern "C" double __log(double ) throw(); 
# 113
extern "C" double log10(double ) throw(); extern "C" double __log10(double ) throw(); 
# 116
extern "C" double modf(double , double * ) throw(); extern "C" double __modf(double , double * ) throw(); 
# 121
extern "C" double exp10(double ) throw(); extern "C" double __exp10(double ) throw(); 
# 123
extern "C" double pow10(double ) throw(); extern "C" double __pow10(double ) throw(); 
# 129
extern "C" double expm1(double ) throw(); extern "C" double __expm1(double ) throw(); 
# 132
extern "C" double log1p(double ) throw(); extern "C" double __log1p(double ) throw(); 
# 135
extern "C" double logb(double ) throw(); extern "C" double __logb(double ) throw(); 
# 142
extern "C" double exp2(double ) throw(); extern "C" double __exp2(double ) throw(); 
# 145
extern "C" double log2(double ) throw(); extern "C" double __log2(double ) throw(); 
# 154
extern "C" double pow(double , double ) throw(); extern "C" double __pow(double , double ) throw(); 
# 157
extern "C" double sqrt(double ) throw(); extern "C" double __sqrt(double ) throw(); 
# 163
extern "C" double hypot(double , double ) throw(); extern "C" double __hypot(double , double ) throw(); 
# 170
extern "C" double cbrt(double ) throw(); extern "C" double __cbrt(double ) throw(); 
# 179
extern "C" double ceil(double ) throw() __attribute((const)); extern "C" double __ceil(double ) throw() __attribute((const)); 
# 182
extern "C" double fabs(double ) throw() __attribute((const)); extern "C" double __fabs(double ) throw() __attribute((const)); 
# 185
extern "C" double floor(double ) throw() __attribute((const)); extern "C" double __floor(double ) throw() __attribute((const)); 
# 188
extern "C" double fmod(double , double ) throw(); extern "C" double __fmod(double , double ) throw(); 
# 193
extern "C" int __isinf(double ) throw() __attribute((const)); 
# 196
extern "C" int __finite(double ) throw() __attribute((const)); 
# 202
extern "C" int isinf(double ) throw() __attribute((const)); 
# 205
extern "C" int finite(double ) throw() __attribute((const)); 
# 208
extern "C" double drem(double , double ) throw(); extern "C" double __drem(double , double ) throw(); 
# 212
extern "C" double significand(double ) throw(); extern "C" double __significand(double ) throw(); 
# 218
extern "C" double copysign(double , double ) throw() __attribute((const)); extern "C" double __copysign(double , double ) throw() __attribute((const)); 
# 225
extern "C" double nan(const char * ) throw() __attribute((const)); extern "C" double __nan(const char * ) throw() __attribute((const)); 
# 231
extern "C" int __isnan(double ) throw() __attribute((const)); 
# 235
extern "C" int isnan(double ) throw() __attribute((const)); 
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
extern "C" double erf(double) throw(); extern "C" double __erf(double) throw(); 
# 251
extern "C" double erfc(double) throw(); extern "C" double __erfc(double) throw(); 
# 252
extern "C" double lgamma(double) throw(); extern "C" double __lgamma(double) throw(); 
# 259
extern "C" double tgamma(double) throw(); extern "C" double __tgamma(double) throw(); 
# 265
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw(); 
# 272
extern "C" double lgamma_r(double, int * ) throw(); extern "C" double __lgamma_r(double, int * ) throw(); 
# 280
extern "C" double rint(double ) throw(); extern "C" double __rint(double ) throw(); 
# 283
extern "C" double nextafter(double , double ) throw() __attribute((const)); extern "C" double __nextafter(double , double ) throw() __attribute((const)); 
# 285
extern "C" double nexttoward(double , long double ) throw() __attribute((const)); extern "C" double __nexttoward(double , long double ) throw() __attribute((const)); 
# 289
extern "C" double remainder(double , double ) throw(); extern "C" double __remainder(double , double ) throw(); 
# 293
extern "C" double scalbn(double , int ) throw(); extern "C" double __scalbn(double , int ) throw(); 
# 297
extern "C" int ilogb(double ) throw(); extern "C" int __ilogb(double ) throw(); 
# 302
extern "C" double scalbln(double , long ) throw(); extern "C" double __scalbln(double , long ) throw(); 
# 306
extern "C" double nearbyint(double ) throw(); extern "C" double __nearbyint(double ) throw(); 
# 310
extern "C" double round(double ) throw() __attribute((const)); extern "C" double __round(double ) throw() __attribute((const)); 
# 314
extern "C" double trunc(double ) throw() __attribute((const)); extern "C" double __trunc(double ) throw() __attribute((const)); 
# 319
extern "C" double remquo(double , double , int * ) throw(); extern "C" double __remquo(double , double , int * ) throw(); 
# 326
extern "C" long lrint(double ) throw(); extern "C" long __lrint(double ) throw(); 
# 327
extern "C" long long llrint(double ) throw(); extern "C" long long __llrint(double ) throw(); 
# 331
extern "C" long lround(double ) throw(); extern "C" long __lround(double ) throw(); 
# 332
extern "C" long long llround(double ) throw(); extern "C" long long __llround(double ) throw(); 
# 336
extern "C" double fdim(double , double ) throw(); extern "C" double __fdim(double , double ) throw(); 
# 339
extern "C" double fmax(double , double ) throw(); extern "C" double __fmax(double , double ) throw(); 
# 342
extern "C" double fmin(double , double ) throw(); extern "C" double __fmin(double , double ) throw(); 
# 346
extern "C" int __fpclassify(double ) throw()
# 347
 __attribute((const)); 
# 350
extern "C" { extern __attribute((gnu_inline)) inline int __signbit(double ) throw()
# 351
 __attribute((const)); } 
# 355
extern "C" double fma(double , double , double ) throw(); extern "C" double __fma(double , double , double ) throw(); 
# 364
extern "C" double scalb(double , double ) throw(); extern "C" double __scalb(double , double ) throw(); 
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float acosf(float ) throw(); extern "C" float __acosf(float ) throw(); 
# 57
extern "C" float asinf(float ) throw(); extern "C" float __asinf(float ) throw(); 
# 59
extern "C" float atanf(float ) throw(); extern "C" float __atanf(float ) throw(); 
# 61
extern "C" float atan2f(float , float ) throw(); extern "C" float __atan2f(float , float ) throw(); 
# 64
extern "C" float cosf(float ) throw(); 
# 66
extern "C" float sinf(float ) throw(); 
# 68
extern "C" float tanf(float ) throw(); 
# 73
extern "C" float coshf(float ) throw(); extern "C" float __coshf(float ) throw(); 
# 75
extern "C" float sinhf(float ) throw(); extern "C" float __sinhf(float ) throw(); 
# 77
extern "C" float tanhf(float ) throw(); extern "C" float __tanhf(float ) throw(); 
# 82
extern "C" void sincosf(float , float * , float * ) throw(); 
# 89
extern "C" float acoshf(float ) throw(); extern "C" float __acoshf(float ) throw(); 
# 91
extern "C" float asinhf(float ) throw(); extern "C" float __asinhf(float ) throw(); 
# 93
extern "C" float atanhf(float ) throw(); extern "C" float __atanhf(float ) throw(); 
# 101
extern "C" float expf(float ) throw(); 
# 104
extern "C" float frexpf(float , int * ) throw(); extern "C" float __frexpf(float , int * ) throw(); 
# 107
extern "C" float ldexpf(float , int ) throw(); extern "C" float __ldexpf(float , int ) throw(); 
# 110
extern "C" float logf(float ) throw(); 
# 113
extern "C" float log10f(float ) throw(); 
# 116
extern "C" float modff(float , float * ) throw(); extern "C" float __modff(float , float * ) throw(); 
# 121
extern "C" float exp10f(float ) throw(); 
# 123
extern "C" float pow10f(float ) throw(); extern "C" float __pow10f(float ) throw(); 
# 129
extern "C" float expm1f(float ) throw(); extern "C" float __expm1f(float ) throw(); 
# 132
extern "C" float log1pf(float ) throw(); extern "C" float __log1pf(float ) throw(); 
# 135
extern "C" float logbf(float ) throw(); extern "C" float __logbf(float ) throw(); 
# 142
extern "C" float exp2f(float ) throw(); extern "C" float __exp2f(float ) throw(); 
# 145
extern "C" float log2f(float ) throw(); 
# 154
extern "C" float powf(float , float ) throw(); 
# 157
extern "C" float sqrtf(float ) throw(); extern "C" float __sqrtf(float ) throw(); 
# 163
extern "C" float hypotf(float , float ) throw(); extern "C" float __hypotf(float , float ) throw(); 
# 170
extern "C" float cbrtf(float ) throw(); extern "C" float __cbrtf(float ) throw(); 
# 179
extern "C" float ceilf(float ) throw() __attribute((const)); extern "C" float __ceilf(float ) throw() __attribute((const)); 
# 182
extern "C" float fabsf(float ) throw() __attribute((const)); extern "C" float __fabsf(float ) throw() __attribute((const)); 
# 185
extern "C" float floorf(float ) throw() __attribute((const)); extern "C" float __floorf(float ) throw() __attribute((const)); 
# 188
extern "C" float fmodf(float , float ) throw(); extern "C" float __fmodf(float , float ) throw(); 
# 193
extern "C" int __isinff(float ) throw() __attribute((const)); 
# 196
extern "C" int __finitef(float ) throw() __attribute((const)); 
# 202
extern "C" int isinff(float ) throw() __attribute((const)); 
# 205
extern "C" int finitef(float ) throw() __attribute((const)); 
# 208
extern "C" float dremf(float , float ) throw(); extern "C" float __dremf(float , float ) throw(); 
# 212
extern "C" float significandf(float ) throw(); extern "C" float __significandf(float ) throw(); 
# 218
extern "C" float copysignf(float , float ) throw() __attribute((const)); extern "C" float __copysignf(float , float ) throw() __attribute((const)); 
# 225
extern "C" float nanf(const char * ) throw() __attribute((const)); extern "C" float __nanf(const char * ) throw() __attribute((const)); 
# 231
extern "C" int __isnanf(float ) throw() __attribute((const)); 
# 235
extern "C" int isnanf(float ) throw() __attribute((const)); 
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
extern "C" float erff(float) throw(); extern "C" float __erff(float) throw(); 
# 251
extern "C" float erfcf(float) throw(); extern "C" float __erfcf(float) throw(); 
# 252
extern "C" float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw(); 
# 259
extern "C" float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw(); 
# 265
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw(); 
# 272
extern "C" float lgammaf_r(float, int * ) throw(); extern "C" float __lgammaf_r(float, int * ) throw(); 
# 280
extern "C" float rintf(float ) throw(); extern "C" float __rintf(float ) throw(); 
# 283
extern "C" float nextafterf(float , float ) throw() __attribute((const)); extern "C" float __nextafterf(float , float ) throw() __attribute((const)); 
# 285
extern "C" float nexttowardf(float , long double ) throw() __attribute((const)); extern "C" float __nexttowardf(float , long double ) throw() __attribute((const)); 
# 289
extern "C" float remainderf(float , float ) throw(); extern "C" float __remainderf(float , float ) throw(); 
# 293
extern "C" float scalbnf(float , int ) throw(); extern "C" float __scalbnf(float , int ) throw(); 
# 297
extern "C" int ilogbf(float ) throw(); extern "C" int __ilogbf(float ) throw(); 
# 302
extern "C" float scalblnf(float , long ) throw(); extern "C" float __scalblnf(float , long ) throw(); 
# 306
extern "C" float nearbyintf(float ) throw(); extern "C" float __nearbyintf(float ) throw(); 
# 310
extern "C" float roundf(float ) throw() __attribute((const)); extern "C" float __roundf(float ) throw() __attribute((const)); 
# 314
extern "C" float truncf(float ) throw() __attribute((const)); extern "C" float __truncf(float ) throw() __attribute((const)); 
# 319
extern "C" float remquof(float , float , int * ) throw(); extern "C" float __remquof(float , float , int * ) throw(); 
# 326
extern "C" long lrintf(float ) throw(); extern "C" long __lrintf(float ) throw(); 
# 327
extern "C" long long llrintf(float ) throw(); extern "C" long long __llrintf(float ) throw(); 
# 331
extern "C" long lroundf(float ) throw(); extern "C" long __lroundf(float ) throw(); 
# 332
extern "C" long long llroundf(float ) throw(); extern "C" long long __llroundf(float ) throw(); 
# 336
extern "C" float fdimf(float , float ) throw(); extern "C" float __fdimf(float , float ) throw(); 
# 339
extern "C" float fmaxf(float , float ) throw(); extern "C" float __fmaxf(float , float ) throw(); 
# 342
extern "C" float fminf(float , float ) throw(); extern "C" float __fminf(float , float ) throw(); 
# 346
extern "C" int __fpclassifyf(float ) throw()
# 347
 __attribute((const)); 
# 350
extern "C" { extern __attribute((gnu_inline)) inline int __signbitf(float ) throw()
# 351
 __attribute((const)); } 
# 355
extern "C" float fmaf(float , float , float ) throw(); extern "C" float __fmaf(float , float , float ) throw(); 
# 364
extern "C" float scalbf(float , float ) throw(); extern "C" float __scalbf(float , float ) throw(); 
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double ) throw(); extern "C" long double __acosl(long double ) throw(); 
# 57
extern "C" long double asinl(long double ) throw(); extern "C" long double __asinl(long double ) throw(); 
# 59
extern "C" long double atanl(long double ) throw(); extern "C" long double __atanl(long double ) throw(); 
# 61
extern "C" long double atan2l(long double , long double ) throw(); extern "C" long double __atan2l(long double , long double ) throw(); 
# 64
extern "C" long double cosl(long double ) throw(); extern "C" long double __cosl(long double ) throw(); 
# 66
extern "C" long double sinl(long double ) throw(); extern "C" long double __sinl(long double ) throw(); 
# 68
extern "C" long double tanl(long double ) throw(); extern "C" long double __tanl(long double ) throw(); 
# 73
extern "C" long double coshl(long double ) throw(); extern "C" long double __coshl(long double ) throw(); 
# 75
extern "C" long double sinhl(long double ) throw(); extern "C" long double __sinhl(long double ) throw(); 
# 77
extern "C" long double tanhl(long double ) throw(); extern "C" long double __tanhl(long double ) throw(); 
# 82
extern "C" void sincosl(long double , long double * , long double * ) throw(); extern "C" void __sincosl(long double , long double * , long double * ) throw(); 
# 89
extern "C" long double acoshl(long double ) throw(); extern "C" long double __acoshl(long double ) throw(); 
# 91
extern "C" long double asinhl(long double ) throw(); extern "C" long double __asinhl(long double ) throw(); 
# 93
extern "C" long double atanhl(long double ) throw(); extern "C" long double __atanhl(long double ) throw(); 
# 101
extern "C" long double expl(long double ) throw(); extern "C" long double __expl(long double ) throw(); 
# 104
extern "C" long double frexpl(long double , int * ) throw(); extern "C" long double __frexpl(long double , int * ) throw(); 
# 107
extern "C" long double ldexpl(long double , int ) throw(); extern "C" long double __ldexpl(long double , int ) throw(); 
# 110
extern "C" long double logl(long double ) throw(); extern "C" long double __logl(long double ) throw(); 
# 113
extern "C" long double log10l(long double ) throw(); extern "C" long double __log10l(long double ) throw(); 
# 116
extern "C" long double modfl(long double , long double * ) throw(); extern "C" long double __modfl(long double , long double * ) throw(); 
# 121
extern "C" long double exp10l(long double ) throw(); extern "C" long double __exp10l(long double ) throw(); 
# 123
extern "C" long double pow10l(long double ) throw(); extern "C" long double __pow10l(long double ) throw(); 
# 129
extern "C" long double expm1l(long double ) throw(); extern "C" long double __expm1l(long double ) throw(); 
# 132
extern "C" long double log1pl(long double ) throw(); extern "C" long double __log1pl(long double ) throw(); 
# 135
extern "C" long double logbl(long double ) throw(); extern "C" long double __logbl(long double ) throw(); 
# 142
extern "C" long double exp2l(long double ) throw(); extern "C" long double __exp2l(long double ) throw(); 
# 145
extern "C" long double log2l(long double ) throw(); extern "C" long double __log2l(long double ) throw(); 
# 154
extern "C" long double powl(long double , long double ) throw(); extern "C" long double __powl(long double , long double ) throw(); 
# 157
extern "C" long double sqrtl(long double ) throw(); extern "C" long double __sqrtl(long double ) throw(); 
# 163
extern "C" long double hypotl(long double , long double ) throw(); extern "C" long double __hypotl(long double , long double ) throw(); 
# 170
extern "C" long double cbrtl(long double ) throw(); extern "C" long double __cbrtl(long double ) throw(); 
# 179
extern "C" long double ceill(long double ) throw() __attribute((const)); extern "C" long double __ceill(long double ) throw() __attribute((const)); 
# 182
extern "C" long double fabsl(long double ) throw() __attribute((const)); extern "C" long double __fabsl(long double ) throw() __attribute((const)); 
# 185
extern "C" long double floorl(long double ) throw() __attribute((const)); extern "C" long double __floorl(long double ) throw() __attribute((const)); 
# 188
extern "C" long double fmodl(long double , long double ) throw(); extern "C" long double __fmodl(long double , long double ) throw(); 
# 193
extern "C" int __isinfl(long double ) throw() __attribute((const)); 
# 196
extern "C" int __finitel(long double ) throw() __attribute((const)); 
# 202
extern "C" int isinfl(long double ) throw() __attribute((const)); 
# 205
extern "C" int finitel(long double ) throw() __attribute((const)); 
# 208
extern "C" long double dreml(long double , long double ) throw(); extern "C" long double __dreml(long double , long double ) throw(); 
# 212
extern "C" long double significandl(long double ) throw(); extern "C" long double __significandl(long double ) throw(); 
# 218
extern "C" long double copysignl(long double , long double ) throw() __attribute((const)); extern "C" long double __copysignl(long double , long double ) throw() __attribute((const)); 
# 225
extern "C" long double nanl(const char * ) throw() __attribute((const)); extern "C" long double __nanl(const char * ) throw() __attribute((const)); 
# 231
extern "C" int __isnanl(long double ) throw() __attribute((const)); 
# 235
extern "C" int isnanl(long double ) throw() __attribute((const)); 
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
extern "C" long double lgammal_r(long double, int * ) throw(); extern "C" long double __lgammal_r(long double, int * ) throw(); 
# 280
extern "C" long double rintl(long double ) throw(); extern "C" long double __rintl(long double ) throw(); 
# 283
extern "C" long double nextafterl(long double , long double ) throw() __attribute((const)); extern "C" long double __nextafterl(long double , long double ) throw() __attribute((const)); 
# 285
extern "C" long double nexttowardl(long double , long double ) throw() __attribute((const)); extern "C" long double __nexttowardl(long double , long double ) throw() __attribute((const)); 
# 289
extern "C" long double remainderl(long double , long double ) throw(); extern "C" long double __remainderl(long double , long double ) throw(); 
# 293
extern "C" long double scalbnl(long double , int ) throw(); extern "C" long double __scalbnl(long double , int ) throw(); 
# 297
extern "C" int ilogbl(long double ) throw(); extern "C" int __ilogbl(long double ) throw(); 
# 302
extern "C" long double scalblnl(long double , long ) throw(); extern "C" long double __scalblnl(long double , long ) throw(); 
# 306
extern "C" long double nearbyintl(long double ) throw(); extern "C" long double __nearbyintl(long double ) throw(); 
# 310
extern "C" long double roundl(long double ) throw() __attribute((const)); extern "C" long double __roundl(long double ) throw() __attribute((const)); 
# 314
extern "C" long double truncl(long double ) throw() __attribute((const)); extern "C" long double __truncl(long double ) throw() __attribute((const)); 
# 319
extern "C" long double remquol(long double , long double , int * ) throw(); extern "C" long double __remquol(long double , long double , int * ) throw(); 
# 326
extern "C" long lrintl(long double ) throw(); extern "C" long __lrintl(long double ) throw(); 
# 327
extern "C" long long llrintl(long double ) throw(); extern "C" long long __llrintl(long double ) throw(); 
# 331
extern "C" long lroundl(long double ) throw(); extern "C" long __lroundl(long double ) throw(); 
# 332
extern "C" long long llroundl(long double ) throw(); extern "C" long long __llroundl(long double ) throw(); 
# 336
extern "C" long double fdiml(long double , long double ) throw(); extern "C" long double __fdiml(long double , long double ) throw(); 
# 339
extern "C" long double fmaxl(long double , long double ) throw(); extern "C" long double __fmaxl(long double , long double ) throw(); 
# 342
extern "C" long double fminl(long double , long double ) throw(); extern "C" long double __fminl(long double , long double ) throw(); 
# 346
extern "C" int __fpclassifyl(long double ) throw()
# 347
 __attribute((const)); 
# 350
extern "C" { extern __attribute((gnu_inline)) inline int __signbitl(long double ) throw()
# 351
 __attribute((const)); } 
# 355
extern "C" long double fmal(long double , long double , long double ) throw(); extern "C" long double __fmal(long double , long double , long double ) throw(); 
# 364
extern "C" long double scalbl(long double , long double ) throw(); extern "C" long double __scalbl(long double , long double ) throw(); 
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; } 
# 203 "/usr/include/math.h" 3
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
# 318 "/usr/include/math.h" 3
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
extern "C" int matherr(__exception * ) throw(); 
# 38 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { 
# 37
__attribute((__gnu_inline__)) inline int 
# 38
__signbitf(float __x) throw() 
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
extern "C" { 
# 49
__attribute((__gnu_inline__)) inline int 
# 50
__signbit(double __x) throw() 
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
extern "C" { 
# 61
__attribute((__gnu_inline__)) inline int 
# 62
__signbitl(long double __x) throw() 
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
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw(); 
# 145
extern "C" { extern __attribute((gnu_inline)) inline double atof(const char * ) throw()
# 146
 __attribute((__pure__)) __attribute((__nonnull__(1))); } 
# 148
extern "C" { extern __attribute((gnu_inline)) inline int atoi(const char * ) throw()
# 149
 __attribute((__pure__)) __attribute((__nonnull__(1))); } 
# 151
extern "C" { extern __attribute((gnu_inline)) inline long atol(const char * ) throw()
# 152
 __attribute((__pure__)) __attribute((__nonnull__(1))); } 
# 158
extern "C" { extern __attribute((gnu_inline)) inline long long atoll(const char * ) throw()
# 159
 __attribute((__pure__)) __attribute((__nonnull__(1))); } 
# 165
extern "C" double strtod(const char *__restrict__ , char **__restrict__ ) throw()
# 167
 __attribute((__nonnull__(1))); 
# 173
extern "C" float strtof(const char *__restrict__ , char **__restrict__ ) throw()
# 174
 __attribute((__nonnull__(1))); 
# 176
extern "C" long double strtold(const char *__restrict__ , char **__restrict__ ) throw()
# 178
 __attribute((__nonnull__(1))); 
# 184
extern "C" long strtol(const char *__restrict__ , char **__restrict__ , int ) throw()
# 186
 __attribute((__nonnull__(1))); 
# 188
extern "C" unsigned long strtoul(const char *__restrict__ , char **__restrict__ , int ) throw()
# 190
 __attribute((__nonnull__(1))); 
# 196
extern "C" long long strtoq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 198
 __attribute((__nonnull__(1))); 
# 201
extern "C" unsigned long long strtouq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 203
 __attribute((__nonnull__(1))); 
# 210
extern "C" long long strtoll(const char *__restrict__ , char **__restrict__ , int ) throw()
# 212
 __attribute((__nonnull__(1))); 
# 215
extern "C" unsigned long long strtoull(const char *__restrict__ , char **__restrict__ , int ) throw()
# 217
 __attribute((__nonnull__(1))); 
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 242
 __attribute((__nonnull__(1, 4))); 
# 244
extern "C" unsigned long strtoul_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 247
 __attribute((__nonnull__(1, 4))); 
# 250
extern "C" long long strtoll_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 253
 __attribute((__nonnull__(1, 4))); 
# 256
extern "C" unsigned long long strtoull_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 259
 __attribute((__nonnull__(1, 4))); 
# 261
extern "C" double strtod_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 263
 __attribute((__nonnull__(1, 3))); 
# 265
extern "C" float strtof_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 267
 __attribute((__nonnull__(1, 3))); 
# 269
extern "C" long double strtold_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 272
 __attribute((__nonnull__(1, 3))); 
# 279
extern "C" { 
# 278
__attribute((__gnu_inline__)) inline double 
# 279
atof(const char *__nptr) throw() 
# 280
{ 
# 281
return strtod(__nptr, (char **)__null); 
# 282
} } 
# 284
extern "C" { 
# 283
__attribute((__gnu_inline__)) inline int 
# 284
atoi(const char *__nptr) throw() 
# 285
{ 
# 286
return (int)strtol(__nptr, (char **)__null, 10); 
# 287
} } 
# 289
extern "C" { 
# 288
__attribute((__gnu_inline__)) inline long 
# 289
atol(const char *__nptr) throw() 
# 290
{ 
# 291
return strtol(__nptr, (char **)__null, 10); 
# 292
} } 
# 298
extern "C" { 
# 297
__attribute((__gnu_inline__)) inline long long 
# 298
atoll(const char *__nptr) throw() 
# 299
{ 
# 300
return strtoll(__nptr, (char **)__null, 10); 
# 301
} } 
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long ) throw(); 
# 314
extern "C" long a64l(const char * ) throw()
# 315
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
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
extern "C" { typedef signed char int8_t __attribute((__mode__(__QI__))); }
# 196
extern "C" { typedef short int16_t __attribute((__mode__(__HI__))); }
# 197
extern "C" { typedef int int32_t __attribute((__mode__(__SI__))); }
# 198
extern "C" { typedef long int64_t __attribute((__mode__(__DI__))); }
# 201
extern "C" { typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); }
# 202
extern "C" { typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); }
# 203
extern "C" { typedef unsigned u_int32_t __attribute((__mode__(__SI__))); }
# 204
extern "C" { typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); }
# 206
extern "C" { typedef long register_t __attribute((__mode__(__word__))); }
# 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32
extern "C" { typedef 
# 30
struct { 
# 31
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
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
# 78 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef 
# 68
struct { 
# 72
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 78
} fd_set; }
# 85
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int select(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , timeval *__restrict__ ); 
# 121 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int pselect(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , const timespec *__restrict__ , const __sigset_t *__restrict__ ); 
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern __attribute((gnu_inline)) inline unsigned gnu_dev_major(unsigned long long ) throw(); } 
# 34
extern "C" { extern __attribute((gnu_inline)) inline unsigned gnu_dev_minor(unsigned long long ) throw(); } 
# 37
extern "C" { extern __attribute((gnu_inline)) inline unsigned long long gnu_dev_makedev(unsigned , unsigned ) throw(); } 
# 43
extern "C" { 
# 42
__attribute((__gnu_inline__)) inline unsigned 
# 43
gnu_dev_major(unsigned long long __dev) throw() 
# 44
{ 
# 45
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095)); 
# 46
} } 
# 49
extern "C" { 
# 48
__attribute((__gnu_inline__)) inline unsigned 
# 49
gnu_dev_minor(unsigned long long __dev) throw() 
# 50
{ 
# 51
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255)); 
# 52
} } 
# 55
extern "C" { 
# 54
__attribute((__gnu_inline__)) inline unsigned long long 
# 55
gnu_dev_makedev(unsigned __major, unsigned __minor) throw() 
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
extern "C" void srandom(unsigned ) throw(); 
# 336
extern "C" char *initstate(unsigned , char * , size_t ) throw()
# 337
 __attribute((__nonnull__(2))); 
# 341
extern "C" char *setstate(char * ) throw() __attribute((__nonnull__(1))); 
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
extern "C" int random_r(random_data *__restrict__ , int32_t *__restrict__ ) throw()
# 361
 __attribute((__nonnull__(1, 2))); 
# 363
extern "C" int srandom_r(unsigned , random_data * ) throw()
# 364
 __attribute((__nonnull__(2))); 
# 366
extern "C" int initstate_r(unsigned , char *__restrict__ , size_t , random_data *__restrict__ ) throw()
# 369
 __attribute((__nonnull__(2, 4))); 
# 371
extern "C" int setstate_r(char *__restrict__ , random_data *__restrict__ ) throw()
# 373
 __attribute((__nonnull__(1, 2))); 
# 380
extern "C" int rand() throw(); 
# 382
extern "C" void srand(unsigned ) throw(); 
# 387
extern "C" int rand_r(unsigned * ) throw(); 
# 395
extern "C" double drand48() throw(); 
# 396
extern "C" double erand48(unsigned short  [3]) throw() __attribute((__nonnull__(1))); 
# 399
extern "C" long lrand48() throw(); 
# 400
extern "C" long nrand48(unsigned short  [3]) throw()
# 401
 __attribute((__nonnull__(1))); 
# 404
extern "C" long mrand48() throw(); 
# 405
extern "C" long jrand48(unsigned short  [3]) throw()
# 406
 __attribute((__nonnull__(1))); 
# 409
extern "C" void srand48(long ) throw(); 
# 410
extern "C" unsigned short *seed48(unsigned short  [3]) throw()
# 411
 __attribute((__nonnull__(1))); 
# 412
extern "C" void lcong48(unsigned short  [7]) throw() __attribute((__nonnull__(1))); 
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
extern "C" int drand48_r(drand48_data *__restrict__ , double *__restrict__ ) throw()
# 429
 __attribute((__nonnull__(1, 2))); 
# 430
extern "C" int erand48_r(unsigned short  [3], drand48_data *__restrict__ , double *__restrict__ ) throw()
# 432
 __attribute((__nonnull__(1, 2))); 
# 435
extern "C" int lrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 437
 __attribute((__nonnull__(1, 2))); 
# 438
extern "C" int nrand48_r(unsigned short  [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 441
 __attribute((__nonnull__(1, 2))); 
# 444
extern "C" int mrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 446
 __attribute((__nonnull__(1, 2))); 
# 447
extern "C" int jrand48_r(unsigned short  [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 450
 __attribute((__nonnull__(1, 2))); 
# 453
extern "C" int srand48_r(long , drand48_data * ) throw()
# 454
 __attribute((__nonnull__(2))); 
# 456
extern "C" int seed48_r(unsigned short  [3], drand48_data * ) throw()
# 457
 __attribute((__nonnull__(1, 2))); 
# 459
extern "C" int lcong48_r(unsigned short  [7], drand48_data * ) throw()
# 461
 __attribute((__nonnull__(1, 2))); 
# 471
extern "C" void *malloc(size_t ) throw() __attribute((__malloc__)); 
# 473
extern "C" void *calloc(size_t , size_t ) throw()
# 474
 __attribute((__malloc__)); 
# 485
extern "C" void *realloc(void * , size_t ) throw()
# 486
 __attribute((__warn_unused_result__)); 
# 488
extern "C" void free(void * ) throw(); 
# 493
extern "C" void cfree(void * ) throw(); 
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t ) throw(); 
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t ) throw() __attribute((__malloc__)); 
# 508
extern "C" int posix_memalign(void ** , size_t , size_t ) throw()
# 509
 __attribute((__nonnull__(1))); 
# 514
extern "C" void abort() throw() __attribute((__noreturn__)); 
# 518
extern "C" int atexit(void (* )(void)) throw() __attribute((__nonnull__(1))); 
# 525
int at_quick_exit(void (* )(void)) throw() __asm__("at_quick_exit")
# 526
 __attribute((__nonnull__(1))); 
# 536
extern "C" int on_exit(void (* )(int , void * ), void * ) throw()
# 537
 __attribute((__nonnull__(1))); 
# 544
extern "C" void exit(int ) throw() __attribute((__noreturn__)); 
# 552
extern "C" void quick_exit(int ) throw() __attribute((__noreturn__)); 
# 560
extern "C" void _Exit(int ) throw() __attribute((__noreturn__)); 
# 567
extern "C" char *getenv(const char * ) throw() __attribute((__nonnull__(1))); 
# 572
extern "C" char *__secure_getenv(const char * ) throw()
# 573
 __attribute((__nonnull__(1))); 
# 579
extern "C" int putenv(char * ) throw() __attribute((__nonnull__(1))); 
# 585
extern "C" int setenv(const char * , const char * , int ) throw()
# 586
 __attribute((__nonnull__(2))); 
# 589
extern "C" int unsetenv(const char * ) throw() __attribute((__nonnull__(1))); 
# 596
extern "C" int clearenv() throw(); 
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char * ) throw() __attribute((__nonnull__(1))); 
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char * ) __attribute((__nonnull__(1))); 
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char * ) __attribute((__nonnull__(1))); 
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char * , int ) __attribute((__nonnull__(1))); 
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char * , int )
# 653
 __attribute((__nonnull__(1))); 
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char * ) throw() __attribute((__nonnull__(1))); 
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char * , int ) __attribute((__nonnull__(1))); 
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char * , int ) __attribute((__nonnull__(1))); 
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char * , int , int )
# 695
 __attribute((__nonnull__(1))); 
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char * , int , int )
# 707
 __attribute((__nonnull__(1))); 
# 717
extern "C" int system(const char * ); 
# 724
extern "C" char *canonicalize_file_name(const char * ) throw()
# 725
 __attribute((__nonnull__(1))); 
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__ , char *__restrict__ ) throw(); 
# 742
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755
extern "C" void *bsearch(const void * , const void * , size_t , size_t , __compar_fn_t )
# 757
 __attribute((__nonnull__(1, 2, 5))); 
# 761
extern "C" void qsort(void * , size_t , size_t , __compar_fn_t )
# 762
 __attribute((__nonnull__(1, 4))); 
# 764
extern "C" void qsort_r(void * , size_t , size_t , __compar_d_fn_t , void * )
# 766
 __attribute((__nonnull__(1, 4))); 
# 771
extern "C" int abs(int ) throw() __attribute((const)); 
# 772
extern "C" long labs(long ) throw() __attribute((const)); 
# 776
extern "C" long long llabs(long long ) throw()
# 777
 __attribute((const)); 
# 785
extern "C" div_t div(int , int ) throw()
# 786
 __attribute((const)); 
# 787
extern "C" ldiv_t ldiv(long , long ) throw()
# 788
 __attribute((const)); 
# 793
extern "C" lldiv_t lldiv(long long , long long ) throw()
# 795
 __attribute((const)); 
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 809
 __attribute((__nonnull__(3, 4))); 
# 814
extern "C" char *fcvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 815
 __attribute((__nonnull__(3, 4))); 
# 820
extern "C" char *gcvt(double , int , char * ) throw()
# 821
 __attribute((__nonnull__(3))); 
# 826
extern "C" char *qecvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 828
 __attribute((__nonnull__(3, 4))); 
# 829
extern "C" char *qfcvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 831
 __attribute((__nonnull__(3, 4))); 
# 832
extern "C" char *qgcvt(long double , int , char * ) throw()
# 833
 __attribute((__nonnull__(3))); 
# 838
extern "C" int ecvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 840
 __attribute((__nonnull__(3, 4, 5))); 
# 841
extern "C" int fcvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 843
 __attribute((__nonnull__(3, 4, 5))); 
# 845
extern "C" int qecvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 848
 __attribute((__nonnull__(3, 4, 5))); 
# 849
extern "C" int qfcvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 852
 __attribute((__nonnull__(3, 4, 5))); 
# 860
extern "C" int mblen(const char * , size_t ) throw(); 
# 863
extern "C" int mbtowc(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw(); 
# 867
extern "C" int wctomb(char * , wchar_t ) throw(); 
# 871
extern "C" size_t mbstowcs(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw(); 
# 874
extern "C" size_t wcstombs(char *__restrict__ , const wchar_t *__restrict__ , size_t ) throw(); 
# 885
extern "C" int rpmatch(const char * ) throw() __attribute((__nonnull__(1))); 
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__ , char *const *__restrict__ , char **__restrict__ ) throw()
# 899
 __attribute((__nonnull__(1, 2, 3))); 
# 905
extern "C" void setkey(const char * ) throw() __attribute((__nonnull__(1))); 
# 913
extern "C" int posix_openpt(int ); 
# 921
extern "C" int grantpt(int ) throw(); 
# 925
extern "C" int unlockpt(int ) throw(); 
# 930
extern "C" char *ptsname(int ) throw(); 
# 937
extern "C" int ptsname_r(int , char * , size_t ) throw()
# 938
 __attribute((__nonnull__(2))); 
# 941
extern "C" int getpt(); 
# 948
extern "C" int getloadavg(double  [], int ) throw()
# 949
 __attribute((__nonnull__(1))); 
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 71
template< class _Iterator, class _Container> class __normal_iterator; 
# 74
}
# 76
namespace std __attribute((__visibility__("default"))) { 
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
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
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
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
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
namespace std __attribute((__visibility__("default"))) { 
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
namespace std __attribute((__visibility__("default"))) { 
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
namespace std __attribute((__visibility__("default"))) { 
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
namespace std __attribute((__visibility__("default"))) { 
# 51
using ::ptrdiff_t;
# 52
using ::size_t;
# 54
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute((__visibility__("default"))) { 
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
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
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
namespace std __attribute((__visibility__("default"))) { 
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
# 2335 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
namespace __gnu_cxx { 
# 2337
extern inline long long abs(long long); 
# 2338
}
# 2340
namespace std { 
# 2342
template< class T> extern inline T __pow_helper(T, int); 
# 2343
template< class T> extern inline T __cmath_power(T, unsigned); 
# 2344
}
# 2346
using std::abs;
# 2347
using std::fabs;
# 2348
using std::ceil;
# 2349
using std::floor;
# 2350
using std::sqrt;
# 2351
using std::pow;
# 2352
using std::log;
# 2353
using std::log10;
# 2354
using std::fmod;
# 2355
using std::modf;
# 2356
using std::exp;
# 2357
using std::frexp;
# 2358
using std::ldexp;
# 2359
using std::asin;
# 2360
using std::sin;
# 2361
using std::sinh;
# 2362
using std::acos;
# 2363
using std::cos;
# 2364
using std::cosh;
# 2365
using std::atan;
# 2366
using std::atan2;
# 2367
using std::tan;
# 2368
using std::tanh;
# 2531 "/home/bachelor/deicide218/cuda-4.2/include/math_functions.h"
namespace std { 
# 2534
extern inline long abs(long); 
# 2535
extern inline float abs(float); 
# 2536
extern inline double abs(double); 
# 2537
extern inline float fabs(float); 
# 2538
extern inline float ceil(float); 
# 2539
extern inline float floor(float); 
# 2540
extern inline float sqrt(float); 
# 2541
extern inline float pow(float, float); 
# 2542
extern inline float pow(float, int); 
# 2543
extern inline double pow(double, int); 
# 2544
extern inline float log(float); 
# 2545
extern inline float log10(float); 
# 2546
extern inline float fmod(float, float); 
# 2547
extern inline float modf(float, float *); 
# 2548
extern inline float exp(float); 
# 2549
extern inline float frexp(float, int *); 
# 2550
extern inline float ldexp(float, int); 
# 2551
extern inline float asin(float); 
# 2552
extern inline float sin(float); 
# 2553
extern inline float sinh(float); 
# 2554
extern inline float acos(float); 
# 2555
extern inline float cos(float); 
# 2556
extern inline float cosh(float); 
# 2557
extern inline float atan(float); 
# 2558
extern inline float atan2(float, float); 
# 2559
extern inline float tan(float); 
# 2560
extern inline float tanh(float); 
# 2563
}
# 2566
static inline float logb(float a) 
# 2567
{ 
# 2568
return logbf(a); 
# 2569
} 
# 2571
static inline int ilogb(float a) 
# 2572
{ 
# 2573
return ilogbf(a); 
# 2574
} 
# 2576
static inline float scalbn(float a, int b) 
# 2577
{ 
# 2578
return scalbnf(a, b); 
# 2579
} 
# 2581
static inline float scalbln(float a, long b) 
# 2582
{ 
# 2583
return scalblnf(a, b); 
# 2584
} 
# 2586
static inline float exp2(float a) 
# 2587
{ 
# 2588
return exp2f(a); 
# 2589
} 
# 2591
static inline float exp10(float a) 
# 2592
{ 
# 2593
return exp10f(a); 
# 2594
} 
# 2596
static inline float expm1(float a) 
# 2597
{ 
# 2598
return expm1f(a); 
# 2599
} 
# 2601
static inline float log2(float a) 
# 2602
{ 
# 2603
return log2f(a); 
# 2604
} 
# 2606
static inline float log1p(float a) 
# 2607
{ 
# 2608
return log1pf(a); 
# 2609
} 
# 2611
static inline float rsqrt(float a) 
# 2612
{ 
# 2613
return rsqrtf(a); 
# 2614
} 
# 2616
static inline float acosh(float a) 
# 2617
{ 
# 2618
return acoshf(a); 
# 2619
} 
# 2621
static inline float asinh(float a) 
# 2622
{ 
# 2623
return asinhf(a); 
# 2624
} 
# 2626
static inline float atanh(float a) 
# 2627
{ 
# 2628
return atanhf(a); 
# 2629
} 
# 2631
static inline float hypot(float a, float b) 
# 2632
{ 
# 2633
return hypotf(a, b); 
# 2634
} 
# 2636
static inline float cbrt(float a) 
# 2637
{ 
# 2638
return cbrtf(a); 
# 2639
} 
# 2641
static inline float rcbrt(float a) 
# 2642
{ 
# 2643
return rcbrtf(a); 
# 2644
} 
# 2646
static inline float sinpi(float a) 
# 2647
{ 
# 2648
return sinpif(a); 
# 2649
} 
# 2651
static inline float cospi(float a) 
# 2652
{ 
# 2653
return cospif(a); 
# 2654
} 
# 2656
static inline void sincos(float a, float *sptr, float *cptr) 
# 2657
{ 
# 2658
sincosf(a, sptr, cptr); 
# 2659
} 
# 2661
static inline float j0(float a) 
# 2662
{ 
# 2663
return j0f(a); 
# 2664
} 
# 2666
static inline float j1(float a) 
# 2667
{ 
# 2668
return j1f(a); 
# 2669
} 
# 2671
static inline float jn(int n, float a) 
# 2672
{ 
# 2673
return jnf(n, a); 
# 2674
} 
# 2676
static inline float y0(float a) 
# 2677
{ 
# 2678
return y0f(a); 
# 2679
} 
# 2681
static inline float y1(float a) 
# 2682
{ 
# 2683
return y1f(a); 
# 2684
} 
# 2686
static inline float yn(int n, float a) 
# 2687
{ 
# 2688
return ynf(n, a); 
# 2689
} 
# 2691
static inline float erf(float a) 
# 2692
{ 
# 2693
return erff(a); 
# 2694
} 
# 2696
static inline float erfinv(float a) 
# 2697
{ 
# 2698
return erfinvf(a); 
# 2699
} 
# 2701
static inline float erfc(float a) 
# 2702
{ 
# 2703
return erfcf(a); 
# 2704
} 
# 2706
static inline float erfcinv(float a) 
# 2707
{ 
# 2708
return erfcinvf(a); 
# 2709
} 
# 2711
static inline float erfcx(float a) 
# 2712
{ 
# 2713
return erfcxf(a); 
# 2714
} 
# 2716
static inline float lgamma(float a) 
# 2717
{ 
# 2718
return lgammaf(a); 
# 2719
} 
# 2721
static inline float tgamma(float a) 
# 2722
{ 
# 2723
return tgammaf(a); 
# 2724
} 
# 2726
static inline float copysign(float a, float b) 
# 2727
{ 
# 2728
return copysignf(a, b); 
# 2729
} 
# 2731
static inline double copysign(double a, float b) 
# 2732
{ 
# 2733
return copysign(a, (double)b); 
# 2734
} 
# 2736
static inline float copysign(float a, double b) 
# 2737
{ 
# 2738
return copysignf(a, (float)b); 
# 2739
} 
# 2741
static inline float nextafter(float a, float b) 
# 2742
{ 
# 2743
return nextafterf(a, b); 
# 2744
} 
# 2746
static inline float remainder(float a, float b) 
# 2747
{ 
# 2748
return remainderf(a, b); 
# 2749
} 
# 2751
static inline float remquo(float a, float b, int *quo) 
# 2752
{ 
# 2753
return remquof(a, b, quo); 
# 2754
} 
# 2756
static inline float round(float a) 
# 2757
{ 
# 2758
return roundf(a); 
# 2759
} 
# 2761
static inline long lround(float a) 
# 2762
{ 
# 2763
return lroundf(a); 
# 2764
} 
# 2766
static inline long long llround(float a) 
# 2767
{ 
# 2768
return llroundf(a); 
# 2769
} 
# 2771
static inline float trunc(float a) 
# 2772
{ 
# 2773
return truncf(a); 
# 2774
} 
# 2776
static inline float rint(float a) 
# 2777
{ 
# 2778
return rintf(a); 
# 2779
} 
# 2781
static inline long lrint(float a) 
# 2782
{ 
# 2783
return lrintf(a); 
# 2784
} 
# 2786
static inline long long llrint(float a) 
# 2787
{ 
# 2788
return llrintf(a); 
# 2789
} 
# 2791
static inline float nearbyint(float a) 
# 2792
{ 
# 2793
return nearbyintf(a); 
# 2794
} 
# 2796
static inline float fdim(float a, float b) 
# 2797
{ 
# 2798
return fdimf(a, b); 
# 2799
} 
# 2801
static inline float fma(float a, float b, float c) 
# 2802
{ 
# 2803
return fmaf(a, b, c); 
# 2804
} 
# 2806
static inline float fmax(float a, float b) 
# 2807
{ 
# 2808
return fmaxf(a, b); 
# 2809
} 
# 2811
static inline float fmin(float a, float b) 
# 2812
{ 
# 2813
return fminf(a, b); 
# 2814
} 
# 2816
static inline unsigned min(unsigned a, unsigned b) 
# 2817
{ 
# 2818
return umin(a, b); 
# 2819
} 
# 2821
static inline unsigned min(int a, unsigned b) 
# 2822
{ 
# 2823
return umin((unsigned)a, b); 
# 2824
} 
# 2826
static inline unsigned min(unsigned a, int b) 
# 2827
{ 
# 2828
return umin(a, (unsigned)b); 
# 2829
} 
# 2831
static inline long long min(long long a, long long b) 
# 2832
{ 
# 2833
return llmin(a, b); 
# 2834
} 
# 2836
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 2837
{ 
# 2838
return ullmin(a, b); 
# 2839
} 
# 2841
static inline unsigned long long min(long long a, unsigned long long b) 
# 2842
{ 
# 2843
return ullmin((unsigned long long)a, b); 
# 2844
} 
# 2846
static inline unsigned long long min(unsigned long long a, long long b) 
# 2847
{ 
# 2848
return ullmin(a, (unsigned long long)b); 
# 2849
} 
# 2851
static inline float min(float a, float b) 
# 2852
{ 
# 2853
return fminf(a, b); 
# 2854
} 
# 2856
static inline double min(double a, double b) 
# 2857
{ 
# 2858
return fmin(a, b); 
# 2859
} 
# 2861
static inline double min(float a, double b) 
# 2862
{ 
# 2863
return fmin((double)a, b); 
# 2864
} 
# 2866
static inline double min(double a, float b) 
# 2867
{ 
# 2868
return fmin(a, (double)b); 
# 2869
} 
# 2871
static inline unsigned max(unsigned a, unsigned b) 
# 2872
{ 
# 2873
return umax(a, b); 
# 2874
} 
# 2876
static inline unsigned max(int a, unsigned b) 
# 2877
{ 
# 2878
return umax((unsigned)a, b); 
# 2879
} 
# 2881
static inline unsigned max(unsigned a, int b) 
# 2882
{ 
# 2883
return umax(a, (unsigned)b); 
# 2884
} 
# 2886
static inline long long max(long long a, long long b) 
# 2887
{ 
# 2888
return llmax(a, b); 
# 2889
} 
# 2891
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 2892
{ 
# 2893
return ullmax(a, b); 
# 2894
} 
# 2896
static inline unsigned long long max(long long a, unsigned long long b) 
# 2897
{ 
# 2898
return ullmax((unsigned long long)a, b); 
# 2899
} 
# 2901
static inline unsigned long long max(unsigned long long a, long long b) 
# 2902
{ 
# 2903
return ullmax(a, (unsigned long long)b); 
# 2904
} 
# 2906
static inline float max(float a, float b) 
# 2907
{ 
# 2908
return fmaxf(a, b); 
# 2909
} 
# 2911
static inline double max(double a, double b) 
# 2912
{ 
# 2913
return fmax(a, b); 
# 2914
} 
# 2916
static inline double max(float a, double b) 
# 2917
{ 
# 2918
return fmax((double)a, b); 
# 2919
} 
# 2921
static inline double max(double a, float b) 
# 2922
{ 
# 2923
return fmax(a, (double)b); 
# 2924
} 
# 73 "/home/bachelor/deicide218/cuda-4.2/include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 74
struct surface : public surfaceReference { 
# 76
surface() 
# 77
{ 
# 78
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 79
} 
# 81
surface(cudaChannelFormatDesc desc) 
# 82
{ 
# 83
(channelDesc) = desc; 
# 84
} 
# 85
}; 
# 87
template< int dim> 
# 88
struct surface< void, dim>  : public surfaceReference { 
# 90
surface() 
# 91
{ 
# 92
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 93
} 
# 94
}; 
# 73 "/home/bachelor/deicide218/cuda-4.2/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 74
struct texture : public textureReference { 
# 76
texture(int norm = 0, cudaTextureFilterMode 
# 77
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 78
aMode = cudaAddressModeClamp) 
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
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 86
(sRGB) = 0; 
# 87
} 
# 89
texture(int norm, cudaTextureFilterMode 
# 90
fMode, cudaTextureAddressMode 
# 91
aMode, cudaChannelFormatDesc 
# 92
desc) 
# 93
{ 
# 94
(normalized) = norm; 
# 95
(filterMode) = fMode; 
# 96
((addressMode)[0]) = aMode; 
# 97
((addressMode)[1]) = aMode; 
# 98
((addressMode)[2]) = aMode; 
# 99
(channelDesc) = desc; 
# 100
(sRGB) = 0; 
# 101
} 
# 102
}; 
# 1103 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 1104
{int volatile ___ = 1;(void)a;(void)b;
# 1106
exit(___);}
#if 0
# 1104
{ 
# 1105
return __mulhi(a, b); 
# 1106
} 
#endif
# 1108 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 1109
{int volatile ___ = 1;(void)a;(void)b;
# 1111
exit(___);}
#if 0
# 1109
{ 
# 1110
return __umulhi(a, b); 
# 1111
} 
#endif
# 1113 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 1114
{int volatile ___ = 1;(void)a;(void)b;
# 1116
exit(___);}
#if 0
# 1114
{ 
# 1115
return __umulhi((unsigned)a, b); 
# 1116
} 
#endif
# 1118 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 1119
{int volatile ___ = 1;(void)a;(void)b;
# 1121
exit(___);}
#if 0
# 1119
{ 
# 1120
return __umulhi(a, (unsigned)b); 
# 1121
} 
#endif
# 1123 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 1124
{int volatile ___ = 1;(void)a;(void)b;
# 1126
exit(___);}
#if 0
# 1124
{ 
# 1125
return __mul64hi(a, b); 
# 1126
} 
#endif
# 1128 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 1129
{int volatile ___ = 1;(void)a;(void)b;
# 1131
exit(___);}
#if 0
# 1129
{ 
# 1130
return __umul64hi(a, b); 
# 1131
} 
#endif
# 1133 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 1134
{int volatile ___ = 1;(void)a;(void)b;
# 1136
exit(___);}
#if 0
# 1134
{ 
# 1135
return __umul64hi((unsigned long long)a, b); 
# 1136
} 
#endif
# 1138 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 1139
{int volatile ___ = 1;(void)a;(void)b;
# 1141
exit(___);}
#if 0
# 1139
{ 
# 1140
return __umul64hi(a, (unsigned long long)b); 
# 1141
} 
#endif
# 1143 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a) 
# 1144
{int volatile ___ = 1;(void)a;
# 1146
exit(___);}
#if 0
# 1144
{ 
# 1145
return __float_as_int(a); 
# 1146
} 
#endif
# 1148 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a) 
# 1149
{int volatile ___ = 1;(void)a;
# 1151
exit(___);}
#if 0
# 1149
{ 
# 1150
return __int_as_float(a); 
# 1151
} 
#endif
# 1153 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a) 
# 1154
{int volatile ___ = 1;(void)a;
# 1156
exit(___);}
#if 0
# 1154
{ 
# 1155
return __saturatef(a); 
# 1156
} 
#endif
# 1158 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 1159
{int volatile ___ = 1;(void)a;(void)b;
# 1161
exit(___);}
#if 0
# 1159
{ 
# 1160
return __mul24(a, b); 
# 1161
} 
#endif
# 1163 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 1164
{int volatile ___ = 1;(void)a;(void)b;
# 1166
exit(___);}
#if 0
# 1164
{ 
# 1165
return __umul24(a, b); 
# 1166
} 
#endif
# 1168 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline void trap() 
# 1169
{int volatile ___ = 1;
# 1171
exit(___);}
#if 0
# 1169
{ 
# 1170
__trap(); 
# 1171
} 
#endif
# 1174 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c = 0) 
# 1175
{int volatile ___ = 1;(void)c;
# 1177
exit(___);}
#if 0
# 1175
{ 
# 1176
__brkpt(c); 
# 1177
} 
#endif
# 1179 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline void syncthreads() 
# 1180
{int volatile ___ = 1;
# 1182
exit(___);}
#if 0
# 1180
{ 
# 1181
__syncthreads(); 
# 1182
} 
#endif
# 1184 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e) 
# 1185
{int volatile ___ = 1;(void)e;
# 1202
exit(___);}
#if 0
# 1185
{ 
# 1186
if (e == 0) { __prof_trigger(0); } else { 
# 1187
if (e == 1) { __prof_trigger(1); } else { 
# 1188
if (e == 2) { __prof_trigger(2); } else { 
# 1189
if (e == 3) { __prof_trigger(3); } else { 
# 1190
if (e == 4) { __prof_trigger(4); } else { 
# 1191
if (e == 5) { __prof_trigger(5); } else { 
# 1192
if (e == 6) { __prof_trigger(6); } else { 
# 1193
if (e == 7) { __prof_trigger(7); } else { 
# 1194
if (e == 8) { __prof_trigger(8); } else { 
# 1195
if (e == 9) { __prof_trigger(9); } else { 
# 1196
if (e == 10) { __prof_trigger(10); } else { 
# 1197
if (e == 11) { __prof_trigger(11); } else { 
# 1198
if (e == 12) { __prof_trigger(12); } else { 
# 1199
if (e == 13) { __prof_trigger(13); } else { 
# 1200
if (e == 14) { __prof_trigger(14); } else { 
# 1201
if (e == 15) { __prof_trigger(15); }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  
# 1202
} 
#endif
# 1204 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true) 
# 1205
{int volatile ___ = 1;(void)global;
# 1207
exit(___);}
#if 0
# 1205
{ 
# 1206
global ? __threadfence() : __threadfence_block(); 
# 1207
} 
#endif
# 1209 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero) 
# 1210
{int volatile ___ = 1;(void)a;(void)mode;
# 1215
exit(___);}
#if 0
# 1210
{ 
# 1211
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 1215
} 
#endif
# 1217 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero) 
# 1218
{int volatile ___ = 1;(void)a;(void)mode;
# 1223
exit(___);}
#if 0
# 1218
{ 
# 1219
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 1223
} 
#endif
# 1225 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest) 
# 1226
{int volatile ___ = 1;(void)a;(void)mode;
# 1231
exit(___);}
#if 0
# 1226
{ 
# 1227
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 1231
} 
#endif
# 1233 "/home/bachelor/deicide218/cuda-4.2/include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 1234
{int volatile ___ = 1;(void)a;(void)mode;
# 1239
exit(___);}
#if 0
# 1234
{ 
# 1235
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 1239
} 
#endif
# 96 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) 
# 97
{int volatile ___ = 1;(void)address;(void)val;
# 99
exit(___);}
#if 0
# 97
{ 
# 98
return __iAtomicAdd(address, val); 
# 99
} 
#endif
# 101 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) 
# 102
{int volatile ___ = 1;(void)address;(void)val;
# 104
exit(___);}
#if 0
# 102
{ 
# 103
return __uAtomicAdd(address, val); 
# 104
} 
#endif
# 106 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) 
# 107
{int volatile ___ = 1;(void)address;(void)val;
# 109
exit(___);}
#if 0
# 107
{ 
# 108
return __iAtomicAdd(address, (unsigned)(-((int)val))); 
# 109
} 
#endif
# 111 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) 
# 112
{int volatile ___ = 1;(void)address;(void)val;
# 114
exit(___);}
#if 0
# 112
{ 
# 113
return __uAtomicAdd(address, (unsigned)(-((int)val))); 
# 114
} 
#endif
# 116 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) 
# 117
{int volatile ___ = 1;(void)address;(void)val;
# 119
exit(___);}
#if 0
# 117
{ 
# 118
return __iAtomicExch(address, val); 
# 119
} 
#endif
# 121 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) 
# 122
{int volatile ___ = 1;(void)address;(void)val;
# 124
exit(___);}
#if 0
# 122
{ 
# 123
return __uAtomicExch(address, val); 
# 124
} 
#endif
# 126 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) 
# 127
{int volatile ___ = 1;(void)address;(void)val;
# 129
exit(___);}
#if 0
# 127
{ 
# 128
return __fAtomicExch(address, val); 
# 129
} 
#endif
# 131 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) 
# 132
{int volatile ___ = 1;(void)address;(void)val;
# 134
exit(___);}
#if 0
# 132
{ 
# 133
return __iAtomicMin(address, val); 
# 134
} 
#endif
# 136 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) 
# 137
{int volatile ___ = 1;(void)address;(void)val;
# 139
exit(___);}
#if 0
# 137
{ 
# 138
return __uAtomicMin(address, val); 
# 139
} 
#endif
# 141 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) 
# 142
{int volatile ___ = 1;(void)address;(void)val;
# 144
exit(___);}
#if 0
# 142
{ 
# 143
return __iAtomicMax(address, val); 
# 144
} 
#endif
# 146 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) 
# 147
{int volatile ___ = 1;(void)address;(void)val;
# 149
exit(___);}
#if 0
# 147
{ 
# 148
return __uAtomicMax(address, val); 
# 149
} 
#endif
# 151 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) 
# 152
{int volatile ___ = 1;(void)address;(void)val;
# 154
exit(___);}
#if 0
# 152
{ 
# 153
return __uAtomicInc(address, val); 
# 154
} 
#endif
# 156 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) 
# 157
{int volatile ___ = 1;(void)address;(void)val;
# 159
exit(___);}
#if 0
# 157
{ 
# 158
return __uAtomicDec(address, val); 
# 159
} 
#endif
# 161 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) 
# 162
{int volatile ___ = 1;(void)address;(void)val;
# 164
exit(___);}
#if 0
# 162
{ 
# 163
return __iAtomicAnd(address, val); 
# 164
} 
#endif
# 166 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) 
# 167
{int volatile ___ = 1;(void)address;(void)val;
# 169
exit(___);}
#if 0
# 167
{ 
# 168
return __uAtomicAnd(address, val); 
# 169
} 
#endif
# 171 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) 
# 172
{int volatile ___ = 1;(void)address;(void)val;
# 174
exit(___);}
#if 0
# 172
{ 
# 173
return __iAtomicOr(address, val); 
# 174
} 
#endif
# 176 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) 
# 177
{int volatile ___ = 1;(void)address;(void)val;
# 179
exit(___);}
#if 0
# 177
{ 
# 178
return __uAtomicOr(address, val); 
# 179
} 
#endif
# 181 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) 
# 182
{int volatile ___ = 1;(void)address;(void)val;
# 184
exit(___);}
#if 0
# 182
{ 
# 183
return __iAtomicXor(address, val); 
# 184
} 
#endif
# 186 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) 
# 187
{int volatile ___ = 1;(void)address;(void)val;
# 189
exit(___);}
#if 0
# 187
{ 
# 188
return __uAtomicXor(address, val); 
# 189
} 
#endif
# 191 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) 
# 192
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 194
exit(___);}
#if 0
# 192
{ 
# 193
return __iAtomicCAS(address, compare, val); 
# 194
} 
#endif
# 196 "/home/bachelor/deicide218/cuda-4.2/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
# 197
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 199
exit(___);}
#if 0
# 197
{ 
# 198
return __uAtomicCAS(address, compare, val); 
# 199
} 
#endif
# 81 "/home/bachelor/deicide218/cuda-4.2/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) 
# 82
{int volatile ___ = 1;(void)address;(void)val;
# 84
exit(___);}
#if 0
# 82
{ 
# 83
return __ullAtomicAdd(address, val); 
# 84
} 
#endif
# 86 "/home/bachelor/deicide218/cuda-4.2/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) 
# 87
{int volatile ___ = 1;(void)address;(void)val;
# 89
exit(___);}
#if 0
# 87
{ 
# 88
return __ullAtomicExch(address, val); 
# 89
} 
#endif
# 91 "/home/bachelor/deicide218/cuda-4.2/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) 
# 92
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 94
exit(___);}
#if 0
# 92
{ 
# 93
return __ullAtomicCAS(address, compare, val); 
# 94
} 
#endif
# 96 "/home/bachelor/deicide218/cuda-4.2/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond) 
# 97
{int volatile ___ = 1;(void)cond;
# 99
exit(___);}
#if 0
# 97
{ 
# 98
return (bool)__any((int)cond); 
# 99
} 
#endif
# 101 "/home/bachelor/deicide218/cuda-4.2/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond) 
# 102
{int volatile ___ = 1;(void)cond;
# 104
exit(___);}
#if 0
# 102
{ 
# 103
return (bool)__all((int)cond); 
# 104
} 
#endif
# 521 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 522
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 527
exit(___);}
#if 0
# 522
{ 
# 523
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 527
} 
#endif
# 529 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 530
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 535
exit(___);}
#if 0
# 530
{ 
# 531
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 535
} 
#endif
# 537 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 538
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 543
exit(___);}
#if 0
# 538
{ 
# 539
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 543
} 
#endif
# 545 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero) 
# 546
{int volatile ___ = 1;(void)a;(void)mode;
# 551
exit(___);}
#if 0
# 546
{ 
# 547
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 551
} 
#endif
# 553 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero) 
# 554
{int volatile ___ = 1;(void)a;(void)mode;
# 559
exit(___);}
#if 0
# 554
{ 
# 555
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 559
} 
#endif
# 561 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero) 
# 562
{int volatile ___ = 1;(void)a;(void)mode;
# 567
exit(___);}
#if 0
# 562
{ 
# 563
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 567
} 
#endif
# 569 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero) 
# 570
{int volatile ___ = 1;(void)a;(void)mode;
# 575
exit(___);}
#if 0
# 570
{ 
# 571
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 575
} 
#endif
# 577 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest) 
# 578
{int volatile ___ = 1;(void)a;(void)mode;
# 583
exit(___);}
#if 0
# 578
{ 
# 579
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 583
} 
#endif
# 585 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest) 
# 586
{int volatile ___ = 1;(void)a;(void)mode;
# 591
exit(___);}
#if 0
# 586
{ 
# 587
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 591
} 
#endif
# 593 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest) 
# 594
{int volatile ___ = 1;(void)a;(void)mode;
# 596
exit(___);}
#if 0
# 594
{ 
# 595
return (double)a; 
# 596
} 
#endif
# 598 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 599
{int volatile ___ = 1;(void)a;(void)mode;
# 601
exit(___);}
#if 0
# 599
{ 
# 600
return (double)a; 
# 601
} 
#endif
# 603 "/home/bachelor/deicide218/cuda-4.2/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest) 
# 604
{int volatile ___ = 1;(void)a;(void)mode;
# 606
exit(___);}
#if 0
# 604
{ 
# 605
return (double)a; 
# 606
} 
#endif
# 77 "/home/bachelor/deicide218/cuda-4.2/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) 
# 78
{int volatile ___ = 1;(void)address;(void)val;
# 80
exit(___);}
#if 0
# 78
{ 
# 79
return __fAtomicAdd(address, val); 
# 80
} 
#endif
# 239 "/home/bachelor/deicide218/cuda-4.2/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred) 
# 240
{int volatile ___ = 1;(void)pred;
# 242
exit(___);}
#if 0
# 240
{ 
# 241
return __ballot((int)pred); 
# 242
} 
#endif
# 244 "/home/bachelor/deicide218/cuda-4.2/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) 
# 245
{int volatile ___ = 1;(void)pred;
# 247
exit(___);}
#if 0
# 245
{ 
# 246
return __syncthreads_count((int)pred); 
# 247
} 
#endif
# 249 "/home/bachelor/deicide218/cuda-4.2/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) 
# 250
{int volatile ___ = 1;(void)pred;
# 252
exit(___);}
#if 0
# 250
{ 
# 251
return (bool)__syncthreads_and((int)pred); 
# 252
} 
#endif
# 254 "/home/bachelor/deicide218/cuda-4.2/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) 
# 255
{int volatile ___ = 1;(void)pred;
# 257
exit(___);}
#if 0
# 255
{ 
# 256
return (bool)__syncthreads_or((int)pred); 
# 257
} 
#endif
# 93 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;
# 98
exit(___);}
#if 0
# 93
{ 
# 94
int ret, c; 
# 95
c = (((32 - width) << 8) | 31); 
# 96
__asm__ volatile("shfl.idx.b32 %0, %1, %2, %3;" : "=r" (ret) : "r" (var), "r" (srcLane), "r" (c)); 
# 97
return ret; 
# 98
} 
#endif
# 100 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;
# 105
exit(___);}
#if 0
# 100
{ 
# 101
int ret, c; 
# 102
c = ((32 - width) << 8); 
# 103
__asm__ volatile("shfl.up.b32 %0, %1, %2, %3;" : "=r" (ret) : "r" (var), "r" (delta), "r" (c)); 
# 104
return ret; 
# 105
} 
#endif
# 107 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;
# 112
exit(___);}
#if 0
# 107
{ 
# 108
int ret, c; 
# 109
c = (((32 - width) << 8) | 31); 
# 110
__asm__ volatile("shfl.down.b32 %0, %1, %2, %3;" : "=r" (ret) : "r" (var), "r" (delta), "r" (c)); 
# 111
return ret; 
# 112
} 
#endif
# 114 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;
# 119
exit(___);}
#if 0
# 114
{ 
# 115
int ret, c; 
# 116
c = (((32 - width) << 8) | 31); 
# 117
__asm__ volatile("shfl.bfly.b32 %0, %1, %2, %3;" : "=r" (ret) : "r" (var), "r" (laneMask), "r" (c)); 
# 118
return ret; 
# 119
} 
#endif
# 121 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;
# 127
exit(___);}
#if 0
# 121
{ 
# 122
float ret; 
# 123
int c; 
# 124
c = (((32 - width) << 8) | 31); 
# 125
__asm__ volatile("shfl.idx.b32 %0, %1, %2, %3;" : "=f" (ret) : "f" (var), "r" (srcLane), "r" (c)); 
# 126
return ret; 
# 127
} 
#endif
# 129 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;
# 135
exit(___);}
#if 0
# 129
{ 
# 130
float ret; 
# 131
int c; 
# 132
c = ((32 - width) << 8); 
# 133
__asm__ volatile("shfl.up.b32 %0, %1, %2, %3;" : "=f" (ret) : "f" (var), "r" (delta), "r" (c)); 
# 134
return ret; 
# 135
} 
#endif
# 137 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;
# 143
exit(___);}
#if 0
# 137
{ 
# 138
float ret; 
# 139
int c; 
# 140
c = (((32 - width) << 8) | 31); 
# 141
__asm__ volatile("shfl.down.b32 %0, %1, %2, %3;" : "=f" (ret) : "f" (var), "r" (delta), "r" (c)); 
# 142
return ret; 
# 143
} 
#endif
# 145 "/home/bachelor/deicide218/cuda-4.2/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;
# 151
exit(___);}
#if 0
# 145
{ 
# 146
float ret; 
# 147
int c; 
# 148
c = (((32 - width) << 8) | 31); 
# 149
__asm__ volatile("shfl.bfly.b32 %0, %1, %2, %3;" : "=f" (ret) : "f" (var), "r" (laneMask), "r" (c)); 
# 150
return ret; 
# 151
} 
#endif
# 99 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 100
surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 101
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 108
exit(___);}
#if 0
# 101
{ 
# 102
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf1Dreadc1(surf, x, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf1Dreads1(surf, x, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf1Dreadu1(surf, x, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap))) : ((void)0))))); 
# 108
} 
#endif
# 110 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 111
surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 112
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 118
exit(___);}
#if 0
# 112
{ 
# 113
T tmp; 
# 115
surf1Dread(&tmp, surf, x, (int)sizeof(T), mode); 
# 117
return tmp; 
# 118
} 
#endif
# 120 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 121
surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 122
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 124
exit(___);}
#if 0
# 122
{ 
# 123
(*res) = surf1Dread< T> (surf, x, mode); 
# 124
} 
#endif
# 127 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 128
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130
exit(___);}
#if 0
# 128
{ 
# 129
return (char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 130
} 
#endif
# 133 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 134
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 136
exit(___);}
#if 0
# 134
{ 
# 135
return (signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 136
} 
#endif
# 139 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 140
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 142
exit(___);}
#if 0
# 140
{ 
# 141
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x; 
# 142
} 
#endif
# 145 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 146
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 148
exit(___);}
#if 0
# 146
{ 
# 147
return make_char1((signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x)); 
# 148
} 
#endif
# 151 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 152
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 154
exit(___);}
#if 0
# 152
{ 
# 153
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap); 
# 154
} 
#endif
# 157 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 158
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 162
exit(___);}
#if 0
# 158
{ 
# 159
uchar2 tmp = __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 161
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 162
} 
#endif
# 165 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 166
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 168
exit(___);}
#if 0
# 166
{ 
# 167
return __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 168
} 
#endif
# 171 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 172
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 176
exit(___);}
#if 0
# 172
{ 
# 173
uchar4 tmp = __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 175
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 176
} 
#endif
# 179 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 180
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 182
exit(___);}
#if 0
# 180
{ 
# 181
return __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 182
} 
#endif
# 185 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 186
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 188
exit(___);}
#if 0
# 186
{ 
# 187
return (short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x); 
# 188
} 
#endif
# 191 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 192
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 194
exit(___);}
#if 0
# 192
{ 
# 193
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap).x; 
# 194
} 
#endif
# 197 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 198
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 200
exit(___);}
#if 0
# 198
{ 
# 199
return make_short1((signed short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x)); 
# 200
} 
#endif
# 203 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 204
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 206
exit(___);}
#if 0
# 204
{ 
# 205
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap); 
# 206
} 
#endif
# 209 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 210
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 214
exit(___);}
#if 0
# 210
{ 
# 211
ushort2 tmp = __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 213
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 214
} 
#endif
# 217 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 218
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 220
exit(___);}
#if 0
# 218
{ 
# 219
return __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 220
} 
#endif
# 223 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 224
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 228
exit(___);}
#if 0
# 224
{ 
# 225
ushort4 tmp = __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 227
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 228
} 
#endif
# 231 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 232
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 234
exit(___);}
#if 0
# 232
{ 
# 233
return __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 234
} 
#endif
# 237 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 238
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 240
exit(___);}
#if 0
# 238
{ 
# 239
return (int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
# 240
} 
#endif
# 243 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 244
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 246
exit(___);}
#if 0
# 244
{ 
# 245
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x; 
# 246
} 
#endif
# 249 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 250
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 252
exit(___);}
#if 0
# 250
{ 
# 251
return make_int1((signed int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 252
} 
#endif
# 255 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 256
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 258
exit(___);}
#if 0
# 256
{ 
# 257
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap); 
# 258
} 
#endif
# 261 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 262
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 266
exit(___);}
#if 0
# 262
{ 
# 263
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 265
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 266
} 
#endif
# 269 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 270
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 272
exit(___);}
#if 0
# 270
{ 
# 271
return __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 272
} 
#endif
# 275 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 276
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 280
exit(___);}
#if 0
# 276
{ 
# 277
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 279
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 280
} 
#endif
# 283 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 284
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 286
exit(___);}
#if 0
# 284
{ 
# 285
return __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 286
} 
#endif
# 289 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 290
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 292
exit(___);}
#if 0
# 290
{ 
# 291
return (long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x); 
# 292
} 
#endif
# 295 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 296
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 298
exit(___);}
#if 0
# 296
{ 
# 297
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x; 
# 298
} 
#endif
# 301 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 302
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 304
exit(___);}
#if 0
# 302
{ 
# 303
return make_longlong1((long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x)); 
# 304
} 
#endif
# 307 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 308
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 310
exit(___);}
#if 0
# 308
{ 
# 309
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap); 
# 310
} 
#endif
# 313 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 314
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 318
exit(___);}
#if 0
# 314
{ 
# 315
ulonglong2 tmp = __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 317
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 318
} 
#endif
# 321 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 322
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 324
exit(___);}
#if 0
# 322
{ 
# 323
return __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 324
} 
#endif
# 387 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 388
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 390
exit(___);}
#if 0
# 388
{ 
# 389
return __int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 390
} 
#endif
# 393 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 394
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 396
exit(___);}
#if 0
# 394
{ 
# 395
return make_float1(__int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x))); 
# 396
} 
#endif
# 399 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 400
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 404
exit(___);}
#if 0
# 400
{ 
# 401
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 403
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 404
} 
#endif
# 407 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 408
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 412
exit(___);}
#if 0
# 408
{ 
# 409
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 411
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 412
} 
#endif
# 447 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 448
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 449
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 456
exit(___);}
#if 0
# 449
{ 
# 450
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap))) : ((void)0))))); 
# 456
} 
#endif
# 458 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 459
surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 460
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 466
exit(___);}
#if 0
# 460
{ 
# 461
T tmp; 
# 463
surf2Dread(&tmp, surf, x, y, (int)sizeof(T), mode); 
# 465
return tmp; 
# 466
} 
#endif
# 468 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 469
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 470
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 472
exit(___);}
#if 0
# 470
{ 
# 471
(*res) = surf2Dread< T> (surf, x, y, mode); 
# 472
} 
#endif
# 475 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 476
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 478
exit(___);}
#if 0
# 476
{ 
# 477
return (char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 478
} 
#endif
# 481 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 482
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 484
exit(___);}
#if 0
# 482
{ 
# 483
return (signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 484
} 
#endif
# 487 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 488
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 490
exit(___);}
#if 0
# 488
{ 
# 489
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x; 
# 490
} 
#endif
# 493 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 494
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 496
exit(___);}
#if 0
# 494
{ 
# 495
return make_char1((signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 496
} 
#endif
# 499 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 500
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 502
exit(___);}
#if 0
# 500
{ 
# 501
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap); 
# 502
} 
#endif
# 505 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 506
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 510
exit(___);}
#if 0
# 506
{ 
# 507
uchar2 tmp = __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 509
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 510
} 
#endif
# 513 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 514
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 516
exit(___);}
#if 0
# 514
{ 
# 515
return __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 516
} 
#endif
# 519 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 520
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 524
exit(___);}
#if 0
# 520
{ 
# 521
uchar4 tmp = __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 523
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 524
} 
#endif
# 527 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 528
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 530
exit(___);}
#if 0
# 528
{ 
# 529
return __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 530
} 
#endif
# 533 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 534
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 536
exit(___);}
#if 0
# 534
{ 
# 535
return (short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x); 
# 536
} 
#endif
# 539 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 540
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 542
exit(___);}
#if 0
# 540
{ 
# 541
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x; 
# 542
} 
#endif
# 545 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 546
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 548
exit(___);}
#if 0
# 546
{ 
# 547
return make_short1((signed short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 548
} 
#endif
# 551 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 552
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 554
exit(___);}
#if 0
# 552
{ 
# 553
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap); 
# 554
} 
#endif
# 557 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 558
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 562
exit(___);}
#if 0
# 558
{ 
# 559
ushort2 tmp = __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 561
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 562
} 
#endif
# 565 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 566
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 568
exit(___);}
#if 0
# 566
{ 
# 567
return __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 568
} 
#endif
# 571 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 572
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 576
exit(___);}
#if 0
# 572
{ 
# 573
ushort4 tmp = __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 575
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 576
} 
#endif
# 579 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 580
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 582
exit(___);}
#if 0
# 580
{ 
# 581
return __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 582
} 
#endif
# 585 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 586
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 588
exit(___);}
#if 0
# 586
{ 
# 587
return (int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
# 588
} 
#endif
# 591 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 592
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 594
exit(___);}
#if 0
# 592
{ 
# 593
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x; 
# 594
} 
#endif
# 597 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 598
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 600
exit(___);}
#if 0
# 598
{ 
# 599
return make_int1((signed int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 600
} 
#endif
# 603 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 604
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 606
exit(___);}
#if 0
# 604
{ 
# 605
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap); 
# 606
} 
#endif
# 609 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 610
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 614
exit(___);}
#if 0
# 610
{ 
# 611
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 613
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 614
} 
#endif
# 617 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 618
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 620
exit(___);}
#if 0
# 618
{ 
# 619
return __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 620
} 
#endif
# 623 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 624
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 628
exit(___);}
#if 0
# 624
{ 
# 625
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 627
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 628
} 
#endif
# 631 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 632
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 634
exit(___);}
#if 0
# 632
{ 
# 633
return __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 634
} 
#endif
# 637 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 638
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 640
exit(___);}
#if 0
# 638
{ 
# 639
return (long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x); 
# 640
} 
#endif
# 643 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 644
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 646
exit(___);}
#if 0
# 644
{ 
# 645
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x; 
# 646
} 
#endif
# 649 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 650
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 652
exit(___);}
#if 0
# 650
{ 
# 651
return make_longlong1((long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 652
} 
#endif
# 655 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 656
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 658
exit(___);}
#if 0
# 656
{ 
# 657
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap); 
# 658
} 
#endif
# 661 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 662
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 666
exit(___);}
#if 0
# 662
{ 
# 663
ulonglong2 tmp = __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 665
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 666
} 
#endif
# 669 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 670
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 672
exit(___);}
#if 0
# 670
{ 
# 671
return __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 672
} 
#endif
# 735 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 736
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 738
exit(___);}
#if 0
# 736
{ 
# 737
return __int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 738
} 
#endif
# 741 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 742
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 744
exit(___);}
#if 0
# 742
{ 
# 743
return make_float1(__int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x))); 
# 744
} 
#endif
# 747 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 748
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 752
exit(___);}
#if 0
# 748
{ 
# 749
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 751
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 752
} 
#endif
# 755 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 756
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 760
exit(___);}
#if 0
# 756
{ 
# 757
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 759
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 760
} 
#endif
# 795 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 796
surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 797
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 804
exit(___);}
#if 0
# 797
{ 
# 798
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf3Dreads1(surf, x, y, z, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf3Dreadu2(surf, x, y, z, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf3Dreadu4(surf, x, y, z, cudaBoundaryModeTrap))) : ((void)0))))); 
# 804
} 
#endif
# 806 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 807
surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 808
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 814
exit(___);}
#if 0
# 808
{ 
# 809
T tmp; 
# 811
surf3Dread(&tmp, surf, x, y, z, (int)sizeof(T), mode); 
# 813
return tmp; 
# 814
} 
#endif
# 816 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 817
surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 818
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 820
exit(___);}
#if 0
# 818
{ 
# 819
(*res) = surf3Dread< T> (surf, x, y, z, mode); 
# 820
} 
#endif
# 823 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 824
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 826
exit(___);}
#if 0
# 824
{ 
# 825
return (char)(__surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap).x); 
# 826
} 
#endif
# 829 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 830
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 832
exit(___);}
#if 0
# 830
{ 
# 831
return (signed char)(__surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap).x); 
# 832
} 
#endif
# 835 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 836
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 838
exit(___);}
#if 0
# 836
{ 
# 837
return __surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap).x; 
# 838
} 
#endif
# 841 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 842
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 844
exit(___);}
#if 0
# 842
{ 
# 843
return make_char1((signed char)(__surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap).x)); 
# 844
} 
#endif
# 847 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 848
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 850
exit(___);}
#if 0
# 848
{ 
# 849
return __surf3Dreadc1(surf, x, y, z, cudaBoundaryModeTrap); 
# 850
} 
#endif
# 853 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 854
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 858
exit(___);}
#if 0
# 854
{ 
# 855
uchar2 tmp = __surf3Dreadc2(surf, x, y, z, cudaBoundaryModeTrap); 
# 857
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 858
} 
#endif
# 861 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 862
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 864
exit(___);}
#if 0
# 862
{ 
# 863
return __surf3Dreadc2(surf, x, y, z, cudaBoundaryModeTrap); 
# 864
} 
#endif
# 867 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 868
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 872
exit(___);}
#if 0
# 868
{ 
# 869
uchar4 tmp = __surf3Dreadc4(surf, x, y, z, cudaBoundaryModeTrap); 
# 871
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 872
} 
#endif
# 875 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 876
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 878
exit(___);}
#if 0
# 876
{ 
# 877
return __surf3Dreadc4(surf, x, y, z, cudaBoundaryModeTrap); 
# 878
} 
#endif
# 881 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 882
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 884
exit(___);}
#if 0
# 882
{ 
# 883
return (short)(__surf3Dreads1(surf, x, y, z, cudaBoundaryModeTrap).x); 
# 884
} 
#endif
# 887 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 888
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 890
exit(___);}
#if 0
# 888
{ 
# 889
return __surf3Dreads1(surf, x, y, z, cudaBoundaryModeTrap).x; 
# 890
} 
#endif
# 893 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 894
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 896
exit(___);}
#if 0
# 894
{ 
# 895
return make_short1((signed short)(__surf3Dreads1(surf, x, y, z, cudaBoundaryModeTrap).x)); 
# 896
} 
#endif
# 899 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 900
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 902
exit(___);}
#if 0
# 900
{ 
# 901
return __surf3Dreads1(surf, x, y, z, cudaBoundaryModeTrap); 
# 902
} 
#endif
# 905 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 906
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 910
exit(___);}
#if 0
# 906
{ 
# 907
ushort2 tmp = __surf3Dreads2(surf, x, y, z, cudaBoundaryModeTrap); 
# 909
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 910
} 
#endif
# 913 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 914
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 916
exit(___);}
#if 0
# 914
{ 
# 915
return __surf3Dreads2(surf, x, y, z, cudaBoundaryModeTrap); 
# 916
} 
#endif
# 919 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 920
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 924
exit(___);}
#if 0
# 920
{ 
# 921
ushort4 tmp = __surf3Dreads4(surf, x, y, z, cudaBoundaryModeTrap); 
# 923
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 924
} 
#endif
# 927 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 928
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 930
exit(___);}
#if 0
# 928
{ 
# 929
return __surf3Dreads4(surf, x, y, z, cudaBoundaryModeTrap); 
# 930
} 
#endif
# 933 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 934
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 936
exit(___);}
#if 0
# 934
{ 
# 935
return (int)(__surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap).x); 
# 936
} 
#endif
# 939 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 940
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 942
exit(___);}
#if 0
# 940
{ 
# 941
return __surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap).x; 
# 942
} 
#endif
# 945 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 946
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 948
exit(___);}
#if 0
# 946
{ 
# 947
return make_int1((signed int)(__surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap).x)); 
# 948
} 
#endif
# 951 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 952
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 954
exit(___);}
#if 0
# 952
{ 
# 953
return __surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap); 
# 954
} 
#endif
# 957 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 958
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 962
exit(___);}
#if 0
# 958
{ 
# 959
uint2 tmp = __surf3Dreadu2(surf, x, y, z, cudaBoundaryModeTrap); 
# 961
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 962
} 
#endif
# 965 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 966
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 968
exit(___);}
#if 0
# 966
{ 
# 967
return __surf3Dreadu2(surf, x, y, z, cudaBoundaryModeTrap); 
# 968
} 
#endif
# 971 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 972
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 976
exit(___);}
#if 0
# 972
{ 
# 973
uint4 tmp = __surf3Dreadu4(surf, x, y, z, cudaBoundaryModeTrap); 
# 975
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 976
} 
#endif
# 979 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 980
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 982
exit(___);}
#if 0
# 980
{ 
# 981
return __surf3Dreadu4(surf, x, y, z, cudaBoundaryModeTrap); 
# 982
} 
#endif
# 985 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 986
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 988
exit(___);}
#if 0
# 986
{ 
# 987
return (long long)(__surf3Dreadl1(surf, x, y, z, cudaBoundaryModeTrap).x); 
# 988
} 
#endif
# 991 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 992
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 994
exit(___);}
#if 0
# 992
{ 
# 993
return __surf3Dreadl1(surf, x, y, z, cudaBoundaryModeTrap).x; 
# 994
} 
#endif
# 997 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 998
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1000
exit(___);}
#if 0
# 998
{ 
# 999
return make_longlong1((long long)(__surf3Dreadl1(surf, x, y, z, cudaBoundaryModeTrap).x)); 
# 1000
} 
#endif
# 1003 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1004
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1006
exit(___);}
#if 0
# 1004
{ 
# 1005
return __surf3Dreadl1(surf, x, y, z, cudaBoundaryModeTrap); 
# 1006
} 
#endif
# 1009 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1010
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1014
exit(___);}
#if 0
# 1010
{ 
# 1011
ulonglong2 tmp = __surf3Dreadl2(surf, x, y, z, cudaBoundaryModeTrap); 
# 1013
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 1014
} 
#endif
# 1017 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1018
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1020
exit(___);}
#if 0
# 1018
{ 
# 1019
return __surf3Dreadl2(surf, x, y, z, cudaBoundaryModeTrap); 
# 1020
} 
#endif
# 1083 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1084
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1086
exit(___);}
#if 0
# 1084
{ 
# 1085
return __int_as_float((int)(__surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap).x)); 
# 1086
} 
#endif
# 1089 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1090
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1092
exit(___);}
#if 0
# 1090
{ 
# 1091
return make_float1(__int_as_float((int)(__surf3Dreadu1(surf, x, y, z, cudaBoundaryModeTrap).x))); 
# 1092
} 
#endif
# 1095 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1096
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1100
exit(___);}
#if 0
# 1096
{ 
# 1097
uint2 tmp = __surf3Dreadu2(surf, x, y, z, cudaBoundaryModeTrap); 
# 1099
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 1100
} 
#endif
# 1103 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode) 
# 1104
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1108
exit(___);}
#if 0
# 1104
{ 
# 1105
uint4 tmp = __surf3Dreadu4(surf, x, y, z, cudaBoundaryModeTrap); 
# 1107
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 1108
} 
#endif
# 1143 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1144
surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1145
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 1152
exit(___);}
#if 0
# 1145
{ 
# 1146
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf1DLayeredreads1(surf, x, layer, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf1DLayeredreadu2(surf, x, layer, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf1DLayeredreadu4(surf, x, layer, cudaBoundaryModeTrap))) : ((void)0))))); 
# 1152
} 
#endif
# 1154 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 1155
surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1156
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1162
exit(___);}
#if 0
# 1156
{ 
# 1157
T tmp; 
# 1159
surf1DLayeredread(&tmp, surf, x, layer, (int)sizeof(T), mode); 
# 1161
return tmp; 
# 1162
} 
#endif
# 1164 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1165
surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1166
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 1168
exit(___);}
#if 0
# 1166
{ 
# 1167
(*res) = surf1DLayeredread< T> (surf, x, layer, mode); 
# 1168
} 
#endif
# 1171 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1172
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1174
exit(___);}
#if 0
# 1172
{ 
# 1173
return (char)(__surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap).x); 
# 1174
} 
#endif
# 1177 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1178
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1180
exit(___);}
#if 0
# 1178
{ 
# 1179
return (signed char)(__surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap).x); 
# 1180
} 
#endif
# 1183 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1184
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1186
exit(___);}
#if 0
# 1184
{ 
# 1185
return __surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap).x; 
# 1186
} 
#endif
# 1189 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1190
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1192
exit(___);}
#if 0
# 1190
{ 
# 1191
return make_char1((signed char)(__surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap).x)); 
# 1192
} 
#endif
# 1195 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1196
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1198
exit(___);}
#if 0
# 1196
{ 
# 1197
return __surf1DLayeredreadc1(surf, x, layer, cudaBoundaryModeTrap); 
# 1198
} 
#endif
# 1201 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1202
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1206
exit(___);}
#if 0
# 1202
{ 
# 1203
uchar2 tmp = __surf1DLayeredreadc2(surf, x, layer, cudaBoundaryModeTrap); 
# 1205
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 1206
} 
#endif
# 1209 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1210
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1212
exit(___);}
#if 0
# 1210
{ 
# 1211
return __surf1DLayeredreadc2(surf, x, layer, cudaBoundaryModeTrap); 
# 1212
} 
#endif
# 1215 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1216
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1220
exit(___);}
#if 0
# 1216
{ 
# 1217
uchar4 tmp = __surf1DLayeredreadc4(surf, x, layer, cudaBoundaryModeTrap); 
# 1219
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 1220
} 
#endif
# 1223 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1224
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1226
exit(___);}
#if 0
# 1224
{ 
# 1225
return __surf1DLayeredreadc4(surf, x, layer, cudaBoundaryModeTrap); 
# 1226
} 
#endif
# 1229 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1230
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1232
exit(___);}
#if 0
# 1230
{ 
# 1231
return (short)(__surf1DLayeredreads1(surf, x, layer, cudaBoundaryModeTrap).x); 
# 1232
} 
#endif
# 1235 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1236
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1238
exit(___);}
#if 0
# 1236
{ 
# 1237
return __surf1DLayeredreads1(surf, x, layer, cudaBoundaryModeTrap).x; 
# 1238
} 
#endif
# 1241 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1242
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1244
exit(___);}
#if 0
# 1242
{ 
# 1243
return make_short1((signed short)(__surf1DLayeredreads1(surf, x, layer, cudaBoundaryModeTrap).x)); 
# 1244
} 
#endif
# 1247 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1248
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1250
exit(___);}
#if 0
# 1248
{ 
# 1249
return __surf1DLayeredreads1(surf, x, layer, cudaBoundaryModeTrap); 
# 1250
} 
#endif
# 1253 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1254
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1258
exit(___);}
#if 0
# 1254
{ 
# 1255
ushort2 tmp = __surf1DLayeredreads2(surf, x, layer, cudaBoundaryModeTrap); 
# 1257
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 1258
} 
#endif
# 1261 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1262
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1264
exit(___);}
#if 0
# 1262
{ 
# 1263
return __surf1DLayeredreads2(surf, x, layer, cudaBoundaryModeTrap); 
# 1264
} 
#endif
# 1267 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1268
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1272
exit(___);}
#if 0
# 1268
{ 
# 1269
ushort4 tmp = __surf1DLayeredreads4(surf, x, layer, cudaBoundaryModeTrap); 
# 1271
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 1272
} 
#endif
# 1275 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1276
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1278
exit(___);}
#if 0
# 1276
{ 
# 1277
return __surf1DLayeredreads4(surf, x, layer, cudaBoundaryModeTrap); 
# 1278
} 
#endif
# 1281 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1282
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1284
exit(___);}
#if 0
# 1282
{ 
# 1283
return (int)(__surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap).x); 
# 1284
} 
#endif
# 1287 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1288
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1290
exit(___);}
#if 0
# 1288
{ 
# 1289
return __surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap).x; 
# 1290
} 
#endif
# 1293 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1294
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1296
exit(___);}
#if 0
# 1294
{ 
# 1295
return make_int1((signed int)(__surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap).x)); 
# 1296
} 
#endif
# 1299 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1300
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1302
exit(___);}
#if 0
# 1300
{ 
# 1301
return __surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap); 
# 1302
} 
#endif
# 1305 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1306
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1310
exit(___);}
#if 0
# 1306
{ 
# 1307
uint2 tmp = __surf1DLayeredreadu2(surf, x, layer, cudaBoundaryModeTrap); 
# 1309
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 1310
} 
#endif
# 1313 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1314
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1316
exit(___);}
#if 0
# 1314
{ 
# 1315
return __surf1DLayeredreadu2(surf, x, layer, cudaBoundaryModeTrap); 
# 1316
} 
#endif
# 1319 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1320
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1324
exit(___);}
#if 0
# 1320
{ 
# 1321
uint4 tmp = __surf1DLayeredreadu4(surf, x, layer, cudaBoundaryModeTrap); 
# 1323
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 1324
} 
#endif
# 1327 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1328
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1330
exit(___);}
#if 0
# 1328
{ 
# 1329
return __surf1DLayeredreadu4(surf, x, layer, cudaBoundaryModeTrap); 
# 1330
} 
#endif
# 1333 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1334
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1336
exit(___);}
#if 0
# 1334
{ 
# 1335
return (long long)(__surf1DLayeredreadl1(surf, x, layer, cudaBoundaryModeTrap).x); 
# 1336
} 
#endif
# 1339 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1340
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1342
exit(___);}
#if 0
# 1340
{ 
# 1341
return __surf1DLayeredreadl1(surf, x, layer, cudaBoundaryModeTrap).x; 
# 1342
} 
#endif
# 1345 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1346
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1348
exit(___);}
#if 0
# 1346
{ 
# 1347
return make_longlong1((long long)(__surf1DLayeredreadl1(surf, x, layer, cudaBoundaryModeTrap).x)); 
# 1348
} 
#endif
# 1351 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1352
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1354
exit(___);}
#if 0
# 1352
{ 
# 1353
return __surf1DLayeredreadl1(surf, x, layer, cudaBoundaryModeTrap); 
# 1354
} 
#endif
# 1357 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1358
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1362
exit(___);}
#if 0
# 1358
{ 
# 1359
ulonglong2 tmp = __surf1DLayeredreadl2(surf, x, layer, cudaBoundaryModeTrap); 
# 1361
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 1362
} 
#endif
# 1365 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1366
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1368
exit(___);}
#if 0
# 1366
{ 
# 1367
return __surf1DLayeredreadl2(surf, x, layer, cudaBoundaryModeTrap); 
# 1368
} 
#endif
# 1431 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1432
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1434
exit(___);}
#if 0
# 1432
{ 
# 1433
return __int_as_float((int)(__surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap).x)); 
# 1434
} 
#endif
# 1437 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1438
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1440
exit(___);}
#if 0
# 1438
{ 
# 1439
return make_float1(__int_as_float((int)(__surf1DLayeredreadu1(surf, x, layer, cudaBoundaryModeTrap).x))); 
# 1440
} 
#endif
# 1443 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1444
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1448
exit(___);}
#if 0
# 1444
{ 
# 1445
uint2 tmp = __surf1DLayeredreadu2(surf, x, layer, cudaBoundaryModeTrap); 
# 1447
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 1448
} 
#endif
# 1451 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode) 
# 1452
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1456
exit(___);}
#if 0
# 1452
{ 
# 1453
uint4 tmp = __surf1DLayeredreadu4(surf, x, layer, cudaBoundaryModeTrap); 
# 1455
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 1456
} 
#endif
# 1491 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1492
surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1493
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 1500
exit(___);}
#if 0
# 1493
{ 
# 1494
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf2DLayeredreads1(surf, x, y, layer, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf2DLayeredreadu2(surf, x, y, layer, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf2DLayeredreadu4(surf, x, y, layer, cudaBoundaryModeTrap))) : ((void)0))))); 
# 1500
} 
#endif
# 1502 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 1503
surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1504
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1510
exit(___);}
#if 0
# 1504
{ 
# 1505
T tmp; 
# 1507
surf2DLayeredread(&tmp, surf, x, y, layer, (int)sizeof(T), mode); 
# 1509
return tmp; 
# 1510
} 
#endif
# 1512 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1513
surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1514
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1516
exit(___);}
#if 0
# 1514
{ 
# 1515
(*res) = surf2DLayeredread< T> (surf, x, y, layer, mode); 
# 1516
} 
#endif
# 1519 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1520
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1522
exit(___);}
#if 0
# 1520
{ 
# 1521
return (char)(__surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap).x); 
# 1522
} 
#endif
# 1525 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1526
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1528
exit(___);}
#if 0
# 1526
{ 
# 1527
return (signed char)(__surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap).x); 
# 1528
} 
#endif
# 1531 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1532
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1534
exit(___);}
#if 0
# 1532
{ 
# 1533
return __surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap).x; 
# 1534
} 
#endif
# 1537 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1538
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1540
exit(___);}
#if 0
# 1538
{ 
# 1539
return make_char1((signed char)(__surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap).x)); 
# 1540
} 
#endif
# 1543 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1544
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1546
exit(___);}
#if 0
# 1544
{ 
# 1545
return __surf2DLayeredreadc1(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1546
} 
#endif
# 1549 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1550
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1554
exit(___);}
#if 0
# 1550
{ 
# 1551
uchar2 tmp = __surf2DLayeredreadc2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1553
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 1554
} 
#endif
# 1557 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1558
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1560
exit(___);}
#if 0
# 1558
{ 
# 1559
return __surf2DLayeredreadc2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1560
} 
#endif
# 1563 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1564
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1568
exit(___);}
#if 0
# 1564
{ 
# 1565
uchar4 tmp = __surf2DLayeredreadc4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1567
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 1568
} 
#endif
# 1571 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1572
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1574
exit(___);}
#if 0
# 1572
{ 
# 1573
return __surf2DLayeredreadc4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1574
} 
#endif
# 1577 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1578
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1580
exit(___);}
#if 0
# 1578
{ 
# 1579
return (short)(__surf2DLayeredreads1(surf, x, y, layer, cudaBoundaryModeTrap).x); 
# 1580
} 
#endif
# 1583 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1584
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1586
exit(___);}
#if 0
# 1584
{ 
# 1585
return __surf2DLayeredreads1(surf, x, y, layer, cudaBoundaryModeTrap).x; 
# 1586
} 
#endif
# 1589 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1590
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1592
exit(___);}
#if 0
# 1590
{ 
# 1591
return make_short1((signed short)(__surf2DLayeredreads1(surf, x, y, layer, cudaBoundaryModeTrap).x)); 
# 1592
} 
#endif
# 1595 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1596
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1598
exit(___);}
#if 0
# 1596
{ 
# 1597
return __surf2DLayeredreads1(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1598
} 
#endif
# 1601 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1602
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1606
exit(___);}
#if 0
# 1602
{ 
# 1603
ushort2 tmp = __surf2DLayeredreads2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1605
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 1606
} 
#endif
# 1609 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1610
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1612
exit(___);}
#if 0
# 1610
{ 
# 1611
return __surf2DLayeredreads2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1612
} 
#endif
# 1615 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1616
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1620
exit(___);}
#if 0
# 1616
{ 
# 1617
ushort4 tmp = __surf2DLayeredreads4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1619
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 1620
} 
#endif
# 1623 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1624
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1626
exit(___);}
#if 0
# 1624
{ 
# 1625
return __surf2DLayeredreads4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1626
} 
#endif
# 1629 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1630
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1632
exit(___);}
#if 0
# 1630
{ 
# 1631
return (int)(__surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap).x); 
# 1632
} 
#endif
# 1635 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1636
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1638
exit(___);}
#if 0
# 1636
{ 
# 1637
return __surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap).x; 
# 1638
} 
#endif
# 1641 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1642
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1644
exit(___);}
#if 0
# 1642
{ 
# 1643
return make_int1((signed int)(__surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap).x)); 
# 1644
} 
#endif
# 1647 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1648
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1650
exit(___);}
#if 0
# 1648
{ 
# 1649
return __surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1650
} 
#endif
# 1653 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1654
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1658
exit(___);}
#if 0
# 1654
{ 
# 1655
uint2 tmp = __surf2DLayeredreadu2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1657
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 1658
} 
#endif
# 1661 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1662
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1664
exit(___);}
#if 0
# 1662
{ 
# 1663
return __surf2DLayeredreadu2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1664
} 
#endif
# 1667 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1668
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1672
exit(___);}
#if 0
# 1668
{ 
# 1669
uint4 tmp = __surf2DLayeredreadu4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1671
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 1672
} 
#endif
# 1675 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1676
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1678
exit(___);}
#if 0
# 1676
{ 
# 1677
return __surf2DLayeredreadu4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1678
} 
#endif
# 1681 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1682
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1684
exit(___);}
#if 0
# 1682
{ 
# 1683
return (long long)(__surf2DLayeredreadl1(surf, x, y, layer, cudaBoundaryModeTrap).x); 
# 1684
} 
#endif
# 1687 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1688
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1690
exit(___);}
#if 0
# 1688
{ 
# 1689
return __surf2DLayeredreadl1(surf, x, y, layer, cudaBoundaryModeTrap).x; 
# 1690
} 
#endif
# 1693 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1694
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1696
exit(___);}
#if 0
# 1694
{ 
# 1695
return make_longlong1((long long)(__surf2DLayeredreadl1(surf, x, y, layer, cudaBoundaryModeTrap).x)); 
# 1696
} 
#endif
# 1699 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1700
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1702
exit(___);}
#if 0
# 1700
{ 
# 1701
return __surf2DLayeredreadl1(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1702
} 
#endif
# 1705 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1706
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1710
exit(___);}
#if 0
# 1706
{ 
# 1707
ulonglong2 tmp = __surf2DLayeredreadl2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1709
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 1710
} 
#endif
# 1713 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1714
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1716
exit(___);}
#if 0
# 1714
{ 
# 1715
return __surf2DLayeredreadl2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1716
} 
#endif
# 1779 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1780
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1782
exit(___);}
#if 0
# 1780
{ 
# 1781
return __int_as_float((int)(__surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap).x)); 
# 1782
} 
#endif
# 1785 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1786
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1788
exit(___);}
#if 0
# 1786
{ 
# 1787
return make_float1(__int_as_float((int)(__surf2DLayeredreadu1(surf, x, y, layer, cudaBoundaryModeTrap).x))); 
# 1788
} 
#endif
# 1791 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1792
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1796
exit(___);}
#if 0
# 1792
{ 
# 1793
uint2 tmp = __surf2DLayeredreadu2(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1795
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 1796
} 
#endif
# 1799 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode) 
# 1800
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1804
exit(___);}
#if 0
# 1800
{ 
# 1801
uint4 tmp = __surf2DLayeredreadu4(surf, x, y, layer, cudaBoundaryModeTrap); 
# 1803
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 1804
} 
#endif
# 1839 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1840
surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1841
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 1848
exit(___);}
#if 0
# 1841
{ 
# 1842
(s == 1) ? ((void)((*((uchar1 *)res)) = __surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surfCubemapreads1(surf, x, y, face, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surfCubemapreadu2(surf, x, y, face, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surfCubemapreadu4(surf, x, y, face, cudaBoundaryModeTrap))) : ((void)0))))); 
# 1848
} 
#endif
# 1850 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 1851
surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1852
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1858
exit(___);}
#if 0
# 1852
{ 
# 1853
T tmp; 
# 1855
surfCubemapread(&tmp, surf, x, y, face, (int)sizeof(T), mode); 
# 1857
return tmp; 
# 1858
} 
#endif
# 1860 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1861
surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1862
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1864
exit(___);}
#if 0
# 1862
{ 
# 1863
(*res) = surfCubemapread< T> (surf, x, y, face, mode); 
# 1864
} 
#endif
# 1867 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1868
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1870
exit(___);}
#if 0
# 1868
{ 
# 1869
return (char)(__surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap).x); 
# 1870
} 
#endif
# 1873 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1874
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1876
exit(___);}
#if 0
# 1874
{ 
# 1875
return (signed char)(__surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap).x); 
# 1876
} 
#endif
# 1879 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1880
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1882
exit(___);}
#if 0
# 1880
{ 
# 1881
return __surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap).x; 
# 1882
} 
#endif
# 1885 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1886
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1888
exit(___);}
#if 0
# 1886
{ 
# 1887
return make_char1((signed char)(__surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap).x)); 
# 1888
} 
#endif
# 1891 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1892
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1894
exit(___);}
#if 0
# 1892
{ 
# 1893
return __surfCubemapreadc1(surf, x, y, face, cudaBoundaryModeTrap); 
# 1894
} 
#endif
# 1897 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1898
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1902
exit(___);}
#if 0
# 1898
{ 
# 1899
uchar2 tmp = __surfCubemapreadc2(surf, x, y, face, cudaBoundaryModeTrap); 
# 1901
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 1902
} 
#endif
# 1905 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1906
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1908
exit(___);}
#if 0
# 1906
{ 
# 1907
return __surfCubemapreadc2(surf, x, y, face, cudaBoundaryModeTrap); 
# 1908
} 
#endif
# 1911 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1912
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1916
exit(___);}
#if 0
# 1912
{ 
# 1913
uchar4 tmp = __surfCubemapreadc4(surf, x, y, face, cudaBoundaryModeTrap); 
# 1915
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 1916
} 
#endif
# 1919 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1920
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1922
exit(___);}
#if 0
# 1920
{ 
# 1921
return __surfCubemapreadc4(surf, x, y, face, cudaBoundaryModeTrap); 
# 1922
} 
#endif
# 1925 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1926
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1928
exit(___);}
#if 0
# 1926
{ 
# 1927
return (short)(__surfCubemapreads1(surf, x, y, face, cudaBoundaryModeTrap).x); 
# 1928
} 
#endif
# 1931 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1932
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1934
exit(___);}
#if 0
# 1932
{ 
# 1933
return __surfCubemapreads1(surf, x, y, face, cudaBoundaryModeTrap).x; 
# 1934
} 
#endif
# 1937 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1938
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1940
exit(___);}
#if 0
# 1938
{ 
# 1939
return make_short1((signed short)(__surfCubemapreads1(surf, x, y, face, cudaBoundaryModeTrap).x)); 
# 1940
} 
#endif
# 1943 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1944
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1946
exit(___);}
#if 0
# 1944
{ 
# 1945
return __surfCubemapreads1(surf, x, y, face, cudaBoundaryModeTrap); 
# 1946
} 
#endif
# 1949 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1950
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1954
exit(___);}
#if 0
# 1950
{ 
# 1951
ushort2 tmp = __surfCubemapreads2(surf, x, y, face, cudaBoundaryModeTrap); 
# 1953
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 1954
} 
#endif
# 1957 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1958
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1960
exit(___);}
#if 0
# 1958
{ 
# 1959
return __surfCubemapreads2(surf, x, y, face, cudaBoundaryModeTrap); 
# 1960
} 
#endif
# 1963 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1964
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1968
exit(___);}
#if 0
# 1964
{ 
# 1965
ushort4 tmp = __surfCubemapreads4(surf, x, y, face, cudaBoundaryModeTrap); 
# 1967
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 1968
} 
#endif
# 1971 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1972
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1974
exit(___);}
#if 0
# 1972
{ 
# 1973
return __surfCubemapreads4(surf, x, y, face, cudaBoundaryModeTrap); 
# 1974
} 
#endif
# 1977 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1978
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1980
exit(___);}
#if 0
# 1978
{ 
# 1979
return (int)(__surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap).x); 
# 1980
} 
#endif
# 1983 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1984
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1986
exit(___);}
#if 0
# 1984
{ 
# 1985
return __surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap).x; 
# 1986
} 
#endif
# 1989 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1990
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1992
exit(___);}
#if 0
# 1990
{ 
# 1991
return make_int1((signed int)(__surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap).x)); 
# 1992
} 
#endif
# 1995 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 1996
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1998
exit(___);}
#if 0
# 1996
{ 
# 1997
return __surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap); 
# 1998
} 
#endif
# 2001 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2002
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2006
exit(___);}
#if 0
# 2002
{ 
# 2003
uint2 tmp = __surfCubemapreadu2(surf, x, y, face, cudaBoundaryModeTrap); 
# 2005
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 2006
} 
#endif
# 2009 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2010
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2012
exit(___);}
#if 0
# 2010
{ 
# 2011
return __surfCubemapreadu2(surf, x, y, face, cudaBoundaryModeTrap); 
# 2012
} 
#endif
# 2015 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2016
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2020
exit(___);}
#if 0
# 2016
{ 
# 2017
uint4 tmp = __surfCubemapreadu4(surf, x, y, face, cudaBoundaryModeTrap); 
# 2019
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 2020
} 
#endif
# 2023 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2024
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2026
exit(___);}
#if 0
# 2024
{ 
# 2025
return __surfCubemapreadu4(surf, x, y, face, cudaBoundaryModeTrap); 
# 2026
} 
#endif
# 2029 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2030
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2032
exit(___);}
#if 0
# 2030
{ 
# 2031
return (long long)(__surfCubemapreadl1(surf, x, y, face, cudaBoundaryModeTrap).x); 
# 2032
} 
#endif
# 2035 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2036
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2038
exit(___);}
#if 0
# 2036
{ 
# 2037
return __surfCubemapreadl1(surf, x, y, face, cudaBoundaryModeTrap).x; 
# 2038
} 
#endif
# 2041 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2042
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2044
exit(___);}
#if 0
# 2042
{ 
# 2043
return make_longlong1((long long)(__surfCubemapreadl1(surf, x, y, face, cudaBoundaryModeTrap).x)); 
# 2044
} 
#endif
# 2047 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2048
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2050
exit(___);}
#if 0
# 2048
{ 
# 2049
return __surfCubemapreadl1(surf, x, y, face, cudaBoundaryModeTrap); 
# 2050
} 
#endif
# 2053 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2054
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2058
exit(___);}
#if 0
# 2054
{ 
# 2055
ulonglong2 tmp = __surfCubemapreadl2(surf, x, y, face, cudaBoundaryModeTrap); 
# 2057
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 2058
} 
#endif
# 2061 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2062
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2064
exit(___);}
#if 0
# 2062
{ 
# 2063
return __surfCubemapreadl2(surf, x, y, face, cudaBoundaryModeTrap); 
# 2064
} 
#endif
# 2127 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2128
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2130
exit(___);}
#if 0
# 2128
{ 
# 2129
return __int_as_float((int)(__surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap).x)); 
# 2130
} 
#endif
# 2133 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2134
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2136
exit(___);}
#if 0
# 2134
{ 
# 2135
return make_float1(__int_as_float((int)(__surfCubemapreadu1(surf, x, y, face, cudaBoundaryModeTrap).x))); 
# 2136
} 
#endif
# 2139 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2140
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2144
exit(___);}
#if 0
# 2140
{ 
# 2141
uint2 tmp = __surfCubemapreadu2(surf, x, y, face, cudaBoundaryModeTrap); 
# 2143
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 2144
} 
#endif
# 2147 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode) 
# 2148
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2152
exit(___);}
#if 0
# 2148
{ 
# 2149
uint4 tmp = __surfCubemapreadu4(surf, x, y, face, cudaBoundaryModeTrap); 
# 2151
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 2152
} 
#endif
# 2188 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2189
surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2190
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 2197
exit(___);}
#if 0
# 2190
{ 
# 2191
(s == 1) ? ((void)((*((uchar1 *)res)) = __surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surfCubemapLayeredreads1(surf, x, y, layerFace, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surfCubemapLayeredreadu2(surf, x, y, layerFace, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surfCubemapLayeredreadu4(surf, x, y, layerFace, cudaBoundaryModeTrap))) : ((void)0))))); 
# 2197
} 
#endif
# 2199 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 2200
surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2201
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2207
exit(___);}
#if 0
# 2201
{ 
# 2202
T tmp; 
# 2204
surfCubemapLayeredread(&tmp, surf, x, y, layerFace, (int)sizeof(T), mode); 
# 2206
return tmp; 
# 2207
} 
#endif
# 2209 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2210
surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2211
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2213
exit(___);}
#if 0
# 2211
{ 
# 2212
(*res) = surfCubemapLayeredread< T> (surf, x, y, layerFace, mode); 
# 2213
} 
#endif
# 2216 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2217
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2219
exit(___);}
#if 0
# 2217
{ 
# 2218
return (char)(__surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap).x); 
# 2219
} 
#endif
# 2222 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2223
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2225
exit(___);}
#if 0
# 2223
{ 
# 2224
return (signed char)(__surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap).x); 
# 2225
} 
#endif
# 2228 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2229
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2231
exit(___);}
#if 0
# 2229
{ 
# 2230
return __surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap).x; 
# 2231
} 
#endif
# 2234 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2235
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2237
exit(___);}
#if 0
# 2235
{ 
# 2236
return make_char1((signed char)(__surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap).x)); 
# 2237
} 
#endif
# 2240 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2241
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2243
exit(___);}
#if 0
# 2241
{ 
# 2242
return __surfCubemapLayeredreadc1(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2243
} 
#endif
# 2246 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2247
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2251
exit(___);}
#if 0
# 2247
{ 
# 2248
uchar2 tmp = __surfCubemapLayeredreadc2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2250
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 2251
} 
#endif
# 2254 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2255
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2257
exit(___);}
#if 0
# 2255
{ 
# 2256
return __surfCubemapLayeredreadc2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2257
} 
#endif
# 2260 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2261
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2265
exit(___);}
#if 0
# 2261
{ 
# 2262
uchar4 tmp = __surfCubemapLayeredreadc4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2264
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 2265
} 
#endif
# 2268 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2269
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2271
exit(___);}
#if 0
# 2269
{ 
# 2270
return __surfCubemapLayeredreadc4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2271
} 
#endif
# 2274 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2275
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2277
exit(___);}
#if 0
# 2275
{ 
# 2276
return (short)(__surfCubemapLayeredreads1(surf, x, y, layerFace, cudaBoundaryModeTrap).x); 
# 2277
} 
#endif
# 2280 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2281
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2283
exit(___);}
#if 0
# 2281
{ 
# 2282
return __surfCubemapLayeredreads1(surf, x, y, layerFace, cudaBoundaryModeTrap).x; 
# 2283
} 
#endif
# 2286 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2287
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2289
exit(___);}
#if 0
# 2287
{ 
# 2288
return make_short1((signed short)(__surfCubemapLayeredreads1(surf, x, y, layerFace, cudaBoundaryModeTrap).x)); 
# 2289
} 
#endif
# 2292 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2293
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2295
exit(___);}
#if 0
# 2293
{ 
# 2294
return __surfCubemapLayeredreads1(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2295
} 
#endif
# 2298 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2299
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2303
exit(___);}
#if 0
# 2299
{ 
# 2300
ushort2 tmp = __surfCubemapLayeredreads2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2302
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 2303
} 
#endif
# 2306 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2307
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2309
exit(___);}
#if 0
# 2307
{ 
# 2308
return __surfCubemapLayeredreads2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2309
} 
#endif
# 2312 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2313
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2317
exit(___);}
#if 0
# 2313
{ 
# 2314
ushort4 tmp = __surfCubemapLayeredreads4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2316
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 2317
} 
#endif
# 2320 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2321
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2323
exit(___);}
#if 0
# 2321
{ 
# 2322
return __surfCubemapLayeredreads4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2323
} 
#endif
# 2326 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2327
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2329
exit(___);}
#if 0
# 2327
{ 
# 2328
return (int)(__surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap).x); 
# 2329
} 
#endif
# 2332 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2333
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2335
exit(___);}
#if 0
# 2333
{ 
# 2334
return __surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap).x; 
# 2335
} 
#endif
# 2338 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2339
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2341
exit(___);}
#if 0
# 2339
{ 
# 2340
return make_int1((signed int)(__surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap).x)); 
# 2341
} 
#endif
# 2344 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2345
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2347
exit(___);}
#if 0
# 2345
{ 
# 2346
return __surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2347
} 
#endif
# 2350 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2351
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2355
exit(___);}
#if 0
# 2351
{ 
# 2352
uint2 tmp = __surfCubemapLayeredreadu2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2354
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 2355
} 
#endif
# 2358 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2359
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2361
exit(___);}
#if 0
# 2359
{ 
# 2360
return __surfCubemapLayeredreadu2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2361
} 
#endif
# 2364 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2365
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2369
exit(___);}
#if 0
# 2365
{ 
# 2366
uint4 tmp = __surfCubemapLayeredreadu4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2368
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 2369
} 
#endif
# 2372 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2373
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2375
exit(___);}
#if 0
# 2373
{ 
# 2374
return __surfCubemapLayeredreadu4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2375
} 
#endif
# 2378 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2379
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2381
exit(___);}
#if 0
# 2379
{ 
# 2380
return (long long)(__surfCubemapLayeredreadl1(surf, x, y, layerFace, cudaBoundaryModeTrap).x); 
# 2381
} 
#endif
# 2384 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2385
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2387
exit(___);}
#if 0
# 2385
{ 
# 2386
return __surfCubemapLayeredreadl1(surf, x, y, layerFace, cudaBoundaryModeTrap).x; 
# 2387
} 
#endif
# 2390 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2391
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2393
exit(___);}
#if 0
# 2391
{ 
# 2392
return make_longlong1((long long)(__surfCubemapLayeredreadl1(surf, x, y, layerFace, cudaBoundaryModeTrap).x)); 
# 2393
} 
#endif
# 2396 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2397
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2399
exit(___);}
#if 0
# 2397
{ 
# 2398
return __surfCubemapLayeredreadl1(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2399
} 
#endif
# 2402 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2403
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2407
exit(___);}
#if 0
# 2403
{ 
# 2404
ulonglong2 tmp = __surfCubemapLayeredreadl2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2406
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 2407
} 
#endif
# 2410 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2411
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2413
exit(___);}
#if 0
# 2411
{ 
# 2412
return __surfCubemapLayeredreadl2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2413
} 
#endif
# 2476 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2477
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2479
exit(___);}
#if 0
# 2477
{ 
# 2478
return __int_as_float((int)(__surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap).x)); 
# 2479
} 
#endif
# 2482 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2483
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2485
exit(___);}
#if 0
# 2483
{ 
# 2484
return make_float1(__int_as_float((int)(__surfCubemapLayeredreadu1(surf, x, y, layerFace, cudaBoundaryModeTrap).x))); 
# 2485
} 
#endif
# 2488 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2489
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2493
exit(___);}
#if 0
# 2489
{ 
# 2490
uint2 tmp = __surfCubemapLayeredreadu2(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2492
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 2493
} 
#endif
# 2496 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode) 
# 2497
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2501
exit(___);}
#if 0
# 2497
{ 
# 2498
uint4 tmp = __surfCubemapLayeredreadu4(surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 2500
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 2501
} 
#endif
# 2537 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2538
surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2539
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 2557
exit(___);}
#if 0
# 2539
{ 
# 2540
union { 
# 2541
T val; 
# 2542
uchar1 c1; 
# 2543
ushort1 s1; 
# 2544
uint1 u1; 
# 2545
uint2 u2; 
# 2546
uint4 u4; 
# 2547
} tmp; 
# 2549
(tmp.val) = val; 
# 2551
(s == 1) ? ((void)__surf1Dwritec1(tmp.c1, surf, x, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf1Dwrites1(tmp.s1, surf, x, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf1Dwriteu1(tmp.u1, surf, x, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf1Dwriteu2(tmp.u2, surf, x, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf1Dwriteu4(tmp.u4, surf, x, cudaBoundaryModeTrap)) : ((void)0))))); 
# 2557
} 
#endif
# 2559 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2560
surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2561
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2563
exit(___);}
#if 0
# 2561
{ ; 
# 2562
surf1Dwrite(val, surf, x, (int)sizeof(T), mode); 
# 2563
} 
#endif
# 2566 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2567
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2569
exit(___);}
#if 0
# 2567
{ 
# 2568
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 2569
} 
#endif
# 2571 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2572
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2574
exit(___);}
#if 0
# 2572
{ 
# 2573
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 2574
} 
#endif
# 2576 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2577
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2579
exit(___);}
#if 0
# 2577
{ 
# 2578
__surf1Dwritec1(make_uchar1(val), surf, x, cudaBoundaryModeTrap); 
# 2579
} 
#endif
# 2581 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2582
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2584
exit(___);}
#if 0
# 2582
{ 
# 2583
__surf1Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 2584
} 
#endif
# 2586 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2587
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2589
exit(___);}
#if 0
# 2587
{ 
# 2588
__surf1Dwritec1(val, surf, x, cudaBoundaryModeTrap); 
# 2589
} 
#endif
# 2591 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2592
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2594
exit(___);}
#if 0
# 2592
{ 
# 2593
__surf1Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 2594
} 
#endif
# 2596 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2597
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2599
exit(___);}
#if 0
# 2597
{ 
# 2598
__surf1Dwritec2(val, surf, x, cudaBoundaryModeTrap); 
# 2599
} 
#endif
# 2601 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2602
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2604
exit(___);}
#if 0
# 2602
{ 
# 2603
__surf1Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 2604
} 
#endif
# 2606 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2607
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2609
exit(___);}
#if 0
# 2607
{ 
# 2608
__surf1Dwritec4(val, surf, x, cudaBoundaryModeTrap); 
# 2609
} 
#endif
# 2611 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2612
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2614
exit(___);}
#if 0
# 2612
{ 
# 2613
__surf1Dwrites1(make_ushort1((unsigned short)val), surf, x, cudaBoundaryModeTrap); 
# 2614
} 
#endif
# 2616 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2617
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2619
exit(___);}
#if 0
# 2617
{ 
# 2618
__surf1Dwrites1(make_ushort1(val), surf, x, cudaBoundaryModeTrap); 
# 2619
} 
#endif
# 2621 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2622
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2624
exit(___);}
#if 0
# 2622
{ 
# 2623
__surf1Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 2624
} 
#endif
# 2626 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2627
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2629
exit(___);}
#if 0
# 2627
{ 
# 2628
__surf1Dwrites1(val, surf, x, cudaBoundaryModeTrap); 
# 2629
} 
#endif
# 2631 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2632
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2634
exit(___);}
#if 0
# 2632
{ 
# 2633
__surf1Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 2634
} 
#endif
# 2636 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2637
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2639
exit(___);}
#if 0
# 2637
{ 
# 2638
__surf1Dwrites2(val, surf, x, cudaBoundaryModeTrap); 
# 2639
} 
#endif
# 2641 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2642
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2644
exit(___);}
#if 0
# 2642
{ 
# 2643
__surf1Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 2644
} 
#endif
# 2646 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2647
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2649
exit(___);}
#if 0
# 2647
{ 
# 2648
__surf1Dwrites4(val, surf, x, cudaBoundaryModeTrap); 
# 2649
} 
#endif
# 2651 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2652
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2654
exit(___);}
#if 0
# 2652
{ 
# 2653
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
# 2654
} 
#endif
# 2656 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2657
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2659
exit(___);}
#if 0
# 2657
{ 
# 2658
__surf1Dwriteu1(make_uint1(val), surf, x, cudaBoundaryModeTrap); 
# 2659
} 
#endif
# 2661 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2662
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2664
exit(___);}
#if 0
# 2662
{ 
# 2663
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 2664
} 
#endif
# 2666 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2667
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2669
exit(___);}
#if 0
# 2667
{ 
# 2668
__surf1Dwriteu1(val, surf, x, cudaBoundaryModeTrap); 
# 2669
} 
#endif
# 2671 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2672
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2674
exit(___);}
#if 0
# 2672
{ 
# 2673
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 2674
} 
#endif
# 2676 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2677
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2679
exit(___);}
#if 0
# 2677
{ 
# 2678
__surf1Dwriteu2(val, surf, x, cudaBoundaryModeTrap); 
# 2679
} 
#endif
# 2681 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2682
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2684
exit(___);}
#if 0
# 2682
{ 
# 2683
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 2684
} 
#endif
# 2686 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2687
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2689
exit(___);}
#if 0
# 2687
{ 
# 2688
__surf1Dwriteu4(val, surf, x, cudaBoundaryModeTrap); 
# 2689
} 
#endif
# 2691 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2692
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2694
exit(___);}
#if 0
# 2692
{ 
# 2693
__surf1Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, cudaBoundaryModeTrap); 
# 2694
} 
#endif
# 2696 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2697
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2699
exit(___);}
#if 0
# 2697
{ 
# 2698
__surf1Dwritel1(make_ulonglong1(val), surf, x, cudaBoundaryModeTrap); 
# 2699
} 
#endif
# 2701 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2702
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2704
exit(___);}
#if 0
# 2702
{ 
# 2703
__surf1Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 2704
} 
#endif
# 2706 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2707
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2709
exit(___);}
#if 0
# 2707
{ 
# 2708
__surf1Dwritel1(val, surf, x, cudaBoundaryModeTrap); 
# 2709
} 
#endif
# 2711 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2712
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2714
exit(___);}
#if 0
# 2712
{ 
# 2713
__surf1Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 2714
} 
#endif
# 2716 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2717
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2719
exit(___);}
#if 0
# 2717
{ 
# 2718
__surf1Dwritel2(val, surf, x, cudaBoundaryModeTrap); 
# 2719
} 
#endif
# 2765 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2766
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2768
exit(___);}
#if 0
# 2766
{ 
# 2767
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, cudaBoundaryModeTrap); 
# 2768
} 
#endif
# 2770 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2771
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2773
exit(___);}
#if 0
# 2771
{ 
# 2772
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, cudaBoundaryModeTrap); 
# 2773
} 
#endif
# 2775 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2776
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2778
exit(___);}
#if 0
# 2776
{ 
# 2777
__surf1Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, cudaBoundaryModeTrap); 
# 2778
} 
#endif
# 2780 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2781
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2783
exit(___);}
#if 0
# 2781
{ 
# 2782
__surf1Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, cudaBoundaryModeTrap); 
# 2783
} 
#endif
# 2819 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2820
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2821
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 2839
exit(___);}
#if 0
# 2821
{ 
# 2822
union { 
# 2823
T val; 
# 2824
uchar1 c1; 
# 2825
ushort1 s1; 
# 2826
uint1 u1; 
# 2827
uint2 u2; 
# 2828
uint4 u4; 
# 2829
} tmp; 
# 2831
(tmp.val) = val; 
# 2833
(s == 1) ? ((void)__surf2Dwritec1(tmp.c1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf2Dwrites1(tmp.s1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf2Dwriteu1(tmp.u1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf2Dwriteu2(tmp.u2, surf, x, y, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf2Dwriteu4(tmp.u4, surf, x, y, cudaBoundaryModeTrap)) : ((void)0))))); 
# 2839
} 
#endif
# 2841 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 2842
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2843
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2845
exit(___);}
#if 0
# 2843
{ ; 
# 2844
surf2Dwrite(val, surf, x, y, (int)sizeof(T), mode); 
# 2845
} 
#endif
# 2848 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2849
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2851
exit(___);}
#if 0
# 2849
{ 
# 2850
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 2851
} 
#endif
# 2853 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2854
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2856
exit(___);}
#if 0
# 2854
{ 
# 2855
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 2856
} 
#endif
# 2858 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2859
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2861
exit(___);}
#if 0
# 2859
{ 
# 2860
__surf2Dwritec1(make_uchar1(val), surf, x, y, cudaBoundaryModeTrap); 
# 2861
} 
#endif
# 2863 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2864
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2866
exit(___);}
#if 0
# 2864
{ 
# 2865
__surf2Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 2866
} 
#endif
# 2868 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2869
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2871
exit(___);}
#if 0
# 2869
{ 
# 2870
__surf2Dwritec1(val, surf, x, y, cudaBoundaryModeTrap); 
# 2871
} 
#endif
# 2873 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2874
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2876
exit(___);}
#if 0
# 2874
{ 
# 2875
__surf2Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 2876
} 
#endif
# 2878 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2879
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2881
exit(___);}
#if 0
# 2879
{ 
# 2880
__surf2Dwritec2(val, surf, x, y, cudaBoundaryModeTrap); 
# 2881
} 
#endif
# 2883 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2884
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2886
exit(___);}
#if 0
# 2884
{ 
# 2885
__surf2Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 2886
} 
#endif
# 2888 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2889
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2891
exit(___);}
#if 0
# 2889
{ 
# 2890
__surf2Dwritec4(val, surf, x, y, cudaBoundaryModeTrap); 
# 2891
} 
#endif
# 2893 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2894
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2896
exit(___);}
#if 0
# 2894
{ 
# 2895
__surf2Dwrites1(make_ushort1((unsigned short)val), surf, x, y, cudaBoundaryModeTrap); 
# 2896
} 
#endif
# 2898 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2899
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2901
exit(___);}
#if 0
# 2899
{ 
# 2900
__surf2Dwrites1(make_ushort1(val), surf, x, y, cudaBoundaryModeTrap); 
# 2901
} 
#endif
# 2903 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2904
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2906
exit(___);}
#if 0
# 2904
{ 
# 2905
__surf2Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 2906
} 
#endif
# 2908 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2909
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2911
exit(___);}
#if 0
# 2909
{ 
# 2910
__surf2Dwrites1(val, surf, x, y, cudaBoundaryModeTrap); 
# 2911
} 
#endif
# 2913 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2914
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2916
exit(___);}
#if 0
# 2914
{ 
# 2915
__surf2Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 2916
} 
#endif
# 2918 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2919
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2921
exit(___);}
#if 0
# 2919
{ 
# 2920
__surf2Dwrites2(val, surf, x, y, cudaBoundaryModeTrap); 
# 2921
} 
#endif
# 2923 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2924
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2926
exit(___);}
#if 0
# 2924
{ 
# 2925
__surf2Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 2926
} 
#endif
# 2928 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2929
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2931
exit(___);}
#if 0
# 2929
{ 
# 2930
__surf2Dwrites4(val, surf, x, y, cudaBoundaryModeTrap); 
# 2931
} 
#endif
# 2933 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2934
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2936
exit(___);}
#if 0
# 2934
{ 
# 2935
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
# 2936
} 
#endif
# 2938 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2939
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2941
exit(___);}
#if 0
# 2939
{ 
# 2940
__surf2Dwriteu1(make_uint1(val), surf, x, y, cudaBoundaryModeTrap); 
# 2941
} 
#endif
# 2943 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2944
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2946
exit(___);}
#if 0
# 2944
{ 
# 2945
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 2946
} 
#endif
# 2948 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2949
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2951
exit(___);}
#if 0
# 2949
{ 
# 2950
__surf2Dwriteu1(val, surf, x, y, cudaBoundaryModeTrap); 
# 2951
} 
#endif
# 2953 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2954
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2956
exit(___);}
#if 0
# 2954
{ 
# 2955
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 2956
} 
#endif
# 2958 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2959
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2961
exit(___);}
#if 0
# 2959
{ 
# 2960
__surf2Dwriteu2(val, surf, x, y, cudaBoundaryModeTrap); 
# 2961
} 
#endif
# 2963 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2964
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2966
exit(___);}
#if 0
# 2964
{ 
# 2965
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 2966
} 
#endif
# 2968 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2969
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2971
exit(___);}
#if 0
# 2969
{ 
# 2970
__surf2Dwriteu4(val, surf, x, y, cudaBoundaryModeTrap); 
# 2971
} 
#endif
# 2973 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2974
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2976
exit(___);}
#if 0
# 2974
{ 
# 2975
__surf2Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, cudaBoundaryModeTrap); 
# 2976
} 
#endif
# 2978 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2979
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2981
exit(___);}
#if 0
# 2979
{ 
# 2980
__surf2Dwritel1(make_ulonglong1(val), surf, x, y, cudaBoundaryModeTrap); 
# 2981
} 
#endif
# 2983 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2984
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2986
exit(___);}
#if 0
# 2984
{ 
# 2985
__surf2Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 2986
} 
#endif
# 2988 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2989
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2991
exit(___);}
#if 0
# 2989
{ 
# 2990
__surf2Dwritel1(val, surf, x, y, cudaBoundaryModeTrap); 
# 2991
} 
#endif
# 2993 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2994
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2996
exit(___);}
#if 0
# 2994
{ 
# 2995
__surf2Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 2996
} 
#endif
# 2998 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2999
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3001
exit(___);}
#if 0
# 2999
{ 
# 3000
__surf2Dwritel2(val, surf, x, y, cudaBoundaryModeTrap); 
# 3001
} 
#endif
# 3047 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3048
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3050
exit(___);}
#if 0
# 3048
{ 
# 3049
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, cudaBoundaryModeTrap); 
# 3050
} 
#endif
# 3052 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3053
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3055
exit(___);}
#if 0
# 3053
{ 
# 3054
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 3055
} 
#endif
# 3057 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3058
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3060
exit(___);}
#if 0
# 3058
{ 
# 3059
__surf2Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, cudaBoundaryModeTrap); 
# 3060
} 
#endif
# 3062 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3063
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3065
exit(___);}
#if 0
# 3063
{ 
# 3064
__surf2Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 3065
} 
#endif
# 3101 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3102
surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3103
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 3121
exit(___);}
#if 0
# 3103
{ 
# 3104
union { 
# 3105
T val; 
# 3106
uchar1 c1; 
# 3107
ushort1 s1; 
# 3108
uint1 u1; 
# 3109
uint2 u2; 
# 3110
uint4 u4; 
# 3111
} tmp; 
# 3113
(tmp.val) = val; 
# 3115
(s == 1) ? ((void)__surf3Dwritec1(tmp.c1, surf, x, y, z, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf3Dwrites1(tmp.s1, surf, x, y, z, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf3Dwriteu1(tmp.u1, surf, x, y, z, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf3Dwriteu2(tmp.u2, surf, x, y, z, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf3Dwriteu4(tmp.u4, surf, x, y, z, cudaBoundaryModeTrap)) : ((void)0))))); 
# 3121
} 
#endif
# 3123 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3124
surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3125
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3127
exit(___);}
#if 0
# 3125
{ ; 
# 3126
surf3Dwrite(val, surf, x, y, z, (int)sizeof(T), mode); 
# 3127
} 
#endif
# 3130 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3131
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3133
exit(___);}
#if 0
# 3131
{ 
# 3132
__surf3Dwritec1(make_uchar1((unsigned char)val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3133
} 
#endif
# 3135 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(signed char val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3136
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3138
exit(___);}
#if 0
# 3136
{ 
# 3137
__surf3Dwritec1(make_uchar1((unsigned char)val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3138
} 
#endif
# 3140 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned char val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3141
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3143
exit(___);}
#if 0
# 3141
{ 
# 3142
__surf3Dwritec1(make_uchar1(val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3143
} 
#endif
# 3145 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3146
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3148
exit(___);}
#if 0
# 3146
{ 
# 3147
__surf3Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3148
} 
#endif
# 3150 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3151
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3153
exit(___);}
#if 0
# 3151
{ 
# 3152
__surf3Dwritec1(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3153
} 
#endif
# 3155 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3156
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3158
exit(___);}
#if 0
# 3156
{ 
# 3157
__surf3Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3158
} 
#endif
# 3160 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3161
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3163
exit(___);}
#if 0
# 3161
{ 
# 3162
__surf3Dwritec2(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3163
} 
#endif
# 3165 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3166
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3168
exit(___);}
#if 0
# 3166
{ 
# 3167
__surf3Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3168
} 
#endif
# 3170 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3171
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3173
exit(___);}
#if 0
# 3171
{ 
# 3172
__surf3Dwritec4(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3173
} 
#endif
# 3175 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3176
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3178
exit(___);}
#if 0
# 3176
{ 
# 3177
__surf3Dwrites1(make_ushort1((unsigned short)val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3178
} 
#endif
# 3180 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned short val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3181
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3183
exit(___);}
#if 0
# 3181
{ 
# 3182
__surf3Dwrites1(make_ushort1(val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3183
} 
#endif
# 3185 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3186
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3188
exit(___);}
#if 0
# 3186
{ 
# 3187
__surf3Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3188
} 
#endif
# 3190 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3191
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3193
exit(___);}
#if 0
# 3191
{ 
# 3192
__surf3Dwrites1(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3193
} 
#endif
# 3195 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3196
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3198
exit(___);}
#if 0
# 3196
{ 
# 3197
__surf3Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3198
} 
#endif
# 3200 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3201
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3203
exit(___);}
#if 0
# 3201
{ 
# 3202
__surf3Dwrites2(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3203
} 
#endif
# 3205 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3206
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3208
exit(___);}
#if 0
# 3206
{ 
# 3207
__surf3Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3208
} 
#endif
# 3210 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3211
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3213
exit(___);}
#if 0
# 3211
{ 
# 3212
__surf3Dwrites4(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3213
} 
#endif
# 3215 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3216
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3218
exit(___);}
#if 0
# 3216
{ 
# 3217
__surf3Dwriteu1(make_uint1((unsigned)val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3218
} 
#endif
# 3220 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3221
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3223
exit(___);}
#if 0
# 3221
{ 
# 3222
__surf3Dwriteu1(make_uint1(val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3223
} 
#endif
# 3225 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3226
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3228
exit(___);}
#if 0
# 3226
{ 
# 3227
__surf3Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3228
} 
#endif
# 3230 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3231
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3233
exit(___);}
#if 0
# 3231
{ 
# 3232
__surf3Dwriteu1(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3233
} 
#endif
# 3235 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3236
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3238
exit(___);}
#if 0
# 3236
{ 
# 3237
__surf3Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3238
} 
#endif
# 3240 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3241
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3243
exit(___);}
#if 0
# 3241
{ 
# 3242
__surf3Dwriteu2(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3243
} 
#endif
# 3245 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3246
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3248
exit(___);}
#if 0
# 3246
{ 
# 3247
__surf3Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3248
} 
#endif
# 3250 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3251
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3253
exit(___);}
#if 0
# 3251
{ 
# 3252
__surf3Dwriteu4(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3253
} 
#endif
# 3255 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(long long val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3256
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3258
exit(___);}
#if 0
# 3256
{ 
# 3257
__surf3Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3258
} 
#endif
# 3260 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned long long val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3261
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3263
exit(___);}
#if 0
# 3261
{ 
# 3262
__surf3Dwritel1(make_ulonglong1(val), surf, x, y, z, cudaBoundaryModeTrap); 
# 3263
} 
#endif
# 3265 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3266
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3268
exit(___);}
#if 0
# 3266
{ 
# 3267
__surf3Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3268
} 
#endif
# 3270 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3271
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3273
exit(___);}
#if 0
# 3271
{ 
# 3272
__surf3Dwritel1(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3273
} 
#endif
# 3275 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3276
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3278
exit(___);}
#if 0
# 3276
{ 
# 3277
__surf3Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3278
} 
#endif
# 3280 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3281
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3283
exit(___);}
#if 0
# 3281
{ 
# 3282
__surf3Dwritel2(val, surf, x, y, z, cudaBoundaryModeTrap); 
# 3283
} 
#endif
# 3329 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3330
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3332
exit(___);}
#if 0
# 3330
{ 
# 3331
__surf3Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3332
} 
#endif
# 3334 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float1 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3335
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3337
exit(___);}
#if 0
# 3335
{ 
# 3336
__surf3Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3337
} 
#endif
# 3339 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float2 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3340
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3342
exit(___);}
#if 0
# 3340
{ 
# 3341
__surf3Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, z, cudaBoundaryModeTrap); 
# 3342
} 
#endif
# 3344 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float4 val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3345
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3347
exit(___);}
#if 0
# 3345
{ 
# 3346
__surf3Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, z, cudaBoundaryModeTrap); 
# 3347
} 
#endif
# 3383 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3384
surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3385
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 3403
exit(___);}
#if 0
# 3385
{ 
# 3386
union { 
# 3387
T val; 
# 3388
uchar1 c1; 
# 3389
ushort1 s1; 
# 3390
uint1 u1; 
# 3391
uint2 u2; 
# 3392
uint4 u4; 
# 3393
} tmp; 
# 3395
(tmp.val) = val; 
# 3397
(s == 1) ? ((void)__surf1DLayeredwritec1(tmp.c1, surf, x, layer, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf1DLayeredwrites1(tmp.s1, surf, x, layer, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf1DLayeredwriteu1(tmp.u1, surf, x, layer, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf1DLayeredwriteu2(tmp.u2, surf, x, layer, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf1DLayeredwriteu4(tmp.u4, surf, x, layer, cudaBoundaryModeTrap)) : ((void)0))))); 
# 3403
} 
#endif
# 3405 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3406
surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3407
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3409
exit(___);}
#if 0
# 3407
{ ; 
# 3408
surf1DLayeredwrite(val, surf, x, layer, (int)sizeof(T), mode); 
# 3409
} 
#endif
# 3412 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3413
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3415
exit(___);}
#if 0
# 3413
{ 
# 3414
__surf1DLayeredwritec1(make_uchar1((unsigned char)val), surf, x, layer, cudaBoundaryModeTrap); 
# 3415
} 
#endif
# 3417 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(signed char val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3418
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3420
exit(___);}
#if 0
# 3418
{ 
# 3419
__surf1DLayeredwritec1(make_uchar1((unsigned char)val), surf, x, layer, cudaBoundaryModeTrap); 
# 3420
} 
#endif
# 3422 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned char val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3423
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3425
exit(___);}
#if 0
# 3423
{ 
# 3424
__surf1DLayeredwritec1(make_uchar1(val), surf, x, layer, cudaBoundaryModeTrap); 
# 3425
} 
#endif
# 3427 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3428
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3430
exit(___);}
#if 0
# 3428
{ 
# 3429
__surf1DLayeredwritec1(make_uchar1((unsigned char)(val.x)), surf, x, layer, cudaBoundaryModeTrap); 
# 3430
} 
#endif
# 3432 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3433
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3435
exit(___);}
#if 0
# 3433
{ 
# 3434
__surf1DLayeredwritec1(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3435
} 
#endif
# 3437 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3438
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3440
exit(___);}
#if 0
# 3438
{ 
# 3439
__surf1DLayeredwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, layer, cudaBoundaryModeTrap); 
# 3440
} 
#endif
# 3442 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3443
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3445
exit(___);}
#if 0
# 3443
{ 
# 3444
__surf1DLayeredwritec2(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3445
} 
#endif
# 3447 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3448
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3450
exit(___);}
#if 0
# 3448
{ 
# 3449
__surf1DLayeredwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, layer, cudaBoundaryModeTrap); 
# 3450
} 
#endif
# 3452 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3453
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3455
exit(___);}
#if 0
# 3453
{ 
# 3454
__surf1DLayeredwritec4(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3455
} 
#endif
# 3457 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3458
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3460
exit(___);}
#if 0
# 3458
{ 
# 3459
__surf1DLayeredwrites1(make_ushort1((unsigned short)val), surf, x, layer, cudaBoundaryModeTrap); 
# 3460
} 
#endif
# 3462 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned short val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3463
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3465
exit(___);}
#if 0
# 3463
{ 
# 3464
__surf1DLayeredwrites1(make_ushort1(val), surf, x, layer, cudaBoundaryModeTrap); 
# 3465
} 
#endif
# 3467 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3468
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3470
exit(___);}
#if 0
# 3468
{ 
# 3469
__surf1DLayeredwrites1(make_ushort1((unsigned short)(val.x)), surf, x, layer, cudaBoundaryModeTrap); 
# 3470
} 
#endif
# 3472 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3473
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3475
exit(___);}
#if 0
# 3473
{ 
# 3474
__surf1DLayeredwrites1(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3475
} 
#endif
# 3477 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3478
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3480
exit(___);}
#if 0
# 3478
{ 
# 3479
__surf1DLayeredwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, layer, cudaBoundaryModeTrap); 
# 3480
} 
#endif
# 3482 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3483
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3485
exit(___);}
#if 0
# 3483
{ 
# 3484
__surf1DLayeredwrites2(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3485
} 
#endif
# 3487 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3488
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3490
exit(___);}
#if 0
# 3488
{ 
# 3489
__surf1DLayeredwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, layer, cudaBoundaryModeTrap); 
# 3490
} 
#endif
# 3492 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3493
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3495
exit(___);}
#if 0
# 3493
{ 
# 3494
__surf1DLayeredwrites4(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3495
} 
#endif
# 3497 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3498
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3500
exit(___);}
#if 0
# 3498
{ 
# 3499
__surf1DLayeredwriteu1(make_uint1((unsigned)val), surf, x, layer, cudaBoundaryModeTrap); 
# 3500
} 
#endif
# 3502 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3503
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3505
exit(___);}
#if 0
# 3503
{ 
# 3504
__surf1DLayeredwriteu1(make_uint1(val), surf, x, layer, cudaBoundaryModeTrap); 
# 3505
} 
#endif
# 3507 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3508
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3510
exit(___);}
#if 0
# 3508
{ 
# 3509
__surf1DLayeredwriteu1(make_uint1((unsigned)(val.x)), surf, x, layer, cudaBoundaryModeTrap); 
# 3510
} 
#endif
# 3512 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3513
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3515
exit(___);}
#if 0
# 3513
{ 
# 3514
__surf1DLayeredwriteu1(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3515
} 
#endif
# 3517 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3518
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3520
exit(___);}
#if 0
# 3518
{ 
# 3519
__surf1DLayeredwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, layer, cudaBoundaryModeTrap); 
# 3520
} 
#endif
# 3522 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3523
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3525
exit(___);}
#if 0
# 3523
{ 
# 3524
__surf1DLayeredwriteu2(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3525
} 
#endif
# 3527 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3528
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3530
exit(___);}
#if 0
# 3528
{ 
# 3529
__surf1DLayeredwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, layer, cudaBoundaryModeTrap); 
# 3530
} 
#endif
# 3532 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3533
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3535
exit(___);}
#if 0
# 3533
{ 
# 3534
__surf1DLayeredwriteu4(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3535
} 
#endif
# 3537 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(long long val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3538
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3540
exit(___);}
#if 0
# 3538
{ 
# 3539
__surf1DLayeredwritel1(make_ulonglong1((unsigned long long)val), surf, x, layer, cudaBoundaryModeTrap); 
# 3540
} 
#endif
# 3542 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned long long val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3543
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3545
exit(___);}
#if 0
# 3543
{ 
# 3544
__surf1DLayeredwritel1(make_ulonglong1(val), surf, x, layer, cudaBoundaryModeTrap); 
# 3545
} 
#endif
# 3547 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3548
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3550
exit(___);}
#if 0
# 3548
{ 
# 3549
__surf1DLayeredwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, layer, cudaBoundaryModeTrap); 
# 3550
} 
#endif
# 3552 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3553
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3555
exit(___);}
#if 0
# 3553
{ 
# 3554
__surf1DLayeredwritel1(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3555
} 
#endif
# 3557 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3558
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3560
exit(___);}
#if 0
# 3558
{ 
# 3559
__surf1DLayeredwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, layer, cudaBoundaryModeTrap); 
# 3560
} 
#endif
# 3562 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3563
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3565
exit(___);}
#if 0
# 3563
{ 
# 3564
__surf1DLayeredwritel2(val, surf, x, layer, cudaBoundaryModeTrap); 
# 3565
} 
#endif
# 3611 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3612
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3614
exit(___);}
#if 0
# 3612
{ 
# 3613
__surf1DLayeredwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, layer, cudaBoundaryModeTrap); 
# 3614
} 
#endif
# 3616 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float1 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3617
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3619
exit(___);}
#if 0
# 3617
{ 
# 3618
__surf1DLayeredwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, layer, cudaBoundaryModeTrap); 
# 3619
} 
#endif
# 3621 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float2 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3622
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3624
exit(___);}
#if 0
# 3622
{ 
# 3623
__surf1DLayeredwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, layer, cudaBoundaryModeTrap); 
# 3624
} 
#endif
# 3626 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float4 val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3627
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3629
exit(___);}
#if 0
# 3627
{ 
# 3628
__surf1DLayeredwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, layer, cudaBoundaryModeTrap); 
# 3629
} 
#endif
# 3665 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3666
surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3667
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 3685
exit(___);}
#if 0
# 3667
{ 
# 3668
union { 
# 3669
T val; 
# 3670
uchar1 c1; 
# 3671
ushort1 s1; 
# 3672
uint1 u1; 
# 3673
uint2 u2; 
# 3674
uint4 u4; 
# 3675
} tmp; 
# 3677
(tmp.val) = val; 
# 3679
(s == 1) ? ((void)__surf2DLayeredwritec1(tmp.c1, surf, x, y, layer, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf2DLayeredwrites1(tmp.s1, surf, x, y, layer, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf2DLayeredwriteu1(tmp.u1, surf, x, y, layer, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf2DLayeredwriteu2(tmp.u2, surf, x, y, layer, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf2DLayeredwriteu4(tmp.u4, surf, x, y, layer, cudaBoundaryModeTrap)) : ((void)0))))); 
# 3685
} 
#endif
# 3687 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3688
surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3689
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3691
exit(___);}
#if 0
# 3689
{ ; 
# 3690
surf2DLayeredwrite(val, surf, x, y, layer, (int)sizeof(T), mode); 
# 3691
} 
#endif
# 3694 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3695
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3697
exit(___);}
#if 0
# 3695
{ 
# 3696
__surf2DLayeredwritec1(make_uchar1((unsigned char)val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3697
} 
#endif
# 3699 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(signed char val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3700
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3702
exit(___);}
#if 0
# 3700
{ 
# 3701
__surf2DLayeredwritec1(make_uchar1((unsigned char)val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3702
} 
#endif
# 3704 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned char val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3705
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3707
exit(___);}
#if 0
# 3705
{ 
# 3706
__surf2DLayeredwritec1(make_uchar1(val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3707
} 
#endif
# 3709 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3710
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3712
exit(___);}
#if 0
# 3710
{ 
# 3711
__surf2DLayeredwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3712
} 
#endif
# 3714 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3715
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3717
exit(___);}
#if 0
# 3715
{ 
# 3716
__surf2DLayeredwritec1(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3717
} 
#endif
# 3719 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3720
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3722
exit(___);}
#if 0
# 3720
{ 
# 3721
__surf2DLayeredwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3722
} 
#endif
# 3724 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3725
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3727
exit(___);}
#if 0
# 3725
{ 
# 3726
__surf2DLayeredwritec2(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3727
} 
#endif
# 3729 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3730
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3732
exit(___);}
#if 0
# 3730
{ 
# 3731
__surf2DLayeredwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3732
} 
#endif
# 3734 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3735
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3737
exit(___);}
#if 0
# 3735
{ 
# 3736
__surf2DLayeredwritec4(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3737
} 
#endif
# 3739 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3740
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3742
exit(___);}
#if 0
# 3740
{ 
# 3741
__surf2DLayeredwrites1(make_ushort1((unsigned short)val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3742
} 
#endif
# 3744 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned short val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3745
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3747
exit(___);}
#if 0
# 3745
{ 
# 3746
__surf2DLayeredwrites1(make_ushort1(val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3747
} 
#endif
# 3749 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3750
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3752
exit(___);}
#if 0
# 3750
{ 
# 3751
__surf2DLayeredwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3752
} 
#endif
# 3754 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3755
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3757
exit(___);}
#if 0
# 3755
{ 
# 3756
__surf2DLayeredwrites1(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3757
} 
#endif
# 3759 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3760
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3762
exit(___);}
#if 0
# 3760
{ 
# 3761
__surf2DLayeredwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3762
} 
#endif
# 3764 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3765
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3767
exit(___);}
#if 0
# 3765
{ 
# 3766
__surf2DLayeredwrites2(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3767
} 
#endif
# 3769 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3770
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3772
exit(___);}
#if 0
# 3770
{ 
# 3771
__surf2DLayeredwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3772
} 
#endif
# 3774 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3775
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3777
exit(___);}
#if 0
# 3775
{ 
# 3776
__surf2DLayeredwrites4(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3777
} 
#endif
# 3779 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3780
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3782
exit(___);}
#if 0
# 3780
{ 
# 3781
__surf2DLayeredwriteu1(make_uint1((unsigned)val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3782
} 
#endif
# 3784 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3785
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3787
exit(___);}
#if 0
# 3785
{ 
# 3786
__surf2DLayeredwriteu1(make_uint1(val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3787
} 
#endif
# 3789 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3790
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3792
exit(___);}
#if 0
# 3790
{ 
# 3791
__surf2DLayeredwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3792
} 
#endif
# 3794 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3795
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3797
exit(___);}
#if 0
# 3795
{ 
# 3796
__surf2DLayeredwriteu1(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3797
} 
#endif
# 3799 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3800
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3802
exit(___);}
#if 0
# 3800
{ 
# 3801
__surf2DLayeredwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3802
} 
#endif
# 3804 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3805
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3807
exit(___);}
#if 0
# 3805
{ 
# 3806
__surf2DLayeredwriteu2(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3807
} 
#endif
# 3809 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3810
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3812
exit(___);}
#if 0
# 3810
{ 
# 3811
__surf2DLayeredwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3812
} 
#endif
# 3814 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3815
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3817
exit(___);}
#if 0
# 3815
{ 
# 3816
__surf2DLayeredwriteu4(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3817
} 
#endif
# 3819 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(long long val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3820
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3822
exit(___);}
#if 0
# 3820
{ 
# 3821
__surf2DLayeredwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3822
} 
#endif
# 3824 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned long long val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3825
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3827
exit(___);}
#if 0
# 3825
{ 
# 3826
__surf2DLayeredwritel1(make_ulonglong1(val), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3827
} 
#endif
# 3829 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3830
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3832
exit(___);}
#if 0
# 3830
{ 
# 3831
__surf2DLayeredwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3832
} 
#endif
# 3834 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3835
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3837
exit(___);}
#if 0
# 3835
{ 
# 3836
__surf2DLayeredwritel1(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3837
} 
#endif
# 3839 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3840
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3842
exit(___);}
#if 0
# 3840
{ 
# 3841
__surf2DLayeredwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3842
} 
#endif
# 3844 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3845
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3847
exit(___);}
#if 0
# 3845
{ 
# 3846
__surf2DLayeredwritel2(val, surf, x, y, layer, cudaBoundaryModeTrap); 
# 3847
} 
#endif
# 3893 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3894
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3896
exit(___);}
#if 0
# 3894
{ 
# 3895
__surf2DLayeredwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3896
} 
#endif
# 3898 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float1 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3899
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3901
exit(___);}
#if 0
# 3899
{ 
# 3900
__surf2DLayeredwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3901
} 
#endif
# 3903 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float2 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3904
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3906
exit(___);}
#if 0
# 3904
{ 
# 3905
__surf2DLayeredwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3906
} 
#endif
# 3908 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float4 val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3909
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3911
exit(___);}
#if 0
# 3909
{ 
# 3910
__surf2DLayeredwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, layer, cudaBoundaryModeTrap); 
# 3911
} 
#endif
# 3947 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3948
surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3949
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 3967
exit(___);}
#if 0
# 3949
{ 
# 3950
union { 
# 3951
T val; 
# 3952
uchar1 c1; 
# 3953
ushort1 s1; 
# 3954
uint1 u1; 
# 3955
uint2 u2; 
# 3956
uint4 u4; 
# 3957
} tmp; 
# 3959
(tmp.val) = val; 
# 3961
(s == 1) ? ((void)__surfCubemapwritec1(tmp.c1, surf, x, y, face, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surfCubemapwrites1(tmp.s1, surf, x, y, face, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surfCubemapwriteu1(tmp.u1, surf, x, y, face, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surfCubemapwriteu2(tmp.u2, surf, x, y, face, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surfCubemapwriteu4(tmp.u4, surf, x, y, face, cudaBoundaryModeTrap)) : ((void)0))))); 
# 3967
} 
#endif
# 3969 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 3970
surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3971
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3973
exit(___);}
#if 0
# 3971
{ ; 
# 3972
surfCubemapwrite(val, surf, x, y, face, (int)sizeof(T), mode); 
# 3973
} 
#endif
# 3976 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3977
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3979
exit(___);}
#if 0
# 3977
{ 
# 3978
__surfCubemapwritec1(make_uchar1((unsigned char)val), surf, x, y, face, cudaBoundaryModeTrap); 
# 3979
} 
#endif
# 3981 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(signed char val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3982
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3984
exit(___);}
#if 0
# 3982
{ 
# 3983
__surfCubemapwritec1(make_uchar1((unsigned char)val), surf, x, y, face, cudaBoundaryModeTrap); 
# 3984
} 
#endif
# 3986 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned char val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3987
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3989
exit(___);}
#if 0
# 3987
{ 
# 3988
__surfCubemapwritec1(make_uchar1(val), surf, x, y, face, cudaBoundaryModeTrap); 
# 3989
} 
#endif
# 3991 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3992
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3994
exit(___);}
#if 0
# 3992
{ 
# 3993
__surfCubemapwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, face, cudaBoundaryModeTrap); 
# 3994
} 
#endif
# 3996 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 3997
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3999
exit(___);}
#if 0
# 3997
{ 
# 3998
__surfCubemapwritec1(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 3999
} 
#endif
# 4001 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4002
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4004
exit(___);}
#if 0
# 4002
{ 
# 4003
__surfCubemapwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4004
} 
#endif
# 4006 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4007
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4009
exit(___);}
#if 0
# 4007
{ 
# 4008
__surfCubemapwritec2(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4009
} 
#endif
# 4011 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4012
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4014
exit(___);}
#if 0
# 4012
{ 
# 4013
__surfCubemapwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4014
} 
#endif
# 4016 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4017
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4019
exit(___);}
#if 0
# 4017
{ 
# 4018
__surfCubemapwritec4(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4019
} 
#endif
# 4021 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4022
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4024
exit(___);}
#if 0
# 4022
{ 
# 4023
__surfCubemapwrites1(make_ushort1((unsigned short)val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4024
} 
#endif
# 4026 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned short val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4027
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4029
exit(___);}
#if 0
# 4027
{ 
# 4028
__surfCubemapwrites1(make_ushort1(val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4029
} 
#endif
# 4031 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4032
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4034
exit(___);}
#if 0
# 4032
{ 
# 4033
__surfCubemapwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4034
} 
#endif
# 4036 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4037
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4039
exit(___);}
#if 0
# 4037
{ 
# 4038
__surfCubemapwrites1(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4039
} 
#endif
# 4041 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4042
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4044
exit(___);}
#if 0
# 4042
{ 
# 4043
__surfCubemapwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4044
} 
#endif
# 4046 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4047
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4049
exit(___);}
#if 0
# 4047
{ 
# 4048
__surfCubemapwrites2(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4049
} 
#endif
# 4051 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4052
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4054
exit(___);}
#if 0
# 4052
{ 
# 4053
__surfCubemapwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4054
} 
#endif
# 4056 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4057
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4059
exit(___);}
#if 0
# 4057
{ 
# 4058
__surfCubemapwrites4(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4059
} 
#endif
# 4061 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4062
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4064
exit(___);}
#if 0
# 4062
{ 
# 4063
__surfCubemapwriteu1(make_uint1((unsigned)val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4064
} 
#endif
# 4066 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4067
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4069
exit(___);}
#if 0
# 4067
{ 
# 4068
__surfCubemapwriteu1(make_uint1(val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4069
} 
#endif
# 4071 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4072
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4074
exit(___);}
#if 0
# 4072
{ 
# 4073
__surfCubemapwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4074
} 
#endif
# 4076 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4077
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4079
exit(___);}
#if 0
# 4077
{ 
# 4078
__surfCubemapwriteu1(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4079
} 
#endif
# 4081 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4082
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4084
exit(___);}
#if 0
# 4082
{ 
# 4083
__surfCubemapwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4084
} 
#endif
# 4086 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4087
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4089
exit(___);}
#if 0
# 4087
{ 
# 4088
__surfCubemapwriteu2(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4089
} 
#endif
# 4091 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4092
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4094
exit(___);}
#if 0
# 4092
{ 
# 4093
__surfCubemapwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4094
} 
#endif
# 4096 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4097
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4099
exit(___);}
#if 0
# 4097
{ 
# 4098
__surfCubemapwriteu4(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4099
} 
#endif
# 4101 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(long long val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4102
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4104
exit(___);}
#if 0
# 4102
{ 
# 4103
__surfCubemapwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4104
} 
#endif
# 4106 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned long long val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4107
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4109
exit(___);}
#if 0
# 4107
{ 
# 4108
__surfCubemapwritel1(make_ulonglong1(val), surf, x, y, face, cudaBoundaryModeTrap); 
# 4109
} 
#endif
# 4111 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4112
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4114
exit(___);}
#if 0
# 4112
{ 
# 4113
__surfCubemapwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4114
} 
#endif
# 4116 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4117
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4119
exit(___);}
#if 0
# 4117
{ 
# 4118
__surfCubemapwritel1(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4119
} 
#endif
# 4121 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4122
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4124
exit(___);}
#if 0
# 4122
{ 
# 4123
__surfCubemapwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4124
} 
#endif
# 4126 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4127
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4129
exit(___);}
#if 0
# 4127
{ 
# 4128
__surfCubemapwritel2(val, surf, x, y, face, cudaBoundaryModeTrap); 
# 4129
} 
#endif
# 4175 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4176
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4178
exit(___);}
#if 0
# 4176
{ 
# 4177
__surfCubemapwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4178
} 
#endif
# 4180 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float1 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4181
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4183
exit(___);}
#if 0
# 4181
{ 
# 4182
__surfCubemapwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4183
} 
#endif
# 4185 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float2 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4186
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4188
exit(___);}
#if 0
# 4186
{ 
# 4187
__surfCubemapwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, face, cudaBoundaryModeTrap); 
# 4188
} 
#endif
# 4190 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float4 val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4191
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4193
exit(___);}
#if 0
# 4191
{ 
# 4192
__surfCubemapwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, face, cudaBoundaryModeTrap); 
# 4193
} 
#endif
# 4229 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 4230
surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4231
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 4249
exit(___);}
#if 0
# 4231
{ 
# 4232
union { 
# 4233
T val; 
# 4234
uchar1 c1; 
# 4235
ushort1 s1; 
# 4236
uint1 u1; 
# 4237
uint2 u2; 
# 4238
uint4 u4; 
# 4239
} tmp; 
# 4241
(tmp.val) = val; 
# 4243
(s == 1) ? ((void)__surfCubemapLayeredwritec1(tmp.c1, surf, x, y, layerFace, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surfCubemapLayeredwrites1(tmp.s1, surf, x, y, layerFace, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surfCubemapLayeredwriteu1(tmp.u1, surf, x, y, layerFace, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surfCubemapLayeredwriteu2(tmp.u2, surf, x, y, layerFace, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surfCubemapLayeredwriteu4(tmp.u4, surf, x, y, layerFace, cudaBoundaryModeTrap)) : ((void)0))))); 
# 4249
} 
#endif
# 4251 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 4252
surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4253
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4255
exit(___);}
#if 0
# 4253
{ ; 
# 4254
surfCubemapLayeredwrite(val, surf, x, y, layerFace, (int)sizeof(T), mode); 
# 4255
} 
#endif
# 4258 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4259
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4261
exit(___);}
#if 0
# 4259
{ 
# 4260
__surfCubemapLayeredwritec1(make_uchar1((unsigned char)val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4261
} 
#endif
# 4263 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(signed char val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4264
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4266
exit(___);}
#if 0
# 4264
{ 
# 4265
__surfCubemapLayeredwritec1(make_uchar1((unsigned char)val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4266
} 
#endif
# 4268 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned char val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4269
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4271
exit(___);}
#if 0
# 4269
{ 
# 4270
__surfCubemapLayeredwritec1(make_uchar1(val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4271
} 
#endif
# 4273 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4274
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4276
exit(___);}
#if 0
# 4274
{ 
# 4275
__surfCubemapLayeredwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4276
} 
#endif
# 4278 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4279
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4281
exit(___);}
#if 0
# 4279
{ 
# 4280
__surfCubemapLayeredwritec1(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4281
} 
#endif
# 4283 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4284
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4286
exit(___);}
#if 0
# 4284
{ 
# 4285
__surfCubemapLayeredwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4286
} 
#endif
# 4288 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4289
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4291
exit(___);}
#if 0
# 4289
{ 
# 4290
__surfCubemapLayeredwritec2(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4291
} 
#endif
# 4293 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4294
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4296
exit(___);}
#if 0
# 4294
{ 
# 4295
__surfCubemapLayeredwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4296
} 
#endif
# 4298 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4299
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4301
exit(___);}
#if 0
# 4299
{ 
# 4300
__surfCubemapLayeredwritec4(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4301
} 
#endif
# 4303 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4304
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4306
exit(___);}
#if 0
# 4304
{ 
# 4305
__surfCubemapLayeredwrites1(make_ushort1((unsigned short)val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4306
} 
#endif
# 4308 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned short val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4309
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4311
exit(___);}
#if 0
# 4309
{ 
# 4310
__surfCubemapLayeredwrites1(make_ushort1(val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4311
} 
#endif
# 4313 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4314
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4316
exit(___);}
#if 0
# 4314
{ 
# 4315
__surfCubemapLayeredwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4316
} 
#endif
# 4318 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4319
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4321
exit(___);}
#if 0
# 4319
{ 
# 4320
__surfCubemapLayeredwrites1(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4321
} 
#endif
# 4323 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4324
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4326
exit(___);}
#if 0
# 4324
{ 
# 4325
__surfCubemapLayeredwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4326
} 
#endif
# 4328 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4329
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4331
exit(___);}
#if 0
# 4329
{ 
# 4330
__surfCubemapLayeredwrites2(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4331
} 
#endif
# 4333 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4334
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4336
exit(___);}
#if 0
# 4334
{ 
# 4335
__surfCubemapLayeredwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4336
} 
#endif
# 4338 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4339
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4341
exit(___);}
#if 0
# 4339
{ 
# 4340
__surfCubemapLayeredwrites4(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4341
} 
#endif
# 4343 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4344
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4346
exit(___);}
#if 0
# 4344
{ 
# 4345
__surfCubemapLayeredwriteu1(make_uint1((unsigned)val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4346
} 
#endif
# 4348 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4349
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4351
exit(___);}
#if 0
# 4349
{ 
# 4350
__surfCubemapLayeredwriteu1(make_uint1(val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4351
} 
#endif
# 4353 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4354
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4356
exit(___);}
#if 0
# 4354
{ 
# 4355
__surfCubemapLayeredwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4356
} 
#endif
# 4358 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4359
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4361
exit(___);}
#if 0
# 4359
{ 
# 4360
__surfCubemapLayeredwriteu1(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4361
} 
#endif
# 4363 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4364
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4366
exit(___);}
#if 0
# 4364
{ 
# 4365
__surfCubemapLayeredwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4366
} 
#endif
# 4368 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4369
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4371
exit(___);}
#if 0
# 4369
{ 
# 4370
__surfCubemapLayeredwriteu2(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4371
} 
#endif
# 4373 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4374
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4376
exit(___);}
#if 0
# 4374
{ 
# 4375
__surfCubemapLayeredwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4376
} 
#endif
# 4378 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4379
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4381
exit(___);}
#if 0
# 4379
{ 
# 4380
__surfCubemapLayeredwriteu4(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4381
} 
#endif
# 4383 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(long long val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4384
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4386
exit(___);}
#if 0
# 4384
{ 
# 4385
__surfCubemapLayeredwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4386
} 
#endif
# 4388 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned long long val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4389
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4391
exit(___);}
#if 0
# 4389
{ 
# 4390
__surfCubemapLayeredwritel1(make_ulonglong1(val), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4391
} 
#endif
# 4393 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4394
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4396
exit(___);}
#if 0
# 4394
{ 
# 4395
__surfCubemapLayeredwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4396
} 
#endif
# 4398 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4399
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4401
exit(___);}
#if 0
# 4399
{ 
# 4400
__surfCubemapLayeredwritel1(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4401
} 
#endif
# 4403 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4404
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4406
exit(___);}
#if 0
# 4404
{ 
# 4405
__surfCubemapLayeredwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4406
} 
#endif
# 4408 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4409
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4411
exit(___);}
#if 0
# 4409
{ 
# 4410
__surfCubemapLayeredwritel2(val, surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4411
} 
#endif
# 4457 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4458
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4460
exit(___);}
#if 0
# 4458
{ 
# 4459
__surfCubemapLayeredwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4460
} 
#endif
# 4462 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float1 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4463
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4465
exit(___);}
#if 0
# 4463
{ 
# 4464
__surfCubemapLayeredwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4465
} 
#endif
# 4467 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float2 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4468
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4470
exit(___);}
#if 0
# 4468
{ 
# 4469
__surfCubemapLayeredwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4470
} 
#endif
# 4472 "/home/bachelor/deicide218/cuda-4.2/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float4 val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 4473
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4475
exit(___);}
#if 0
# 4473
{ 
# 4474
__surfCubemapLayeredwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, layerFace, cudaBoundaryModeTrap); 
# 4475
} 
#endif
# 96 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType>  t, int x) 
# 97
{int volatile ___ = 1;(void)t;(void)x;
# 105
exit(___);}
#if 0
# 97
{ 
# 101
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 104
return (char)(v.x); 
# 105
} 
#endif
# 107 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType>  t, int x) 
# 108
{int volatile ___ = 1;(void)t;(void)x;
# 112
exit(___);}
#if 0
# 108
{ 
# 109
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 111
return (signed char)(v.x); 
# 112
} 
#endif
# 114 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType>  t, int x) 
# 115
{int volatile ___ = 1;(void)t;(void)x;
# 119
exit(___);}
#if 0
# 115
{ 
# 116
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 118
return (unsigned char)(v.x); 
# 119
} 
#endif
# 121 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType>  t, int x) 
# 122
{int volatile ___ = 1;(void)t;(void)x;
# 126
exit(___);}
#if 0
# 122
{ 
# 123
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 125
return make_char1(v.x); 
# 126
} 
#endif
# 128 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType>  t, int x) 
# 129
{int volatile ___ = 1;(void)t;(void)x;
# 133
exit(___);}
#if 0
# 129
{ 
# 130
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 132
return make_uchar1(v.x); 
# 133
} 
#endif
# 135 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType>  t, int x) 
# 136
{int volatile ___ = 1;(void)t;(void)x;
# 140
exit(___);}
#if 0
# 136
{ 
# 137
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 139
return make_char2(v.x, v.y); 
# 140
} 
#endif
# 142 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType>  t, int x) 
# 143
{int volatile ___ = 1;(void)t;(void)x;
# 147
exit(___);}
#if 0
# 143
{ 
# 144
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 146
return make_uchar2(v.x, v.y); 
# 147
} 
#endif
# 149 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType>  t, int x) 
# 150
{int volatile ___ = 1;(void)t;(void)x;
# 154
exit(___);}
#if 0
# 150
{ 
# 151
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 153
return make_char4(v.x, v.y, v.z, v.w); 
# 154
} 
#endif
# 156 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType>  t, int x) 
# 157
{int volatile ___ = 1;(void)t;(void)x;
# 161
exit(___);}
#if 0
# 157
{ 
# 158
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 160
return make_uchar4(v.x, v.y, v.z, v.w); 
# 161
} 
#endif
# 169 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType>  t, int x) 
# 170
{int volatile ___ = 1;(void)t;(void)x;
# 174
exit(___);}
#if 0
# 170
{ 
# 171
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 173
return (short)(v.x); 
# 174
} 
#endif
# 176 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType>  t, int x) 
# 177
{int volatile ___ = 1;(void)t;(void)x;
# 181
exit(___);}
#if 0
# 177
{ 
# 178
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 180
return (unsigned short)(v.x); 
# 181
} 
#endif
# 183 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType>  t, int x) 
# 184
{int volatile ___ = 1;(void)t;(void)x;
# 188
exit(___);}
#if 0
# 184
{ 
# 185
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 187
return make_short1(v.x); 
# 188
} 
#endif
# 190 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType>  t, int x) 
# 191
{int volatile ___ = 1;(void)t;(void)x;
# 195
exit(___);}
#if 0
# 191
{ 
# 192
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 194
return make_ushort1(v.x); 
# 195
} 
#endif
# 197 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType>  t, int x) 
# 198
{int volatile ___ = 1;(void)t;(void)x;
# 202
exit(___);}
#if 0
# 198
{ 
# 199
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 201
return make_short2(v.x, v.y); 
# 202
} 
#endif
# 204 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType>  t, int x) 
# 205
{int volatile ___ = 1;(void)t;(void)x;
# 209
exit(___);}
#if 0
# 205
{ 
# 206
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 208
return make_ushort2(v.x, v.y); 
# 209
} 
#endif
# 211 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType>  t, int x) 
# 212
{int volatile ___ = 1;(void)t;(void)x;
# 216
exit(___);}
#if 0
# 212
{ 
# 213
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 215
return make_short4(v.x, v.y, v.z, v.w); 
# 216
} 
#endif
# 218 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType>  t, int x) 
# 219
{int volatile ___ = 1;(void)t;(void)x;
# 223
exit(___);}
#if 0
# 219
{ 
# 220
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 222
return make_ushort4(v.x, v.y, v.z, v.w); 
# 223
} 
#endif
# 231 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType>  t, int x) 
# 232
{int volatile ___ = 1;(void)t;(void)x;
# 236
exit(___);}
#if 0
# 232
{ 
# 233
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 235
return (int)(v.x); 
# 236
} 
#endif
# 238 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType>  t, int x) 
# 239
{int volatile ___ = 1;(void)t;(void)x;
# 243
exit(___);}
#if 0
# 239
{ 
# 240
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 242
return (unsigned)(v.x); 
# 243
} 
#endif
# 245 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType>  t, int x) 
# 246
{int volatile ___ = 1;(void)t;(void)x;
# 250
exit(___);}
#if 0
# 246
{ 
# 247
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 249
return make_int1(v.x); 
# 250
} 
#endif
# 252 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType>  t, int x) 
# 253
{int volatile ___ = 1;(void)t;(void)x;
# 257
exit(___);}
#if 0
# 253
{ 
# 254
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 256
return make_uint1(v.x); 
# 257
} 
#endif
# 259 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType>  t, int x) 
# 260
{int volatile ___ = 1;(void)t;(void)x;
# 264
exit(___);}
#if 0
# 260
{ 
# 261
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 263
return make_int2(v.x, v.y); 
# 264
} 
#endif
# 266 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType>  t, int x) 
# 267
{int volatile ___ = 1;(void)t;(void)x;
# 271
exit(___);}
#if 0
# 267
{ 
# 268
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 270
return make_uint2(v.x, v.y); 
# 271
} 
#endif
# 273 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType>  t, int x) 
# 274
{int volatile ___ = 1;(void)t;(void)x;
# 278
exit(___);}
#if 0
# 274
{ 
# 275
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 277
return make_int4(v.x, v.y, v.z, v.w); 
# 278
} 
#endif
# 280 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType>  t, int x) 
# 281
{int volatile ___ = 1;(void)t;(void)x;
# 285
exit(___);}
#if 0
# 281
{ 
# 282
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 284
return make_uint4(v.x, v.y, v.z, v.w); 
# 285
} 
#endif
# 359 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType>  t, int x) 
# 360
{int volatile ___ = 1;(void)t;(void)x;
# 364
exit(___);}
#if 0
# 360
{ 
# 361
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 363
return v.x; 
# 364
} 
#endif
# 366 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType>  t, int x) 
# 367
{int volatile ___ = 1;(void)t;(void)x;
# 371
exit(___);}
#if 0
# 367
{ 
# 368
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 370
return make_float1(v.x); 
# 371
} 
#endif
# 373 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType>  t, int x) 
# 374
{int volatile ___ = 1;(void)t;(void)x;
# 378
exit(___);}
#if 0
# 374
{ 
# 375
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 377
return make_float2(v.x, v.y); 
# 378
} 
#endif
# 380 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType>  t, int x) 
# 381
{int volatile ___ = 1;(void)t;(void)x;
# 385
exit(___);}
#if 0
# 381
{ 
# 382
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 384
return make_float4(v.x, v.y, v.z, v.w); 
# 385
} 
#endif
# 393 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 394
{int volatile ___ = 1;(void)t;(void)x;
# 403
exit(___);}
#if 0
# 394
{ 
# 398
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 400
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 402
return w.x; 
# 403
} 
#endif
# 405 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 406
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 411
} 
#endif
# 413 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 414
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 419
} 
#endif
# 421 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 422
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 427
} 
#endif
# 429 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 430
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 435
} 
#endif
# 437 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 438
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 443
} 
#endif
# 445 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 446
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 451
} 
#endif
# 453 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 454
{int volatile ___ = 1;(void)t;(void)x;
# 459
exit(___);}
#if 0
# 454
{ 
# 455
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 456
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 458
return make_float4(w.x, w.y, w.z, w.w); 
# 459
} 
#endif
# 461 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 462
{int volatile ___ = 1;(void)t;(void)x;
# 467
exit(___);}
#if 0
# 462
{ 
# 463
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 464
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 466
return make_float4(w.x, w.y, w.z, w.w); 
# 467
} 
#endif
# 475 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 476
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 481
} 
#endif
# 483 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 484
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 489
} 
#endif
# 491 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 492
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 497
} 
#endif
# 499 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 500
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 505
} 
#endif
# 507 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 508
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 513
} 
#endif
# 515 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 516
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 521
} 
#endif
# 523 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 524
{int volatile ___ = 1;(void)t;(void)x;
# 529
exit(___);}
#if 0
# 524
{ 
# 525
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 526
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 528
return make_float4(w.x, w.y, w.z, w.w); 
# 529
} 
#endif
# 531 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 532
{int volatile ___ = 1;(void)t;(void)x;
# 537
exit(___);}
#if 0
# 532
{ 
# 533
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 534
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 536
return make_float4(w.x, w.y, w.z, w.w); 
# 537
} 
#endif
# 545 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType>  t, float x) 
# 546
{int volatile ___ = 1;(void)t;(void)x;
# 554
exit(___);}
#if 0
# 546
{ 
# 550
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 553
return (char)(v.x); 
# 554
} 
#endif
# 556 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType>  t, float x) 
# 557
{int volatile ___ = 1;(void)t;(void)x;
# 561
exit(___);}
#if 0
# 557
{ 
# 558
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 560
return (signed char)(v.x); 
# 561
} 
#endif
# 563 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType>  t, float x) 
# 564
{int volatile ___ = 1;(void)t;(void)x;
# 568
exit(___);}
#if 0
# 564
{ 
# 565
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 567
return (unsigned char)(v.x); 
# 568
} 
#endif
# 570 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType>  t, float x) 
# 571
{int volatile ___ = 1;(void)t;(void)x;
# 575
exit(___);}
#if 0
# 571
{ 
# 572
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 574
return make_char1(v.x); 
# 575
} 
#endif
# 577 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType>  t, float x) 
# 578
{int volatile ___ = 1;(void)t;(void)x;
# 582
exit(___);}
#if 0
# 578
{ 
# 579
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 581
return make_uchar1(v.x); 
# 582
} 
#endif
# 584 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType>  t, float x) 
# 585
{int volatile ___ = 1;(void)t;(void)x;
# 589
exit(___);}
#if 0
# 585
{ 
# 586
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 588
return make_char2(v.x, v.y); 
# 589
} 
#endif
# 591 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType>  t, float x) 
# 592
{int volatile ___ = 1;(void)t;(void)x;
# 596
exit(___);}
#if 0
# 592
{ 
# 593
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 595
return make_uchar2(v.x, v.y); 
# 596
} 
#endif
# 598 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType>  t, float x) 
# 599
{int volatile ___ = 1;(void)t;(void)x;
# 603
exit(___);}
#if 0
# 599
{ 
# 600
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 602
return make_char4(v.x, v.y, v.z, v.w); 
# 603
} 
#endif
# 605 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType>  t, float x) 
# 606
{int volatile ___ = 1;(void)t;(void)x;
# 610
exit(___);}
#if 0
# 606
{ 
# 607
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 609
return make_uchar4(v.x, v.y, v.z, v.w); 
# 610
} 
#endif
# 618 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType>  t, float x) 
# 619
{int volatile ___ = 1;(void)t;(void)x;
# 623
exit(___);}
#if 0
# 619
{ 
# 620
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 622
return (short)(v.x); 
# 623
} 
#endif
# 625 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType>  t, float x) 
# 626
{int volatile ___ = 1;(void)t;(void)x;
# 630
exit(___);}
#if 0
# 626
{ 
# 627
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 629
return (unsigned short)(v.x); 
# 630
} 
#endif
# 632 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType>  t, float x) 
# 633
{int volatile ___ = 1;(void)t;(void)x;
# 637
exit(___);}
#if 0
# 633
{ 
# 634
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 636
return make_short1(v.x); 
# 637
} 
#endif
# 639 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType>  t, float x) 
# 640
{int volatile ___ = 1;(void)t;(void)x;
# 644
exit(___);}
#if 0
# 640
{ 
# 641
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 643
return make_ushort1(v.x); 
# 644
} 
#endif
# 646 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType>  t, float x) 
# 647
{int volatile ___ = 1;(void)t;(void)x;
# 651
exit(___);}
#if 0
# 647
{ 
# 648
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 650
return make_short2(v.x, v.y); 
# 651
} 
#endif
# 653 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType>  t, float x) 
# 654
{int volatile ___ = 1;(void)t;(void)x;
# 658
exit(___);}
#if 0
# 654
{ 
# 655
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 657
return make_ushort2(v.x, v.y); 
# 658
} 
#endif
# 660 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType>  t, float x) 
# 661
{int volatile ___ = 1;(void)t;(void)x;
# 665
exit(___);}
#if 0
# 661
{ 
# 662
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 664
return make_short4(v.x, v.y, v.z, v.w); 
# 665
} 
#endif
# 667 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType>  t, float x) 
# 668
{int volatile ___ = 1;(void)t;(void)x;
# 672
exit(___);}
#if 0
# 668
{ 
# 669
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 671
return make_ushort4(v.x, v.y, v.z, v.w); 
# 672
} 
#endif
# 680 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType>  t, float x) 
# 681
{int volatile ___ = 1;(void)t;(void)x;
# 685
exit(___);}
#if 0
# 681
{ 
# 682
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 684
return (int)(v.x); 
# 685
} 
#endif
# 687 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType>  t, float x) 
# 688
{int volatile ___ = 1;(void)t;(void)x;
# 692
exit(___);}
#if 0
# 688
{ 
# 689
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 691
return (unsigned)(v.x); 
# 692
} 
#endif
# 694 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType>  t, float x) 
# 695
{int volatile ___ = 1;(void)t;(void)x;
# 699
exit(___);}
#if 0
# 695
{ 
# 696
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 698
return make_int1(v.x); 
# 699
} 
#endif
# 701 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType>  t, float x) 
# 702
{int volatile ___ = 1;(void)t;(void)x;
# 706
exit(___);}
#if 0
# 702
{ 
# 703
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 705
return make_uint1(v.x); 
# 706
} 
#endif
# 708 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType>  t, float x) 
# 709
{int volatile ___ = 1;(void)t;(void)x;
# 713
exit(___);}
#if 0
# 709
{ 
# 710
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 712
return make_int2(v.x, v.y); 
# 713
} 
#endif
# 715 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType>  t, float x) 
# 716
{int volatile ___ = 1;(void)t;(void)x;
# 720
exit(___);}
#if 0
# 716
{ 
# 717
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 719
return make_uint2(v.x, v.y); 
# 720
} 
#endif
# 722 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType>  t, float x) 
# 723
{int volatile ___ = 1;(void)t;(void)x;
# 727
exit(___);}
#if 0
# 723
{ 
# 724
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 726
return make_int4(v.x, v.y, v.z, v.w); 
# 727
} 
#endif
# 729 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType>  t, float x) 
# 730
{int volatile ___ = 1;(void)t;(void)x;
# 734
exit(___);}
#if 0
# 730
{ 
# 731
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 733
return make_uint4(v.x, v.y, v.z, v.w); 
# 734
} 
#endif
# 814 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType>  t, float x) 
# 815
{int volatile ___ = 1;(void)t;(void)x;
# 819
exit(___);}
#if 0
# 815
{ 
# 816
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 818
return v.x; 
# 819
} 
#endif
# 821 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType>  t, float x) 
# 822
{int volatile ___ = 1;(void)t;(void)x;
# 826
exit(___);}
#if 0
# 822
{ 
# 823
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 825
return make_float1(v.x); 
# 826
} 
#endif
# 828 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType>  t, float x) 
# 829
{int volatile ___ = 1;(void)t;(void)x;
# 833
exit(___);}
#if 0
# 829
{ 
# 830
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 832
return make_float2(v.x, v.y); 
# 833
} 
#endif
# 835 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType>  t, float x) 
# 836
{int volatile ___ = 1;(void)t;(void)x;
# 840
exit(___);}
#if 0
# 836
{ 
# 837
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 839
return make_float4(v.x, v.y, v.z, v.w); 
# 840
} 
#endif
# 848 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 849
{int volatile ___ = 1;(void)t;(void)x;
# 858
exit(___);}
#if 0
# 849
{ 
# 853
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 857
return w.x; 
# 858
} 
#endif
# 860 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 861
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 866
} 
#endif
# 868 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 869
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 874
} 
#endif
# 876 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 877
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 882
} 
#endif
# 884 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 885
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 890
} 
#endif
# 892 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 893
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 898
} 
#endif
# 900 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 901
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 906
} 
#endif
# 908 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 909
{int volatile ___ = 1;(void)t;(void)x;
# 914
exit(___);}
#if 0
# 909
{ 
# 910
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 911
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 913
return make_float4(w.x, w.y, w.z, w.w); 
# 914
} 
#endif
# 916 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 917
{int volatile ___ = 1;(void)t;(void)x;
# 922
exit(___);}
#if 0
# 917
{ 
# 918
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 919
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 921
return make_float4(w.x, w.y, w.z, w.w); 
# 922
} 
#endif
# 930 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 931
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 936
} 
#endif
# 938 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 939
{int volatile ___ = 1;(void)t;(void)x;
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
return w.x; 
# 944
} 
#endif
# 946 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 947
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 952
} 
#endif
# 954 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 955
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float1(w.x); 
# 960
} 
#endif
# 962 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 963
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 968
} 
#endif
# 970 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 971
{int volatile ___ = 1;(void)t;(void)x;
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
return make_float2(w.x, w.y); 
# 976
} 
#endif
# 978 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 979
{int volatile ___ = 1;(void)t;(void)x;
# 984
exit(___);}
#if 0
# 979
{ 
# 980
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 981
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 983
return make_float4(w.x, w.y, w.z, w.w); 
# 984
} 
#endif
# 986 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 987
{int volatile ___ = 1;(void)t;(void)x;
# 992
exit(___);}
#if 0
# 987
{ 
# 988
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 989
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 991
return make_float4(w.x, w.y, w.z, w.w); 
# 992
} 
#endif
# 1000 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType>  t, float x, float y) 
# 1001
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1009
exit(___);}
#if 0
# 1001
{ 
# 1005
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1008
return (char)(v.x); 
# 1009
} 
#endif
# 1011 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y) 
# 1012
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1016
exit(___);}
#if 0
# 1012
{ 
# 1013
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1015
return (signed char)(v.x); 
# 1016
} 
#endif
# 1018 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y) 
# 1019
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1023
exit(___);}
#if 0
# 1019
{ 
# 1020
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1022
return (unsigned char)(v.x); 
# 1023
} 
#endif
# 1025 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1026
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1030
exit(___);}
#if 0
# 1026
{ 
# 1027
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1029
return make_char1(v.x); 
# 1030
} 
#endif
# 1032 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1033
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1037
exit(___);}
#if 0
# 1033
{ 
# 1034
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1036
return make_uchar1(v.x); 
# 1037
} 
#endif
# 1039 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1040
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1044
exit(___);}
#if 0
# 1040
{ 
# 1041
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1043
return make_char2(v.x, v.y); 
# 1044
} 
#endif
# 1046 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1047
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1051
exit(___);}
#if 0
# 1047
{ 
# 1048
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1050
return make_uchar2(v.x, v.y); 
# 1051
} 
#endif
# 1053 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1054
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1058
exit(___);}
#if 0
# 1054
{ 
# 1055
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1057
return make_char4(v.x, v.y, v.z, v.w); 
# 1058
} 
#endif
# 1060 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1061
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1065
exit(___);}
#if 0
# 1061
{ 
# 1062
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1064
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1065
} 
#endif
# 1073 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1074
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1078
exit(___);}
#if 0
# 1074
{ 
# 1075
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1077
return (short)(v.x); 
# 1078
} 
#endif
# 1080 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1081
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1085
exit(___);}
#if 0
# 1081
{ 
# 1082
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1084
return (unsigned short)(v.x); 
# 1085
} 
#endif
# 1087 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1088
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1092
exit(___);}
#if 0
# 1088
{ 
# 1089
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1091
return make_short1(v.x); 
# 1092
} 
#endif
# 1094 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1095
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1099
exit(___);}
#if 0
# 1095
{ 
# 1096
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1098
return make_ushort1(v.x); 
# 1099
} 
#endif
# 1101 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1102
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1106
exit(___);}
#if 0
# 1102
{ 
# 1103
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1105
return make_short2(v.x, v.y); 
# 1106
} 
#endif
# 1108 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1109
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1113
exit(___);}
#if 0
# 1109
{ 
# 1110
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1112
return make_ushort2(v.x, v.y); 
# 1113
} 
#endif
# 1115 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1116
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1120
exit(___);}
#if 0
# 1116
{ 
# 1117
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1119
return make_short4(v.x, v.y, v.z, v.w); 
# 1120
} 
#endif
# 1122 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1123
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1127
exit(___);}
#if 0
# 1123
{ 
# 1124
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1126
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1127
} 
#endif
# 1135 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType>  t, float x, float y) 
# 1136
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1140
exit(___);}
#if 0
# 1136
{ 
# 1137
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1139
return (int)(v.x); 
# 1140
} 
#endif
# 1142 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y) 
# 1143
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1147
exit(___);}
#if 0
# 1143
{ 
# 1144
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1146
return (unsigned)(v.x); 
# 1147
} 
#endif
# 1149 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1150
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1154
exit(___);}
#if 0
# 1150
{ 
# 1151
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1153
return make_int1(v.x); 
# 1154
} 
#endif
# 1156 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1157
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1161
exit(___);}
#if 0
# 1157
{ 
# 1158
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1160
return make_uint1(v.x); 
# 1161
} 
#endif
# 1163 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1164
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1168
exit(___);}
#if 0
# 1164
{ 
# 1165
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1167
return make_int2(v.x, v.y); 
# 1168
} 
#endif
# 1170 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1171
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1175
exit(___);}
#if 0
# 1171
{ 
# 1172
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1174
return make_uint2(v.x, v.y); 
# 1175
} 
#endif
# 1177 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1178
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1182
exit(___);}
#if 0
# 1178
{ 
# 1179
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1181
return make_int4(v.x, v.y, v.z, v.w); 
# 1182
} 
#endif
# 1184 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1185
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1189
exit(___);}
#if 0
# 1185
{ 
# 1186
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1188
return make_uint4(v.x, v.y, v.z, v.w); 
# 1189
} 
#endif
# 1263 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType>  t, float x, float y) 
# 1264
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1268
exit(___);}
#if 0
# 1264
{ 
# 1265
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1267
return v.x; 
# 1268
} 
#endif
# 1270 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1271
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1275
exit(___);}
#if 0
# 1271
{ 
# 1272
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1274
return make_float1(v.x); 
# 1275
} 
#endif
# 1277 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1278
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1282
exit(___);}
#if 0
# 1278
{ 
# 1279
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1281
return make_float2(v.x, v.y); 
# 1282
} 
#endif
# 1284 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1285
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1289
exit(___);}
#if 0
# 1285
{ 
# 1286
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1288
return make_float4(v.x, v.y, v.z, v.w); 
# 1289
} 
#endif
# 1297 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1298
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1307
exit(___);}
#if 0
# 1298
{ 
# 1302
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1304
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1306
return w.x; 
# 1307
} 
#endif
# 1309 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1310
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return w.x; 
# 1315
} 
#endif
# 1317 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1318
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return w.x; 
# 1323
} 
#endif
# 1325 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1326
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float1(w.x); 
# 1331
} 
#endif
# 1333 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1334
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float1(w.x); 
# 1339
} 
#endif
# 1341 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1342
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float2(w.x, w.y); 
# 1347
} 
#endif
# 1349 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1350
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float2(w.x, w.y); 
# 1355
} 
#endif
# 1357 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1358
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1363
exit(___);}
#if 0
# 1358
{ 
# 1359
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1360
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1362
return make_float4(w.x, w.y, w.z, w.w); 
# 1363
} 
#endif
# 1365 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1366
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1371
exit(___);}
#if 0
# 1366
{ 
# 1367
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1368
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1370
return make_float4(w.x, w.y, w.z, w.w); 
# 1371
} 
#endif
# 1379 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1380
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return w.x; 
# 1385
} 
#endif
# 1387 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1388
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return w.x; 
# 1393
} 
#endif
# 1395 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1396
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float1(w.x); 
# 1401
} 
#endif
# 1403 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1404
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float1(w.x); 
# 1409
} 
#endif
# 1411 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1412
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float2(w.x, w.y); 
# 1417
} 
#endif
# 1419 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1420
{int volatile ___ = 1;(void)t;(void)x;(void)y;
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
return make_float2(w.x, w.y); 
# 1425
} 
#endif
# 1427 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1428
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1433
exit(___);}
#if 0
# 1428
{ 
# 1429
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1430
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1432
return make_float4(w.x, w.y, w.z, w.w); 
# 1433
} 
#endif
# 1435 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1436
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1441
exit(___);}
#if 0
# 1436
{ 
# 1437
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1438
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1440
return make_float4(w.x, w.y, w.z, w.w); 
# 1441
} 
#endif
# 1449 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1DLayered(texture< char, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1450
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1458
exit(___);}
#if 0
# 1450
{ 
# 1454
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1457
return (char)(v.x); 
# 1458
} 
#endif
# 1460 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1DLayered(texture< signed char, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1461
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1465
exit(___);}
#if 0
# 1461
{ 
# 1462
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1464
return (signed char)(v.x); 
# 1465
} 
#endif
# 1467 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1DLayered(texture< unsigned char, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1468
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1472
exit(___);}
#if 0
# 1468
{ 
# 1469
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1471
return (unsigned char)(v.x); 
# 1472
} 
#endif
# 1474 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1DLayered(texture< char1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1475
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1479
exit(___);}
#if 0
# 1475
{ 
# 1476
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1478
return make_char1(v.x); 
# 1479
} 
#endif
# 1481 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1DLayered(texture< uchar1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1482
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1486
exit(___);}
#if 0
# 1482
{ 
# 1483
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1485
return make_uchar1(v.x); 
# 1486
} 
#endif
# 1488 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1DLayered(texture< char2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1489
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1493
exit(___);}
#if 0
# 1489
{ 
# 1490
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1492
return make_char2(v.x, v.y); 
# 1493
} 
#endif
# 1495 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1DLayered(texture< uchar2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1496
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1500
exit(___);}
#if 0
# 1496
{ 
# 1497
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1499
return make_uchar2(v.x, v.y); 
# 1500
} 
#endif
# 1502 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1DLayered(texture< char4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1503
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1507
exit(___);}
#if 0
# 1503
{ 
# 1504
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1506
return make_char4(v.x, v.y, v.z, v.w); 
# 1507
} 
#endif
# 1509 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1DLayered(texture< uchar4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1510
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1514
exit(___);}
#if 0
# 1510
{ 
# 1511
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1513
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1514
} 
#endif
# 1522 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1DLayered(texture< short, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1523
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1527
exit(___);}
#if 0
# 1523
{ 
# 1524
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1526
return (short)(v.x); 
# 1527
} 
#endif
# 1529 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1DLayered(texture< unsigned short, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1530
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1534
exit(___);}
#if 0
# 1530
{ 
# 1531
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1533
return (unsigned short)(v.x); 
# 1534
} 
#endif
# 1536 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1DLayered(texture< short1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1537
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1541
exit(___);}
#if 0
# 1537
{ 
# 1538
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1540
return make_short1(v.x); 
# 1541
} 
#endif
# 1543 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1DLayered(texture< ushort1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1544
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1548
exit(___);}
#if 0
# 1544
{ 
# 1545
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1547
return make_ushort1(v.x); 
# 1548
} 
#endif
# 1550 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1DLayered(texture< short2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1551
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1555
exit(___);}
#if 0
# 1551
{ 
# 1552
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1554
return make_short2(v.x, v.y); 
# 1555
} 
#endif
# 1557 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1DLayered(texture< ushort2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1558
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1562
exit(___);}
#if 0
# 1558
{ 
# 1559
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1561
return make_ushort2(v.x, v.y); 
# 1562
} 
#endif
# 1564 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1DLayered(texture< short4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1565
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1569
exit(___);}
#if 0
# 1565
{ 
# 1566
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1568
return make_short4(v.x, v.y, v.z, v.w); 
# 1569
} 
#endif
# 1571 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1DLayered(texture< ushort4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1572
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1576
exit(___);}
#if 0
# 1572
{ 
# 1573
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1575
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1576
} 
#endif
# 1584 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1DLayered(texture< int, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1585
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1589
exit(___);}
#if 0
# 1585
{ 
# 1586
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1588
return (int)(v.x); 
# 1589
} 
#endif
# 1591 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1DLayered(texture< unsigned, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1592
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1596
exit(___);}
#if 0
# 1592
{ 
# 1593
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1595
return (unsigned)(v.x); 
# 1596
} 
#endif
# 1598 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1DLayered(texture< int1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1599
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1603
exit(___);}
#if 0
# 1599
{ 
# 1600
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1602
return make_int1(v.x); 
# 1603
} 
#endif
# 1605 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1DLayered(texture< uint1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1606
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1610
exit(___);}
#if 0
# 1606
{ 
# 1607
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1609
return make_uint1(v.x); 
# 1610
} 
#endif
# 1612 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1DLayered(texture< int2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1613
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1617
exit(___);}
#if 0
# 1613
{ 
# 1614
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1616
return make_int2(v.x, v.y); 
# 1617
} 
#endif
# 1619 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1DLayered(texture< uint2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1620
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1624
exit(___);}
#if 0
# 1620
{ 
# 1621
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1623
return make_uint2(v.x, v.y); 
# 1624
} 
#endif
# 1626 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1DLayered(texture< int4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1627
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1631
exit(___);}
#if 0
# 1627
{ 
# 1628
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1630
return make_int4(v.x, v.y, v.z, v.w); 
# 1631
} 
#endif
# 1633 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1DLayered(texture< uint4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1634
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1638
exit(___);}
#if 0
# 1634
{ 
# 1635
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1637
return make_uint4(v.x, v.y, v.z, v.w); 
# 1638
} 
#endif
# 1712 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< float, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1713
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1717
exit(___);}
#if 0
# 1713
{ 
# 1714
float4 v = __ftexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1716
return v.x; 
# 1717
} 
#endif
# 1719 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< float1, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1720
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1724
exit(___);}
#if 0
# 1720
{ 
# 1721
float4 v = __ftexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1723
return make_float1(v.x); 
# 1724
} 
#endif
# 1726 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< float2, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1727
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1731
exit(___);}
#if 0
# 1727
{ 
# 1728
float4 v = __ftexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1730
return make_float2(v.x, v.y); 
# 1731
} 
#endif
# 1733 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< float4, 241, cudaReadModeElementType>  t, float x, int layer) 
# 1734
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1738
exit(___);}
#if 0
# 1734
{ 
# 1735
float4 v = __ftexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1737
return make_float4(v.x, v.y, v.z, v.w); 
# 1738
} 
#endif
# 1746 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< char, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1747
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1756
exit(___);}
#if 0
# 1747
{ 
# 1751
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1753
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1755
return w.x; 
# 1756
} 
#endif
# 1758 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< signed char, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1759
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1764
exit(___);}
#if 0
# 1759
{ 
# 1760
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1761
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1763
return w.x; 
# 1764
} 
#endif
# 1766 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned char, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1767
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1772
exit(___);}
#if 0
# 1767
{ 
# 1768
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1769
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1771
return w.x; 
# 1772
} 
#endif
# 1774 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< char1, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1775
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1780
exit(___);}
#if 0
# 1775
{ 
# 1776
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1777
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1779
return make_float1(w.x); 
# 1780
} 
#endif
# 1782 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< uchar1, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1783
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1788
exit(___);}
#if 0
# 1783
{ 
# 1784
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1785
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1787
return make_float1(w.x); 
# 1788
} 
#endif
# 1790 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< char2, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1791
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1796
exit(___);}
#if 0
# 1791
{ 
# 1792
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1793
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1795
return make_float2(w.x, w.y); 
# 1796
} 
#endif
# 1798 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< uchar2, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1799
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1804
exit(___);}
#if 0
# 1799
{ 
# 1800
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1801
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1803
return make_float2(w.x, w.y); 
# 1804
} 
#endif
# 1806 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< char4, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1807
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1812
exit(___);}
#if 0
# 1807
{ 
# 1808
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1809
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1811
return make_float4(w.x, w.y, w.z, w.w); 
# 1812
} 
#endif
# 1814 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< uchar4, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1815
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1820
exit(___);}
#if 0
# 1815
{ 
# 1816
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1817
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1819
return make_float4(w.x, w.y, w.z, w.w); 
# 1820
} 
#endif
# 1828 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< short, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1829
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1834
exit(___);}
#if 0
# 1829
{ 
# 1830
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1831
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1833
return w.x; 
# 1834
} 
#endif
# 1836 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned short, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1837
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1842
exit(___);}
#if 0
# 1837
{ 
# 1838
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1841
return w.x; 
# 1842
} 
#endif
# 1844 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< short1, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1845
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1850
exit(___);}
#if 0
# 1845
{ 
# 1846
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1849
return make_float1(w.x); 
# 1850
} 
#endif
# 1852 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< ushort1, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1853
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1858
exit(___);}
#if 0
# 1853
{ 
# 1854
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1857
return make_float1(w.x); 
# 1858
} 
#endif
# 1860 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< short2, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1861
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1866
exit(___);}
#if 0
# 1861
{ 
# 1862
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1865
return make_float2(w.x, w.y); 
# 1866
} 
#endif
# 1868 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< ushort2, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1869
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1874
exit(___);}
#if 0
# 1869
{ 
# 1870
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1873
return make_float2(w.x, w.y); 
# 1874
} 
#endif
# 1876 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< short4, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1877
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1882
exit(___);}
#if 0
# 1877
{ 
# 1878
int4 v = __itexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1879
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1881
return make_float4(w.x, w.y, w.z, w.w); 
# 1882
} 
#endif
# 1884 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< ushort4, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 1885
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1890
exit(___);}
#if 0
# 1885
{ 
# 1886
uint4 v = __utexfetchl(t, make_float4(x, 0, 0, 0), layer); 
# 1887
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1889
return make_float4(w.x, w.y, w.z, w.w); 
# 1890
} 
#endif
# 1898 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2DLayered(texture< char, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1899
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1907
exit(___);}
#if 0
# 1899
{ 
# 1903
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1906
return (char)(v.x); 
# 1907
} 
#endif
# 1909 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2DLayered(texture< signed char, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1910
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1914
exit(___);}
#if 0
# 1910
{ 
# 1911
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1913
return (signed char)(v.x); 
# 1914
} 
#endif
# 1916 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2DLayered(texture< unsigned char, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1917
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1921
exit(___);}
#if 0
# 1917
{ 
# 1918
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1920
return (unsigned char)(v.x); 
# 1921
} 
#endif
# 1923 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2DLayered(texture< char1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1924
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1928
exit(___);}
#if 0
# 1924
{ 
# 1925
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1927
return make_char1(v.x); 
# 1928
} 
#endif
# 1930 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2DLayered(texture< uchar1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1931
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1935
exit(___);}
#if 0
# 1931
{ 
# 1932
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1934
return make_uchar1(v.x); 
# 1935
} 
#endif
# 1937 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2DLayered(texture< char2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1938
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1942
exit(___);}
#if 0
# 1938
{ 
# 1939
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1941
return make_char2(v.x, v.y); 
# 1942
} 
#endif
# 1944 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2DLayered(texture< uchar2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1945
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1949
exit(___);}
#if 0
# 1945
{ 
# 1946
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1948
return make_uchar2(v.x, v.y); 
# 1949
} 
#endif
# 1951 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2DLayered(texture< char4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1952
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1956
exit(___);}
#if 0
# 1952
{ 
# 1953
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1955
return make_char4(v.x, v.y, v.z, v.w); 
# 1956
} 
#endif
# 1958 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2DLayered(texture< uchar4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1959
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1963
exit(___);}
#if 0
# 1959
{ 
# 1960
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1962
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1963
} 
#endif
# 1971 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2DLayered(texture< short, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1972
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1976
exit(___);}
#if 0
# 1972
{ 
# 1973
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1975
return (short)(v.x); 
# 1976
} 
#endif
# 1978 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2DLayered(texture< unsigned short, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1979
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1983
exit(___);}
#if 0
# 1979
{ 
# 1980
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1982
return (unsigned short)(v.x); 
# 1983
} 
#endif
# 1985 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2DLayered(texture< short1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1986
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1990
exit(___);}
#if 0
# 1986
{ 
# 1987
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1989
return make_short1(v.x); 
# 1990
} 
#endif
# 1992 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2DLayered(texture< ushort1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 1993
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1997
exit(___);}
#if 0
# 1993
{ 
# 1994
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 1996
return make_ushort1(v.x); 
# 1997
} 
#endif
# 1999 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2DLayered(texture< short2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2000
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2004
exit(___);}
#if 0
# 2000
{ 
# 2001
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2003
return make_short2(v.x, v.y); 
# 2004
} 
#endif
# 2006 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2DLayered(texture< ushort2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2007
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2011
exit(___);}
#if 0
# 2007
{ 
# 2008
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2010
return make_ushort2(v.x, v.y); 
# 2011
} 
#endif
# 2013 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2DLayered(texture< short4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2014
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2018
exit(___);}
#if 0
# 2014
{ 
# 2015
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2017
return make_short4(v.x, v.y, v.z, v.w); 
# 2018
} 
#endif
# 2020 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2DLayered(texture< ushort4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2021
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2025
exit(___);}
#if 0
# 2021
{ 
# 2022
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2024
return make_ushort4(v.x, v.y, v.z, v.w); 
# 2025
} 
#endif
# 2033 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2DLayered(texture< int, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2034
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2038
exit(___);}
#if 0
# 2034
{ 
# 2035
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2037
return (int)(v.x); 
# 2038
} 
#endif
# 2040 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2DLayered(texture< unsigned, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2041
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2045
exit(___);}
#if 0
# 2041
{ 
# 2042
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2044
return (unsigned)(v.x); 
# 2045
} 
#endif
# 2047 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2DLayered(texture< int1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2048
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2052
exit(___);}
#if 0
# 2048
{ 
# 2049
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2051
return make_int1(v.x); 
# 2052
} 
#endif
# 2054 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2DLayered(texture< uint1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2055
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2059
exit(___);}
#if 0
# 2055
{ 
# 2056
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2058
return make_uint1(v.x); 
# 2059
} 
#endif
# 2061 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2DLayered(texture< int2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2062
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2066
exit(___);}
#if 0
# 2062
{ 
# 2063
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2065
return make_int2(v.x, v.y); 
# 2066
} 
#endif
# 2068 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2DLayered(texture< uint2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2069
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2073
exit(___);}
#if 0
# 2069
{ 
# 2070
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2072
return make_uint2(v.x, v.y); 
# 2073
} 
#endif
# 2075 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2DLayered(texture< int4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2076
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2080
exit(___);}
#if 0
# 2076
{ 
# 2077
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2079
return make_int4(v.x, v.y, v.z, v.w); 
# 2080
} 
#endif
# 2082 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2DLayered(texture< uint4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2083
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2087
exit(___);}
#if 0
# 2083
{ 
# 2084
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2086
return make_uint4(v.x, v.y, v.z, v.w); 
# 2087
} 
#endif
# 2161 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< float, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2162
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2166
exit(___);}
#if 0
# 2162
{ 
# 2163
float4 v = __ftexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2165
return v.x; 
# 2166
} 
#endif
# 2168 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< float1, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2169
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2173
exit(___);}
#if 0
# 2169
{ 
# 2170
float4 v = __ftexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2172
return make_float1(v.x); 
# 2173
} 
#endif
# 2175 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< float2, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2176
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2180
exit(___);}
#if 0
# 2176
{ 
# 2177
float4 v = __ftexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2179
return make_float2(v.x, v.y); 
# 2180
} 
#endif
# 2182 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< float4, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 2183
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2187
exit(___);}
#if 0
# 2183
{ 
# 2184
float4 v = __ftexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2186
return make_float4(v.x, v.y, v.z, v.w); 
# 2187
} 
#endif
# 2195 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< char, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2196
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2205
exit(___);}
#if 0
# 2196
{ 
# 2200
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2202
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2204
return w.x; 
# 2205
} 
#endif
# 2207 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< signed char, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2208
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2213
exit(___);}
#if 0
# 2208
{ 
# 2209
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2210
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2212
return w.x; 
# 2213
} 
#endif
# 2215 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned char, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2216
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2221
exit(___);}
#if 0
# 2216
{ 
# 2217
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2218
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2220
return w.x; 
# 2221
} 
#endif
# 2223 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< char1, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2224
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2229
exit(___);}
#if 0
# 2224
{ 
# 2225
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2226
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2228
return make_float1(w.x); 
# 2229
} 
#endif
# 2231 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< uchar1, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2232
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2237
exit(___);}
#if 0
# 2232
{ 
# 2233
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2234
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2236
return make_float1(w.x); 
# 2237
} 
#endif
# 2239 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< char2, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2240
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2245
exit(___);}
#if 0
# 2240
{ 
# 2241
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2242
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2244
return make_float2(w.x, w.y); 
# 2245
} 
#endif
# 2247 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< uchar2, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2248
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2253
exit(___);}
#if 0
# 2248
{ 
# 2249
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2250
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2252
return make_float2(w.x, w.y); 
# 2253
} 
#endif
# 2255 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< char4, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2256
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2261
exit(___);}
#if 0
# 2256
{ 
# 2257
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2258
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2260
return make_float4(w.x, w.y, w.z, w.w); 
# 2261
} 
#endif
# 2263 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< uchar4, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2264
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2269
exit(___);}
#if 0
# 2264
{ 
# 2265
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2266
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2268
return make_float4(w.x, w.y, w.z, w.w); 
# 2269
} 
#endif
# 2277 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< short, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2278
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2283
exit(___);}
#if 0
# 2278
{ 
# 2279
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2280
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2282
return w.x; 
# 2283
} 
#endif
# 2285 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned short, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2286
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2291
exit(___);}
#if 0
# 2286
{ 
# 2287
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2288
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2290
return w.x; 
# 2291
} 
#endif
# 2293 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< short1, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2294
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2299
exit(___);}
#if 0
# 2294
{ 
# 2295
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2296
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2298
return make_float1(w.x); 
# 2299
} 
#endif
# 2301 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< ushort1, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2302
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2307
exit(___);}
#if 0
# 2302
{ 
# 2303
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2304
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2306
return make_float1(w.x); 
# 2307
} 
#endif
# 2309 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< short2, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2310
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2315
exit(___);}
#if 0
# 2310
{ 
# 2311
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2312
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2314
return make_float2(w.x, w.y); 
# 2315
} 
#endif
# 2317 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< ushort2, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2318
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2323
exit(___);}
#if 0
# 2318
{ 
# 2319
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2320
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2322
return make_float2(w.x, w.y); 
# 2323
} 
#endif
# 2325 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< short4, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2326
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2331
exit(___);}
#if 0
# 2326
{ 
# 2327
int4 v = __itexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2328
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2330
return make_float4(w.x, w.y, w.z, w.w); 
# 2331
} 
#endif
# 2333 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< ushort4, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 2334
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2339
exit(___);}
#if 0
# 2334
{ 
# 2335
uint4 v = __utexfetchl(t, make_float4(x, y, 0, 0), layer); 
# 2336
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2338
return make_float4(w.x, w.y, w.z, w.w); 
# 2339
} 
#endif
# 2347 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2348
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2356
exit(___);}
#if 0
# 2348
{ 
# 2352
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2355
return (char)(v.x); 
# 2356
} 
#endif
# 2358 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2359
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2363
exit(___);}
#if 0
# 2359
{ 
# 2360
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2362
return (signed char)(v.x); 
# 2363
} 
#endif
# 2365 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2366
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2370
exit(___);}
#if 0
# 2366
{ 
# 2367
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2369
return (unsigned char)(v.x); 
# 2370
} 
#endif
# 2372 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2373
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2377
exit(___);}
#if 0
# 2373
{ 
# 2374
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2376
return make_char1(v.x); 
# 2377
} 
#endif
# 2379 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2380
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2384
exit(___);}
#if 0
# 2380
{ 
# 2381
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2383
return make_uchar1(v.x); 
# 2384
} 
#endif
# 2386 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2387
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2391
exit(___);}
#if 0
# 2387
{ 
# 2388
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2390
return make_char2(v.x, v.y); 
# 2391
} 
#endif
# 2393 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2394
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2398
exit(___);}
#if 0
# 2394
{ 
# 2395
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2397
return make_uchar2(v.x, v.y); 
# 2398
} 
#endif
# 2400 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2401
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2405
exit(___);}
#if 0
# 2401
{ 
# 2402
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2404
return make_char4(v.x, v.y, v.z, v.w); 
# 2405
} 
#endif
# 2407 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2408
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2412
exit(___);}
#if 0
# 2408
{ 
# 2409
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2411
return make_uchar4(v.x, v.y, v.z, v.w); 
# 2412
} 
#endif
# 2420 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2421
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2425
exit(___);}
#if 0
# 2421
{ 
# 2422
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2424
return (short)(v.x); 
# 2425
} 
#endif
# 2427 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2428
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2432
exit(___);}
#if 0
# 2428
{ 
# 2429
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2431
return (unsigned short)(v.x); 
# 2432
} 
#endif
# 2434 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2435
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2439
exit(___);}
#if 0
# 2435
{ 
# 2436
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2438
return make_short1(v.x); 
# 2439
} 
#endif
# 2441 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2442
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2446
exit(___);}
#if 0
# 2442
{ 
# 2443
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2445
return make_ushort1(v.x); 
# 2446
} 
#endif
# 2448 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2449
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2453
exit(___);}
#if 0
# 2449
{ 
# 2450
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2452
return make_short2(v.x, v.y); 
# 2453
} 
#endif
# 2455 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2456
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2460
exit(___);}
#if 0
# 2456
{ 
# 2457
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2459
return make_ushort2(v.x, v.y); 
# 2460
} 
#endif
# 2462 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2463
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2467
exit(___);}
#if 0
# 2463
{ 
# 2464
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2466
return make_short4(v.x, v.y, v.z, v.w); 
# 2467
} 
#endif
# 2469 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2470
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2474
exit(___);}
#if 0
# 2470
{ 
# 2471
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2473
return make_ushort4(v.x, v.y, v.z, v.w); 
# 2474
} 
#endif
# 2482 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2483
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2487
exit(___);}
#if 0
# 2483
{ 
# 2484
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2486
return (int)(v.x); 
# 2487
} 
#endif
# 2489 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2490
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2494
exit(___);}
#if 0
# 2490
{ 
# 2491
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2493
return (unsigned)(v.x); 
# 2494
} 
#endif
# 2496 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2497
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2501
exit(___);}
#if 0
# 2497
{ 
# 2498
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2500
return make_int1(v.x); 
# 2501
} 
#endif
# 2503 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2504
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2508
exit(___);}
#if 0
# 2504
{ 
# 2505
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2507
return make_uint1(v.x); 
# 2508
} 
#endif
# 2510 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2511
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2515
exit(___);}
#if 0
# 2511
{ 
# 2512
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2514
return make_int2(v.x, v.y); 
# 2515
} 
#endif
# 2517 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2518
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2522
exit(___);}
#if 0
# 2518
{ 
# 2519
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2521
return make_uint2(v.x, v.y); 
# 2522
} 
#endif
# 2524 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2525
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2529
exit(___);}
#if 0
# 2525
{ 
# 2526
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2528
return make_int4(v.x, v.y, v.z, v.w); 
# 2529
} 
#endif
# 2531 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2532
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2536
exit(___);}
#if 0
# 2532
{ 
# 2533
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2535
return make_uint4(v.x, v.y, v.z, v.w); 
# 2536
} 
#endif
# 2610 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2611
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2615
exit(___);}
#if 0
# 2611
{ 
# 2612
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 2614
return v.x; 
# 2615
} 
#endif
# 2617 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2618
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2622
exit(___);}
#if 0
# 2618
{ 
# 2619
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 2621
return make_float1(v.x); 
# 2622
} 
#endif
# 2624 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2625
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2629
exit(___);}
#if 0
# 2625
{ 
# 2626
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 2628
return make_float2(v.x, v.y); 
# 2629
} 
#endif
# 2631 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 2632
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2636
exit(___);}
#if 0
# 2632
{ 
# 2633
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 2635
return make_float4(v.x, v.y, v.z, v.w); 
# 2636
} 
#endif
# 2644 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2645
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2654
exit(___);}
#if 0
# 2645
{ 
# 2649
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2651
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2653
return w.x; 
# 2654
} 
#endif
# 2656 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2657
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2662
exit(___);}
#if 0
# 2657
{ 
# 2658
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2659
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2661
return w.x; 
# 2662
} 
#endif
# 2664 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2665
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2670
exit(___);}
#if 0
# 2665
{ 
# 2666
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2667
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2669
return w.x; 
# 2670
} 
#endif
# 2672 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2673
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2678
exit(___);}
#if 0
# 2673
{ 
# 2674
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2675
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2677
return make_float1(w.x); 
# 2678
} 
#endif
# 2680 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2681
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2686
exit(___);}
#if 0
# 2681
{ 
# 2682
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2683
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2685
return make_float1(w.x); 
# 2686
} 
#endif
# 2688 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2689
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2694
exit(___);}
#if 0
# 2689
{ 
# 2690
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2691
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2693
return make_float2(w.x, w.y); 
# 2694
} 
#endif
# 2696 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2697
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2702
exit(___);}
#if 0
# 2697
{ 
# 2698
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2699
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2701
return make_float2(w.x, w.y); 
# 2702
} 
#endif
# 2704 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2705
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2710
exit(___);}
#if 0
# 2705
{ 
# 2706
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2707
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2709
return make_float4(w.x, w.y, w.z, w.w); 
# 2710
} 
#endif
# 2712 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2713
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2718
exit(___);}
#if 0
# 2713
{ 
# 2714
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2715
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2717
return make_float4(w.x, w.y, w.z, w.w); 
# 2718
} 
#endif
# 2726 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2727
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2732
exit(___);}
#if 0
# 2727
{ 
# 2728
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2729
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2731
return w.x; 
# 2732
} 
#endif
# 2734 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2735
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2740
exit(___);}
#if 0
# 2735
{ 
# 2736
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2737
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2739
return w.x; 
# 2740
} 
#endif
# 2742 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2743
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2748
exit(___);}
#if 0
# 2743
{ 
# 2744
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2745
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2747
return make_float1(w.x); 
# 2748
} 
#endif
# 2750 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2751
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2756
exit(___);}
#if 0
# 2751
{ 
# 2752
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2753
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2755
return make_float1(w.x); 
# 2756
} 
#endif
# 2758 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2759
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2764
exit(___);}
#if 0
# 2759
{ 
# 2760
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2761
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2763
return make_float2(w.x, w.y); 
# 2764
} 
#endif
# 2766 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2767
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2772
exit(___);}
#if 0
# 2767
{ 
# 2768
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2769
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2771
return make_float2(w.x, w.y); 
# 2772
} 
#endif
# 2774 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2775
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2780
exit(___);}
#if 0
# 2775
{ 
# 2776
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 2777
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2779
return make_float4(w.x, w.y, w.z, w.w); 
# 2780
} 
#endif
# 2782 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 2783
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2788
exit(___);}
#if 0
# 2783
{ 
# 2784
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 2785
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 2787
return make_float4(w.x, w.y, w.z, w.w); 
# 2788
} 
#endif
# 2796 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemap(texture< char, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2797
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2805
exit(___);}
#if 0
# 2797
{ 
# 2801
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2804
return (char)(v.x); 
# 2805
} 
#endif
# 2807 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemap(texture< signed char, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2808
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2812
exit(___);}
#if 0
# 2808
{ 
# 2809
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2811
return (signed char)(v.x); 
# 2812
} 
#endif
# 2814 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemap(texture< unsigned char, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2815
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2819
exit(___);}
#if 0
# 2815
{ 
# 2816
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2818
return (unsigned char)(v.x); 
# 2819
} 
#endif
# 2821 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemap(texture< char1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2822
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2826
exit(___);}
#if 0
# 2822
{ 
# 2823
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2825
return make_char1(v.x); 
# 2826
} 
#endif
# 2828 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemap(texture< uchar1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2829
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2833
exit(___);}
#if 0
# 2829
{ 
# 2830
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2832
return make_uchar1(v.x); 
# 2833
} 
#endif
# 2835 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemap(texture< char2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2836
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2840
exit(___);}
#if 0
# 2836
{ 
# 2837
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2839
return make_char2(v.x, v.y); 
# 2840
} 
#endif
# 2842 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemap(texture< uchar2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2843
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2847
exit(___);}
#if 0
# 2843
{ 
# 2844
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2846
return make_uchar2(v.x, v.y); 
# 2847
} 
#endif
# 2849 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemap(texture< char4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2850
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2854
exit(___);}
#if 0
# 2850
{ 
# 2851
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2853
return make_char4(v.x, v.y, v.z, v.w); 
# 2854
} 
#endif
# 2856 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemap(texture< uchar4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2857
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2861
exit(___);}
#if 0
# 2857
{ 
# 2858
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2860
return make_uchar4(v.x, v.y, v.z, v.w); 
# 2861
} 
#endif
# 2869 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemap(texture< short, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2870
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2874
exit(___);}
#if 0
# 2870
{ 
# 2871
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2873
return (short)(v.x); 
# 2874
} 
#endif
# 2876 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemap(texture< unsigned short, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2877
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2881
exit(___);}
#if 0
# 2877
{ 
# 2878
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2880
return (unsigned short)(v.x); 
# 2881
} 
#endif
# 2883 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemap(texture< short1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2884
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2888
exit(___);}
#if 0
# 2884
{ 
# 2885
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2887
return make_short1(v.x); 
# 2888
} 
#endif
# 2890 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemap(texture< ushort1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2891
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2895
exit(___);}
#if 0
# 2891
{ 
# 2892
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2894
return make_ushort1(v.x); 
# 2895
} 
#endif
# 2897 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemap(texture< short2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2898
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2902
exit(___);}
#if 0
# 2898
{ 
# 2899
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2901
return make_short2(v.x, v.y); 
# 2902
} 
#endif
# 2904 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemap(texture< ushort2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2905
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2909
exit(___);}
#if 0
# 2905
{ 
# 2906
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2908
return make_ushort2(v.x, v.y); 
# 2909
} 
#endif
# 2911 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemap(texture< short4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2912
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2916
exit(___);}
#if 0
# 2912
{ 
# 2913
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2915
return make_short4(v.x, v.y, v.z, v.w); 
# 2916
} 
#endif
# 2918 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemap(texture< ushort4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2919
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2923
exit(___);}
#if 0
# 2919
{ 
# 2920
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2922
return make_ushort4(v.x, v.y, v.z, v.w); 
# 2923
} 
#endif
# 2931 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemap(texture< int, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2932
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2936
exit(___);}
#if 0
# 2932
{ 
# 2933
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2935
return (int)(v.x); 
# 2936
} 
#endif
# 2938 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemap(texture< unsigned, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2939
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2943
exit(___);}
#if 0
# 2939
{ 
# 2940
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2942
return (unsigned)(v.x); 
# 2943
} 
#endif
# 2945 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemap(texture< int1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2946
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2950
exit(___);}
#if 0
# 2946
{ 
# 2947
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2949
return make_int1(v.x); 
# 2950
} 
#endif
# 2952 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemap(texture< uint1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2953
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2957
exit(___);}
#if 0
# 2953
{ 
# 2954
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2956
return make_uint1(v.x); 
# 2957
} 
#endif
# 2959 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemap(texture< int2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2960
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2964
exit(___);}
#if 0
# 2960
{ 
# 2961
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2963
return make_int2(v.x, v.y); 
# 2964
} 
#endif
# 2966 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemap(texture< uint2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2967
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2971
exit(___);}
#if 0
# 2967
{ 
# 2968
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2970
return make_uint2(v.x, v.y); 
# 2971
} 
#endif
# 2973 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemap(texture< int4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2974
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2978
exit(___);}
#if 0
# 2974
{ 
# 2975
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 2977
return make_int4(v.x, v.y, v.z, v.w); 
# 2978
} 
#endif
# 2980 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemap(texture< uint4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 2981
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2985
exit(___);}
#if 0
# 2981
{ 
# 2982
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 2984
return make_uint4(v.x, v.y, v.z, v.w); 
# 2985
} 
#endif
# 3059 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< float, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 3060
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3064
exit(___);}
#if 0
# 3060
{ 
# 3061
float4 v = __ftexfetchc(t, make_float4(x, y, z, 0)); 
# 3063
return v.x; 
# 3064
} 
#endif
# 3066 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< float1, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 3067
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3071
exit(___);}
#if 0
# 3067
{ 
# 3068
float4 v = __ftexfetchc(t, make_float4(x, y, z, 0)); 
# 3070
return make_float1(v.x); 
# 3071
} 
#endif
# 3073 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< float2, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 3074
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3078
exit(___);}
#if 0
# 3074
{ 
# 3075
float4 v = __ftexfetchc(t, make_float4(x, y, z, 0)); 
# 3077
return make_float2(v.x, v.y); 
# 3078
} 
#endif
# 3080 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< float4, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 3081
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3085
exit(___);}
#if 0
# 3081
{ 
# 3082
float4 v = __ftexfetchc(t, make_float4(x, y, z, 0)); 
# 3084
return make_float4(v.x, v.y, v.z, v.w); 
# 3085
} 
#endif
# 3093 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< char, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3094
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3103
exit(___);}
#if 0
# 3094
{ 
# 3098
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3100
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3102
return w.x; 
# 3103
} 
#endif
# 3105 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< signed char, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3106
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3111
exit(___);}
#if 0
# 3106
{ 
# 3107
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3108
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3110
return w.x; 
# 3111
} 
#endif
# 3113 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned char, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3114
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3119
exit(___);}
#if 0
# 3114
{ 
# 3115
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3116
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3118
return w.x; 
# 3119
} 
#endif
# 3121 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< char1, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3122
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3127
exit(___);}
#if 0
# 3122
{ 
# 3123
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3124
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3126
return make_float1(w.x); 
# 3127
} 
#endif
# 3129 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< uchar1, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3130
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3135
exit(___);}
#if 0
# 3130
{ 
# 3131
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3132
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3134
return make_float1(w.x); 
# 3135
} 
#endif
# 3137 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< char2, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3138
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3143
exit(___);}
#if 0
# 3138
{ 
# 3139
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3140
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3142
return make_float2(w.x, w.y); 
# 3143
} 
#endif
# 3145 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< uchar2, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3146
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3151
exit(___);}
#if 0
# 3146
{ 
# 3147
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3148
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3150
return make_float2(w.x, w.y); 
# 3151
} 
#endif
# 3153 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< char4, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3154
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3159
exit(___);}
#if 0
# 3154
{ 
# 3155
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3156
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3158
return make_float4(w.x, w.y, w.z, w.w); 
# 3159
} 
#endif
# 3161 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< uchar4, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3162
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3167
exit(___);}
#if 0
# 3162
{ 
# 3163
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3164
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3166
return make_float4(w.x, w.y, w.z, w.w); 
# 3167
} 
#endif
# 3175 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< short, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3176
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3181
exit(___);}
#if 0
# 3176
{ 
# 3177
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3178
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3180
return w.x; 
# 3181
} 
#endif
# 3183 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned short, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3184
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3189
exit(___);}
#if 0
# 3184
{ 
# 3185
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3186
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3188
return w.x; 
# 3189
} 
#endif
# 3191 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< short1, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3192
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3197
exit(___);}
#if 0
# 3192
{ 
# 3193
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3194
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3196
return make_float1(w.x); 
# 3197
} 
#endif
# 3199 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< ushort1, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3200
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3205
exit(___);}
#if 0
# 3200
{ 
# 3201
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3202
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3204
return make_float1(w.x); 
# 3205
} 
#endif
# 3207 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< short2, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3208
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3213
exit(___);}
#if 0
# 3208
{ 
# 3209
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3210
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3212
return make_float2(w.x, w.y); 
# 3213
} 
#endif
# 3215 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< ushort2, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3216
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3221
exit(___);}
#if 0
# 3216
{ 
# 3217
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3218
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3220
return make_float2(w.x, w.y); 
# 3221
} 
#endif
# 3223 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< short4, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3224
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3229
exit(___);}
#if 0
# 3224
{ 
# 3225
int4 v = __itexfetchc(t, make_float4(x, y, z, 0)); 
# 3226
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3228
return make_float4(w.x, w.y, w.z, w.w); 
# 3229
} 
#endif
# 3231 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< ushort4, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 3232
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3237
exit(___);}
#if 0
# 3232
{ 
# 3233
uint4 v = __utexfetchc(t, make_float4(x, y, z, 0)); 
# 3234
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3236
return make_float4(w.x, w.y, w.z, w.w); 
# 3237
} 
#endif
# 3245 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemapLayered(texture< char, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3246
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3254
exit(___);}
#if 0
# 3246
{ 
# 3250
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3253
return (char)(v.x); 
# 3254
} 
#endif
# 3256 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemapLayered(texture< signed char, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3257
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3261
exit(___);}
#if 0
# 3257
{ 
# 3258
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3260
return (signed char)(v.x); 
# 3261
} 
#endif
# 3263 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemapLayered(texture< unsigned char, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3264
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3268
exit(___);}
#if 0
# 3264
{ 
# 3265
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3267
return (unsigned char)(v.x); 
# 3268
} 
#endif
# 3270 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemapLayered(texture< char1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3271
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3275
exit(___);}
#if 0
# 3271
{ 
# 3272
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3274
return make_char1(v.x); 
# 3275
} 
#endif
# 3277 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemapLayered(texture< uchar1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3278
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3282
exit(___);}
#if 0
# 3278
{ 
# 3279
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3281
return make_uchar1(v.x); 
# 3282
} 
#endif
# 3284 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemapLayered(texture< char2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3285
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3289
exit(___);}
#if 0
# 3285
{ 
# 3286
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3288
return make_char2(v.x, v.y); 
# 3289
} 
#endif
# 3291 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemapLayered(texture< uchar2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3292
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3296
exit(___);}
#if 0
# 3292
{ 
# 3293
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3295
return make_uchar2(v.x, v.y); 
# 3296
} 
#endif
# 3298 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemapLayered(texture< char4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3299
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3303
exit(___);}
#if 0
# 3299
{ 
# 3300
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3302
return make_char4(v.x, v.y, v.z, v.w); 
# 3303
} 
#endif
# 3305 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemapLayered(texture< uchar4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3306
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3310
exit(___);}
#if 0
# 3306
{ 
# 3307
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3309
return make_uchar4(v.x, v.y, v.z, v.w); 
# 3310
} 
#endif
# 3318 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemapLayered(texture< short, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3319
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3323
exit(___);}
#if 0
# 3319
{ 
# 3320
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3322
return (short)(v.x); 
# 3323
} 
#endif
# 3325 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemapLayered(texture< unsigned short, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3326
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3330
exit(___);}
#if 0
# 3326
{ 
# 3327
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3329
return (unsigned short)(v.x); 
# 3330
} 
#endif
# 3332 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemapLayered(texture< short1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3333
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3337
exit(___);}
#if 0
# 3333
{ 
# 3334
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3336
return make_short1(v.x); 
# 3337
} 
#endif
# 3339 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemapLayered(texture< ushort1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3340
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3344
exit(___);}
#if 0
# 3340
{ 
# 3341
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3343
return make_ushort1(v.x); 
# 3344
} 
#endif
# 3346 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemapLayered(texture< short2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3347
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3351
exit(___);}
#if 0
# 3347
{ 
# 3348
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3350
return make_short2(v.x, v.y); 
# 3351
} 
#endif
# 3353 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemapLayered(texture< ushort2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3354
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3358
exit(___);}
#if 0
# 3354
{ 
# 3355
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3357
return make_ushort2(v.x, v.y); 
# 3358
} 
#endif
# 3360 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemapLayered(texture< short4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3361
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3365
exit(___);}
#if 0
# 3361
{ 
# 3362
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3364
return make_short4(v.x, v.y, v.z, v.w); 
# 3365
} 
#endif
# 3367 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemapLayered(texture< ushort4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3368
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3372
exit(___);}
#if 0
# 3368
{ 
# 3369
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3371
return make_ushort4(v.x, v.y, v.z, v.w); 
# 3372
} 
#endif
# 3380 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemapLayered(texture< int, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3381
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3385
exit(___);}
#if 0
# 3381
{ 
# 3382
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3384
return (int)(v.x); 
# 3385
} 
#endif
# 3387 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemapLayered(texture< unsigned, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3388
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3392
exit(___);}
#if 0
# 3388
{ 
# 3389
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3391
return (unsigned)(v.x); 
# 3392
} 
#endif
# 3394 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemapLayered(texture< int1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3395
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3399
exit(___);}
#if 0
# 3395
{ 
# 3396
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3398
return make_int1(v.x); 
# 3399
} 
#endif
# 3401 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemapLayered(texture< uint1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3402
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3406
exit(___);}
#if 0
# 3402
{ 
# 3403
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3405
return make_uint1(v.x); 
# 3406
} 
#endif
# 3408 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemapLayered(texture< int2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3409
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3413
exit(___);}
#if 0
# 3409
{ 
# 3410
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3412
return make_int2(v.x, v.y); 
# 3413
} 
#endif
# 3415 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemapLayered(texture< uint2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3416
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3420
exit(___);}
#if 0
# 3416
{ 
# 3417
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3419
return make_uint2(v.x, v.y); 
# 3420
} 
#endif
# 3422 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemapLayered(texture< int4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3423
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3427
exit(___);}
#if 0
# 3423
{ 
# 3424
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3426
return make_int4(v.x, v.y, v.z, v.w); 
# 3427
} 
#endif
# 3429 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemapLayered(texture< uint4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3430
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3434
exit(___);}
#if 0
# 3430
{ 
# 3431
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3433
return make_uint4(v.x, v.y, v.z, v.w); 
# 3434
} 
#endif
# 3508 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< float, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3509
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3513
exit(___);}
#if 0
# 3509
{ 
# 3510
float4 v = __ftexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3512
return v.x; 
# 3513
} 
#endif
# 3515 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< float1, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3516
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3520
exit(___);}
#if 0
# 3516
{ 
# 3517
float4 v = __ftexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3519
return make_float1(v.x); 
# 3520
} 
#endif
# 3522 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< float2, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3523
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3527
exit(___);}
#if 0
# 3523
{ 
# 3524
float4 v = __ftexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3526
return make_float2(v.x, v.y); 
# 3527
} 
#endif
# 3529 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< float4, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 3530
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3534
exit(___);}
#if 0
# 3530
{ 
# 3531
float4 v = __ftexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3533
return make_float4(v.x, v.y, v.z, v.w); 
# 3534
} 
#endif
# 3542 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< char, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3543
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3552
exit(___);}
#if 0
# 3543
{ 
# 3547
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3549
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3551
return w.x; 
# 3552
} 
#endif
# 3554 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< signed char, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3555
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3560
exit(___);}
#if 0
# 3555
{ 
# 3556
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3557
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3559
return w.x; 
# 3560
} 
#endif
# 3562 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned char, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3563
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3568
exit(___);}
#if 0
# 3563
{ 
# 3564
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3565
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3567
return w.x; 
# 3568
} 
#endif
# 3570 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< char1, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3571
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3576
exit(___);}
#if 0
# 3571
{ 
# 3572
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3573
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3575
return make_float1(w.x); 
# 3576
} 
#endif
# 3578 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< uchar1, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3579
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3584
exit(___);}
#if 0
# 3579
{ 
# 3580
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3581
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3583
return make_float1(w.x); 
# 3584
} 
#endif
# 3586 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< char2, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3587
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3592
exit(___);}
#if 0
# 3587
{ 
# 3588
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3589
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3591
return make_float2(w.x, w.y); 
# 3592
} 
#endif
# 3594 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< uchar2, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3595
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3600
exit(___);}
#if 0
# 3595
{ 
# 3596
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3597
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3599
return make_float2(w.x, w.y); 
# 3600
} 
#endif
# 3602 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< char4, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3603
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3608
exit(___);}
#if 0
# 3603
{ 
# 3604
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3605
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3607
return make_float4(w.x, w.y, w.z, w.w); 
# 3608
} 
#endif
# 3610 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< uchar4, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3611
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3616
exit(___);}
#if 0
# 3611
{ 
# 3612
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3613
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3615
return make_float4(w.x, w.y, w.z, w.w); 
# 3616
} 
#endif
# 3624 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< short, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3625
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3630
exit(___);}
#if 0
# 3625
{ 
# 3626
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3627
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3629
return w.x; 
# 3630
} 
#endif
# 3632 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned short, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3633
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3638
exit(___);}
#if 0
# 3633
{ 
# 3634
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3635
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3637
return w.x; 
# 3638
} 
#endif
# 3640 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< short1, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3641
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3646
exit(___);}
#if 0
# 3641
{ 
# 3642
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3643
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3645
return make_float1(w.x); 
# 3646
} 
#endif
# 3648 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< ushort1, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3649
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3654
exit(___);}
#if 0
# 3649
{ 
# 3650
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3651
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3653
return make_float1(w.x); 
# 3654
} 
#endif
# 3656 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< short2, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3657
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3662
exit(___);}
#if 0
# 3657
{ 
# 3658
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3659
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3661
return make_float2(w.x, w.y); 
# 3662
} 
#endif
# 3664 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< ushort2, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3665
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3670
exit(___);}
#if 0
# 3665
{ 
# 3666
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3667
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3669
return make_float2(w.x, w.y); 
# 3670
} 
#endif
# 3672 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< short4, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3673
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3678
exit(___);}
#if 0
# 3673
{ 
# 3674
int4 v = __itexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3675
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3677
return make_float4(w.x, w.y, w.z, w.w); 
# 3678
} 
#endif
# 3680 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< ushort4, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 3681
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3686
exit(___);}
#if 0
# 3681
{ 
# 3682
uint4 v = __utexfetchlc(t, make_float4(x, y, z, 0), layer); 
# 3683
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 3685
return make_float4(w.x, w.y, w.z, w.w); 
# 3686
} 
#endif
# 3780 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3781
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3783
exit(___);}
#if 0
# 3781
{ 
# 3782
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 3783
} 
#endif
# 3785 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3786
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3788
exit(___);}
#if 0
# 3786
{ 
# 3787
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 3788
} 
#endif
# 3790 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3791
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3793
exit(___);}
#if 0
# 3791
{ 
# 3792
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 3793
} 
#endif
# 3795 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3796
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3798
exit(___);}
#if 0
# 3796
{ 
# 3797
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 3798
} 
#endif
# 3800 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3801
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3803
exit(___);}
#if 0
# 3801
{ 
# 3802
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 3803
} 
#endif
# 3805 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3806
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3808
exit(___);}
#if 0
# 3806
{ 
# 3807
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  ; 
# 3808
} 
#endif
# 3810 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3811
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3813
exit(___);}
#if 0
# 3811
{ 
# 3812
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  ; 
# 3813
} 
#endif
# 3815 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3816
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3818
exit(___);}
#if 0
# 3816
{ 
# 3817
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  ; 
# 3818
} 
#endif
# 3820 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3821
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3823
exit(___);}
#if 0
# 3821
{ 
# 3822
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  ; 
# 3823
} 
#endif
# 3825 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3826
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3828
exit(___);}
#if 0
# 3826
{ 
# 3827
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 3828
} 
#endif
# 3830 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3831
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3833
exit(___);}
#if 0
# 3831
{ 
# 3832
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 3833
} 
#endif
# 3835 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3836
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3838
exit(___);}
#if 0
# 3836
{ 
# 3837
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 3838
} 
#endif
# 3840 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3841
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3843
exit(___);}
#if 0
# 3841
{ 
# 3842
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 3843
} 
#endif
# 3845 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3846
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3848
exit(___);}
#if 0
# 3846
{ 
# 3847
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 3848
} 
#endif
# 3850 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3851
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3853
exit(___);}
#if 0
# 3851
{ 
# 3852
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 3853
} 
#endif
# 3855 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3856
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3858
exit(___);}
#if 0
# 3856
{ 
# 3857
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  ; 
# 3858
} 
#endif
# 3860 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3861
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3863
exit(___);}
#if 0
# 3861
{ 
# 3862
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  ; 
# 3863
} 
#endif
# 3865 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3866
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3868
exit(___);}
#if 0
# 3866
{ 
# 3867
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  ; 
# 3868
} 
#endif
# 3870 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3871
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3873
exit(___);}
#if 0
# 3871
{ 
# 3872
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  ; 
# 3873
} 
#endif
# 3875 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3876
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3878
exit(___);}
#if 0
# 3876
{ 
# 3877
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 3878
} 
#endif
# 3880 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3881
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3883
exit(___);}
#if 0
# 3881
{ 
# 3882
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 3883
} 
#endif
# 3885 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3886
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3888
exit(___);}
#if 0
# 3886
{ 
# 3887
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3888
} 
#endif
# 3890 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3891
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3893
exit(___);}
#if 0
# 3891
{ 
# 3892
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3893
} 
#endif
# 3895 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3896
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3898
exit(___);}
#if 0
# 3896
{ 
# 3897
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3898
} 
#endif
# 3900 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3901
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3903
exit(___);}
#if 0
# 3901
{ 
# 3902
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3903
} 
#endif
# 3905 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3906
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3908
exit(___);}
#if 0
# 3906
{ 
# 3907
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 3908
} 
#endif
# 3910 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3911
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3913
exit(___);}
#if 0
# 3911
{ 
# 3912
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 3913
} 
#endif
# 3915 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3916
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3918
exit(___);}
#if 0
# 3916
{ 
# 3917
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 3918
} 
#endif
# 3920 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3921
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3923
exit(___);}
#if 0
# 3921
{ 
# 3922
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 3923
} 
#endif
# 3925 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3926
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3928
exit(___);}
#if 0
# 3926
{ 
# 3927
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 3928
} 
#endif
# 3930 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3931
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3933
exit(___);}
#if 0
# 3931
{ 
# 3932
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 3933
} 
#endif
# 3935 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3936
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3938
exit(___);}
#if 0
# 3936
{ 
# 3937
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3938
} 
#endif
# 3940 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3941
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3943
exit(___);}
#if 0
# 3941
{ 
# 3942
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 3943
} 
#endif
# 3945 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3946
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3948
exit(___);}
#if 0
# 3946
{ 
# 3947
if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 3948
} 
#endif
# 3950 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3951
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3953
exit(___);}
#if 0
# 3951
{ 
# 3952
if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 3953
} 
#endif
# 3955 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 3956
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3958
exit(___);}
#if 0
# 3956
{ 
# 3957
if (comp == 3) { float4 v = __ftex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 3958
} 
#endif
# 3967 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3968
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3970
exit(___);}
#if 0
# 3968
{ 
# 3969
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 3970
} 
#endif
# 3972 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3973
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3975
exit(___);}
#if 0
# 3973
{ 
# 3974
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 3975
} 
#endif
# 3977 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3978
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3980
exit(___);}
#if 0
# 3978
{ 
# 3979
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 3980
} 
#endif
# 3982 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3983
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3985
exit(___);}
#if 0
# 3983
{ 
# 3984
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 3985
} 
#endif
# 3987 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3988
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3990
exit(___);}
#if 0
# 3988
{ 
# 3989
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 3990
} 
#endif
# 3992 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3993
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3995
exit(___);}
#if 0
# 3993
{ 
# 3994
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  ; 
# 3995
} 
#endif
# 3997 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 3998
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4000
exit(___);}
#if 0
# 3998
{ 
# 3999
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  ; 
# 4000
} 
#endif
# 4002 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char3, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4003
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4005
exit(___);}
#if 0
# 4003
{ 
# 4004
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  ; 
# 4005
} 
#endif
# 4007 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar3, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4008
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4010
exit(___);}
#if 0
# 4008
{ 
# 4009
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  ; 
# 4010
} 
#endif
# 4012 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4013
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4015
exit(___);}
#if 0
# 4013
{ 
# 4014
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  }  ; 
# 4015
} 
#endif
# 4017 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4018
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4020
exit(___);}
#if 0
# 4018
{ 
# 4019
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  }  ; 
# 4020
} 
#endif
# 4022 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4023
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4025
exit(___);}
#if 0
# 4023
{ 
# 4024
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 4025
} 
#endif
# 4027 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4028
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4030
exit(___);}
#if 0
# 4028
{ 
# 4029
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 4030
} 
#endif
# 4032 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4033
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4035
exit(___);}
#if 0
# 4033
{ 
# 4034
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 4035
} 
#endif
# 4037 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4038
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4040
exit(___);}
#if 0
# 4038
{ 
# 4039
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } ; 
# 4040
} 
#endif
# 4042 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4043
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4045
exit(___);}
#if 0
# 4043
{ 
# 4044
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  ; 
# 4045
} 
#endif
# 4047 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4048
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4050
exit(___);}
#if 0
# 4048
{ 
# 4049
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  ; 
# 4050
} 
#endif
# 4052 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short3, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4053
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4055
exit(___);}
#if 0
# 4053
{ 
# 4054
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  ; 
# 4055
} 
#endif
# 4057 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort3, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4058
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4060
exit(___);}
#if 0
# 4058
{ 
# 4059
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  ; 
# 4060
} 
#endif
# 4062 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4063
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4065
exit(___);}
#if 0
# 4063
{ 
# 4064
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  }  ; 
# 4065
} 
#endif
# 4067 "/home/bachelor/deicide218/cuda-4.2/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 4068
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4070
exit(___);}
#if 0
# 4068
{ 
# 4069
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); }  }  }  ; 
# 4070
} 
#endif
# 66 "/home/bachelor/deicide218/cuda-4.2/include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; } 
# 67
extern "C" { extern const uint3 blockIdx; } 
# 68
extern "C" { extern const dim3 blockDim; } 
# 69
extern "C" { extern const dim3 gridDim; } 
# 70
extern "C" { extern const int warpSize; } 
# 120 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 121
cudaSetupArgument(T 
# 122
arg, size_t 
# 123
offset) 
# 125
{ 
# 126
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 127
} 
# 159 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 160
event, unsigned 
# 161
flags) 
# 163
{ 
# 164
return cudaEventCreateWithFlags(event, flags); 
# 165
} 
# 222 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 223
ptr, size_t 
# 224
size, unsigned 
# 225
flags) 
# 227
{ 
# 228
return cudaHostAlloc(ptr, size, flags); 
# 229
} 
# 231
template< class T> inline cudaError_t 
# 232
cudaHostAlloc(T **
# 233
ptr, size_t 
# 234
size, unsigned 
# 235
flags) 
# 237
{ 
# 238
return cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 239
} 
# 241
template< class T> inline cudaError_t 
# 242
cudaHostGetDevicePointer(T **
# 243
pDevice, void *
# 244
pHost, unsigned 
# 245
flags) 
# 247
{ 
# 248
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 249
} 
# 251
template< class T> inline cudaError_t 
# 252
cudaMalloc(T **
# 253
devPtr, size_t 
# 254
size) 
# 256
{ 
# 257
return cudaMalloc((void **)((void *)devPtr), size); 
# 258
} 
# 260
template< class T> inline cudaError_t 
# 261
cudaMallocHost(T **
# 262
ptr, size_t 
# 263
size, unsigned 
# 264
flags = (0)) 
# 266
{ 
# 267
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 268
} 
# 270
template< class T> inline cudaError_t 
# 271
cudaMallocPitch(T **
# 272
devPtr, size_t *
# 273
pitch, size_t 
# 274
width, size_t 
# 275
height) 
# 277
{ 
# 278
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 279
} 
# 289 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 290
symbol, const void *
# 291
src, size_t 
# 292
count, size_t 
# 293
offset = (0), cudaMemcpyKind 
# 294
kind = cudaMemcpyHostToDevice) 
# 296
{ 
# 297
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
# 298
} 
# 300
template< class T> inline cudaError_t 
# 301
cudaMemcpyToSymbol(const T &
# 302
symbol, const void *
# 303
src, size_t 
# 304
count, size_t 
# 305
offset = (0), cudaMemcpyKind 
# 306
kind = cudaMemcpyHostToDevice) 
# 308
{ 
# 309
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
# 310
} 
# 312
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 313
symbol, const void *
# 314
src, size_t 
# 315
count, size_t 
# 316
offset = (0), cudaMemcpyKind 
# 317
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 318
stream = 0) 
# 320
{ 
# 321
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
# 322
} 
# 324
template< class T> inline cudaError_t 
# 325
cudaMemcpyToSymbolAsync(const T &
# 326
symbol, const void *
# 327
src, size_t 
# 328
count, size_t 
# 329
offset = (0), cudaMemcpyKind 
# 330
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 331
stream = 0) 
# 333
{ 
# 334
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
# 335
} 
# 343
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 344
dst, char *
# 345
symbol, size_t 
# 346
count, size_t 
# 347
offset = (0), cudaMemcpyKind 
# 348
kind = cudaMemcpyDeviceToHost) 
# 350
{ 
# 351
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
# 352
} 
# 354
template< class T> inline cudaError_t 
# 355
cudaMemcpyFromSymbol(void *
# 356
dst, const T &
# 357
symbol, size_t 
# 358
count, size_t 
# 359
offset = (0), cudaMemcpyKind 
# 360
kind = cudaMemcpyDeviceToHost) 
# 362
{ 
# 363
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
# 364
} 
# 366
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 367
dst, char *
# 368
symbol, size_t 
# 369
count, size_t 
# 370
offset = (0), cudaMemcpyKind 
# 371
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 372
stream = 0) 
# 374
{ 
# 375
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
# 376
} 
# 378
template< class T> inline cudaError_t 
# 379
cudaMemcpyFromSymbolAsync(void *
# 380
dst, const T &
# 381
symbol, size_t 
# 382
count, size_t 
# 383
offset = (0), cudaMemcpyKind 
# 384
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 385
stream = 0) 
# 387
{ 
# 388
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
# 389
} 
# 391
static inline cudaError_t cudaGetSymbolAddress(void **
# 392
devPtr, char *
# 393
symbol) 
# 395
{ 
# 396
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
# 397
} 
# 424 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 425
cudaGetSymbolAddress(void **
# 426
devPtr, const T &
# 427
symbol) 
# 429
{ 
# 430
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
# 431
} 
# 439
static inline cudaError_t cudaGetSymbolSize(size_t *
# 440
size, char *
# 441
symbol) 
# 443
{ 
# 444
return cudaGetSymbolSize(size, (const char *)symbol); 
# 445
} 
# 472 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 473
cudaGetSymbolSize(size_t *
# 474
size, const T &
# 475
symbol) 
# 477
{ 
# 478
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
# 479
} 
# 521 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 522
cudaBindTexture(size_t *
# 523
offset, const texture< T, dim, readMode>  &
# 524
tex, const void *
# 525
devPtr, const cudaChannelFormatDesc &
# 526
desc, size_t 
# 527
size = (((2147483647) * 2U) + 1U)) 
# 529
{ 
# 530
return cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 531
} 
# 566 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 567
cudaBindTexture(size_t *
# 568
offset, const texture< T, dim, readMode>  &
# 569
tex, const void *
# 570
devPtr, size_t 
# 571
size = (((2147483647) * 2U) + 1U)) 
# 573
{ 
# 574
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 575
} 
# 622 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 623
cudaBindTexture2D(size_t *
# 624
offset, const texture< T, dim, readMode>  &
# 625
tex, const void *
# 626
devPtr, const cudaChannelFormatDesc &
# 627
desc, size_t 
# 628
width, size_t 
# 629
height, size_t 
# 630
pitch) 
# 632
{ 
# 633
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 634
} 
# 680 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 681
cudaBindTexture2D(size_t *
# 682
offset, const texture< T, dim, readMode>  &
# 683
tex, const void *
# 684
devPtr, size_t 
# 685
width, size_t 
# 686
height, size_t 
# 687
pitch) 
# 689
{ 
# 690
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch); 
# 691
} 
# 722 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 723
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 724
tex, const cudaArray *
# 725
array, const cudaChannelFormatDesc &
# 726
desc) 
# 728
{ 
# 729
return cudaBindTextureToArray(&tex, array, &desc); 
# 730
} 
# 760 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 761
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 762
tex, const cudaArray *
# 763
array) 
# 765
{ 
# 766
cudaChannelFormatDesc desc; 
# 767
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 769
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 770
} 
# 799 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 800
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 801
tex) 
# 803
{ 
# 804
return cudaUnbindTexture(&tex); 
# 805
} 
# 839 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 840
cudaGetTextureAlignmentOffset(size_t *
# 841
offset, const texture< T, dim, readMode>  &
# 842
tex) 
# 844
{ 
# 845
return cudaGetTextureAlignmentOffset(offset, &tex); 
# 846
} 
# 900 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 901
cudaFuncSetCacheConfig(T *
# 902
func, cudaFuncCache 
# 903
cacheConfig) 
# 905
{ 
# 906
return cudaFuncSetCacheConfig((const char *)func, cacheConfig); 
# 907
} 
# 909
template< class T> inline cudaError_t 
# 910
cudaFuncSetSharedMemConfig(T *
# 911
func, cudaSharedMemConfig 
# 912
config) 
# 914
{ 
# 915
return cudaFuncSetSharedMemConfig((const char *)func, config); 
# 916
} 
# 953 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 954
cudaLaunch(T *
# 955
entry) 
# 957
{ 
# 958
return cudaLaunch((const char *)entry); 
# 959
} 
# 993 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 994
cudaFuncGetAttributes(cudaFuncAttributes *
# 995
attr, T *
# 996
entry) 
# 998
{ 
# 999
return cudaFuncGetAttributes(attr, (const char *)entry); 
# 1000
} 
# 1022 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t 
# 1023
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1024
surf, const cudaArray *
# 1025
array, const cudaChannelFormatDesc &
# 1026
desc) 
# 1028
{ 
# 1029
return cudaBindSurfaceToArray(&surf, array, &desc); 
# 1030
} 
# 1051 "/home/bachelor/deicide218/cuda-4.2/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t 
# 1052
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1053
surf, const cudaArray *
# 1054
array) 
# 1056
{ 
# 1057
cudaChannelFormatDesc desc; 
# 1058
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 1060
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 1061
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
extern "C" { typedef short _G_int16_t __attribute((__mode__(__HI__))); }
# 54
extern "C" { typedef int _G_int32_t __attribute((__mode__(__SI__))); }
# 55
extern "C" { typedef unsigned short _G_uint16_t __attribute((__mode__(__HI__))); }
# 56
extern "C" { typedef unsigned _G_uint32_t __attribute((__mode__(__SI__))); }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE; 
# 180 "/usr/include/libio.h" 3
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
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)]; 
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
extern "C" { typedef __ssize_t __io_read_fn(void * , char * , size_t ); }
# 372
extern "C" { typedef __ssize_t __io_write_fn(void * , const char * , size_t ); }
# 381
extern "C" { typedef int __io_seek_fn(void * , __off64_t * , int ); }
# 384
extern "C" { typedef int __io_close_fn(void * ); }
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
extern "C" void _IO_cookie_init(_IO_cookie_file * , int , void * , _IO_cookie_io_functions_t ); 
# 416
extern "C" int __underflow(_IO_FILE *); 
# 417
extern "C" int __uflow(_IO_FILE *); 
# 418
extern "C" int __overflow(_IO_FILE *, int); 
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE * ); 
# 461
extern "C" int _IO_putc(int , _IO_FILE * ); 
# 462
extern "C" int _IO_feof(_IO_FILE * ) throw(); 
# 463
extern "C" int _IO_ferror(_IO_FILE * ) throw(); 
# 465
extern "C" int _IO_peekc_locked(_IO_FILE * ); 
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
extern "C" int remove(const char * ) throw(); 
# 177
extern "C" int rename(const char * , const char * ) throw(); 
# 182
extern "C" int renameat(int , const char * , int , const char * ) throw(); 
# 192
extern "C" FILE *tmpfile(); 
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64(); 
# 206
extern "C" char *tmpnam(char * ) throw(); 
# 212
extern "C" char *tmpnam_r(char * ) throw(); 
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char * , const char * ) throw()
# 225
 __attribute((__malloc__)); 
# 234
extern "C" int fclose(FILE * ); 
# 239
extern "C" int fflush(FILE * ); 
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE * ); 
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall(); 
# 269
extern "C" FILE *fopen(const char *__restrict__ , const char *__restrict__ ); 
# 275
extern "C" FILE *freopen(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ ); 
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__ , const char *__restrict__ ); 
# 296
extern "C" FILE *freopen64(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ ); 
# 303
extern "C" FILE *fdopen(int , const char * ) throw(); 
# 309
extern "C" FILE *fopencookie(void *__restrict__ , const char *__restrict__ , _IO_cookie_io_functions_t ) throw(); 
# 316
extern "C" FILE *fmemopen(void * , size_t , const char * ) throw(); 
# 322
extern "C" FILE *open_memstream(char ** , size_t * ) throw(); 
# 329
extern "C" void setbuf(FILE *__restrict__ , char *__restrict__ ) throw(); 
# 333
extern "C" int setvbuf(FILE *__restrict__ , char *__restrict__ , int , size_t ) throw(); 
# 340
extern "C" void setbuffer(FILE *__restrict__ , char *__restrict__ , size_t ) throw(); 
# 344
extern "C" void setlinebuf(FILE * ) throw(); 
# 353
extern "C" int fprintf(FILE *__restrict__ , const char *__restrict__ , ...); 
# 359
extern "C" int printf(const char *__restrict__ , ...); 
# 361
extern "C" int sprintf(char *__restrict__ , const char *__restrict__ , ...) throw(); 
# 368
extern "C" int vfprintf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list ); 
# 374
extern "C" { extern __attribute((gnu_inline)) inline int vprintf(const char *__restrict__ , __gnuc_va_list ); } 
# 376
extern "C" int vsprintf(char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw(); 
# 383
extern "C" int snprintf(char *__restrict__ , size_t , const char *__restrict__ , ...) throw()
# 385
 __attribute((__format__(__printf__, 3, 4))); 
# 387
extern "C" int vsnprintf(char *__restrict__ , size_t , const char *__restrict__ , __gnuc_va_list ) throw()
# 389
 __attribute((__format__(__printf__, 3, 0))); 
# 396
extern "C" int vasprintf(char **__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 398
 __attribute((__format__(__printf__, 2, 0))); 
# 399
extern "C" int __asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 401
 __attribute((__format__(__printf__, 2, 3))); 
# 402
extern "C" int asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 404
 __attribute((__format__(__printf__, 2, 3))); 
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int , const char *__restrict__ , __gnuc_va_list )
# 416
 __attribute((__format__(__printf__, 2, 0))); 
# 417
extern "C" int dprintf(int , const char *__restrict__ , ...)
# 418
 __attribute((__format__(__printf__, 2, 3))); 
# 427
extern "C" int fscanf(FILE *__restrict__ , const char *__restrict__ , ...); 
# 433
extern "C" int scanf(const char *__restrict__ , ...); 
# 435
extern "C" int sscanf(const char *__restrict__ , const char *__restrict__ , ...) throw(); 
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list )
# 475
 __attribute((__format__(__scanf__, 2, 0))); 
# 481
extern "C" int vscanf(const char *__restrict__ , __gnuc_va_list )
# 482
 __attribute((__format__(__scanf__, 1, 0))); 
# 485
extern "C" int vsscanf(const char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 487
 __attribute((__format__(__scanf__, 2, 0))); 
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE * ); 
# 534
extern "C" int getc(FILE * ); 
# 540
extern "C" { extern __attribute((gnu_inline)) inline int getchar(); } 
# 552 "/usr/include/stdio.h" 3
extern "C" { extern __attribute((gnu_inline)) inline int getc_unlocked(FILE * ); } 
# 553
extern "C" { extern __attribute((gnu_inline)) inline int getchar_unlocked(); } 
# 563 "/usr/include/stdio.h" 3
extern "C" { extern __attribute((gnu_inline)) inline int fgetc_unlocked(FILE * ); } 
# 575
extern "C" int fputc(int , FILE * ); 
# 576
extern "C" int putc(int , FILE * ); 
# 582
extern "C" { extern __attribute((gnu_inline)) inline int putchar(int ); } 
# 596 "/usr/include/stdio.h" 3
extern "C" { extern __attribute((gnu_inline)) inline int fputc_unlocked(int , FILE * ); } 
# 604
extern "C" { extern __attribute((gnu_inline)) inline int putc_unlocked(int , FILE * ); } 
# 605
extern "C" { extern __attribute((gnu_inline)) inline int putchar_unlocked(int ); } 
# 612
extern "C" int getw(FILE * ); 
# 615
extern "C" int putw(int , FILE * ); 
# 624
extern "C" char *fgets(char *__restrict__ , int , FILE *__restrict__ ); 
# 632
extern "C" char *gets(char * ); 
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__ , int , FILE *__restrict__ ); 
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ ); 
# 661
extern "C" __ssize_t getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ ); 
# 671
extern "C" { extern __attribute((gnu_inline)) inline __ssize_t getline(char **__restrict__ , size_t *__restrict__ , FILE *__restrict__ ); } 
# 682
extern "C" int fputs(const char *__restrict__ , FILE *__restrict__ ); 
# 688
extern "C" int puts(const char * ); 
# 695
extern "C" int ungetc(int , FILE * ); 
# 702
extern "C" size_t fread(void *__restrict__ , size_t , size_t , FILE *__restrict__ ); 
# 708
extern "C" size_t fwrite(const void *__restrict__ , size_t , size_t , FILE *__restrict__ ); 
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__ , FILE *__restrict__ ); 
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__ , size_t , size_t , FILE *__restrict__ ); 
# 732
extern "C" size_t fwrite_unlocked(const void *__restrict__ , size_t , size_t , FILE *__restrict__ ); 
# 742
extern "C" int fseek(FILE * , long , int ); 
# 747
extern "C" long ftell(FILE * ); 
# 752
extern "C" void rewind(FILE * ); 
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE * , __off_t , int ); 
# 771
extern "C" __off_t ftello(FILE * ); 
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__ , fpos_t *__restrict__ ); 
# 796
extern "C" int fsetpos(FILE * , const fpos_t * ); 
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE * , __off64_t , int ); 
# 812
extern "C" __off64_t ftello64(FILE * ); 
# 813
extern "C" int fgetpos64(FILE *__restrict__ , fpos64_t *__restrict__ ); 
# 814
extern "C" int fsetpos64(FILE * , const fpos64_t * ); 
# 819
extern "C" void clearerr(FILE * ) throw(); 
# 821
extern "C" int feof(FILE * ) throw(); 
# 823
extern "C" int ferror(FILE * ) throw(); 
# 828
extern "C" void clearerr_unlocked(FILE * ) throw(); 
# 829
extern "C" { extern __attribute((gnu_inline)) inline int feof_unlocked(FILE * ) throw(); } 
# 830
extern "C" { extern __attribute((gnu_inline)) inline int ferror_unlocked(FILE * ) throw(); } 
# 839
extern "C" void perror(const char * ); 
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; } 
# 28
extern "C" { extern const char *const sys_errlist[]; } 
# 31
extern "C" { extern int _sys_nerr; } 
# 32
extern "C" { extern const char *const _sys_errlist[]; } 
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE * ) throw(); 
# 856
extern "C" int fileno_unlocked(FILE * ) throw(); 
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char * , const char * ); 
# 872
extern "C" int pclose(FILE * ); 
# 878
extern "C" char *ctermid(char * ) throw(); 
# 884
extern "C" char *cuserid(char * ); 
# 889
struct obstack; 
# 892
extern "C" int obstack_printf(obstack *__restrict__ , const char *__restrict__ , ...) throw()
# 894
 __attribute((__format__(__printf__, 2, 3))); 
# 895
extern "C" int obstack_vprintf(obstack *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 898
 __attribute((__format__(__printf__, 2, 0))); 
# 906
extern "C" void flockfile(FILE * ) throw(); 
# 910
extern "C" int ftrylockfile(FILE * ) throw(); 
# 913
extern "C" void funlockfile(FILE * ) throw(); 
# 37 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3
extern "C" { 
# 36
__attribute((__gnu_inline__)) inline int 
# 37
vprintf(const char *__restrict__ __fmt, __gnuc_va_list __arg) 
# 38
{ 
# 39
return vfprintf(stdout, __fmt, __arg); 
# 40
} } 
# 45
extern "C" { 
# 44
__attribute((__gnu_inline__)) inline int 
# 45
getchar() 
# 46
{ 
# 47
return _IO_getc(stdin); 
# 48
} } 
# 54
extern "C" { 
# 53
__attribute((__gnu_inline__)) inline int 
# 54
fgetc_unlocked(FILE *__fp) 
# 55
{ 
# 56
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
# 57
} } 
# 64
extern "C" { 
# 63
__attribute((__gnu_inline__)) inline int 
# 64
getc_unlocked(FILE *__fp) 
# 65
{ 
# 66
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
# 67
} } 
# 71
extern "C" { 
# 70
__attribute((__gnu_inline__)) inline int 
# 71
getchar_unlocked() 
# 72
{ 
# 73
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++))); 
# 74
} } 
# 80
extern "C" { 
# 79
__attribute((__gnu_inline__)) inline int 
# 80
putchar(int __c) 
# 81
{ 
# 82
return _IO_putc(__c, stdout); 
# 83
} } 
# 89
extern "C" { 
# 88
__attribute((__gnu_inline__)) inline int 
# 89
fputc_unlocked(int __c, FILE *__stream) 
# 90
{ 
# 91
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c)); 
# 92
} } 
# 99
extern "C" { 
# 98
__attribute((__gnu_inline__)) inline int 
# 99
putc_unlocked(int __c, FILE *__stream) 
# 100
{ 
# 101
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c)); 
# 102
} } 
# 106
extern "C" { 
# 105
__attribute((__gnu_inline__)) inline int 
# 106
putchar_unlocked(int __c) 
# 107
{ 
# 108
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c)); 
# 109
} } 
# 116
extern "C" { 
# 115
__attribute((__gnu_inline__)) inline __ssize_t 
# 116
getline(char **__lineptr, size_t *__n, FILE *__stream) 
# 117
{ 
# 118
return __getdelim(__lineptr, __n, '\n', __stream); 
# 119
} } 
# 126
extern "C" { 
# 125
__attribute((__gnu_inline__)) inline int 
# 126
feof_unlocked(FILE *__stream) throw() 
# 127
{ 
# 128
return ((__stream->_flags) & 16) != 0; 
# 129
} } 
# 133
extern "C" { 
# 132
__attribute((__gnu_inline__)) inline int 
# 133
ferror_unlocked(FILE *__stream) throw() 
# 134
{ 
# 135
return ((__stream->_flags) & 32) != 0; 
# 136
} } 
# 157 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 164
extern "C" { typedef int CUdevice; }
# 165
extern "C" { typedef struct CUctx_st *CUcontext; }
# 166
extern "C" { typedef struct CUmod_st *CUmodule; }
# 167
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 168
extern "C" { typedef struct CUarray_st *CUarray; }
# 169
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 170
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 171
extern "C" { typedef CUevent_st *CUevent; }
# 172
extern "C" { typedef CUstream_st *CUstream; }
# 173
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 177
extern "C" { typedef 
# 175
struct CUuuid_st { 
# 176
char bytes[16]; 
# 177
} CUuuid; }
# 189 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef 
# 187
struct CUipcEventHandle_st { 
# 188
char reserved[64]; 
# 189
} CUipcEventHandle; }
# 193
extern "C" { typedef 
# 191
struct CUipcMemHandle_st { 
# 192
char reserved[64]; 
# 193
} CUipcMemHandle; }
# 197
extern "C" { typedef 
# 195
enum CUipcMem_flags_enum { 
# 196
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1
# 197
} CUipcMem_flags; }
# 216
extern "C" { typedef 
# 204
enum CUctx_flags_enum { 
# 205
CU_CTX_SCHED_AUTO, 
# 206
CU_CTX_SCHED_SPIN, 
# 207
CU_CTX_SCHED_YIELD, 
# 208
CU_CTX_SCHED_BLOCKING_SYNC = 4, 
# 209
CU_CTX_BLOCKING_SYNC = 4, 
# 212
CU_CTX_SCHED_MASK = 7, 
# 213
CU_CTX_MAP_HOST, 
# 214
CU_CTX_LMEM_RESIZE_TO_MAX = 16, 
# 215
CU_CTX_FLAGS_MASK = 31
# 216
} CUctx_flags; }
# 226
extern "C" { typedef 
# 221
enum CUevent_flags_enum { 
# 222
CU_EVENT_DEFAULT, 
# 223
CU_EVENT_BLOCKING_SYNC, 
# 224
CU_EVENT_DISABLE_TIMING, 
# 225
CU_EVENT_INTERPROCESS = 4
# 226
} CUevent_flags; }
# 240
extern "C" { typedef 
# 231
enum CUarray_format_enum { 
# 232
CU_AD_FORMAT_UNSIGNED_INT8 = 1, 
# 233
CU_AD_FORMAT_UNSIGNED_INT16, 
# 234
CU_AD_FORMAT_UNSIGNED_INT32, 
# 235
CU_AD_FORMAT_SIGNED_INT8 = 8, 
# 236
CU_AD_FORMAT_SIGNED_INT16, 
# 237
CU_AD_FORMAT_SIGNED_INT32, 
# 238
CU_AD_FORMAT_HALF = 16, 
# 239
CU_AD_FORMAT_FLOAT = 32
# 240
} CUarray_format; }
# 250
extern "C" { typedef 
# 245
enum CUaddress_mode_enum { 
# 246
CU_TR_ADDRESS_MODE_WRAP, 
# 247
CU_TR_ADDRESS_MODE_CLAMP, 
# 248
CU_TR_ADDRESS_MODE_MIRROR, 
# 249
CU_TR_ADDRESS_MODE_BORDER
# 250
} CUaddress_mode; }
# 258
extern "C" { typedef 
# 255
enum CUfilter_mode_enum { 
# 256
CU_TR_FILTER_MODE_POINT, 
# 257
CU_TR_FILTER_MODE_LINEAR
# 258
} CUfilter_mode; }
# 341
extern "C" { typedef 
# 263
enum CUdevice_attribute_enum { 
# 264
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1, 
# 265
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X, 
# 266
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y, 
# 267
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z, 
# 268
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X, 
# 269
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y, 
# 270
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z, 
# 271
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK, 
# 272
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8, 
# 273
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY, 
# 274
CU_DEVICE_ATTRIBUTE_WARP_SIZE, 
# 275
CU_DEVICE_ATTRIBUTE_MAX_PITCH, 
# 276
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK, 
# 277
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12, 
# 278
CU_DEVICE_ATTRIBUTE_CLOCK_RATE, 
# 279
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT, 
# 280
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP, 
# 281
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, 
# 282
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT, 
# 283
CU_DEVICE_ATTRIBUTE_INTEGRATED, 
# 284
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY, 
# 285
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE, 
# 286
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH, 
# 287
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH, 
# 288
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT, 
# 289
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH, 
# 290
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT, 
# 291
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH, 
# 292
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH, 
# 293
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT, 
# 294
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS, 
# 295
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27, 
# 296
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT, 
# 297
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES, 
# 298
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT, 
# 299
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS, 
# 300
CU_DEVICE_ATTRIBUTE_ECC_ENABLED, 
# 301
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID, 
# 302
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID, 
# 303
CU_DEVICE_ATTRIBUTE_TCC_DRIVER, 
# 304
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE, 
# 305
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH, 
# 306
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE, 
# 307
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR, 
# 308
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT, 
# 309
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING, 
# 310
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH, 
# 311
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS, 
# 312
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER, 
# 313
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH, 
# 314
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT, 
# 315
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE, 
# 316
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE, 
# 317
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE, 
# 318
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID, 
# 319
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT, 
# 320
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH, 
# 321
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH, 
# 322
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS, 
# 323
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH, 
# 324
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH, 
# 325
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT, 
# 326
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH, 
# 327
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT, 
# 328
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH, 
# 329
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH, 
# 330
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS, 
# 331
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH, 
# 332
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT, 
# 333
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS, 
# 334
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH, 
# 335
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH, 
# 336
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS, 
# 337
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH, 
# 338
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH, 
# 339
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT, 
# 340
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH
# 341
} CUdevice_attribute; }
# 357
extern "C" { typedef 
# 346
struct CUdevprop_st { 
# 347
int maxThreadsPerBlock; 
# 348
int maxThreadsDim[3]; 
# 349
int maxGridSize[3]; 
# 350
int sharedMemPerBlock; 
# 351
int totalConstantMemory; 
# 352
int SIMDWidth; 
# 353
int memPitch; 
# 354
int regsPerBlock; 
# 355
int clockRate; 
# 356
int textureAlign; 
# 357
} CUdevprop; }
# 367
extern "C" { typedef 
# 362
enum CUpointer_attribute_enum { 
# 363
CU_POINTER_ATTRIBUTE_CONTEXT = 1, 
# 364
CU_POINTER_ATTRIBUTE_MEMORY_TYPE, 
# 365
CU_POINTER_ATTRIBUTE_DEVICE_POINTER, 
# 366
CU_POINTER_ATTRIBUTE_HOST_POINTER
# 367
} CUpointer_attribute; }
# 422 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef 
# 372 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUfunction_attribute_enum { 
# 378
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK, 
# 385
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES, 
# 391
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES, 
# 396
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES, 
# 401
CU_FUNC_ATTRIBUTE_NUM_REGS, 
# 410 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION, 
# 419 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION, 
# 421
CU_FUNC_ATTRIBUTE_MAX
# 422
} CUfunction_attribute; }
# 432
extern "C" { typedef 
# 427
enum CUfunc_cache_enum { 
# 428
CU_FUNC_CACHE_PREFER_NONE, 
# 429
CU_FUNC_CACHE_PREFER_SHARED, 
# 430
CU_FUNC_CACHE_PREFER_L1, 
# 431
CU_FUNC_CACHE_PREFER_EQUAL
# 432
} CUfunc_cache; }
# 441
extern "C" { typedef 
# 437
enum CUsharedconfig_enum { 
# 438
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE, 
# 439
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE, 
# 440
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE
# 441
} CUsharedconfig; }
# 451
extern "C" { typedef 
# 446
enum CUmemorytype_enum { 
# 447
CU_MEMORYTYPE_HOST = 1, 
# 448
CU_MEMORYTYPE_DEVICE, 
# 449
CU_MEMORYTYPE_ARRAY, 
# 450
CU_MEMORYTYPE_UNIFIED
# 451
} CUmemorytype; }
# 461
extern "C" { typedef 
# 456
enum CUcomputemode_enum { 
# 457
CU_COMPUTEMODE_DEFAULT, 
# 458
CU_COMPUTEMODE_EXCLUSIVE, 
# 459
CU_COMPUTEMODE_PROHIBITED, 
# 460
CU_COMPUTEMODE_EXCLUSIVE_PROCESS
# 461
} CUcomputemode; }
# 553 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef 
# 466 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum CUjit_option_enum { 
# 472
CU_JIT_MAX_REGISTERS, 
# 485 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CU_JIT_THREADS_PER_BLOCK, 
# 492
CU_JIT_WALL_TIME, 
# 500
CU_JIT_INFO_LOG_BUFFER, 
# 508
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES, 
# 516
CU_JIT_ERROR_LOG_BUFFER, 
# 524
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES, 
# 531
CU_JIT_OPTIMIZATION_LEVEL, 
# 538
CU_JIT_TARGET_FROM_CUCONTEXT, 
# 544
CU_JIT_TARGET, 
# 551
CU_JIT_FALLBACK_STRATEGY
# 553
} CUjit_option; }
# 567
extern "C" { typedef 
# 558
enum CUjit_target_enum { 
# 560
CU_TARGET_COMPUTE_10, 
# 561
CU_TARGET_COMPUTE_11, 
# 562
CU_TARGET_COMPUTE_12, 
# 563
CU_TARGET_COMPUTE_13, 
# 564
CU_TARGET_COMPUTE_20, 
# 565
CU_TARGET_COMPUTE_21, 
# 566
CU_TARGET_COMPUTE_30
# 567
} CUjit_target; }
# 578
extern "C" { typedef 
# 572
enum CUjit_fallback_enum { 
# 574
CU_PREFER_PTX, 
# 576
CU_PREFER_BINARY
# 578
} CUjit_fallback; }
# 589
extern "C" { typedef 
# 583
enum CUgraphicsRegisterFlags_enum { 
# 584
CU_GRAPHICS_REGISTER_FLAGS_NONE, 
# 585
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY, 
# 586
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD, 
# 587
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4, 
# 588
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8
# 589
} CUgraphicsRegisterFlags; }
# 598
extern "C" { typedef 
# 594
enum CUgraphicsMapResourceFlags_enum { 
# 595
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE, 
# 596
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY, 
# 597
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 598
} CUgraphicsMapResourceFlags; }
# 610
extern "C" { typedef 
# 603
enum CUarray_cubemap_face_enum { 
# 604
CU_CUBEMAP_FACE_POSITIVE_X, 
# 605
CU_CUBEMAP_FACE_NEGATIVE_X, 
# 606
CU_CUBEMAP_FACE_POSITIVE_Y, 
# 607
CU_CUBEMAP_FACE_NEGATIVE_Y, 
# 608
CU_CUBEMAP_FACE_POSITIVE_Z, 
# 609
CU_CUBEMAP_FACE_NEGATIVE_Z
# 610
} CUarray_cubemap_face; }
# 619
extern "C" { typedef 
# 615
enum CUlimit_enum { 
# 616
CU_LIMIT_STACK_SIZE, 
# 617
CU_LIMIT_PRINTF_FIFO_SIZE, 
# 618
CU_LIMIT_MALLOC_HEAP_SIZE
# 619
} CUlimit; }
# 928 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef 
# 624 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
enum cudaError_enum { 
# 630
CUDA_SUCCESS, 
# 636
CUDA_ERROR_INVALID_VALUE, 
# 642
CUDA_ERROR_OUT_OF_MEMORY, 
# 648
CUDA_ERROR_NOT_INITIALIZED, 
# 653
CUDA_ERROR_DEINITIALIZED, 
# 659
CUDA_ERROR_PROFILER_DISABLED, 
# 664
CUDA_ERROR_PROFILER_NOT_INITIALIZED, 
# 669
CUDA_ERROR_PROFILER_ALREADY_STARTED, 
# 674
CUDA_ERROR_PROFILER_ALREADY_STOPPED, 
# 679
CUDA_ERROR_NO_DEVICE = 100, 
# 685
CUDA_ERROR_INVALID_DEVICE, 
# 692
CUDA_ERROR_INVALID_IMAGE = 200, 
# 702 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT, 
# 711 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT, 
# 716
CUDA_ERROR_MAP_FAILED = 205, 
# 721
CUDA_ERROR_UNMAP_FAILED, 
# 727
CUDA_ERROR_ARRAY_IS_MAPPED, 
# 732
CUDA_ERROR_ALREADY_MAPPED, 
# 740
CUDA_ERROR_NO_BINARY_FOR_GPU, 
# 745
CUDA_ERROR_ALREADY_ACQUIRED, 
# 750
CUDA_ERROR_NOT_MAPPED, 
# 756
CUDA_ERROR_NOT_MAPPED_AS_ARRAY, 
# 762
CUDA_ERROR_NOT_MAPPED_AS_POINTER, 
# 768
CUDA_ERROR_ECC_UNCORRECTABLE, 
# 774
CUDA_ERROR_UNSUPPORTED_LIMIT, 
# 781
CUDA_ERROR_CONTEXT_ALREADY_IN_USE, 
# 786
CUDA_ERROR_INVALID_SOURCE = 300, 
# 791
CUDA_ERROR_FILE_NOT_FOUND, 
# 796
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND, 
# 801
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED, 
# 806
CUDA_ERROR_OPERATING_SYSTEM, 
# 813
CUDA_ERROR_INVALID_HANDLE = 400, 
# 820
CUDA_ERROR_NOT_FOUND = 500, 
# 829 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_NOT_READY = 600, 
# 840 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700, 
# 851 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES, 
# 862 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT, 
# 868
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING, 
# 875
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED, 
# 882
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED, 
# 888
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708, 
# 895
CUDA_ERROR_CONTEXT_IS_DESTROYED, 
# 903
CUDA_ERROR_ASSERT, 
# 910
CUDA_ERROR_TOO_MANY_PEERS, 
# 916
CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED, 
# 922
CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED, 
# 927
CUDA_ERROR_UNKNOWN = 999
# 928
} CUresult; }
# 990 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" { typedef 
# 969
struct CUDA_MEMCPY2D_st { 
# 970
size_t srcXInBytes; 
# 971
size_t srcY; 
# 973
CUmemorytype srcMemoryType; 
# 974
const void *srcHost; 
# 975
CUdeviceptr srcDevice; 
# 976
CUarray srcArray; 
# 977
size_t srcPitch; 
# 979
size_t dstXInBytes; 
# 980
size_t dstY; 
# 982
CUmemorytype dstMemoryType; 
# 983
void *dstHost; 
# 984
CUdeviceptr dstDevice; 
# 985
CUarray dstArray; 
# 986
size_t dstPitch; 
# 988
size_t WidthInBytes; 
# 989
size_t Height; 
# 990
} CUDA_MEMCPY2D; }
# 1023
extern "C" { typedef 
# 995
struct CUDA_MEMCPY3D_st { 
# 996
size_t srcXInBytes; 
# 997
size_t srcY; 
# 998
size_t srcZ; 
# 999
size_t srcLOD; 
# 1000
CUmemorytype srcMemoryType; 
# 1001
const void *srcHost; 
# 1002
CUdeviceptr srcDevice; 
# 1003
CUarray srcArray; 
# 1004
void *reserved0; 
# 1005
size_t srcPitch; 
# 1006
size_t srcHeight; 
# 1008
size_t dstXInBytes; 
# 1009
size_t dstY; 
# 1010
size_t dstZ; 
# 1011
size_t dstLOD; 
# 1012
CUmemorytype dstMemoryType; 
# 1013
void *dstHost; 
# 1014
CUdeviceptr dstDevice; 
# 1015
CUarray dstArray; 
# 1016
void *reserved1; 
# 1017
size_t dstPitch; 
# 1018
size_t dstHeight; 
# 1020
size_t WidthInBytes; 
# 1021
size_t Height; 
# 1022
size_t Depth; 
# 1023
} CUDA_MEMCPY3D; }
# 1056
extern "C" { typedef 
# 1028
struct CUDA_MEMCPY3D_PEER_st { 
# 1029
size_t srcXInBytes; 
# 1030
size_t srcY; 
# 1031
size_t srcZ; 
# 1032
size_t srcLOD; 
# 1033
CUmemorytype srcMemoryType; 
# 1034
const void *srcHost; 
# 1035
CUdeviceptr srcDevice; 
# 1036
CUarray srcArray; 
# 1037
CUcontext srcContext; 
# 1038
size_t srcPitch; 
# 1039
size_t srcHeight; 
# 1041
size_t dstXInBytes; 
# 1042
size_t dstY; 
# 1043
size_t dstZ; 
# 1044
size_t dstLOD; 
# 1045
CUmemorytype dstMemoryType; 
# 1046
void *dstHost; 
# 1047
CUdeviceptr dstDevice; 
# 1048
CUarray dstArray; 
# 1049
CUcontext dstContext; 
# 1050
size_t dstPitch; 
# 1051
size_t dstHeight; 
# 1053
size_t WidthInBytes; 
# 1054
size_t Height; 
# 1055
size_t Depth; 
# 1056
} CUDA_MEMCPY3D_PEER; }
# 1068
extern "C" { typedef 
# 1061
struct CUDA_ARRAY_DESCRIPTOR_st { 
# 1063
size_t Width; 
# 1064
size_t Height; 
# 1066
CUarray_format Format; 
# 1067
unsigned NumChannels; 
# 1068
} CUDA_ARRAY_DESCRIPTOR; }
# 1082
extern "C" { typedef 
# 1073
struct CUDA_ARRAY3D_DESCRIPTOR_st { 
# 1075
size_t Width; 
# 1076
size_t Height; 
# 1077
size_t Depth; 
# 1079
CUarray_format Format; 
# 1080
unsigned NumChannels; 
# 1081
unsigned Flags; 
# 1082
} CUDA_ARRAY3D_DESCRIPTOR; }
# 1209 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuInit(unsigned ); 
# 1236 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int * ); 
# 1274 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice * , int ); 
# 1300 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int * ); 
# 1329 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetName(char * , int , CUdevice ); 
# 1358 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int * , int * , CUdevice ); 
# 1386 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t * , CUdevice ); 
# 1446 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop * , CUdevice ); 
# 1611 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int * , CUdevice_attribute , CUdevice ); 
# 1711 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext * , unsigned , CUdevice ); 
# 1750 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxDestroy_v2(CUcontext ); 
# 1800 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext * , unsigned ); 
# 1835 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext ); 
# 1871 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxPushCurrent_v2(CUcontext ); 
# 1904 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxPopCurrent_v2(CUcontext * ); 
# 1930 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxSetCurrent(CUcontext ); 
# 1949 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetCurrent(CUcontext * ); 
# 1978 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice * ); 
# 2006 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxSynchronize(); 
# 2067 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit , size_t ); 
# 2100 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t * , CUlimit ); 
# 2142 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache * ); 
# 2191 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache ); 
# 2232 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetSharedMemConfig(CUsharedconfig * ); 
# 2283 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxSetSharedMemConfig(CUsharedconfig ); 
# 2320 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext , unsigned * ); 
# 2369 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule * , const char * ); 
# 2403 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule * , const void * ); 
# 2482 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule * , const void * , unsigned , CUjit_option * , void ** ); 
# 2522 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule * , const void * ); 
# 2547 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule ); 
# 2577 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction * , CUmodule , const char * ); 
# 2611 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr * , size_t * , CUmodule , const char * ); 
# 2645 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref * , CUmodule , const char * ); 
# 2676 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref * , CUmodule , const char * ); 
# 2719 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t * , size_t * ); 
# 2752 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr * , size_t ); 
# 2813 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr * , size_t * , size_t , size_t , unsigned ); 
# 2842 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr ); 
# 2875 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr * , size_t * , CUdeviceptr ); 
# 2921 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void ** , size_t ); 
# 2951 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemFreeHost(void * ); 
# 3033 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void ** , size_t , unsigned ); 
# 3071 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr * , void * , unsigned ); 
# 3096 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned * , void * ); 
# 3123 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetByPCIBusId(CUdevice * , char * ); 
# 3151 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceGetPCIBusId(char * , int , CUdevice ); 
# 3193 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuIpcGetEventHandle(CUipcEventHandle * , CUevent ); 
# 3229 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuIpcOpenEventHandle(CUevent * , CUipcEventHandle ); 
# 3266 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuIpcGetMemHandle(CUipcMemHandle * , CUdeviceptr ); 
# 3314 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuIpcOpenMemHandle(CUdeviceptr * , CUipcMemHandle , unsigned ); 
# 3345 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuIpcCloseMemHandle(CUdeviceptr ); 
# 3407 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemHostRegister(void * , size_t , unsigned ); 
# 3430 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemHostUnregister(void * ); 
# 3466 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy(CUdeviceptr , CUdeviceptr , size_t ); 
# 3499 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyPeer(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t ); 
# 3535 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr , const void * , size_t ); 
# 3568 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void * , CUdeviceptr , size_t ); 
# 3601 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr , CUdeviceptr , size_t ); 
# 3635 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray , size_t , CUdeviceptr , size_t ); 
# 3671 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr , CUarray , size_t , size_t ); 
# 3705 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray , size_t , const void * , size_t ); 
# 3739 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void * , CUarray , size_t , size_t ); 
# 3777 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray , size_t , CUarray , size_t , size_t ); 
# 3937 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D * ); 
# 4095 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D * ); 
# 4262 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D * ); 
# 4293 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER * ); 
# 4333 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyAsync(CUdeviceptr , CUdeviceptr , size_t , CUstream ); 
# 4364 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyPeerAsync(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t , CUstream ); 
# 4406 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr , const void * , size_t , CUstream ); 
# 4446 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void * , CUdeviceptr , size_t , CUstream ); 
# 4483 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr , CUdeviceptr , size_t , CUstream ); 
# 4525 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray , size_t , const void * , size_t , CUstream ); 
# 4567 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void * , CUarray , size_t , size_t , CUstream ); 
# 4738 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D * , CUstream ); 
# 4913 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D * , CUstream ); 
# 4938 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER * , CUstream ); 
# 4976 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr , unsigned char , size_t ); 
# 5012 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr , unsigned short , size_t ); 
# 5048 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr , unsigned , size_t ); 
# 5089 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr , size_t , unsigned char , size_t , size_t ); 
# 5131 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr , size_t , unsigned short , size_t , size_t ); 
# 5173 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr , size_t , unsigned , size_t , size_t ); 
# 5210 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr , unsigned char , size_t , CUstream ); 
# 5247 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr , unsigned short , size_t , CUstream ); 
# 5283 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr , unsigned , size_t , CUstream ); 
# 5325 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr , size_t , unsigned char , size_t , size_t , CUstream ); 
# 5368 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr , size_t , unsigned short , size_t , size_t , CUstream ); 
# 5411 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr , size_t , unsigned , size_t , size_t , CUstream ); 
# 5514 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray * , const CUDA_ARRAY_DESCRIPTOR * ); 
# 5547 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR * , CUarray ); 
# 5578 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray ); 
# 5758 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray * , const CUDA_ARRAY3D_DESCRIPTOR * ); 
# 5794 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR * , CUarray ); 
# 6001 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuPointerGetAttribute(void * , CUpointer_attribute , CUdeviceptr ); 
# 6038 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream * , unsigned ); 
# 6080 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream , CUevent , unsigned ); 
# 6104 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream ); 
# 6129 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream ); 
# 6157 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuStreamDestroy_v2(CUstream ); 
# 6206 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent * , unsigned ); 
# 6244 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent , CUstream ); 
# 6275 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent ); 
# 6309 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent ); 
# 6338 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventDestroy_v2(CUevent ); 
# 6382 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float * , CUevent , CUevent ); 
# 6445 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int * , CUfunction_attribute , CUfunction ); 
# 6488 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction , CUfunc_cache ); 
# 6540 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuFuncSetSharedMemConfig(CUfunction , CUsharedconfig ); 
# 6657 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuLaunchKernel(CUfunction , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , CUstream , void ** , void ** ); 
# 6713 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction , int , int , int ); 
# 6747 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction , unsigned ); 
# 6779 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction , unsigned ); 
# 6812 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction , int , unsigned ); 
# 6845 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction , int , float ); 
# 6880 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction , int , void * , unsigned ); 
# 6917 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction ); 
# 6956 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction , int , int ); 
# 7000 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction , int , int , CUstream ); 
# 7025 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction , int , CUtexref ); 
# 7066 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref , CUarray , unsigned ); 
# 7110 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t * , CUtexref , CUdeviceptr , size_t ); 
# 7162 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v3(CUtexref , const CUDA_ARRAY_DESCRIPTOR * , CUdeviceptr , size_t ); 
# 7191 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref , CUarray_format , int ); 
# 7231 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref , int , CUaddress_mode ); 
# 7264 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref , CUfilter_mode ); 
# 7299 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref , unsigned ); 
# 7325 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr * , CUtexref ); 
# 7351 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray * , CUtexref ); 
# 7377 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode * , CUtexref , int ); 
# 7401 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode * , CUtexref ); 
# 7427 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format * , int * , CUtexref ); 
# 7450 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned * , CUtexref ); 
# 7484 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref * ); 
# 7504 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref ); 
# 7542 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref , CUarray , unsigned ); 
# 7563 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray * , CUsurfref ); 
# 7601 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuDeviceCanAccessPeer(int * , CUdevice , CUdevice ); 
# 7648 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxEnablePeerAccess(CUcontext , unsigned ); 
# 7673 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuCtxDisablePeerAccess(CUcontext ); 
# 7714 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource ); 
# 7752 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray * , CUgraphicsResource , unsigned , unsigned ); 
# 7786 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr * , size_t * , CUgraphicsResource ); 
# 7827 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource , unsigned ); 
# 7865 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned , CUgraphicsResource * , CUstream ); 
# 7900 "/home/bachelor/deicide218/cuda-4.2/include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned , CUgraphicsResource * , CUstream ); 
# 7904
extern "C" CUresult cuGetExportTable(const void ** , const CUuuid * ); 
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" { struct timezone { 
# 59
int tz_minuteswest; 
# 60
int tz_dsttime; 
# 61
}; }
# 63
extern "C" { typedef struct timezone *__restrict__ __timezone_ptr_t; }
# 73 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int gettimeofday(timeval *__restrict__ , __timezone_ptr_t ) throw()
# 74
 __attribute((__nonnull__(1))); 
# 79
extern "C" int settimeofday(const timeval * , const struct timezone * ) throw()
# 81
 __attribute((__nonnull__(1))); 
# 87
extern "C" int adjtime(const timeval * , timeval * ) throw(); 
# 93
enum __itimer_which { 
# 96
ITIMER_REAL, 
# 99
ITIMER_VIRTUAL, 
# 103
ITIMER_PROF
# 105
}; 
# 109
extern "C" { struct itimerval { 
# 112
timeval it_interval; 
# 114
timeval it_value; 
# 115
}; }
# 122
extern "C" { typedef int __itimer_which_t; }
# 127
extern "C" int getitimer(__itimer_which_t , itimerval * ) throw(); 
# 133
extern "C" int setitimer(__itimer_which_t , const itimerval *__restrict__ , itimerval *__restrict__ ) throw(); 
# 140
extern "C" int utimes(const char * , const timeval  [2]) throw()
# 141
 __attribute((__nonnull__(1))); 
# 145
extern "C" int lutimes(const char * , const timeval  [2]) throw()
# 146
 __attribute((__nonnull__(1))); 
# 149
extern "C" int futimes(int , const timeval  [2]) throw(); 
# 156
extern "C" int futimesat(int , const char * , const timeval  [2]) throw(); 
# 36 "./backprop.h"
typedef 
# 16
struct { 
# 17
int input_n; 
# 18
int hidden_n; 
# 19
int output_n; 
# 21
float *input_units; 
# 22
float *hidden_units; 
# 23
float *output_units; 
# 25
float *hidden_delta; 
# 26
float *output_delta; 
# 28
float *target; 
# 30
float **input_weights; 
# 31
float **hidden_weights; 
# 34
float **input_prev_weights; 
# 35
float **hidden_prev_weights; 
# 36
} BPNN; 
# 41
void bpnn_initialize(); 
# 43
BPNN *bpnn_create(); 
# 44
void bpnn_free(); 
# 46
void bpnn_train(); 
# 47
void bpnn_feedforward(); 
# 49
void bpnn_save(); 
# 50
BPNN *bpnn_read(); 
# 13 "./backprop_cuda_kernel.cu"
void bpnn_layerforward_CUDA(float *input_cuda, float *
# 14
output_hidden_cuda, float *
# 15
input_hidden_cuda, float *
# 16
hidden_partial_sum, int 
# 17
in, int 
# 18
hid) ;
#if 0
# 19
{ 
# 20
int by = (blockIdx.y); 
# 21
int tx = (threadIdx.x); 
# 22
int ty = (threadIdx.y); 
# 24
int index = (((((((hid + 1) * 16) * by) + ((hid + 1) * ty)) + tx) + 1) + (hid + 1)); 
# 26
int index_in = (((16 * by) + ty) + 1); 
# 28
__attribute__((unused)) static float input_node[16]; 
# 29
__attribute__((unused)) static float weight_matrix[16][16]; 
# 32
if (tx == 0) { 
# 33
((input_node)[ty]) = (input_cuda[index_in]); }  
# 35
__syncthreads(); 
# 37
(((weight_matrix)[ty])[tx]) = (input_hidden_cuda[index]); 
# 39
__syncthreads(); 
# 41
(((weight_matrix)[ty])[tx]) = ((((weight_matrix)[ty])[tx]) * ((input_node)[ty])); 
# 43
__syncthreads(); 
# 45
for (int i = 1; i <= __log2f(16); i++) { 
# 47
int power_two = (__powf(2, i)); 
# 49
if ((ty % power_two) == 0) { 
# 50
(((weight_matrix)[ty])[tx]) = ((((weight_matrix)[ty])[tx]) + (((weight_matrix)[ty + (power_two / 2)])[tx])); }  
# 52
__syncthreads(); 
# 54
}  
# 72 "./backprop_cuda_kernel.cu"
__syncthreads(); 
# 74
if (tx == 0) { 
# 75
(hidden_partial_sum[(by * hid) + ty]) = (((weight_matrix)[tx])[ty]); 
# 76
}  
# 78
} 
#endif
# 81 "./backprop_cuda_kernel.cu"
void bpnn_adjust_weights_cuda(float *delta, int 
# 82
hid, float *
# 83
ly, int 
# 84
in, float *
# 85
w, float *
# 86
oldw) ;
#if 0
# 87
{ 
# 90
int by = (blockIdx.y); 
# 92
int tx = (threadIdx.x); 
# 93
int ty = (threadIdx.y); 
# 95
int index = (((((((hid + 1) * 16) * by) + ((hid + 1) * ty)) + tx) + 1) + (hid + 1)); 
# 96
int index_y = (((16 * by) + ty) + 1); 
# 97
int index_x = (tx + 1); 
# 101
(w[index]) += ((((0.2999999999999999889) * (delta[index_x])) * (ly[index_y])) + ((0.2999999999999999889) * (oldw[index]))); 
# 102
(oldw[index]) = ((((0.2999999999999999889) * (delta[index_x])) * (ly[index_y])) + ((0.2999999999999999889) * (oldw[index]))); 
# 105
__syncthreads(); 
# 107
if ((ty == 0) && (by == 0)) { 
# 108
(w[index_x]) += (((0.2999999999999999889) * (delta[index_x])) + ((0.2999999999999999889) * (oldw[index_x]))); 
# 109
(oldw[index_x]) = (((0.2999999999999999889) * (delta[index_x])) + ((0.2999999999999999889) * (oldw[index_x]))); 
# 110
}  
# 113
} 
#endif
# 49 "/usr/include/stdint.h" 3
typedef unsigned char uint8_t; 
# 50
typedef unsigned short uint16_t; 
# 52
typedef unsigned uint32_t; 
# 56
typedef unsigned long uint64_t; 
# 66 "/usr/include/stdint.h" 3
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
# 91 "/usr/include/stdint.h" 3
typedef signed char int_fast8_t; 
# 93
typedef long int_fast16_t; 
# 94
typedef long int_fast32_t; 
# 95
typedef long int_fast64_t; 
# 104 "/usr/include/stdint.h" 3
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
# 18 "backprop_cuda.cu"
extern "C" void m5_work_begin(uint64_t , uint64_t ); 
# 19
extern "C" void m5_work_end(uint64_t , uint64_t ); 
# 26
extern "C" void bpnn_layerforward(float * , float * , float ** , int , int ); 
# 29
extern "C" void bpnn_output_error(float * , float * , float * , int , float * ); 
# 32
extern "C" void bpnn_hidden_error(float * , int , float * , int , float ** , float * , float * ); 
# 35
extern "C" void bpnn_adjust_weights(float * , int , float * , int , float ** , float ** ); 
# 39
extern "C" int setup(int , char ** ); 
# 42
extern "C" float **alloc_2d_dbl(int , int ); 
# 45
extern "C" float squash(float ); 
# 47
double gettime() { 
# 48
timeval t; 
# 49
gettimeofday(&t, __null); 
# 50
return (t.tv_sec) + ((t.tv_usec) * (9.999999999999999547e-07)); 
# 51
} 
# 53
unsigned num_threads = (0); 
# 54
unsigned num_blocks = (0); 
# 60
int main(int argc, char **argv) 
# 61
{ 
# 62
setup(argc, argv); return 0; 
# 63
} 
# 67
extern "C" void bpnn_train_cuda(BPNN *net, float *eo, float *eh) 
# 68
{ 
# 69
int in, hid, out; 
# 70
float out_err, hid_err; 
# 72
in = (net->input_n); 
# 73
hid = (net->hidden_n); 
# 74
out = (net->output_n); 
# 77
int m = 0; 
# 78
float *input_hidden_cuda; 
# 79
float *input_cuda; 
# 80
float *output_hidden_cuda; 
# 81
float *partial_sum; 
# 82
float *hidden_partial_sum; 
# 83
float *hidden_delta_cuda; 
# 84
float *input_prev_weights_cuda; 
# 85
float sum; 
# 86
float *input_weights_one_dim; 
# 87
float *input_weights_prev_one_dim; 
# 88
num_blocks = (in / 16); 
# 89
dim3 grid(1, num_blocks); 
# 90
dim3 threads(16, 16); 
# 92
input_weights_one_dim = ((float *)malloc(((in + 1) * (hid + 1)) * sizeof(float))); 
# 93
input_weights_prev_one_dim = ((float *)malloc(((in + 1) * (hid + 1)) * sizeof(float))); 
# 94
partial_sum = ((float *)malloc((num_blocks * (16)) * sizeof(float))); 
# 97
for (int k = 0; k <= in; k++) { 
# 98
for (int j = 0; j <= hid; j++) { 
# 99
(input_weights_one_dim[m]) = (((net->input_weights)[k])[j]); 
# 100
(input_weights_prev_one_dim[m]) = (((net->input_prev_weights)[k])[j]); 
# 101
m++; 
# 102
}  
# 103
}  
# 114 "backprop_cuda.cu"
m5_work_begin(0, 0); 
# 126 "backprop_cuda.cu"
printf("Performing GPU computation\n"); 
# 135 "backprop_cuda.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : bpnn_layerforward_CUDA(net->input_units, (float *)0, input_weights_one_dim, partial_sum, in, hid); 
# 142
cudaThreadSynchronize(); 
# 144
cudaError_t error = cudaGetLastError(); 
# 145
if (error != (cudaSuccess)) { 
# 146
printf("bpnn kernel error: %s\n", cudaGetErrorString(error)); 
# 147
exit(1); 
# 148
}  
# 152
for (int j = 1; j <= hid; j++) { 
# 153
sum = ((0.0)); 
# 154
for (int k = 0; k < num_blocks; k++) { 
# 155
sum += (partial_sum[((k * hid) + j) - 1]); 
# 156
}  
# 157
sum += (((net->input_weights)[0])[j]); 
# 158
((net->hidden_units)[j]) = ((float)((1.0) / ((1.0) + (exp(-sum))))); 
# 159
}  
# 162
bpnn_layerforward(net->hidden_units, net->output_units, net->hidden_weights, hid, out); 
# 163
bpnn_output_error(net->output_delta, net->target, net->output_units, out, &out_err); 
# 164
bpnn_hidden_error(net->hidden_delta, hid, net->output_delta, out, net->hidden_weights, net->hidden_units, &hid_err); 
# 165
bpnn_adjust_weights(net->output_delta, out, net->hidden_units, hid, net->hidden_weights, net->hidden_prev_weights); 
# 184 "backprop_cuda.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : bpnn_adjust_weights_cuda(net->hidden_delta, hid, net->input_units, in, input_weights_one_dim, input_weights_prev_one_dim); 
# 191
cudaThreadSynchronize(); 
# 198
m5_work_end(0, 0); 
# 212 "backprop_cuda.cu"
printf("Partial Sums:\n"); 
# 213
for (int j = 1; j <= hid; j++) { 
# 214
for (int k = 0; k < num_blocks; k++) { 
# 215
printf("%f ", partial_sum[((k * hid) + j) - 1]); 
# 216
}  
# 217
printf("\n"); 
# 218
}  
# 219
printf("\n"); 
# 222
printf("Input Weights:\n"); 
# 223
m = 0; 
# 224
for (int k = 0; k <= in; k++) { 
# 225
for (int j = 0; j <= hid; j++) { 
# 226
printf("%f ", input_weights_one_dim[m++]); 
# 227
}  
# 228
}  
# 229
printf("\n"); 
# 232
printf("Net Inputs:\n"); 
# 233
for (int k = 0; k < in; k++) { 
# 234
printf("%f ", (net->input_units)[k]); 
# 235
}  
# 236
printf("\n"); 
# 239
free(partial_sum); 
# 240
free(input_weights_one_dim); 
# 241
free(input_weights_prev_one_dim); 
# 246
} 
# 1 "backprop_cuda.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__21_backprop_cuda_cpp4_ii_5f684aae
# 1 "backprop_cuda.cudafe1.stub.c"
#include "backprop_cuda.cudafe1.stub.c"
# 1 "backprop_cuda.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
