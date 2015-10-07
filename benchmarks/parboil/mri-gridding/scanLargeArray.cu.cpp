# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.cpp"
# 1 "scanLargeArray.cu"
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 1 3
# 69 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 1 3
# 42 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_types.h" 1 3
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 1 3
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h" 1 3
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h" 1 3
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 1 3
# 45 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 1 3
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 1 3
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/host_defines.h" 1 3
# 47 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 2 3
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/builtin_types.h" 2 3
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 2 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/storage_class.h" 1 3
# 71 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 2 3
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 466 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 478 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 510 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 523 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 535 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 546 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 564 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 570 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 579 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 656 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 667 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 678 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 689 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 768 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 774 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 780 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 786 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 792 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_types.h"
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
# 74 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
# 84 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_types.h"
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_types.h"
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 87 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 99 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 171 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 276 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 294 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 306 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 312 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 318 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 324 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 336 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 342 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 366 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 368 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 376 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 378 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 382 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 384 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 386 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 392 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 396 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 398 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 400 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 402 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 404 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 406 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 408 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 410 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 412 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 414 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 416 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 418 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 420 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 422 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 424 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 426 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 428 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 430 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 432 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 434 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 436 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 438 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 440 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 442 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 444 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 446 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 448 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 450 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 452 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 454 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 456 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 460 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 469 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 480 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_types.h"
# 115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 114 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 121 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 128 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 139 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 144 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 146 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 151 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 158 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 181 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 193 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 209 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 214 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 216 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 221 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 223 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 228 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 251 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 256 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 258 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 263 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 270 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 272 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 277 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 279 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 284 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 286 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 291 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 298 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 367 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 381 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 386 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
{
# 388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/home/bachelor/deicide218/cuda-3.2/bin/../include/channel_descriptor.h"
}
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
{
# 67 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
return s;
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
}
# 92 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
{
# 94 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
return p;
# 101 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
}
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
{
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
return e;
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/driver_functions.h"
}
# 55 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 57 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 60 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 62 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 67 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 77 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 82 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 87 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 92 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 102 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 157 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 175 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 182 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 185 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 197 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 205 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 212 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 217 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 220 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 225 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 232 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 245 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 262 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 270 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 272 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 275 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 277 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 280 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 285 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 287 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 290 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
{
# 292 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
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
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long register_t; }
# 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
struct {
# 31 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
}; }
# 55 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
struct {
# 72 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
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
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
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
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
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
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 502 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
namespace std {
# 504 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 508 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::abs;
# 509 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::fabs;
# 510 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::ceil;
# 511 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::floor;
# 512 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::pow;
# 514 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::log;
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::log10;
# 516 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::fmod;
# 517 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::modf;
# 518 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::exp;
# 519 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::frexp;
# 520 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::asin;
# 522 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::sin;
# 523 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::sinh;
# 524 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::acos;
# 525 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::cos;
# 526 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::cosh;
# 527 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::atan;
# 528 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::atan2;
# 529 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::tan;
# 530 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
using std::tanh;
# 584 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
namespace std {
# 587 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 619 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 621 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return logbf(a);
# 622 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 624 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 626 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 629 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 631 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 634 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 636 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 639 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 641 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 644 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 646 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 649 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 651 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 654 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 656 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return log2f(a);
# 657 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 659 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 661 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 664 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 666 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 669 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 674 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 676 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 679 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 681 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 684 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 686 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 689 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 691 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 694 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 696 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 699 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 701 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 704 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 706 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 709 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 711 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return erff(a);
# 712 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 714 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 716 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 719 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 721 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 724 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 726 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 729 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 731 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 734 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 736 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 739 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 741 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 744 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 746 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 749 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 751 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 754 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 756 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 759 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 761 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 764 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 766 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 769 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 771 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return roundf(a);
# 772 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 774 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 776 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 779 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 781 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 784 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 786 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return truncf(a);
# 787 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 789 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 791 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return rintf(a);
# 792 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 794 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 796 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 799 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 801 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 804 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 806 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 809 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 811 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 814 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 816 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 819 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 821 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 824 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 826 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 829 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 831 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 834 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 836 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 839 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 841 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 844 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 846 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 849 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 851 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 854 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 856 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 859 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 861 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 864 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 866 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 869 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 871 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 874 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 876 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 879 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 881 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 884 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 886 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 889 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 891 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 894 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 896 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 899 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 901 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 904 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 906 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 909 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 911 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 914 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 916 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 919 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 921 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 924 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 926 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 929 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 931 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 934 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
{
# 936 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
}
# 60 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
surface()
# 64 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
{
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
}
# 68 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
{
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
}
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
};
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
surface()
# 79 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
{
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
}
# 82 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_surface_types.h"
};
# 60 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
{
# 67 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
}
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
desc)
# 79 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
{
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
}
# 87 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_texture_types.h"
};
# 324 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 329 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 334 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 339 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 344 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 359 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 384 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 389 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 399 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 404 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 424 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 429 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 437 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 453 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_functions.h"
exit(___);}
# 102 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 118 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 137 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 143 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 163 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 183 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 201 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 221 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 241 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 287 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 299 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 305 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 311 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 319 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 385 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 391 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 397 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 457 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 468 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 478 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 485 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 503 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 509 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 523 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 529 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 537 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 543 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 549 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 561 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 567 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 581 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 595 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 601 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 607 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 613 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 619 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 627 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 633 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 641 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 647 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 653 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 659 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 665 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 679 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 745 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 751 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 757 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 765 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 817 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 839 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 846 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 851 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 856 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 861 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 866 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 871 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 876 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 881 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 886 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 891 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 896 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 901 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 906 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 911 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 916 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 921 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 926 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 931 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 936 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 941 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 951 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 956 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 961 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 966 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 971 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 976 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 981 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 986 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 991 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 996 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/home/bachelor/deicide218/cuda-3.2/bin/../include/surface_functions.h"
exit(___);}
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/home/bachelor/deicide218/cuda-3.2/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset)
# 111 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 112 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 145 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
flags)
# 149 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 150 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 208 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
flags)
# 213 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 214 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 217 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
flags)
# 223 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 224 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
flags)
# 233 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 234 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 237 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size)
# 242 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 243 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 246 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 253 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 256 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
height)
# 263 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 264 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 275 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 283 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 286 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 295 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 298 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 307 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 310 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 320 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 329 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 337 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 340 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 349 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 352 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 361 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 364 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 374 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 377 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol)
# 381 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 382 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 410 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol)
# 415 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 416 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 425 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size, char *
# 427 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol)
# 429 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 430 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 458 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
symbol)
# 463 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 464 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 507 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 516 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 552 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 560 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 608 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
pitch)
# 618 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 619 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 666 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
pitch)
# 675 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 676 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 708 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
desc)
# 714 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 715 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 746 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
array)
# 751 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 752 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 785 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex)
# 789 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 790 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 825 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
tex)
# 830 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 831 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 886 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 892 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 930 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
entry)
# 934 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 935 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 970 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
entry)
# 975 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 976 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 999 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
desc)
# 1005 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 1006 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 1028 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
array)
# 1033 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
{
# 1034 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/home/bachelor/deicide218/cuda-3.2/bin/../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 25 "scanLargeArray.cu"
void scan_L1_kernel(unsigned n, unsigned *data, unsigned *inter) ;
# 95 "scanLargeArray.cu"
void scan_inter1_kernel(unsigned *data, unsigned iter) ;
# 139 "scanLargeArray.cu"
void scan_inter2_kernel(unsigned *data, unsigned iter) ;
# 186 "scanLargeArray.cu"
void uniformAdd(unsigned n, unsigned *data, unsigned *inter) ;
# 200 "scanLargeArray.cu"
void scanLargeArray(unsigned gridNumElements, unsigned *data_d) {
# 201 "scanLargeArray.cu"
unsigned gridNumElems = gridNumElements;
# 204 "scanLargeArray.cu"
unsigned *inter_d = (__null);
# 207 "scanLargeArray.cu"
unsigned size = (((gridNumElems + (1024)) - (1)) / (1024));
# 209 "scanLargeArray.cu"
unsigned dim_block;
# 210 "scanLargeArray.cu"
unsigned current_max = (size * (1024));
# 211 "scanLargeArray.cu"
for (int block_size = 128; block_size <= 1024; block_size *= 2) {
# 212 "scanLargeArray.cu"
unsigned array_size = (block_size);
# 213 "scanLargeArray.cu"
while (array_size < size) {
# 214 "scanLargeArray.cu"
array_size *= block_size;
# 215 "scanLargeArray.cu"
}
# 216 "scanLargeArray.cu"
if (array_size <= current_max) {
# 217 "scanLargeArray.cu"
current_max = array_size;
# 218 "scanLargeArray.cu"
dim_block = block_size;
# 219 "scanLargeArray.cu"
}
# 220 "scanLargeArray.cu"
}
# 222 "scanLargeArray.cu"
cudaMalloc((void **)(&inter_d), current_max * sizeof(unsigned));
# 223 "scanLargeArray.cu"
cudaMemset(inter_d, 0, current_max * sizeof(unsigned));
# 225 "scanLargeArray.cu"
for (unsigned i = (0); i < (((size + (65535)) - (1)) / (65535)); i++) {
# 226 "scanLargeArray.cu"
unsigned gridSize = (((size - (i * (65535))) > (65535)) ? (65535) : (size - (i * (65535))));
# 227 "scanLargeArray.cu"
unsigned numElems = (((gridNumElems - ((i * (65535)) * (1024))) > (65535 * 1024)) ? (65535 * 1024) : (gridNumElems - ((i * (65535)) * (1024))));
# 229 "scanLargeArray.cu"
dim3 block(1024 / 2);
# 230 "scanLargeArray.cu"
dim3 grid(gridSize);
# 231 "scanLargeArray.cu"
cudaConfigureCall(grid, block) ? ((void)0) : scan_L1_kernel(numElems, data_d + ((i * (65535)) * (1024)), inter_d + (i * (65535)));
# 232 "scanLargeArray.cu"
}
# 234 "scanLargeArray.cu"
unsigned stride = (1);
# 235 "scanLargeArray.cu"
for (unsigned d = current_max; d > (1); d /= dim_block)
# 236 "scanLargeArray.cu"
{
# 237 "scanLargeArray.cu"
dim3 block(dim_block / (2));
# 238 "scanLargeArray.cu"
dim3 grid(d / dim_block);
# 240 "scanLargeArray.cu"
cudaConfigureCall(grid, block, ((dim_block + (dim_block >> 4)) + (dim_block >> (2 * 4))) * sizeof(unsigned)) ? ((void)0) : scan_inter1_kernel(inter_d, stride);
# 242 "scanLargeArray.cu"
stride *= dim_block;
# 243 "scanLargeArray.cu"
}
# 245 "scanLargeArray.cu"
cudaMemset(&(inter_d[current_max - (1)]), 0, sizeof(unsigned));
# 247 "scanLargeArray.cu"
for (unsigned d = dim_block; d <= current_max; d *= dim_block)
# 248 "scanLargeArray.cu"
{
# 249 "scanLargeArray.cu"
stride /= dim_block;
# 250 "scanLargeArray.cu"
dim3 block(dim_block / (2));
# 251 "scanLargeArray.cu"
dim3 grid(d / dim_block);
# 253 "scanLargeArray.cu"
cudaConfigureCall(grid, block, ((dim_block + (dim_block >> 4)) + (dim_block >> (2 * 4))) * sizeof(unsigned)) ? ((void)0) : scan_inter2_kernel(inter_d, stride);
# 254 "scanLargeArray.cu"
}
# 256 "scanLargeArray.cu"
for (unsigned i = (0); i < (((size + (65535)) - (1)) / (65535)); i++) {
# 257 "scanLargeArray.cu"
unsigned gridSize = (((size - (i * (65535))) > (65535)) ? (65535) : (size - (i * (65535))));
# 258 "scanLargeArray.cu"
unsigned numElems = (((gridNumElems - ((i * (65535)) * (1024))) > (65535 * 1024)) ? (65535 * 1024) : (gridNumElems - ((i * (65535)) * (1024))));
# 260 "scanLargeArray.cu"
dim3 block(1024 / 2);
# 261 "scanLargeArray.cu"
dim3 grid(gridSize);
# 263 "scanLargeArray.cu"
cudaConfigureCall(grid, block) ? ((void)0) : uniformAdd(numElems, data_d + ((i * (65535)) * (1024)), inter_d + (i * (65535)));
# 264 "scanLargeArray.cu"
}
# 266 "scanLargeArray.cu"
cudaFree(inter_d);
# 267 "scanLargeArray.cu"
}
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c"
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c" 1
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 1
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h" 1
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h"
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 1 3
# 948 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_constants.h" 1 3
# 949 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 2 3
# 2973 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/func_macro.h" 1 3
# 2974 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 2 3
# 4683 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h" 2 3
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h" 2
# 164 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_0000636c_00000000-6_scanLargeArray.fatbin.c" 1
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 1
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_0000636c_00000000-6_scanLargeArray.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_20$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000001670,0x0000000000000040,0x0038004000140114,0x0001001400400007\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000540\n"
".quad 0x0000000000000238,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000778\n"
".quad 0x0000000000000061,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000007d9\n"
".quad 0x0000000000000270,0x0000001600000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x00000001000000fc,0x0000000000100006,0x0000000000000000,0x0000000000000a49\n"
".quad 0x0000000000000430,0x0f00000d00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000015e,0x0000000000000002,0x0000000000000000,0x0000000000000e79\n"
".quad 0x0000000000000038,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000011a,0x0000000000000002,0x0000000000000000,0x0000000000000eb1\n"
".quad 0x000000000000005c,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000013b,0x0000000000000003,0x0000000000000000,0x0000000000000f0d\n"
".quad 0x0000000000001110,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000b9,0x0000000000100006,0x0000000000000000,0x0000000000000f0d\n"
".quad 0x0000000000000220,0x1000000b00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000210,0x0000000000000002,0x0000000000000000,0x000000000000112d\n"
".quad 0x000000000000002c,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000d9,0x0000000000000002,0x0000000000000000,0x0000000000001159\n"
".quad 0x0000000000000048,0x0000000800000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000100000076,0x0000000000100006,0x0000000000000000,0x00000000000011a1\n"
".quad 0x0000000000000238,0x0f00000900000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000184,0x0000000000000002,0x0000000000000000,0x00000000000013d9\n"
".quad 0x000000000000002c,0x0000000b00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000096,0x0000000000000002,0x0000000000000000,0x0000000000001405\n"
".quad 0x0000000000000048,0x0000000b00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x000000000000144d\n"
".quad 0x0000000000000128,0x0600000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001ee,0x0000000000000002,0x0000000000000000,0x0000000000001575\n"
".quad 0x0000000000000038,0x0000000e00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001cb,0x0000000000000002,0x0000000000000000,0x00000000000015ad\n"
".quad 0x0000000000000004,0x0000000e00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000050,0x0000000000000002,0x0000000000000000,0x00000000000015b1\n"
".quad 0x000000000000005c,0x0000000e00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000008000001ac,0x0000000000000003,0x0000000000000000,0x000000000000160d\n"
".quad 0x0000000000000010,0x0000000e00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000006d,0x0000000000000002,0x0000000000000000,0x000000000000160d\n"
".quad 0x0000000000000060,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x30315a5f2e747865\n"
".quad 0x416d726f66696e75,0x005f536a506a6464,0x6f666e692e766e2e,0x696e7530315a5f2e\n"
".quad 0x6a6464416d726f66,0x766e2e005f536a50,0x742e006f666e692e,0x38315a5f2e747865\n"
".quad 0x746e695f6e616373,0x6e72656b5f327265,0x6e2e006a6a506c65,0x5f2e6f666e692e76\n"
".quad 0x5f6e61637338315a,0x6b5f327265746e69,0x6a6a506c656e7265,0x5f2e747865742e00\n"
".quad 0x5f6e61637338315a,0x6b5f317265746e69,0x6a6a506c656e7265,0x666e692e766e2e00\n"
".quad 0x637338315a5f2e6f,0x7265746e695f6e61,0x6c656e72656b5f31,0x7865742e006a6a50\n"
".quad 0x637334315a5f2e74,0x656b5f314c5f6e61,0x536a506a6c656e72,0x6e692e766e2e005f\n"
".quad 0x7334315a5f2e6f66,0x6b5f314c5f6e6163,0x6a506a6c656e7265,0x732e766e2e005f53\n"
".quad 0x5a5f2e6465726168,0x4c5f6e6163733431,0x6c656e72656b5f31,0x6e2e005f536a506a\n"
".quad 0x6174736e6f632e76,0x34315a5f2e30746e,0x5f314c5f6e616373,0x506a6c656e72656b\n"
".quad 0x2e766e2e005f536a,0x746e6174736e6f63,0x637338315a5f2e30,0x7265746e695f6e61\n"
".quad 0x6c656e72656b5f32,0x2e766e2e006a6a50,0x5f2e646572616873,0x6f66696e7530315a\n"
".quad 0x6a506a6464416d72,0x632e766e2e005f53,0x31746e6174736e6f,0x6e7530315a5f2e36\n"
".quad 0x6464416d726f6669,0x6e2e005f536a506a,0x6174736e6f632e76,0x30315a5f2e30746e\n"
".quad 0x416d726f66696e75,0x005f536a506a6464,0x736e6f632e766e2e,0x5a5f2e30746e6174\n"
".quad 0x695f6e6163733831,0x656b5f317265746e,0x006a6a506c656e72,0x696e7530315a5f00\n"
".quad 0x6a6464416d726f66,0x315a5f005f536a50,0x6e695f6e61637338,0x72656b5f32726574\n"
".quad 0x5f006a6a506c656e,0x5f6e61637338315a,0x6b5f317265746e69,0x6a6a506c656e7265\n"
".quad 0x61637334315a5f00,0x72656b5f314c5f6e,0x5f536a506a6c656e,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0100030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0200030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0300030000000000,0x0000000000000000,0x0000000000000000,0x0000030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0e00030000000000,0x0000000000000000,0x0000000000012800\n"
".quad 0x1100030000000000,0x0000000000000000,0x0000000000000000,0x1300030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0b00030000000000,0x0000000000000000\n"
".quad 0x0000000000023800,0x0d00030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0800030000000000,0x0000000000000000,0x0000000000022000,0x0a00030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0400030000000000,0x0000000000000000\n"
".quad 0x0000000000043000,0x0600030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0700030000000000,0x0000000000000000,0x0000000000000000,0x0500030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0c00030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x1200030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x1000030000000000,0x0000000000000000,0x0000000000000000,0x0f00030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0900030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0e10120000000100,0x0000000000000000,0x0000000000012800\n"
".quad 0x0b10120000001500,0x0000000000000000,0x0000000000023800,0x0810120000002f00\n"
".quad 0x0000000000000000,0x0000000000022000,0x0410120000004900,0x0000000000000000\n"
".quad 0x0000000000043000,0x00440400005de400,0x00000094009c0428,0x00000084001c042c\n"
".quad 0x0040002020dc032c,0x0000000030dc2350,0x8e40008031dc0340,0x000000a000a1e718\n"
".quad 0x004000a00141e440,0x00c0001031004328,0x0bc0001031800350,0x004000b041c04320\n"
".quad 0x0000000061808548,0x00c00010011c0384,0x000000fc01a1e448,0x00000010011c0328\n"
".quad 0x00c00020411c0358,0x00000000415c0358,0x00400020311c0348,0x00c00008515e0348\n"
".quad 0x8e40008043dc0360,0x00000000519c8518,0x000000a000a5e7c9,0x004000a001c5e440\n"
".quad 0x00c0001041844328,0x0fc0001042040350,0x004000b062444320,0x0000000081c48548\n"
".quad 0x00400020019c0384,0x000000fc01e5e448,0x0e400023f5dc0328,0x00c00010621c0319\n"
".quad 0x00000020621c0348,0x00c00020821c0358,0x00000020619c0358,0x00400020021de448\n"
".quad 0x00c00008619e0328,0x0000000061dc8560,0x000003a00009e7c9,0x0000000401dde240\n"
".quad 0x7e0000201fdc0318,0xee0000ffffdc0420,0x8e00000085dc0350,0x000002600089e719\n"
".quad 0x0000000072680340,0x0000001c92682350,0x0000001c92a80340,0x00fffffc93680348\n"
".quad 0x00c0000c93a80348,0x00fffffca2e80348,0x00c0000ca3280348,0x00000038d3680348\n"
".quad 0x00000030b2e80358,0x00c00020d3280358,0x00c00020b2e80358,0x0000003093280358\n"
".quad 0x0000002ca2680348,0x00c00008c32a0348,0x00c0000892ea0360,0x03fffff0c2688560\n"
".quad 0x03fffff0b2a885c1,0x00000024a26803c1,0x03fffff0b2688548,0x00c00004821c03c9\n"
".quad 0x00c0000471de0358,0x8e0000fc85dc0360,0x03fffca00009e71a,0x00000020001de740\n"
".quad 0x0000000401dde240,0x8e0000fc05dc0318,0x000001c00089e71a,0x0040002002a9e440\n"
".quad 0x00fffffca2282328,0x00c0000ca2682340,0x0000002482280340,0x00c0001022684358\n"
".quad 0x00c0002082280350,0x00000020a2282358,0x004000c002a9e440,0x00c00008822a0328\n"
".quad 0x15c0001022a80360,0x03fffff080a88520,0x004000d092e843c1,0x03fffff08fe88548\n"
".quad 0x00000000a0a885c9,0x00400020009de494,0x8ec0000425dc0328,0x000003c00009e718\n"
".quad 0x00000004009de240,0x00c0000471dc0318,0x7e0000201fdc0358,0xee0000ffffdc0420\n"
".quad 0x8e00000025dc0350,0x000002a00089e719,0x0000000072280340,0x0000001c82282350\n"
".quad 0x0000001c82e80340,0x00fffffcb2680348,0x00c0000cb2a80348,0x0000002893280348\n"
".quad 0x00fffffc82680358,0x00c0000c82a80348,0x00c00020c3280348,0x0000002892680358\n"
".quad 0x00000030b2a80358,0x00c0002092680348,0x00c00008a32a0358,0x0000002482280360\n"
".quad 0x03fffff0c2688548,0x00c0000882ea03c1,0x03fffff0b2a88560,0x03fffff0b26885c1\n"
".quad 0x03fffff0c22885c9,0x00000028822803c1,0x03fffff0c2288548,0x00c00004209e03c9\n"
".quad 0x8e40002025dc0360,0x03fffc600009e719,0x7e0000201fdc0340,0xee0000ffffdc0420\n"
".quad 0x000000c000a1e750,0x004000a00001e440,0x00c0001030804328,0x01c0001032000350\n"
".quad 0x0000000050008520,0x004000b0224043c1,0x0000000080008548,0x000000000025e794\n"
".quad 0x004000a0001de480,0x00c00010409c4328,0x01c00010411c0350,0x00000000601c8520\n"
".quad 0x004000b0215c43c1,0x00000000401c8548,0x00000000001de794,0x0000000000000080\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x000000000c0c0400,0x0000100000000800\n"
".quad 0x00001000080a0400,0x1819030018002000,0xffffff000c170400,0x21f00000100002ff\n"
".quad 0xffffff000c170400,0x21f00000080001ff,0xffffff000c170400,0x11f00000000000ff\n"
".quad 0x02001800080d0400,0x005de40000000100,0x001c042800440400,0x009c042c00000084\n"
".quad 0x019de42c00000094,0xf1dc032800400080,0x209c03190e400023,0x209c032000400020\n"
".quad 0x20dc2350004000a0,0x311c4340004000a0,0x309c035000c00010,0x315c03200dc00010\n"
".quad 0x40dc4348004000a0,0x511c034800400090,0x515c43200dc00010,0x229c855000c00010\n"
".quad 0x019e0387fffffff0,0x515c436000c00004,0x61dc034800400090,0x425c854800c00010\n"
".quad 0x621c0387fffffff0,0x62dc034800c00004,0x61dc034800c00014,0x821c03580000001c\n"
".quad 0x71dc03580000002c,0x821c035800c00020,0x61dc035800c00020,0x621c03480000001c\n"
".quad 0x719e034800000020,0x81de036000c00008,0x021de46000c00008,0x629c852800400020\n"
".quad 0x725c85c900000000,0x0001e7c900000010,0x025de24000000380,0x1fdc031800000004\n"
".quad 0xffdc04207e000020,0x81dc0350ee0000ff,0x0081e7198e000000,0x92a0034000000260\n"
".quad 0xa2e0235000000000,0xb2a0034000000024,0xb3a0034800000024,0xb3e0034800fffffc\n"
".quad 0xa320034800c0000c,0xa360034800fffffc,0xe3a0034800c0000c,0xc32003580000003c\n"
".quad 0xe360035800000034,0xc320035800c00020,0xb2e0035800c00020,0xa2a0034800000034\n"
".quad 0xb362034800000030,0xa322036000c00008,0xd2a0856000c00008,0xc2e085c103fffff0\n"
".quad 0xb2a003c103fffff0,0xc2a0854800000028,0x821c03c903fffff0,0x925e035800c00004\n"
".quad 0x81dc036000c00004,0x0001e71a8e0000fc,0x1fdc034003fffca0,0xffdc04207e000020\n"
".quad 0x619c8550ee0000ff,0x701c85c100000000,0x219c85c100000010,0x401c8597fffffff0\n"
".quad 0x001de797fffffff0,0x0000008000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x00000000080c0400\n"
".quad 0x080a040000000800,0x0c00200000001500,0x0c1704000c190300,0x080001ffffffff00\n"
".quad 0x0c17040011f00000,0x000000ffffffff00,0x080d040021f00000,0x0000010002001800\n"
".quad 0x00440400005de400,0x00000084001c0428,0x00000094009c042c,0x00400080019de42c\n"
".quad 0x00400020209c0328,0x004000a0209c0320,0x004000a020dc2350,0x00c00010311c4340\n"
".quad 0x0dc00010309c0350,0x004000a0315c0320,0x0040009040dc4348,0x0dc00010511c0348\n"
".quad 0x00c00010515c4320,0xfffffff0225c8550,0x00c00004019e0387,0x00400090515c4360\n"
".quad 0x00c0001061dc0348,0xfffffff0429c8548,0x00c00004621c0387,0x00c0001462dc0348\n"
".quad 0x0000001c61dc0348,0x0000002c821c0358,0x00c0002071dc0358,0x0040002002dde458\n"
".quad 0x00c00020821c0328,0x0000001c61dc0358,0x8ec00004b1dc0348,0x00000020621c0318\n"
".quad 0x00c00008719e0348,0x00c0000881de0360,0x00c00004b21e0360,0x00000000625c8560\n"
".quad 0x00000010729c85c9,0x000003c00001e7c9,0x00000004025de240,0x00c00004821c0318\n"
".quad 0x7e0000fc1fdc0358,0xee0000ffffdc0420,0x8e00000091dc0350,0x000002a00081e719\n"
".quad 0x0000000082a00340,0x00000020a2a02350,0x00000020a3600340,0x00fffffcd2e00348\n"
".quad 0x00c0000cd3200348,0x00000030b3a00348,0x00fffffca2e00358,0x00c0000ca3200348\n"
".quad 0x00c00020e3a00348,0x00000030b2e00358,0x00000038d3200358,0x00c00020b2e00348\n"
".quad 0x00c00008c3a20358,0x0000002ca2a00360,0x03fffff0e2e08548,0x00c00008a36203c1\n"
".quad 0x03fffff0d3208560,0x03fffff0d2e085c1,0x03fffff0e2a085c9,0x00000030a2a003c1\n"
".quad 0x03fffff0e2a08548,0x00c00004925e03c9,0x8e40002091dc0360,0x03fffc600001e719\n"
".quad 0x7e0000fc1fdc0340,0xee0000ffffdc0420,0x00000000619c8550,0x00000010701c85c1\n"
".quad 0xfffffff0219c85c1,0xfffffff0401c8597,0x00000000001de797,0x0000000000000080\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x080c040000000000,0x0000080000000000,0x00001100080a0400,0x0c1903000c002000\n"
".quad 0xffffff000c170400,0x11f00000080001ff,0xffffff000c170400,0x21f00000000000ff\n"
".quad 0x02001800080d0400,0x005de40000000100,0x009c042800440400,0x001c042c00000084\n"
".quad 0x21dc032c00000094,0x0081e71a8e0000fc,0x0121e440000000c0,0x00e04328004000c0\n"
".quad 0x0120035000c00010,0x3160432009c00010,0x40e08548004000d0,0xf0e0858c00000000\n"
".quad 0x1fdc03c900000003,0xffdc04207e0000fc,0x001c0350ee0000ff,0x001c235000400020\n"
".quad 0x01dc034000000008,0x0081e71b0e400080,0x00e1e44000000100,0x00a04328004000a0\n"
".quad 0x0120035000c00010,0x2160432007c00010,0xf0a08548004000b0,0x40e085c100000003\n"
".quad 0x30a0038400000000,0x40a0854800000008,0x001c039400000000,0x01dc034800400020\n"
".quad 0x0001e71b0e400080,0x00dde48000000000,0x009c4328004000a0,0x011c035000c00010\n"
".quad 0xf01c852007c00010,0x215c43c100000003,0x409c8548004000b0,0x201c038400000000\n"
".quad 0x401c854800000000,0x001de79400000000,0x0000008000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000010000000000,0x000000000c0c0400,0x0000100000000800\n"
".quad 0x00001400080a0400,0x1819030018002000,0xffffff000c170400,0x21f00000100002ff\n"
".quad 0xffffff000c170400,0x21f00000080001ff,0xffffff000c170400,0x11f00000000000ff\n"
".quad 0x02001800080d0400,0x0812040000000100,0x0000000000001900,0x0000190008110400\n"
".quad 0x0812040000000000,0x0000000000001800,0x0000180008110400,0x0812040000000000\n"
".quad 0x0000000000001700,0x0000170008110400,0x0812040000000000,0x0000000000001600\n"
".quad 0x0000160008110400,0x0000000000000000,0x0000000500000006,0x0000000000001670\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000188,0x0000000000000188\n"
".quad 0x0000000000000004,0x0000190560000000,0x0000000000000a49,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000004c4,0x00000000000004c4,0x0000000000000004\n"
".quad 0x0000190660000000,0x0000000000000f0d,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000001110,0x0000000000000004,0x0000180560000000\n"
".quad 0x0000000000000f0d,0x0000000000000000,0x0000000000000000,0x0000000000000294\n"
".quad 0x0000000000000294,0x0000000000000004,0x0000170560000000,0x00000000000011a1\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000002ac,0x00000000000002ac\n"
".quad 0x0000000000000004,0x0000160560000000,0x000000000000144d,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000001c0,0x00000000000001c0,0x0000000000000004\n"
".quad 0x0000160660000000,0x000000000000160d,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000010,0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_20$[768];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x6361622f656d6f68,0x65642f726f6c6568\n"
".quad 0x3831326564696369,0x2e332d616475632f,0x34366e65706f2f32,0x65622f2f62696c2f\n"
".quad 0x6f766e202f2f090a,0x2e332063636e6570,0x20746c6975622032,0x2d30313032206e6f\n"
".quad 0x090a0a33302d3131,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2f090a2d2d2d2d2d,0x6c69706d6f43202f,0x706d742f20676e69,0x5f746678706d742f\n"
".quad 0x6336333630303030,0x303030303030305f,0x6163735f31322d30,0x7241656772614c6e\n"
".quad 0x337070632e796172,0x706d742f2820692e,0x4e2e23494263632f,0x090a2978627a356b\n"
".quad 0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x090a0a2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f090a2d2d2d2d2d\n"
".quad 0x6e6f6974704f202f,0x2d2d2f2f090a3a73,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x5420202f2f090a2d,0x74703a7465677261,0x733a415349202c78\n"
".quad 0x6e45202c30325f6d,0x74696c3a6e616964,0x696f50202c656c74,0x7a6953207265746e\n"
".quad 0x2f2f090a34363a65,0x4f2809334f2d2020,0x74617a696d697470,0x6576656c206e6f69\n"
".quad 0x20202f2f090a296c,0x626544280930672d,0x6c6576656c206775,0x2d20202f2f090a29\n"
".quad 0x6f7065522809326d,0x7369766461207472,0x090a29736569726f,0x2d2d2d2d2d2d2f2f\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x090a0a2d2d2d2d2d,0x093109656c69662e\n"
".quad 0x6e616d6d6f633c22,0x223e656e696c2d64,0x09656c69662e090a,0x2f706d742f220932\n"
".quad 0x305f746678706d74,0x5f63363336303030,0x3030303030303030,0x6e6163735f30322d\n"
".quad 0x727241656772614c,0x66616475632e7961,0x0a227570672e3265,0x3309656c69662e09\n"
".quad 0x6c2f7273752f2209,0x782f6363672f6269,0x696c2d34365f3638,0x2f756e672d78756e\n"
".quad 0x6e692f372e342e34,0x74732f6564756c63,0x0a22682e66656464,0x3409656c69662e09\n"
".quad 0x2f656d6f682f2209,0x726f6c6568636162,0x656469636965642f,0x616475632f383132\n"
".quad 0x6e69622f322e332d,0x6c636e692f2e2e2f,0x2f7472632f656475,0x725f656369766564\n"
".quad 0x682e656d69746e75,0x656c69662e090a22,0x6d6f682f22093509,0x6c65686361622f65\n"
".quad 0x69636965642f726f,0x75632f3831326564,0x622f322e332d6164,0x6e692f2e2e2f6e69\n"
".quad 0x6f682f6564756c63,0x6e696665645f7473,0x2e090a22682e7365,0x22093609656c6966\n"
".quad 0x61622f656d6f682f,0x642f726f6c656863,0x3132656469636965,0x332d616475632f38\n"
".quad 0x2e2f6e69622f322e,0x64756c636e692f2e,0x69746c6975622f65,0x2e73657079745f6e\n"
".quad 0x6c69662e090a2268,0x6f682f2209370965,0x65686361622f656d,0x636965642f726f6c\n"
".quad 0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962,0x642f6564756c636e\n"
".quad 0x79745f6563697665,0x090a22682e736570,0x093809656c69662e,0x622f656d6f682f22\n"
".quad 0x2f726f6c65686361,0x3265646963696564,0x2d616475632f3831,0x2f6e69622f322e33\n"
".quad 0x756c636e692f2e2e,0x65766972642f6564,0x2e73657079745f72,0x6c69662e090a2268\n"
".quad 0x6f682f2209390965,0x65686361622f656d,0x636965642f726f6c,0x632f383132656469\n"
".quad 0x2f322e332d616475,0x692f2e2e2f6e6962,0x732f6564756c636e,0x745f656361667275\n"
".quad 0x0a22682e73657079,0x3109656c69662e09,0x656d6f682f220930,0x6f6c65686361622f\n"
".quad 0x6469636965642f72,0x6475632f38313265,0x69622f322e332d61,0x636e692f2e2e2f6e\n"
".quad 0x7865742f6564756c,0x7079745f65727574,0x2e090a22682e7365,0x09313109656c6966\n"
".quad 0x622f656d6f682f22,0x2f726f6c65686361,0x3265646963696564,0x2d616475632f3831\n"
".quad 0x2f6e69622f322e33,0x756c636e692f2e2e,0x6f746365762f6564,0x2e73657079745f72\n"
".quad 0x6c69662e090a2268,0x682f220932310965,0x686361622f656d6f,0x6965642f726f6c65\n"
".quad 0x2f38313265646963,0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6c5f656369766564,0x61705f68636e7561,0x73726574656d6172,0x69662e090a22682e\n"
".quad 0x2f2209333109656c,0x6361622f656d6f68,0x65642f726f6c6568,0x3831326564696369\n"
".quad 0x2e332d616475632f,0x2e2e2f6e69622f32,0x6564756c636e692f,0x6f74732f7472632f\n"
".quad 0x616c635f65676172,0x2e090a22682e7373,0x09343109656c6966,0x6e692f7273752f22\n"
".quad 0x38782f6564756c63,0x6e696c2d34365f36,0x622f756e672d7875,0x657079742f737469\n"
".quad 0x662e090a22682e73,0x2209353109656c69,0x636e692f7273752f,0x6d69742f6564756c\n"
".quad 0x662e090a22682e65,0x2209363109656c69,0x6772614c6e616373,0x632e796172724165\n"
".quad 0x6c69662e090a2275,0x682f220937310965,0x686361622f656d6f,0x6965642f726f6c65\n"
".quad 0x2f38313265646963,0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x665f6e6f6d6d6f63,0x736e6f6974636e75,0x69662e090a22682e,0x2f2209383109656c\n"
".quad 0x6361622f656d6f68,0x65642f726f6c6568,0x3831326564696369,0x2e332d616475632f\n"
".quad 0x2e2e2f6e69622f32,0x6564756c636e692f,0x75665f6874616d2f,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x682f220939310965,0x686361622f656d6f,0x6965642f726f6c65\n"
".quad 0x2f38313265646963,0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6e6f635f6874616d,0x682e73746e617473,0x656c69662e090a22,0x6f682f2209303209\n"
".quad 0x65686361622f656d,0x636965642f726f6c,0x632f383132656469,0x2f322e332d616475\n"
".quad 0x692f2e2e2f6e6962,0x642f6564756c636e,0x75665f6563697665,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x682f220931320965,0x686361622f656d6f,0x6965642f726f6c65\n"
".quad 0x2f38313265646963,0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x74615f31315f6d73,0x6e75665f63696d6f,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x6f682f2209323209,0x65686361622f656d,0x636965642f726f6c,0x632f383132656469\n"
".quad 0x2f322e332d616475,0x692f2e2e2f6e6962,0x732f6564756c636e,0x6f74615f32315f6d\n"
".quad 0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a,0x6d6f682f22093332\n"
".quad 0x6c65686361622f65,0x69636965642f726f,0x75632f3831326564,0x622f322e332d6164\n"
".quad 0x6e692f2e2e2f6e69,0x6d732f6564756c63,0x62756f645f33315f,0x74636e75665f656c\n"
".quad 0x0a22682e736e6f69,0x3209656c69662e09,0x656d6f682f220934,0x6f6c65686361622f\n"
".quad 0x6469636965642f72,0x6475632f38313265,0x69622f322e332d61,0x636e692f2e2e2f6e\n"
".quad 0x5f6d732f6564756c,0x696d6f74615f3032,0x6974636e75665f63,0x090a22682e736e6f\n"
".quad 0x353209656c69662e,0x2f656d6f682f2209,0x726f6c6568636162,0x656469636965642f\n"
".quad 0x616475632f383132,0x6e69622f322e332d,0x6c636e692f2e2e2f,0x325f6d732f656475\n"
".quad 0x6e6972746e695f30,0x0a22682e73636973,0x3209656c69662e09,0x656d6f682f220936\n"
".quad 0x6f6c65686361622f,0x6469636965642f72,0x6475632f38313265,0x69622f322e332d61\n"
".quad 0x636e692f2e2e2f6e,0x7275732f6564756c,0x6e75665f65636166,0x682e736e6f697463\n"
".quad 0x656c69662e090a22,0x6f682f2209373209,0x65686361622f656d,0x636965642f726f6c\n"
".quad 0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962,0x742f6564756c636e\n"
".quad 0x665f657275747865,0x6e75665f68637465,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x6f682f2209383209,0x65686361622f656d,0x636965642f726f6c,0x632f383132656469\n"
".quad 0x2f322e332d616475,0x692f2e2e2f6e6962,0x6d2f6564756c636e,0x636e75665f687461\n"
".quad 0x62645f736e6f6974,0x682e337874705f6c,0x6e652e090a0a0a22,0x34315a5f20797274\n"
".quad 0x5f314c5f6e616373,0x506a6c656e72656b,0x09090a28205f536a,0x2e206d617261702e\n"
".quad 0x75635f5f20323375,0x5f5f6d7261706164,0x5f6e61637334315a,0x656e72656b5f314c\n"
".quad 0x6e5f5f536a506a6c,0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x7334315a5f5f6d72,0x6b5f314c5f6e6163,0x6a506a6c656e7265,0x2c617461645f5f53\n"
".quad 0x617261702e09090a,0x5f203436752e206d,0x726170616475635f,0x637334315a5f5f6d\n"
".quad 0x656b5f314c5f6e61,0x536a506a6c656e72,0x297265746e695f5f,0x65722e090a7b090a\n"
".quad 0x25203233752e2067,0x090a3b3e33373c72,0x36752e206765722e,0x34343c6472252034\n"
".quad 0x6765722e090a3b3e,0x2520646572702e20,0x090a3b3e31313c70,0x206465726168732e\n"
".quad 0x34206e67696c612e,0x635f5f2038622e20,0x75635f5f5f616475,0x6c61636f6c5f6164\n"
".quad 0x3038325f7261765f,0x6f6e5f32345f3839,0x5f74736e6f635f6e,0x3432617461645f73\n"
".quad 0x0a3b5d383633345b,0x363109636f6c2e09,0x4c240a3009353209,0x5f6e696765625744\n"
".quad 0x6e61637334315a5f,0x6e72656b5f314c5f,0x3a5f536a506a6c65,0x33752e766f6d090a\n"
".quad 0x202c317225092032,0x3b782e6469746e25,0x33752e766f6d090a,0x202c327225092032\n"
".quad 0x782e646961746325,0x6c2e6c756d090a3b,0x2509203233752e6f,0x2c317225202c3372\n"
".quad 0x6d090a3b32722520,0x33752e6f6c2e6c75,0x202c347225092032,0x0a3b32202c337225\n"
".quad 0x3233752e766f6d09,0x25202c3572250920,0x090a3b782e646974,0x203233752e646461\n"
".quad 0x7225202c36722509,0x0a3b357225202c34,0x617261702e646c09,0x2509203233752e6d\n"
".quad 0x635f5f5b202c3772,0x5f6d726170616475,0x6e61637334315a5f,0x6e72656b5f314c5f\n"
".quad 0x5f5f536a506a6c65,0x746573090a3b5d6e,0x3233752e746c2e70,0x25202c3170250920\n"
".quad 0x3b377225202c3672,0x203170252140090a,0x744c240920617262,0x3b383339375f305f\n"
".quad 0x3109636f6c2e090a,0x090a300939330936,0x6d617261702e646c,0x722509203436752e\n"
".quad 0x635f5f5b202c3164,0x5f6d726170616475,0x6e61637334315a5f,0x6e72656b5f314c5f\n"
".quad 0x5f5f536a506a6c65,0x090a3b5d61746164,0x2e3436752e747663,0x6472250920323375\n"
".quad 0x0a3b367225202c32,0x6469772e6c756d09,0x2509203233752e65,0x367225202c336472\n"
".quad 0x6461090a3b34202c,0x2509203436752e64,0x647225202c346472,0x3b33647225202c31\n"
".quad 0x6f6c672e646c090a,0x203233752e6c6162,0x255b202c38722509,0x0a3b5d302b346472\n"
".quad 0x696e752e61726209,0x5f305f744c240920,0x4c240a3b32383637,0x383339375f305f74\n"
".quad 0x752e766f6d090a3a,0x2c38722509203233,0x5f744c240a3b3020,0x0a3a323836375f30\n"
".quad 0x3436752e766f6d09,0x202c356472250920,0x5f5f616475635f5f,0x6f6c5f616475635f\n"
".quad 0x5f7261765f6c6163,0x32345f3839303832,0x6e6f635f6e6f6e5f,0x7461645f735f7473\n"
".quad 0x6461090a3b343261,0x2509203233732e64,0x2c357225202c3972,0x726873090a3b3420\n"
".quad 0x722509203233752e,0x2c357225202c3031,0x73090a3b39722520,0x09203233752e7268\n"
".quad 0x7225202c31317225,0x090a3b38202c3031,0x203233752e646461,0x25202c3231722509\n"
".quad 0x357225202c313172,0x752e747663090a3b,0x09203233752e3436,0x7225202c36647225\n"
".quad 0x6c756d090a3b3231,0x33752e656469772e,0x2c37647225092032,0x34202c3231722520\n"
".quad 0x752e646461090a3b,0x3864722509203436,0x202c35647225202c,0x73090a3b37647225\n"
".quad 0x6465726168732e74,0x255b09203233752e,0x202c5d302b386472,0x6461090a3b387225\n"
".quad 0x2509203233752e64,0x367225202c333172,0x090a3b317225202c,0x2e746c2e70746573\n"
".quad 0x3270250920323375,0x202c33317225202c,0x2140090a3b377225,0x2061726220327025\n"
".quad 0x385f305f744c2409,0x6c2e090a3b303534,0x303409363109636f,0x702e646c090a3009\n"
".quad 0x3436752e6d617261,0x202c396472250920,0x70616475635f5f5b,0x34315a5f5f6d7261\n"
".quad 0x5f314c5f6e616373,0x506a6c656e72656b,0x617461645f5f536a,0x2e747663090a3b5d\n"
".quad 0x203233752e343675,0x202c303164722509,0x6d090a3b33317225,0x2e656469772e6c75\n"
".quad 0x6472250920323375,0x33317225202c3131,0x6461090a3b34202c,0x2509203436752e64\n"
".quad 0x7225202c32316472,0x31647225202c3964,0x672e646c090a3b31,0x33752e6c61626f6c\n"
".quad 0x2c34317225092032,0x2b32316472255b20,0x617262090a3b5d30,0x4c240920696e752e\n"
".quad 0x343931385f305f74,0x5f305f744c240a3b,0x6d090a3a30353438,0x09203233752e766f\n"
".quad 0x3b30202c34317225,0x385f305f744c240a,0x6461090a3a343931,0x2509203233752e64\n"
".quad 0x357225202c353172,0x090a3b317225202c,0x203233732e646461,0x25202c3631722509\n"
".quad 0x0a3b34202c353172,0x3233752e72687309,0x202c373172250920,0x7225202c35317225\n"
".quad 0x726873090a3b3631,0x722509203233752e,0x37317225202c3831,0x6461090a3b38202c\n"
".quad 0x2509203233752e64,0x317225202c393172,0x3b38317225202c35,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c33316472,0x6c756d090a3b3931,0x33752e656469772e\n"
".quad 0x3431647225092032,0x202c39317225202c,0x2e646461090a3b34,0x6472250920343675\n"
".quad 0x35647225202c3531,0x3b3431647225202c,0x6168732e7473090a,0x203233752e646572\n"
".quad 0x2b35316472255b09,0x34317225202c5d30,0x09636f6c2e090a3b,0x0a30093334093631\n"
".quad 0x3233732e766f6d09,0x202c303272250920,0x6f6d090a3b317225,0x2509203233752e76\n"
".quad 0x0a3b30202c313272,0x71652e7074657309,0x702509203233752e,0x202c317225202c33\n"
".quad 0x40090a3b31327225,0x2061726220337025,0x315f305f744c2409,0x6d090a3b34313333\n"
".quad 0x09203233752e766f,0x3b31202c32327225,0x395f305f744c240a,0x2f2f200a3a383132\n"
".quad 0x4c203e706f6f6c3c,0x79646f6220706f6f,0x353420656e696c20,0x3109636f6c2e090a\n"
".quad 0x090a300935340936,0x636e79732e726162,0x6573090a3b300920,0x33752e656c2e7074\n"
".quad 0x202c347025092032,0x7225202c30327225,0x34702540090a3b35,0x4c24092061726220\n"
".quad 0x343734395f305f74,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c353420656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x090a383132395f30,0x09363109636f6c2e,0x756d090a30093635,0x3233752e6f6c2e6c\n"
".quad 0x202c333272250920,0x7225202c32327225,0x2e6c756d090a3b35,0x09203233752e6f6c\n"
".quad 0x7225202c34327225,0x090a3b32202c3332,0x203233752e646461,0x25202c3532722509\n"
".quad 0x327225202c343272,0x2e646461090a3b32,0x3272250920323375,0x2c35327225202c36\n"
".quad 0x090a3b3232722520,0x203233752e627573,0x25202c3732722509,0x0a3b31202c363272\n"
".quad 0x3233732e64646109,0x202c383272250920,0x3b33202c36327225,0x33752e726873090a\n"
".quad 0x2c39327225092032,0x25202c3732722520,0x6873090a3b383272,0x2509203233752e72\n"
".quad 0x327225202c303372,0x61090a3b38202c39,0x09203233752e6464,0x7225202c31337225\n"
".quad 0x30337225202c3632,0x752e747663090a3b,0x09203233752e3436,0x25202c3631647225\n"
".quad 0x756d090a3b313372,0x752e656469772e6c,0x3164722509203233,0x2c31337225202c37\n"
".quad 0x646461090a3b3420,0x722509203436752e,0x647225202c383164,0x3731647225202c35\n"
".quad 0x68732e646c090a3b,0x3233752e64657261,0x202c323372250920,0x2d2b38316472255b\n"
".quad 0x627573090a3b5d34,0x722509203233752e,0x35327225202c3333,0x6461090a3b31202c\n"
".quad 0x2509203233732e64,0x327225202c343372,0x73090a3b33202c35,0x09203233752e7268\n"
".quad 0x7225202c35337225,0x34337225202c3333,0x752e726873090a3b,0x3633722509203233\n"
".quad 0x202c35337225202c,0x2e646461090a3b38,0x3372250920323375,0x2c35327225202c37\n"
".quad 0x090a3b3633722520,0x2e3436752e747663,0x6472250920323375,0x37337225202c3931\n"
".quad 0x772e6c756d090a3b,0x203233752e656469,0x202c303264722509,0x3b34202c37337225\n"
".quad 0x36752e646461090a,0x3132647225092034,0x202c35647225202c,0x090a3b3032647225\n"
".quad 0x65726168732e646c,0x2509203233752e64,0x72255b202c383372,0x3b5d342d2b313264\n"
".quad 0x33752e646461090a,0x2c39337225092032,0x25202c3233722520,0x7473090a3b383372\n"
".quad 0x2e6465726168732e,0x72255b0920323375,0x2c5d342d2b383164,0x240a3b3933722520\n"
".quad 0x3734395f305f744c,0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c353420656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x0a383132395f305f,0x363109636f6c2e09,0x6d090a3009393509,0x33752e6f6c2e6c75\n"
".quad 0x2c32327225092032,0x32202c3232722520,0x09636f6c2e090a3b,0x0a30093334093631\n"
".quad 0x3233752e72687309,0x202c303272250920,0x3b31202c30327225,0x33752e766f6d090a\n"
".quad 0x2c30347225092032,0x746573090a3b3020,0x3233752e656e2e70,0x25202c3570250920\n"
".quad 0x347225202c303272,0x35702540090a3b30,0x4c24092061726220,0x383132395f305f74\n"
".quad 0x752e617262090a3b,0x5f744c240920696e,0x0a3b363037385f30,0x33315f305f744c24\n"
".quad 0x6f6d090a3a343133,0x2509203233752e76,0x0a3b31202c323272,0x37385f305f744c24\n"
".quad 0x766f6d090a3a3630,0x722509203233752e,0x090a3b30202c3134,0x2e656e2e70746573\n"
".quad 0x3670250920323375,0x25202c357225202c,0x2540090a3b313472,0x0920617262203670\n"
".quad 0x30315f305f744c24,0x6c2e090a3b323432,0x353609363109636f,0x2e6c756d090a3009\n"
".quad 0x09203233752e6f6c,0x7225202c32347225,0x73090a3b32202c31,0x09203233752e6275\n"
".quad 0x7225202c33347225,0x090a3b31202c3234,0x203233732e646461,0x25202c3434722509\n"
".quad 0x0a3b33202c323472,0x3233752e72687309,0x202c353472250920,0x7225202c33347225\n"
".quad 0x726873090a3b3434,0x722509203233752e,0x35347225202c3634,0x6461090a3b38202c\n"
".quad 0x2509203233752e64,0x347225202c373472,0x3b36347225202c32,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c32326472,0x6c756d090a3b3734,0x33752e656469772e\n"
".quad 0x3332647225092032,0x202c37347225202c,0x2e646461090a3b34,0x6472250920343675\n"
".quad 0x35647225202c3432,0x3b3332647225202c,0x6168732e646c090a,0x203233752e646572\n"
".quad 0x5b202c3834722509,0x342d2b3432647225,0x702e646c090a3b5d,0x3436752e6d617261\n"
".quad 0x2c35326472250920,0x616475635f5f5b20,0x315a5f5f6d726170,0x314c5f6e61637334\n"
".quad 0x6a6c656e72656b5f,0x746e695f5f536a50,0x7663090a3b5d7265,0x33752e3436752e74\n"
".quad 0x3632647225092032,0x090a3b327225202c,0x656469772e6c756d,0x722509203233752e\n"
".quad 0x327225202c373264,0x6461090a3b34202c,0x2509203436752e64,0x7225202c38326472\n"
".quad 0x647225202c353264,0x2e7473090a3b3732,0x752e6c61626f6c67,0x6472255b09203233\n"
".quad 0x25202c5d302b3832,0x6c2e090a3b383472,0x363609363109636f,0x2e766f6d090a3009\n"
".quad 0x3472250920323375,0x73090a3b30202c39,0x6465726168732e74,0x255b09203233752e\n"
".quad 0x5d342d2b34326472,0x0a3b39347225202c,0x30315f305f744c24,0x6f6d090a3a323432\n"
".quad 0x2509203233752e76,0x0a3b31202c303572,0x746c2e7074657309,0x702509203233752e\n"
".quad 0x202c317225202c37,0x40090a3b30357225,0x2061726220377025,0x315f305f744c2409\n"
".quad 0x6d090a3b34353730,0x09203233752e766f,0x3b31202c31357225,0x315f305f744c240a\n"
".quad 0x2f200a3a36363231,0x203e706f6f6c3c2f,0x646f6220706f6f4c,0x3620656e696c2079\n"
".quad 0x697473656e202c36,0x687470656420676e,0x747365202c31203a,0x6920646574616d69\n"
".quad 0x6e6f697461726574,0x6f6e6b6e75203a73,0x636f6c2e090a6e77,0x3009313709363109\n"
".quad 0x33752e726873090a,0x2c32327225092032,0x31202c3232722520,0x09636f6c2e090a3b\n"
".quad 0x0a30093337093631,0x6e79732e72616209,0x73090a3b30092063,0x752e656c2e707465\n"
".quad 0x2c38702509203233,0x25202c3135722520,0x702540090a3b3572,0x2409206172622038\n"
".quad 0x3531315f305f744c,0x3c2f2f200a3b3232,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c363620656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363231315f305f74,0x09636f6c2e090a36,0x0a30093438093631,0x2e6f6c2e6c756d09\n"
".quad 0x3572250920323375,0x2c32327225202c32,0x6d090a3b35722520,0x33752e6f6c2e6c75\n"
".quad 0x2c33357225092032,0x32202c3235722520,0x752e646461090a3b,0x3435722509203233\n"
".quad 0x202c33357225202c,0x73090a3b32327225,0x09203233752e6275,0x7225202c35357225\n"
".quad 0x090a3b31202c3435,0x203233732e646461,0x25202c3635722509,0x0a3b33202c343572\n"
".quad 0x3233752e72687309,0x202c373572250920,0x7225202c35357225,0x726873090a3b3635\n"
".quad 0x722509203233752e,0x37357225202c3835,0x6461090a3b38202c,0x2509203233752e64\n"
".quad 0x357225202c393572,0x3b38357225202c34,0x36752e747663090a,0x2509203233752e34\n"
".quad 0x7225202c39326472,0x6c756d090a3b3935,0x33752e656469772e,0x3033647225092032\n"
".quad 0x202c39357225202c,0x2e646461090a3b34,0x6472250920343675,0x35647225202c3133\n"
".quad 0x3b3033647225202c,0x6168732e646c090a,0x203233752e646572,0x5b202c3036722509\n"
".quad 0x342d2b3133647225,0x636f6c2e090a3b5d,0x3009353809363109,0x33752e646461090a\n"
".quad 0x2c31367225092032,0x25202c3435722520,0x7573090a3b323272,0x2509203233752e62\n"
".quad 0x367225202c323672,0x61090a3b31202c31,0x09203233732e6464,0x7225202c33367225\n"
".quad 0x090a3b33202c3136,0x203233752e726873,0x25202c3436722509,0x367225202c323672\n"
".quad 0x2e726873090a3b33,0x3672250920323375,0x2c34367225202c35,0x646461090a3b3820\n"
".quad 0x722509203233752e,0x31367225202c3636,0x0a3b35367225202c,0x3436752e74766309\n"
".quad 0x722509203233752e,0x367225202c323364,0x2e6c756d090a3b36,0x3233752e65646977\n"
".quad 0x2c33336472250920,0x34202c3636722520,0x752e646461090a3b,0x3364722509203436\n"
".quad 0x2c35647225202c34,0x0a3b333364722520,0x726168732e646c09,0x09203233752e6465\n"
".quad 0x255b202c37367225,0x5d342d2b34336472,0x68732e7473090a3b,0x3233752e64657261\n"
".quad 0x31336472255b0920,0x7225202c5d342d2b,0x6f6c2e090a3b3736,0x0936380936310963\n"
".quad 0x68732e646c090a30,0x3233752e64657261,0x202c383672250920,0x2d2b34336472255b\n"
".quad 0x646461090a3b5d34,0x722509203233752e,0x38367225202c3936,0x0a3b30367225202c\n"
".quad 0x726168732e747309,0x09203233752e6465,0x2d2b34336472255b,0x39367225202c5d34\n"
".quad 0x5f305f744c240a3b,0x200a3a3232353131,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3636,0x64656c6562616c20\n"
".quad 0x315f305f744c2420,0x6c2e090a36363231,0x393609363109636f,0x2e6c756d090a3009\n"
".quad 0x09203233752e6f6c,0x7225202c31357225,0x090a3b32202c3135,0x2e656c2e70746573\n"
".quad 0x3970250920323375,0x202c31357225202c,0x2540090a3b317225,0x0920617262203970\n"
".quad 0x31315f305f744c24,0x744c240a3b363632,0x34353730315f305f,0x09636f6c2e090a3a\n"
".quad 0x0a30093938093631,0x6e79732e72616209,0x40090a3b30092063,0x6172622031702521\n"
".quad 0x5f305f744c240920,0x090a3b3039323231,0x09363109636f6c2e,0x646c090a30093139\n"
".quad 0x2e6465726168732e,0x3772250920323375,0x386472255b202c30,0x646c090a3b5d302b\n"
".quad 0x752e6d617261702e,0x3364722509203436,0x75635f5f5b202c35,0x5f5f6d7261706164\n"
".quad 0x5f6e61637334315a,0x656e72656b5f314c,0x645f5f536a506a6c,0x63090a3b5d617461\n"
".quad 0x752e3436752e7476,0x3364722509203233,0x0a3b367225202c36,0x6469772e6c756d09\n"
".quad 0x2509203233752e65,0x7225202c37336472,0x61090a3b34202c36,0x09203436752e6464\n"
".quad 0x25202c3833647225,0x7225202c35336472,0x7473090a3b373364,0x2e6c61626f6c672e\n"
".quad 0x72255b0920323375,0x202c5d302b383364,0x4c240a3b30377225,0x393232315f305f74\n"
".quad 0x70252140090a3a30,0x2409206172622032,0x3832315f305f744c,0x6f6c2e090a3b3230\n"
".quad 0x0932390936310963,0x68732e646c090a30,0x3233752e64657261,0x202c313772250920\n"
".quad 0x302b35316472255b,0x702e646c090a3b5d,0x3436752e6d617261,0x2c39336472250920\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x314c5f6e61637334,0x6a6c656e72656b5f\n"
".quad 0x7461645f5f536a50,0x747663090a3b5d61,0x3233752e3436752e,0x2c30346472250920\n"
".quad 0x090a3b3331722520,0x656469772e6c756d,0x722509203233752e,0x317225202c313464\n"
".quad 0x61090a3b34202c33,0x09203436752e6464,0x25202c3234647225,0x7225202c39336472\n"
".quad 0x7473090a3b313464,0x2e6c61626f6c672e,0x72255b0920323375,0x202c5d302b323464\n"
".quad 0x4c240a3b31377225,0x303832315f305f74,0x636f6c2e090a3a32,0x3009333909363109\n"
".quad 0x0a3b74697865090a,0x5f646e6557444c24,0x6e61637334315a5f,0x6e72656b5f314c5f\n"
".quad 0x3a5f536a506a6c65,0x5f202f2f207d090a,0x5f6e61637334315a,0x656e72656b5f314c\n"
".quad 0x090a5f536a506a6c,0x096e72657478652e,0x206465726168732e,0x34206e67696c612e\n"
".quad 0x645f732038622e20,0x0a0a3b5d5b617461,0x207972746e652e09,0x6e61637338315a5f\n"
".quad 0x5f317265746e695f,0x6a506c656e72656b,0x702e09090a28206a,0x36752e206d617261\n"
".quad 0x616475635f5f2034,0x315a5f5f6d726170,0x6e695f6e61637338,0x72656b5f31726574\n"
".quad 0x645f6a6a506c656e,0x2e09090a2c617461,0x752e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x695f6e6163733831,0x656b5f317265746e,0x5f6a6a506c656e72\n"
".quad 0x7b090a2972657469,0x2e206765722e090a,0x343c722520323375,0x65722e090a3b3e37\n"
".quad 0x25203436752e2067,0x0a3b3e32323c6472,0x702e206765722e09,0x353c702520646572\n"
".quad 0x636f6c2e090a3b3e,0x3009353909363109,0x67656257444c240a,0x7338315a5f5f6e69\n"
".quad 0x65746e695f6e6163,0x656e72656b5f3172,0x6d090a3a6a6a506c,0x09203436752e766f\n"
".quad 0x5f73202c31647225,0x2e090a3b61746164,0x3109363109636f6c,0x6f6d090a30093131\n"
".quad 0x2509203233752e76,0x69746e25202c3172,0x6f6d090a3b782e64,0x2509203233752e76\n"
".quad 0x61746325202c3272,0x6d090a3b782e6469,0x33752e6f6c2e6c75,0x202c337225092032\n"
".quad 0x317225202c327225,0x752e766f6d090a3b,0x2c34722509203233,0x3b782e6469742520\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x202c347225202c35,0x2e646461090a3b32\n"
".quad 0x3672250920323375,0x25202c337225202c,0x646461090a3b3472,0x722509203233732e\n"
".quad 0x202c357225202c37,0x702e646c090a3b34,0x3233752e6d617261,0x5b202c3872250920\n"
".quad 0x6170616475635f5f,0x7338315a5f5f6d72,0x65746e695f6e6163,0x656e72656b5f3172\n"
".quad 0x6574695f6a6a506c,0x6c756d090a3b5d72,0x203233752e6f6c2e,0x7225202c39722509\n"
".quad 0x0a3b387225202c36,0x3233752e72687309,0x202c303172250920,0x377225202c357225\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x397225202c313172,0x6873090a3b32202c\n"
".quad 0x2509203233752e72,0x317225202c323172,0x61090a3b38202c30,0x09203233752e6464\n"
".quad 0x7225202c33317225,0x3b387225202c3131,0x7261702e646c090a,0x09203436752e6d61\n"
".quad 0x5f5b202c32647225,0x726170616475635f,0x637338315a5f5f6d,0x7265746e695f6e61\n"
".quad 0x6c656e72656b5f31,0x617461645f6a6a50,0x2e747663090a3b5d,0x203233752e343675\n"
".quad 0x25202c3364722509,0x756d090a3b333172,0x752e656469772e6c,0x3464722509203233\n"
".quad 0x202c33317225202c,0x2e646461090a3b34,0x6472250920343675,0x2c32647225202c35\n"
".quad 0x090a3b3464722520,0x203233752e646461,0x25202c3431722509,0x32317225202c3572\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x7225202c36647225,0x6c756d090a3b3431\n"
".quad 0x33752e656469772e,0x2c37647225092032,0x34202c3431722520,0x752e646461090a3b\n"
".quad 0x3864722509203436,0x202c31647225202c,0x6c090a3b37647225,0x6c61626f6c672e64\n"
".quad 0x722509203233752e,0x6472255b202c3531,0x090a3b5d342d2b35,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x2c5d302b38647225,0x090a3b3531722520,0x09363109636f6c2e\n"
".quad 0x61090a3009323131,0x09203233752e6464,0x7225202c36317225,0x61090a3b31202c35\n"
".quad 0x09203233732e6464,0x7225202c37317225,0x73090a3b35202c35,0x09203233752e7268\n"
".quad 0x7225202c38317225,0x37317225202c3631,0x752e726873090a3b,0x3931722509203233\n"
".quad 0x202c38317225202c,0x2e646461090a3b38,0x3272250920323375,0x202c357225202c30\n"
".quad 0x63090a3b39317225,0x752e3436752e7476,0x3964722509203233,0x0a3b30327225202c\n"
".quad 0x6469772e6c756d09,0x2509203233752e65,0x7225202c30316472,0x090a3b34202c3032\n"
".quad 0x203436752e646461,0x202c313164722509,0x7225202c31647225,0x6461090a3b303164\n"
".quad 0x2509203233752e64,0x317225202c313272,0x0a3b387225202c33,0x3436752e74766309\n"
".quad 0x722509203233752e,0x327225202c323164,0x2e6c756d090a3b31,0x3233752e65646977\n"
".quad 0x2c33316472250920,0x34202c3132722520,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c32647225202c34,0x0a3b333164722520,0x626f6c672e646c09,0x09203233752e6c61\n"
".quad 0x255b202c32327225,0x5d342d2b34316472,0x68732e7473090a3b,0x3233752e64657261\n"
".quad 0x31316472255b0920,0x327225202c5d342b,0x636f6c2e090a3b32,0x0935313109363109\n"
".quad 0x732e766f6d090a30,0x3332722509203233,0x090a3b317225202c,0x203233752e766f6d\n"
".quad 0x30202c3432722509,0x2e70746573090a3b,0x09203233752e7165,0x317225202c317025\n"
".quad 0x0a3b34327225202c,0x7262203170254009,0x315f744c24092061,0x090a3b303530325f\n"
".quad 0x203233752e766f6d,0x31202c3532722509,0x5f315f744c240a3b,0x2f200a3a32363532\n"
".quad 0x203e706f6f6c3c2f,0x646f6220706f6f4c,0x3120656e696c2079,0x636f6c2e090a3731\n"
".quad 0x0937313109363109,0x732e726162090a30,0x0a3b300920636e79,0x656c2e7074657309\n"
".quad 0x702509203233752e,0x2c33327225202c32,0x40090a3b34722520,0x2061726220327025\n"
".quad 0x325f315f744c2409,0x2f2f200a3b383138,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x313120656e696c20,0x2064616568202c37,0x2064656c6562616c\n"
".quad 0x35325f315f744c24,0x636f6c2e090a3236,0x0937323109363109,0x6c2e6c756d090a30\n"
".quad 0x2509203233752e6f,0x327225202c363272,0x0a3b347225202c35,0x2e6f6c2e6c756d09\n"
".quad 0x3272250920323375,0x2c36327225202c37,0x646461090a3b3220,0x722509203233752e\n"
".quad 0x37327225202c3832,0x0a3b35327225202c,0x3233752e64646109,0x202c393272250920\n"
".quad 0x7225202c38327225,0x627573090a3b3532,0x722509203233752e,0x39327225202c3033\n"
".quad 0x6461090a3b31202c,0x2509203233732e64,0x327225202c313372,0x73090a3b33202c39\n"
".quad 0x09203233752e7268,0x7225202c32337225,0x31337225202c3033,0x752e726873090a3b\n"
".quad 0x3333722509203233,0x202c32337225202c,0x2e646461090a3b38,0x3372250920323375\n"
".quad 0x2c39327225202c34,0x090a3b3333722520,0x2e3436752e747663,0x6472250920323375\n"
".quad 0x34337225202c3531,0x772e6c756d090a3b,0x203233752e656469,0x202c363164722509\n"
".quad 0x3b34202c34337225,0x36752e646461090a,0x3731647225092034,0x202c31647225202c\n"
".quad 0x090a3b3631647225,0x65726168732e646c,0x2509203233752e64,0x72255b202c353372\n"
".quad 0x3b5d342d2b373164,0x33752e627573090a,0x2c36337225092032,0x31202c3832722520\n"
".quad 0x732e646461090a3b,0x3733722509203233,0x202c38327225202c,0x2e726873090a3b33\n"
".quad 0x3372250920323375,0x2c36337225202c38,0x090a3b3733722520,0x203233752e726873\n"
".quad 0x25202c3933722509,0x0a3b38202c383372,0x3233752e64646109,0x202c303472250920\n"
".quad 0x7225202c38327225,0x747663090a3b3933,0x3233752e3436752e,0x2c38316472250920\n"
".quad 0x090a3b3034722520,0x656469772e6c756d,0x722509203233752e,0x347225202c393164\n"
".quad 0x61090a3b34202c30,0x09203436752e6464,0x25202c3032647225,0x647225202c316472\n"
".quad 0x2e646c090a3b3931,0x752e646572616873,0x3134722509203233,0x30326472255b202c\n"
".quad 0x61090a3b5d342d2b,0x09203233752e6464,0x7225202c32347225,0x31347225202c3533\n"
".quad 0x68732e7473090a3b,0x3233752e64657261,0x37316472255b0920,0x7225202c5d342d2b\n"
".quad 0x5f744c240a3b3234,0x0a3a383138325f31,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c37313120,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x2e090a323635325f,0x3109363109636f6c,0x756d090a30093033\n"
".quad 0x3233752e6f6c2e6c,0x202c353272250920,0x3b32202c35327225,0x3109636f6c2e090a\n"
".quad 0x0a30093531310936,0x3233752e72687309,0x202c333272250920,0x3b31202c33327225\n"
".quad 0x33752e766f6d090a,0x2c33347225092032,0x746573090a3b3020,0x3233752e656e2e70\n"
".quad 0x25202c3370250920,0x347225202c333272,0x33702540090a3b33,0x4c24092061726220\n"
".quad 0x323635325f315f74,0x5f315f744c240a3b,0x2e090a3a30353032,0x3109363109636f6c\n"
".quad 0x6162090a30093333,0x0920636e79732e72,0x636f6c2e090a3b30,0x0935333109363109\n"
".quad 0x68732e646c090a30,0x3233752e64657261,0x202c343472250920,0x5d302b386472255b\n"
".quad 0x6c672e7473090a3b,0x3233752e6c61626f,0x2b356472255b0920,0x347225202c5d342d\n"
".quad 0x636f6c2e090a3b34,0x0936333109363109,0x68732e646c090a30,0x3233752e64657261\n"
".quad 0x202c353472250920,0x342b31316472255b,0x672e7473090a3b5d,0x33752e6c61626f6c\n"
".quad 0x316472255b092032,0x25202c5d342d2b34,0x6c2e090a3b353472,0x333109363109636f\n"
".quad 0x697865090a300937,0x6557444c240a3b74,0x7338315a5f5f646e,0x65746e695f6e6163\n"
".quad 0x656e72656b5f3172,0x7d090a3a6a6a506c,0x38315a5f202f2f20,0x746e695f6e616373\n"
".quad 0x6e72656b5f317265,0x090a0a6a6a506c65,0x5f207972746e652e,0x5f6e61637338315a\n"
".quad 0x6b5f327265746e69,0x6a6a506c656e7265,0x61702e09090a2820,0x3436752e206d6172\n"
".quad 0x70616475635f5f20,0x38315a5f5f6d7261,0x746e695f6e616373,0x6e72656b5f327265\n"
".quad 0x61645f6a6a506c65,0x702e09090a2c6174,0x33752e206d617261,0x616475635f5f2032\n"
".quad 0x315a5f5f6d726170,0x6e695f6e61637338,0x72656b5f32726574,0x695f6a6a506c656e\n"
".quad 0x0a7b090a29726574,0x752e206765722e09,0x37343c7225203233,0x6765722e090a3b3e\n"
".quad 0x7225203436752e20,0x090a3b3e32323c64,0x72702e206765722e,0x3e353c7025206465\n"
".quad 0x09636f6c2e090a3b,0x3009393331093631,0x67656257444c240a,0x7338315a5f5f6e69\n"
".quad 0x65746e695f6e6163,0x656e72656b5f3272,0x6d090a3a6a6a506c,0x09203436752e766f\n"
".quad 0x5f73202c31647225,0x2e090a3b61746164,0x3109363109636f6c,0x6f6d090a30093535\n"
".quad 0x2509203233752e76,0x69746e25202c3172,0x6f6d090a3b782e64,0x2509203233752e76\n"
".quad 0x61746325202c3272,0x6d090a3b782e6469,0x33752e6f6c2e6c75,0x202c337225092032\n"
".quad 0x317225202c327225,0x752e766f6d090a3b,0x2c34722509203233,0x3b782e6469742520\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x202c347225202c35,0x2e646461090a3b32\n"
".quad 0x3672250920323375,0x25202c337225202c,0x646461090a3b3472,0x722509203233732e\n"
".quad 0x202c357225202c37,0x702e646c090a3b34,0x3233752e6d617261,0x5b202c3872250920\n"
".quad 0x6170616475635f5f,0x7338315a5f5f6d72,0x65746e695f6e6163,0x656e72656b5f3272\n"
".quad 0x6574695f6a6a506c,0x6c756d090a3b5d72,0x203233752e6f6c2e,0x7225202c39722509\n"
".quad 0x0a3b387225202c36,0x3233752e72687309,0x202c303172250920,0x377225202c357225\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x397225202c313172,0x6873090a3b32202c\n"
".quad 0x2509203233752e72,0x317225202c323172,0x61090a3b38202c30,0x09203233752e6464\n"
".quad 0x7225202c33317225,0x3b387225202c3131,0x7261702e646c090a,0x09203436752e6d61\n"
".quad 0x5f5b202c32647225,0x726170616475635f,0x637338315a5f5f6d,0x7265746e695f6e61\n"
".quad 0x6c656e72656b5f32,0x617461645f6a6a50,0x2e747663090a3b5d,0x203233752e343675\n"
".quad 0x25202c3364722509,0x756d090a3b333172,0x752e656469772e6c,0x3464722509203233\n"
".quad 0x202c33317225202c,0x2e646461090a3b34,0x6472250920343675,0x2c32647225202c35\n"
".quad 0x090a3b3464722520,0x203233752e646461,0x25202c3431722509,0x32317225202c3572\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x7225202c36647225,0x6c756d090a3b3431\n"
".quad 0x33752e656469772e,0x2c37647225092032,0x34202c3431722520,0x752e646461090a3b\n"
".quad 0x3864722509203436,0x202c31647225202c,0x6c090a3b37647225,0x6c61626f6c672e64\n"
".quad 0x722509203233752e,0x6472255b202c3531,0x090a3b5d342d2b35,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x2c5d302b38647225,0x090a3b3531722520,0x09363109636f6c2e\n"
".quad 0x61090a3009363531,0x09203233752e6464,0x7225202c36317225,0x61090a3b31202c35\n"
".quad 0x09203233732e6464,0x7225202c37317225,0x73090a3b35202c35,0x09203233752e7268\n"
".quad 0x7225202c38317225,0x37317225202c3631,0x752e726873090a3b,0x3931722509203233\n"
".quad 0x202c38317225202c,0x2e646461090a3b38,0x3272250920323375,0x202c357225202c30\n"
".quad 0x63090a3b39317225,0x752e3436752e7476,0x3964722509203233,0x0a3b30327225202c\n"
".quad 0x6469772e6c756d09,0x2509203233752e65,0x7225202c30316472,0x090a3b34202c3032\n"
".quad 0x203436752e646461,0x202c313164722509,0x7225202c31647225,0x6461090a3b303164\n"
".quad 0x2509203233752e64,0x317225202c313272,0x0a3b387225202c33,0x3436752e74766309\n"
".quad 0x722509203233752e,0x327225202c323164,0x2e6c756d090a3b31,0x3233752e65646977\n"
".quad 0x2c33316472250920,0x34202c3132722520,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c32647225202c34,0x0a3b333164722520,0x626f6c672e646c09,0x09203233752e6c61\n"
".quad 0x255b202c32327225,0x5d342d2b34316472,0x68732e7473090a3b,0x3233752e64657261\n"
".quad 0x31316472255b0920,0x327225202c5d342b,0x636f6c2e090a3b32,0x0938353109363109\n"
".quad 0x6c2e6c756d090a30,0x2509203233752e6f,0x317225202c333272,0x6f6d090a3b32202c\n"
".quad 0x2509203233752e76,0x0a3b31202c343272,0x746c2e7074657309,0x702509203233752e\n"
".quad 0x202c317225202c31,0x40090a3b34327225,0x2061726220317025,0x325f325f744c2409\n"
".quad 0x6f6d090a3b303530,0x2509203233752e76,0x0a3b31202c353272,0x35325f325f744c24\n"
".quad 0x3c2f2f200a3a3236,0x6f4c203e706f6f6c,0x2079646f6220706f,0x38353120656e696c\n"
".quad 0x6e697473656e202c,0x3a68747065642067,0x69747365202c3120,0x746920646574616d\n"
".quad 0x736e6f6974617265,0x776f6e6b6e75203a,0x09636f6c2e090a6e,0x3009323631093631\n"
".quad 0x33752e726873090a,0x2c33327225092032,0x31202c3332722520,0x09636f6c2e090a3b\n"
".quad 0x3009343631093631,0x79732e726162090a,0x090a3b300920636e,0x2e656c2e70746573\n"
".quad 0x3270250920323375,0x202c35327225202c,0x2540090a3b347225,0x0920617262203270\n"
".quad 0x38325f325f744c24,0x3c2f2f200a3b3831,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x38353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3635325f325f744c,0x09636f6c2e090a32,0x3009353731093631,0x6f6c2e6c756d090a\n"
".quad 0x722509203233752e,0x33327225202c3632,0x090a3b347225202c,0x752e6f6c2e6c756d\n"
".quad 0x3732722509203233,0x202c36327225202c,0x2e646461090a3b32,0x3272250920323375\n"
".quad 0x2c37327225202c38,0x090a3b3332722520,0x203233752e627573,0x25202c3932722509\n"
".quad 0x0a3b31202c383272,0x3233732e64646109,0x202c303372250920,0x3b33202c38327225\n"
".quad 0x33752e726873090a,0x2c31337225092032,0x25202c3932722520,0x6873090a3b303372\n"
".quad 0x2509203233752e72,0x337225202c323372,0x61090a3b38202c31,0x09203233752e6464\n"
".quad 0x7225202c33337225,0x32337225202c3832,0x752e747663090a3b,0x09203233752e3436\n"
".quad 0x25202c3531647225,0x756d090a3b333372,0x752e656469772e6c,0x3164722509203233\n"
".quad 0x2c33337225202c36,0x646461090a3b3420,0x722509203436752e,0x647225202c373164\n"
".quad 0x3631647225202c31,0x68732e646c090a3b,0x3233752e64657261,0x202c343372250920\n"
".quad 0x2d2b37316472255b,0x6f6c2e090a3b5d34,0x3637310936310963,0x2e646461090a3009\n"
".quad 0x3372250920323375,0x2c38327225202c35,0x090a3b3332722520,0x203233752e627573\n"
".quad 0x25202c3633722509,0x0a3b31202c353372,0x3233732e64646109,0x202c373372250920\n"
".quad 0x3b33202c35337225,0x33752e726873090a,0x2c38337225092032,0x25202c3633722520\n"
".quad 0x6873090a3b373372,0x2509203233752e72,0x337225202c393372,0x61090a3b38202c38\n"
".quad 0x09203233752e6464,0x7225202c30347225,0x39337225202c3533,0x752e747663090a3b\n"
".quad 0x09203233752e3436,0x25202c3831647225,0x756d090a3b303472,0x752e656469772e6c\n"
".quad 0x3164722509203233,0x2c30347225202c39,0x646461090a3b3420,0x722509203436752e\n"
".quad 0x647225202c303264,0x3931647225202c31,0x68732e646c090a3b,0x3233752e64657261\n"
".quad 0x202c313472250920,0x2d2b30326472255b,0x2e7473090a3b5d34,0x752e646572616873\n"
".quad 0x6472255b09203233,0x202c5d342d2b3731,0x2e090a3b31347225,0x3109363109636f6c\n"
".quad 0x646c090a30093737,0x2e6465726168732e,0x3472250920323375,0x326472255b202c32\n"
".quad 0x090a3b5d342d2b30,0x203233752e646461,0x25202c3334722509,0x337225202c323472\n"
".quad 0x732e7473090a3b34,0x33752e6465726168,0x326472255b092032,0x25202c5d342d2b30\n"
".quad 0x744c240a3b333472,0x3a383138325f325f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3835312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x090a323635325f32,0x09363109636f6c2e,0x6d090a3009303631\n"
".quad 0x33752e6f6c2e6c75,0x2c35327225092032,0x32202c3532722520,0x2e70746573090a3b\n"
".quad 0x09203233752e656c,0x327225202c337025,0x0a3b317225202c35,0x7262203370254009\n"
".quad 0x325f744c24092061,0x240a3b323635325f,0x3530325f325f744c,0x636f6c2e090a3a30\n"
".quad 0x0930383109363109,0x732e726162090a30,0x0a3b300920636e79,0x363109636f6c2e09\n"
".quad 0x090a300932383109,0x65726168732e646c,0x2509203233752e64,0x72255b202c343472\n"
".quad 0x090a3b5d302b3864,0x61626f6c672e7473,0x5b09203233752e6c,0x5d342d2b35647225\n"
".quad 0x0a3b34347225202c,0x363109636f6c2e09,0x090a300933383109,0x65726168732e646c\n"
".quad 0x2509203233752e64,0x72255b202c353472,0x0a3b5d342b313164,0x626f6c672e747309\n"
".quad 0x09203233752e6c61,0x2d2b34316472255b,0x35347225202c5d34,0x09636f6c2e090a3b\n"
".quad 0x3009343831093631,0x0a3b74697865090a,0x5f646e6557444c24,0x6e61637338315a5f\n"
".quad 0x5f327265746e695f,0x6a506c656e72656b,0x2f2f207d090a3a6a,0x61637338315a5f20\n"
".quad 0x327265746e695f6e,0x506c656e72656b5f,0x6e652e090a0a6a6a,0x30315a5f20797274\n"
".quad 0x416d726f66696e75,0x205f536a506a6464,0x7261702e09090a28,0x203233752e206d61\n"
".quad 0x6170616475635f5f,0x7530315a5f5f6d72,0x64416d726f66696e,0x6e5f5f536a506a64\n"
".quad 0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f,0x7530315a5f5f6d72\n"
".quad 0x64416d726f66696e,0x645f5f536a506a64,0x2e09090a2c617461,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5a5f5f6d72617061,0x726f66696e753031,0x536a506a6464416d\n"
".quad 0x297265746e695f5f,0x65722e090a7b090a,0x25203233752e2067,0x090a3b3e38313c72\n"
".quad 0x36752e206765722e,0x34313c6472252034,0x6765722e090a3b3e,0x2520646572702e20\n"
".quad 0x2e090a3b3e353c70,0x2e20646572616873,0x75635f5f20323375,0x6c61636f6c5f6164\n"
".quad 0x3238325f7261765f,0x6f6e5f32345f3036,0x5f74736e6f635f6e,0x6c2e090a3b696e75\n"
".quad 0x383109363109636f,0x57444c240a300936,0x5a5f5f6e69676562,0x726f66696e753031\n"
".quad 0x536a506a6464416d,0x2e766f6d090a3a5f,0x3172250920323375,0x646961746325202c\n"
".quad 0x766f6d090a3b782e,0x722509203233752e,0x2e64697425202c32,0x2e766f6d090a3b78\n"
".quad 0x3372250920323375,0x6573090a3b30202c,0x33752e656e2e7074,0x202c317025092032\n"
".quad 0x337225202c327225,0x2031702540090a3b,0x744c240920617262,0x3b323635325f335f\n"
".quad 0x3109636f6c2e090a,0x0a30093039310936,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5f5b202c316472,0x6d72617061647563,0x696e7530315a5f5f,0x6a6464416d726f66\n"
".quad 0x746e695f5f536a50,0x7663090a3b5d7265,0x33752e3436752e74,0x2c32647225092032\n"
".quad 0x6d090a3b31722520,0x2e656469772e6c75,0x6472250920323375,0x202c317225202c33\n"
".quad 0x2e646461090a3b34,0x6472250920343675,0x2c31647225202c34,0x090a3b3364722520\n"
".quad 0x626f6c672e75646c,0x09203233752e6c61,0x72255b202c347225,0x090a3b5d302b3464\n"
".quad 0x65726168732e7473,0x5b09203233752e64,0x6c5f616475635f5f,0x7261765f6c61636f\n"
".quad 0x345f30363238325f,0x6f635f6e6f6e5f32,0x5d696e755f74736e,0x240a3b347225202c\n"
".quad 0x3635325f335f744c,0x636f6c2e090a3a32,0x0931393109363109,0x732e726162090a30\n"
".quad 0x0a3b300920636e79,0x3233752e766f6d09,0x25202c3572250920,0x0a3b782e6469746e\n"
".quad 0x2e6f6c2e6c756d09,0x3672250920323375,0x25202c357225202c,0x6c756d090a3b3172\n"
".quad 0x203233752e6f6c2e,0x7225202c37722509,0x61090a3b32202c36,0x09203233752e6464\n"
".quad 0x377225202c387225,0x090a3b327225202c,0x6d617261702e646c,0x722509203233752e\n"
".quad 0x75635f5f5b202c39,0x5f5f6d7261706164,0x6f66696e7530315a,0x6a506a6464416d72\n"
".quad 0x090a3b5d6e5f5f53,0x2e65672e70746573,0x3270250920323375,0x25202c387225202c\n"
".quad 0x702540090a3b3972,0x2409206172622032,0x3730335f335f744c,0x636f6c2e090a3b34\n"
".quad 0x0936393109363109,0x61702e646c090a30,0x203436752e6d6172,0x5b202c3564722509\n"
".quad 0x6170616475635f5f,0x7530315a5f5f6d72,0x64416d726f66696e,0x645f5f536a506a64\n"
".quad 0x63090a3b5d617461,0x752e3436752e7476,0x3664722509203233,0x090a3b387225202c\n"
".quad 0x656469772e6c756d,0x722509203233752e,0x2c387225202c3764,0x646461090a3b3420\n"
".quad 0x722509203436752e,0x35647225202c3864,0x0a3b37647225202c,0x626f6c672e646c09\n"
".quad 0x09203233752e6c61,0x255b202c30317225,0x0a3b5d302b386472,0x726168732e646c09\n"
".quad 0x09203233752e6465,0x5f5b202c31317225,0x6f6c5f616475635f,0x5f7261765f6c6163\n"
".quad 0x32345f3036323832,0x6e6f635f6e6f6e5f,0x3b5d696e755f7473,0x33752e646461090a\n"
".quad 0x2c32317225092032,0x25202c3031722520,0x7473090a3b313172,0x2e6c61626f6c672e\n"
".quad 0x72255b0920323375,0x25202c5d302b3864,0x744c240a3b323172,0x3a343730335f335f\n"
".quad 0x33752e646461090a,0x2c33317225092032,0x7225202c38722520,0x70746573090a3b35\n"
".quad 0x203233752e65672e,0x7225202c33702509,0x3b397225202c3331,0x622033702540090a\n"
".quad 0x5f744c2409206172,0x0a3b363835335f33,0x363109636f6c2e09,0x090a300937393109\n"
".quad 0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3964,0x5f6d726170616475\n"
".quad 0x66696e7530315a5f,0x506a6464416d726f,0x617461645f5f536a,0x2e747663090a3b5d\n"
".quad 0x203233752e343675,0x202c303164722509,0x6d090a3b33317225,0x2e656469772e6c75\n"
".quad 0x6472250920323375,0x33317225202c3131,0x6461090a3b34202c,0x2509203436752e64\n"
".quad 0x7225202c32316472,0x31647225202c3964,0x672e646c090a3b31,0x33752e6c61626f6c\n"
".quad 0x2c34317225092032,0x2b32316472255b20,0x2e646c090a3b5d30,0x752e646572616873\n"
".quad 0x3531722509203233,0x6475635f5f5b202c,0x5f6c61636f6c5f61,0x363238325f726176\n"
".quad 0x6e6f6e5f32345f30,0x755f74736e6f635f,0x6461090a3b5d696e,0x2509203233752e64\n"
".quad 0x317225202c363172,0x3b35317225202c34,0x6f6c672e7473090a,0x203233752e6c6162\n"
".quad 0x2b32316472255b09,0x36317225202c5d30,0x5f335f744c240a3b,0x2e090a3a36383533\n"
".quad 0x3109363109636f6c,0x7865090a30093839,0x57444c240a3b7469,0x30315a5f5f646e65\n"
".quad 0x416d726f66696e75,0x3a5f536a506a6464,0x5f202f2f207d090a,0x6f66696e7530315a\n"
".quad 0x6a506a6464416d72,0x000000000a0a5f53\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[2042];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_20", (char*)__deviceText_$sm_20$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_20$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"a29e7cab1214c7d7",(char*)"scanLargeArray.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x4ba4079c,&__elfEntries1};
# 3 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c" 2
struct __T20 {unsigned __par0;unsigned *__par1;unsigned *__par2;int __dummy_field;};
struct __T21 {unsigned *__par0;unsigned __par1;int __dummy_field;};
struct __T22 {unsigned *__par0;unsigned __par1;int __dummy_field;};
struct __T23 {unsigned __par0;unsigned *__par1;unsigned *__par2;int __dummy_field;};
extern void __device_stub__Z14scan_L1_kerneljPjS_(unsigned, unsigned *, unsigned *);
extern void __device_stub__Z18scan_inter1_kernelPjj(unsigned *, unsigned);
extern void __device_stub__Z18scan_inter2_kernelPjj(unsigned *, unsigned);
extern void __device_stub__Z10uniformAddjPjS_(unsigned, unsigned *, unsigned *);
static void __sti____cudaRegisterAll_50_tmpxft_0000636c_00000000_18_scanLargeArray_cpp1_ii_d3a160b8(void) __attribute__((__constructor__));
void __device_stub__Z14scan_L1_kerneljPjS_(unsigned __par0, unsigned *__par1, unsigned *__par2){ struct __T20 *__T24 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T24->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T24->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T24->__par2) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(unsigned, unsigned *, unsigned *))scan_L1_kernel)); (void)cudaLaunch(((char *)((void ( *)(unsigned, unsigned *, unsigned *))scan_L1_kernel))); };}
void scan_L1_kernel( unsigned __cuda_0,unsigned *__cuda_1,unsigned *__cuda_2)
# 26 "scanLargeArray.cu"
{__device_stub__Z14scan_L1_kerneljPjS_( __cuda_0,__cuda_1,__cuda_2);
# 93 "scanLargeArray.cu"
}
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c"
void __device_stub__Z18scan_inter1_kernelPjj( unsigned *__par0, unsigned __par1) { struct __T21 *__T25 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T25->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T25->__par1) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(unsigned *, unsigned))scan_inter1_kernel)); (void)cudaLaunch(((char *)((void ( *)(unsigned *, unsigned))scan_inter1_kernel))); }; }
void scan_inter1_kernel( unsigned *__cuda_0,unsigned __cuda_1)
# 96 "scanLargeArray.cu"
{__device_stub__Z18scan_inter1_kernelPjj( __cuda_0,__cuda_1);
# 137 "scanLargeArray.cu"
}
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c"
void __device_stub__Z18scan_inter2_kernelPjj( unsigned *__par0, unsigned __par1) { struct __T22 *__T26 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T26->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T26->__par1) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(unsigned *, unsigned))scan_inter2_kernel)); (void)cudaLaunch(((char *)((void ( *)(unsigned *, unsigned))scan_inter2_kernel))); }; }
void scan_inter2_kernel( unsigned *__cuda_0,unsigned __cuda_1)
# 140 "scanLargeArray.cu"
{__device_stub__Z18scan_inter2_kernelPjj( __cuda_0,__cuda_1);
# 184 "scanLargeArray.cu"
}
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c"
void __device_stub__Z10uniformAddjPjS_( unsigned __par0, unsigned *__par1, unsigned *__par2) { struct __T23 *__T27 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T27->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T27->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T27->__par2) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(unsigned, unsigned *, unsigned *))uniformAdd)); (void)cudaLaunch(((char *)((void ( *)(unsigned, unsigned *, unsigned *))uniformAdd))); }; }
void uniformAdd( unsigned __cuda_0,unsigned *__cuda_1,unsigned *__cuda_2)
# 187 "scanLargeArray.cu"
{__device_stub__Z10uniformAddjPjS_( __cuda_0,__cuda_1,__cuda_2);
# 198 "scanLargeArray.cu"
}
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c"
static void __sti____cudaRegisterAll_50_tmpxft_0000636c_00000000_18_scanLargeArray_cpp1_ii_d3a160b8(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(unsigned, unsigned *, unsigned *))uniformAdd), (char*)"_Z10uniformAddjPjS_", "_Z10uniformAddjPjS_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(unsigned *, unsigned))scan_inter2_kernel), (char*)"_Z18scan_inter2_kernelPjj", "_Z18scan_inter2_kernelPjj", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(unsigned *, unsigned))scan_inter1_kernel), (char*)"_Z18scan_inter1_kernelPjj", "_Z18scan_inter1_kernelPjj", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(unsigned, unsigned *, unsigned *))scan_L1_kernel), (char*)"_Z14scan_L1_kerneljPjS_", "_Z14scan_L1_kerneljPjS_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "/tmp/tmpxft_0000636c_00000000-4_scanLargeArray.cudafe1.stub.c" 2
