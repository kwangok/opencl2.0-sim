# 1 "mummergpu.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "mummergpu.cudafe1.cpp"
# 1 "mummergpu.cu"
# 46 "/home/bachelor/deicide218/cuda-3.2/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
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
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 2 3
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
# 43 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 48 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 56 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 64 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 67 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 74 "/usr/include/string.h" 3
extern inline void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 76 "/usr/include/string.h" 3
extern inline const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 81 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memchr(void *__s, int __c, size_t __n) throw()
# 82 "/usr/include/string.h" 3
{
# 83 "/usr/include/string.h" 3
return __builtin_memchr(__s, __c, __n);
# 84 "/usr/include/string.h" 3
}
# 87 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const void *memchr(const void *__s, int __c, size_t __n) throw()
# 88 "/usr/include/string.h" 3
{
# 89 "/usr/include/string.h" 3
return __builtin_memchr(__s, __c, __n);
# 90 "/usr/include/string.h" 3
}
# 103 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 105 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 114 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 116 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 127 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 130 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 135 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 138 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 142 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 145 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 149 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 152 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct locale_data *__locales[13];
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
# 164 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 167 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 173 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 181 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 213 "/usr/include/string.h" 3
extern inline char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern inline const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 220 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strchr(char *__s, int __c) throw()
# 221 "/usr/include/string.h" 3
{
# 222 "/usr/include/string.h" 3
return __builtin_strchr(__s, __c);
# 223 "/usr/include/string.h" 3
}
# 226 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strchr(const char *__s, int __c) throw()
# 227 "/usr/include/string.h" 3
{
# 228 "/usr/include/string.h" 3
return __builtin_strchr(__s, __c);
# 229 "/usr/include/string.h" 3
}
# 240 "/usr/include/string.h" 3
extern inline char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern inline const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 247 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strrchr(char *__s, int __c) throw()
# 248 "/usr/include/string.h" 3
{
# 249 "/usr/include/string.h" 3
return __builtin_strrchr(__s, __c);
# 250 "/usr/include/string.h" 3
}
# 253 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strrchr(const char *__s, int __c) throw()
# 254 "/usr/include/string.h" 3
{
# 255 "/usr/include/string.h" 3
return __builtin_strrchr(__s, __c);
# 256 "/usr/include/string.h" 3
}
# 269 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 282 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 286 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 292 "/usr/include/string.h" 3
extern inline char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern inline const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 299 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strpbrk(char *__s, const char *__accept) throw()
# 300 "/usr/include/string.h" 3
{
# 301 "/usr/include/string.h" 3
return __builtin_strpbrk(__s, __accept);
# 302 "/usr/include/string.h" 3
}
# 305 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strpbrk(const char *__s, const char *__accept) throw()
# 306 "/usr/include/string.h" 3
{
# 307 "/usr/include/string.h" 3
return __builtin_strpbrk(__s, __accept);
# 308 "/usr/include/string.h" 3
}
# 319 "/usr/include/string.h" 3
extern inline char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern inline const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 327 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strstr(char *__haystack, const char *__needle) throw()
# 328 "/usr/include/string.h" 3
{
# 329 "/usr/include/string.h" 3
return __builtin_strstr(__haystack, __needle);
# 330 "/usr/include/string.h" 3
}
# 333 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strstr(const char *__haystack, const char *__needle) throw()
# 334 "/usr/include/string.h" 3
{
# 335 "/usr/include/string.h" 3
return __builtin_strstr(__haystack, __needle);
# 336 "/usr/include/string.h" 3
}
# 346 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 352 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 357 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 365 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 367 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 386 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 389 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 397 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 404 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 411 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 436 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 443 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 449 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 453 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 457 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 460 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 467 "/usr/include/string.h" 3
extern inline char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 469 "/usr/include/string.h" 3
extern inline const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 474 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *index(char *__s, int __c) throw()
# 475 "/usr/include/string.h" 3
{
# 476 "/usr/include/string.h" 3
return __builtin_index(__s, __c);
# 477 "/usr/include/string.h" 3
}
# 480 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *index(const char *__s, int __c) throw()
# 481 "/usr/include/string.h" 3
{
# 482 "/usr/include/string.h" 3
return __builtin_index(__s, __c);
# 483 "/usr/include/string.h" 3
}
# 495 "/usr/include/string.h" 3
extern inline char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern inline const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 502 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *rindex(char *__s, int __c) throw()
# 503 "/usr/include/string.h" 3
{
# 504 "/usr/include/string.h" 3
return __builtin_rindex(__s, __c);
# 505 "/usr/include/string.h" 3
}
# 508 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *rindex(const char *__s, int __c) throw()
# 509 "/usr/include/string.h" 3
{
# 510 "/usr/include/string.h" 3
return __builtin_rindex(__s, __c);
# 511 "/usr/include/string.h" 3
}
# 521 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 526 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 534 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 538 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 545 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 549 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 557 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 564 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 567 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 569 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 574 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 577 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 584 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 588 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 591 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 599 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
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
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 428 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 431 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 443 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/home/bachelor/deicide218/cuda-3.2/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
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
# 38 "/usr/include/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw()
# 39 "/usr/include/bits/mathinline.h" 3
{
# 44 "/usr/include/bits/mathinline.h" 3
int __m;
# 45 "/usr/include/bits/mathinline.h" 3
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
# 46 "/usr/include/bits/mathinline.h" 3
return __m & 8;
# 48 "/usr/include/bits/mathinline.h" 3
} }
# 50 "/usr/include/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbit(double __x) throw()
# 51 "/usr/include/bits/mathinline.h" 3
{
# 56 "/usr/include/bits/mathinline.h" 3
int __m;
# 57 "/usr/include/bits/mathinline.h" 3
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
# 58 "/usr/include/bits/mathinline.h" 3
return __m & 128;
# 60 "/usr/include/bits/mathinline.h" 3
} }
# 62 "/usr/include/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw()
# 63 "/usr/include/bits/mathinline.h" 3
{
# 64 "/usr/include/bits/mathinline.h" 3
union { long double __l; int __i[3]; } __u = {__l: __x};
# 65 "/usr/include/bits/mathinline.h" 3
return (((__u.__i)[2]) & 32768) != 0;
# 66 "/usr/include/bits/mathinline.h" 3
} }
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
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
extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); }
# 148 "/usr/include/stdlib.h" 3
extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); }
# 151 "/usr/include/stdlib.h" 3
extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); }
# 158 "/usr/include/stdlib.h" 3
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); }
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
# 279 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) double atof(const char *__nptr) throw()
# 280 "/usr/include/stdlib.h" 3
{
# 281 "/usr/include/stdlib.h" 3
return strtod(__nptr, (char **)__null);
# 282 "/usr/include/stdlib.h" 3
} }
# 284 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) int atoi(const char *__nptr) throw()
# 285 "/usr/include/stdlib.h" 3
{
# 286 "/usr/include/stdlib.h" 3
return (int)strtol(__nptr, (char **)__null, 10);
# 287 "/usr/include/stdlib.h" 3
} }
# 289 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) long atol(const char *__nptr) throw()
# 290 "/usr/include/stdlib.h" 3
{
# 291 "/usr/include/stdlib.h" 3
return strtol(__nptr, (char **)__null, 10);
# 292 "/usr/include/stdlib.h" 3
} }
# 298 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) long long atoll(const char *__nptr) throw()
# 299 "/usr/include/stdlib.h" 3
{
# 300 "/usr/include/stdlib.h" 3
return strtoll(__nptr, (char **)__null, 10);
# 301 "/usr/include/stdlib.h" 3
} }
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 41 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 46 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 50 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 62 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 67 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 72 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 77 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 82 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef long register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 71 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 72 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 73 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)); }
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)); }
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)); }
# 43 "/usr/include/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_major(unsigned long long __dev) throw()
# 44 "/usr/include/sys/sysmacros.h" 3
{
# 45 "/usr/include/sys/sysmacros.h" 3
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095));
# 46 "/usr/include/sys/sysmacros.h" 3
} }
# 49 "/usr/include/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 50 "/usr/include/sys/sysmacros.h" 3
{
# 51 "/usr/include/sys/sysmacros.h" 3
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255));
# 52 "/usr/include/sys/sysmacros.h" 3
} }
# 55 "/usr/include/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 56 "/usr/include/sys/sysmacros.h" 3
{
# 57 "/usr/include/sys/sysmacros.h" 3
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32);
# 60 "/usr/include/sys/sysmacros.h" 3
} }
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
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
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 507 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 517 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 524 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 535 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 543 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 551 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 559 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 566 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 571 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 578 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 584 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 588 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw();
# 595 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 604 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 615 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 637 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 647 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 658 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 669 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 679 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 689 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 701 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 712 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 719 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 729 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 737 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 740 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 744 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 750 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 756 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 759 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 766 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 767 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 780 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 782 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 788 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 802 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 823 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 832 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 835 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 839 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 843 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 854 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 857 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 861 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 865 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 868 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 879 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 890 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 899 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 907 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 915 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 919 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 924 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 931 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 935 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 942 "/usr/include/stdlib.h" 3
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
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stdarg.h" 3
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
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 146 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 147 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 157 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 162 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 186 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 219 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 276 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 302 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 313 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 320 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 324 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 339 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 341 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 348 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 354 "/usr/include/stdio.h" 3
extern "C" { extern inline int vprintf(const char *__restrict__, __gnuc_va_list) __attribute__((__gnu_inline__)); }
# 356 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 363 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 367 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 376 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 379 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 382 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 394 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 397 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 407 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 413 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 415 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 453 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 461 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 465 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 513 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 514 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 520 "/usr/include/stdio.h" 3
extern "C" { extern inline int getchar() __attribute__((__gnu_inline__)); }
# 532 "/usr/include/stdio.h" 3
extern "C" { extern inline int getc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
# 533 "/usr/include/stdio.h" 3
extern "C" { extern inline int getchar_unlocked() __attribute__((__gnu_inline__)); }
# 543 "/usr/include/stdio.h" 3
extern "C" { extern inline int fgetc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
# 555 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 556 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 562 "/usr/include/stdio.h" 3
extern "C" { extern inline int putchar(int) __attribute__((__gnu_inline__)); }
# 576 "/usr/include/stdio.h" 3
extern "C" { extern inline int fputc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
# 584 "/usr/include/stdio.h" 3
extern "C" { extern inline int putc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
# 585 "/usr/include/stdio.h" 3
extern "C" { extern inline int putchar_unlocked(int) __attribute__((__gnu_inline__)); }
# 592 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 595 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 612 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 622 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 638 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 641 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 651 "/usr/include/stdio.h" 3
extern "C" { extern inline __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__) __attribute__((__gnu_inline__)); }
# 662 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 668 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 675 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 682 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 699 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 710 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 712 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 722 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 727 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 732 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 746 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 751 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 771 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 776 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 792 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 793 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 794 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 799 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 801 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 803 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 808 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 809 "/usr/include/stdio.h" 3
extern "C" { extern inline int feof_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
# 810 "/usr/include/stdio.h" 3
extern "C" { extern inline int ferror_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
# 819 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 831 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 836 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 846 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 852 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 858 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 864 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 869 "/usr/include/stdio.h" 3
struct obstack;
# 872 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 875 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 886 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 890 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 893 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 37 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int vprintf(const char *__restrict__ __fmt, __gnuc_va_list __arg)
# 38 "/usr/include/bits/stdio.h" 3
{
# 39 "/usr/include/bits/stdio.h" 3
return vfprintf(stdout, __fmt, __arg);
# 40 "/usr/include/bits/stdio.h" 3
} }
# 45 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getchar()
# 46 "/usr/include/bits/stdio.h" 3
{
# 47 "/usr/include/bits/stdio.h" 3
return _IO_getc(stdin);
# 48 "/usr/include/bits/stdio.h" 3
} }
# 54 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fgetc_unlocked(FILE *__fp)
# 55 "/usr/include/bits/stdio.h" 3
{
# 56 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
# 57 "/usr/include/bits/stdio.h" 3
} }
# 64 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getc_unlocked(FILE *__fp)
# 65 "/usr/include/bits/stdio.h" 3
{
# 66 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
# 67 "/usr/include/bits/stdio.h" 3
} }
# 71 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getchar_unlocked()
# 72 "/usr/include/bits/stdio.h" 3
{
# 73 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++)));
# 74 "/usr/include/bits/stdio.h" 3
} }
# 80 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putchar(int __c)
# 81 "/usr/include/bits/stdio.h" 3
{
# 82 "/usr/include/bits/stdio.h" 3
return _IO_putc(__c, stdout);
# 83 "/usr/include/bits/stdio.h" 3
} }
# 89 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fputc_unlocked(int __c, FILE *__stream)
# 90 "/usr/include/bits/stdio.h" 3
{
# 91 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
# 92 "/usr/include/bits/stdio.h" 3
} }
# 99 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putc_unlocked(int __c, FILE *__stream)
# 100 "/usr/include/bits/stdio.h" 3
{
# 101 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
# 102 "/usr/include/bits/stdio.h" 3
} }
# 106 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putchar_unlocked(int __c)
# 107 "/usr/include/bits/stdio.h" 3
{
# 108 "/usr/include/bits/stdio.h" 3
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c));
# 109 "/usr/include/bits/stdio.h" 3
} }
# 116 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream)
# 117 "/usr/include/bits/stdio.h" 3
{
# 118 "/usr/include/bits/stdio.h" 3
return __getdelim(__lineptr, __n, '\n', __stream);
# 119 "/usr/include/bits/stdio.h" 3
} }
# 126 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int feof_unlocked(FILE *__stream) throw()
# 127 "/usr/include/bits/stdio.h" 3
{
# 128 "/usr/include/bits/stdio.h" 3
return ((__stream->_flags) & 16) != 0;
# 129 "/usr/include/bits/stdio.h" 3
} }
# 133 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int ferror_unlocked(FILE *__stream) throw()
# 134 "/usr/include/bits/stdio.h" 3
{
# 135 "/usr/include/bits/stdio.h" 3
return ((__stream->_flags) & 32) != 0;
# 136 "/usr/include/bits/stdio.h" 3
} }
# 71 "/usr/include/assert.h" 3
extern "C" void __assert_fail(const char *, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));
# 76 "/usr/include/assert.h" 3
extern "C" void __assert_perror_fail(int, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));
# 84 "/usr/include/assert.h" 3
extern "C" void __assert(const char *, const char *, int) throw() __attribute__((__noreturn__));
# 43 "/usr/include/bits/stat.h" 3
extern "C" { struct stat {
# 45 "/usr/include/bits/stat.h" 3
__dev_t st_dev;
# 50 "/usr/include/bits/stat.h" 3
__ino_t st_ino;
# 58 "/usr/include/bits/stat.h" 3
__nlink_t st_nlink;
# 59 "/usr/include/bits/stat.h" 3
__mode_t st_mode;
# 61 "/usr/include/bits/stat.h" 3
__uid_t st_uid;
# 62 "/usr/include/bits/stat.h" 3
__gid_t st_gid;
# 64 "/usr/include/bits/stat.h" 3
int __pad0;
# 66 "/usr/include/bits/stat.h" 3
__dev_t st_rdev;
# 71 "/usr/include/bits/stat.h" 3
__off_t st_size;
# 75 "/usr/include/bits/stat.h" 3
__blksize_t st_blksize;
# 77 "/usr/include/bits/stat.h" 3
__blkcnt_t st_blocks;
# 88 "/usr/include/bits/stat.h" 3
timespec st_atim;
# 89 "/usr/include/bits/stat.h" 3
timespec st_mtim;
# 90 "/usr/include/bits/stat.h" 3
timespec st_ctim;
# 103 "/usr/include/bits/stat.h" 3
long __unused[3];
# 112 "/usr/include/bits/stat.h" 3
}; }
# 116 "/usr/include/bits/stat.h" 3
extern "C" { struct stat64 {
# 118 "/usr/include/bits/stat.h" 3
__dev_t st_dev;
# 120 "/usr/include/bits/stat.h" 3
__ino64_t st_ino;
# 121 "/usr/include/bits/stat.h" 3
__nlink_t st_nlink;
# 122 "/usr/include/bits/stat.h" 3
__mode_t st_mode;
# 129 "/usr/include/bits/stat.h" 3
__uid_t st_uid;
# 130 "/usr/include/bits/stat.h" 3
__gid_t st_gid;
# 132 "/usr/include/bits/stat.h" 3
int __pad0;
# 133 "/usr/include/bits/stat.h" 3
__dev_t st_rdev;
# 134 "/usr/include/bits/stat.h" 3
__off_t st_size;
# 140 "/usr/include/bits/stat.h" 3
__blksize_t st_blksize;
# 141 "/usr/include/bits/stat.h" 3
__blkcnt64_t st_blocks;
# 149 "/usr/include/bits/stat.h" 3
timespec st_atim;
# 150 "/usr/include/bits/stat.h" 3
timespec st_mtim;
# 151 "/usr/include/bits/stat.h" 3
timespec st_ctim;
# 164 "/usr/include/bits/stat.h" 3
long __unused[3];
# 168 "/usr/include/bits/stat.h" 3
}; }
# 211 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int stat(const char *__restrict__, struct stat *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 216 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int fstat(int, struct stat *) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(2))); }
# 230 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int stat64(const char *__restrict__, struct stat64 *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 232 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int fstat64(int, struct stat64 *) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(2))); }
# 240 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int fstatat(int, const char *__restrict__, struct stat *__restrict__, int) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) __attribute__((nonnull(3))); }
# 255 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int fstatat64(int, const char *__restrict__, struct stat64 *__restrict__, int) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) __attribute__((nonnull(3))); }
# 265 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int lstat(const char *__restrict__, struct stat *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 278 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int lstat64(const char *__restrict__, struct stat64 *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 286 "/usr/include/sys/stat.h" 3
extern "C" int chmod(const char *, __mode_t) throw() __attribute__((nonnull(1)));
# 293 "/usr/include/sys/stat.h" 3
extern "C" int lchmod(const char *, __mode_t) throw() __attribute__((nonnull(1)));
# 299 "/usr/include/sys/stat.h" 3
extern "C" int fchmod(int, __mode_t) throw();
# 305 "/usr/include/sys/stat.h" 3
extern "C" int fchmodat(int, const char *, __mode_t, int) throw() __attribute__((nonnull(2)));
# 314 "/usr/include/sys/stat.h" 3
extern "C" __mode_t umask(__mode_t) throw();
# 319 "/usr/include/sys/stat.h" 3
extern "C" __mode_t getumask() throw();
# 323 "/usr/include/sys/stat.h" 3
extern "C" int mkdir(const char *, __mode_t) throw() __attribute__((nonnull(1)));
# 330 "/usr/include/sys/stat.h" 3
extern "C" int mkdirat(int, const char *, __mode_t) throw() __attribute__((nonnull(2)));
# 338 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int mknod(const char *, __mode_t, __dev_t) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(1))); }
# 345 "/usr/include/sys/stat.h" 3
extern "C" { extern inline int mknodat(int, const char *, __mode_t, __dev_t) throw() __attribute__((__gnu_inline__)) __attribute__((nonnull(2))); }
# 352 "/usr/include/sys/stat.h" 3
extern "C" int mkfifo(const char *, __mode_t) throw() __attribute__((nonnull(1)));
# 359 "/usr/include/sys/stat.h" 3
extern "C" int mkfifoat(int, const char *, __mode_t) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/sys/stat.h" 3
extern "C" int utimensat(int, const char *, const timespec [2], int) throw() __attribute__((nonnull(2)));
# 374 "/usr/include/sys/stat.h" 3
extern "C" int futimens(int, const timespec [2]) throw();
# 401 "/usr/include/sys/stat.h" 3
extern "C" int __fxstat(int, int, struct stat *) throw() __attribute__((nonnull(3)));
# 403 "/usr/include/sys/stat.h" 3
extern "C" int __xstat(int, const char *, struct stat *) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 405 "/usr/include/sys/stat.h" 3
extern "C" int __lxstat(int, const char *, struct stat *) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 407 "/usr/include/sys/stat.h" 3
extern "C" int __fxstatat(int, int, const char *, struct stat *, int) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 434 "/usr/include/sys/stat.h" 3
extern "C" int __fxstat64(int, int, struct stat64 *) throw() __attribute__((nonnull(3)));
# 436 "/usr/include/sys/stat.h" 3
extern "C" int __xstat64(int, const char *, struct stat64 *) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 438 "/usr/include/sys/stat.h" 3
extern "C" int __lxstat64(int, const char *, struct stat64 *) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 440 "/usr/include/sys/stat.h" 3
extern "C" int __fxstatat64(int, int, const char *, struct stat64 *, int) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 444 "/usr/include/sys/stat.h" 3
extern "C" int __xmknod(int, const char *, __mode_t, __dev_t *) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 447 "/usr/include/sys/stat.h" 3
extern "C" int __xmknodat(int, int, const char *, __mode_t, __dev_t *) throw() __attribute__((nonnull(3))) __attribute__((nonnull(5)));
# 455 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) int stat(const char *__path, struct stat *__statbuf) throw()
# 456 "/usr/include/sys/stat.h" 3
{
# 457 "/usr/include/sys/stat.h" 3
return __xstat(1, __path, __statbuf);
# 458 "/usr/include/sys/stat.h" 3
} }
# 462 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) int lstat(const char *__path, struct stat *__statbuf) throw()
# 463 "/usr/include/sys/stat.h" 3
{
# 464 "/usr/include/sys/stat.h" 3
return __lxstat(1, __path, __statbuf);
# 465 "/usr/include/sys/stat.h" 3
} }
# 469 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) int fstat(int __fd, struct stat *__statbuf) throw()
# 470 "/usr/include/sys/stat.h" 3
{
# 471 "/usr/include/sys/stat.h" 3
return __fxstat(1, __fd, __statbuf);
# 472 "/usr/include/sys/stat.h" 3
} }
# 476 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) __attribute__((nonnull(3))) int fstatat(int __fd, const char *__filename, struct stat *__statbuf, int __flag) throw()
# 478 "/usr/include/sys/stat.h" 3
{
# 479 "/usr/include/sys/stat.h" 3
return __fxstatat(1, __fd, __filename, __statbuf, __flag);
# 480 "/usr/include/sys/stat.h" 3
} }
# 485 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) int mknod(const char *__path, __mode_t __mode, __dev_t __dev) throw()
# 486 "/usr/include/sys/stat.h" 3
{
# 487 "/usr/include/sys/stat.h" 3
return __xmknod(0, __path, __mode, &__dev);
# 488 "/usr/include/sys/stat.h" 3
} }
# 493 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) int mknodat(int __fd, const char *__path, __mode_t __mode, __dev_t __dev) throw()
# 495 "/usr/include/sys/stat.h" 3
{
# 496 "/usr/include/sys/stat.h" 3
return __xmknodat(0, __fd, __path, __mode, &__dev);
# 497 "/usr/include/sys/stat.h" 3
} }
# 504 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) int stat64(const char *__path, struct stat64 *__statbuf) throw()
# 505 "/usr/include/sys/stat.h" 3
{
# 506 "/usr/include/sys/stat.h" 3
return __xstat64(1, __path, __statbuf);
# 507 "/usr/include/sys/stat.h" 3
} }
# 511 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) int lstat64(const char *__path, struct stat64 *__statbuf) throw()
# 512 "/usr/include/sys/stat.h" 3
{
# 513 "/usr/include/sys/stat.h" 3
return __lxstat64(1, __path, __statbuf);
# 514 "/usr/include/sys/stat.h" 3
} }
# 518 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) int fstat64(int __fd, struct stat64 *__statbuf) throw()
# 519 "/usr/include/sys/stat.h" 3
{
# 520 "/usr/include/sys/stat.h" 3
return __fxstat64(1, __fd, __statbuf);
# 521 "/usr/include/sys/stat.h" 3
} }
# 525 "/usr/include/sys/stat.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((nonnull(2))) __attribute__((nonnull(3))) int fstatat64(int __fd, const char *__filename, struct stat64 *__statbuf, int __flag) throw()
# 527 "/usr/include/sys/stat.h" 3
{
# 528 "/usr/include/sys/stat.h" 3
return __fxstatat64(1, __fd, __filename, __statbuf, __flag);
# 529 "/usr/include/sys/stat.h" 3
} }
# 44 "/usr/include/bits/uio.h" 3
extern "C" { struct iovec {
# 46 "/usr/include/bits/uio.h" 3
void *iov_base;
# 47 "/usr/include/bits/uio.h" 3
size_t iov_len;
# 48 "/usr/include/bits/uio.h" 3
}; }
# 160 "/usr/include/bits/fcntl.h" 3
extern "C" { struct flock {
# 162 "/usr/include/bits/fcntl.h" 3
short l_type;
# 163 "/usr/include/bits/fcntl.h" 3
short l_whence;
# 165 "/usr/include/bits/fcntl.h" 3
__off_t l_start;
# 166 "/usr/include/bits/fcntl.h" 3
__off_t l_len;
# 171 "/usr/include/bits/fcntl.h" 3
__pid_t l_pid;
# 172 "/usr/include/bits/fcntl.h" 3
}; }
# 175 "/usr/include/bits/fcntl.h" 3
extern "C" { struct flock64 {
# 177 "/usr/include/bits/fcntl.h" 3
short l_type;
# 178 "/usr/include/bits/fcntl.h" 3
short l_whence;
# 179 "/usr/include/bits/fcntl.h" 3
__off64_t l_start;
# 180 "/usr/include/bits/fcntl.h" 3
__off64_t l_len;
# 181 "/usr/include/bits/fcntl.h" 3
__pid_t l_pid;
# 182 "/usr/include/bits/fcntl.h" 3
}; }
# 187 "/usr/include/bits/fcntl.h" 3
enum __pid_type {
# 189 "/usr/include/bits/fcntl.h" 3
F_OWNER_TID,
# 190 "/usr/include/bits/fcntl.h" 3
F_OWNER_PID,
# 191 "/usr/include/bits/fcntl.h" 3
F_OWNER_GID
# 192 "/usr/include/bits/fcntl.h" 3
};
# 195 "/usr/include/bits/fcntl.h" 3
extern "C" { struct f_owner_ex {
# 197 "/usr/include/bits/fcntl.h" 3
__pid_type type;
# 198 "/usr/include/bits/fcntl.h" 3
__pid_t pid;
# 199 "/usr/include/bits/fcntl.h" 3
}; }
# 264 "/usr/include/bits/fcntl.h" 3
extern "C" ssize_t readahead(int, __off64_t, size_t) throw();
# 269 "/usr/include/bits/fcntl.h" 3
extern "C" int sync_file_range(int, __off64_t, __off64_t, unsigned);
# 274 "/usr/include/bits/fcntl.h" 3
extern "C" ssize_t vmsplice(int, const iovec *, size_t, unsigned);
# 278 "/usr/include/bits/fcntl.h" 3
extern "C" ssize_t splice(int, __off64_t *, int, __off64_t *, size_t, unsigned);
# 283 "/usr/include/bits/fcntl.h" 3
extern "C" ssize_t tee(int, int, size_t, unsigned);
# 288 "/usr/include/bits/fcntl.h" 3
extern "C" int fallocate(int, int, __off_t, __off_t);
# 299 "/usr/include/bits/fcntl.h" 3
extern "C" int fallocate64(int, int, __off64_t, __off64_t);
# 64 "/usr/include/fcntl.h" 3
extern "C" int fcntl(int, int, ...);
# 73 "/usr/include/fcntl.h" 3
extern "C" int open(const char *, int, ...) __attribute__((nonnull(1)));
# 83 "/usr/include/fcntl.h" 3
extern "C" int open64(const char *, int, ...) __attribute__((nonnull(1)));
# 97 "/usr/include/fcntl.h" 3
extern "C" int openat(int, const char *, int, ...) __attribute__((nonnull(2)));
# 108 "/usr/include/fcntl.h" 3
extern "C" int openat64(int, const char *, int, ...) __attribute__((nonnull(2)));
# 118 "/usr/include/fcntl.h" 3
extern "C" int creat(const char *, __mode_t) __attribute__((nonnull(1)));
# 128 "/usr/include/fcntl.h" 3
extern "C" int creat64(const char *, __mode_t) __attribute__((nonnull(1)));
# 147 "/usr/include/fcntl.h" 3
extern "C" int lockf(int, int, __off_t);
# 156 "/usr/include/fcntl.h" 3
extern "C" int lockf64(int, int, __off64_t);
# 164 "/usr/include/fcntl.h" 3
extern "C" int posix_fadvise(int, __off_t, __off_t, int) throw();
# 176 "/usr/include/fcntl.h" 3
extern "C" int posix_fadvise64(int, __off64_t, __off64_t, int) throw();
# 186 "/usr/include/fcntl.h" 3
extern "C" int posix_fallocate(int, __off_t, __off_t);
# 197 "/usr/include/fcntl.h" 3
extern "C" int posix_fallocate64(int, __off64_t, __off64_t);
# 268 "/usr/include/unistd.h" 3
extern "C" { typedef __intptr_t intptr_t; }
# 275 "/usr/include/unistd.h" 3
extern "C" { typedef __socklen_t socklen_t; }
# 288 "/usr/include/unistd.h" 3
extern "C" int access(const char *, int) throw() __attribute__((nonnull(1)));
# 293 "/usr/include/unistd.h" 3
extern "C" int euidaccess(const char *, int) throw() __attribute__((nonnull(1)));
# 297 "/usr/include/unistd.h" 3
extern "C" int eaccess(const char *, int) throw() __attribute__((nonnull(1)));
# 305 "/usr/include/unistd.h" 3
extern "C" int faccessat(int, const char *, int, int) throw() __attribute__((nonnull(2)));
# 331 "/usr/include/unistd.h" 3
extern "C" __off_t lseek(int, __off_t, int) throw();
# 342 "/usr/include/unistd.h" 3
extern "C" __off64_t lseek64(int, __off64_t, int) throw();
# 350 "/usr/include/unistd.h" 3
extern "C" int close(int);
# 357 "/usr/include/unistd.h" 3
extern "C" ssize_t read(int, void *, size_t);
# 363 "/usr/include/unistd.h" 3
extern "C" ssize_t write(int, const void *, size_t);
# 373 "/usr/include/unistd.h" 3
extern "C" ssize_t pread(int, void *, size_t, __off_t);
# 381 "/usr/include/unistd.h" 3
extern "C" ssize_t pwrite(int, const void *, size_t, __off_t);
# 401 "/usr/include/unistd.h" 3
extern "C" ssize_t pread64(int, void *, size_t, __off64_t);
# 405 "/usr/include/unistd.h" 3
extern "C" ssize_t pwrite64(int, const void *, size_t, __off64_t);
# 414 "/usr/include/unistd.h" 3
extern "C" int pipe(int [2]) throw();
# 419 "/usr/include/unistd.h" 3
extern "C" int pipe2(int [2], int) throw();
# 429 "/usr/include/unistd.h" 3
extern "C" unsigned alarm(unsigned) throw();
# 441 "/usr/include/unistd.h" 3
extern "C" unsigned sleep(unsigned);
# 448 "/usr/include/unistd.h" 3
extern "C" __useconds_t ualarm(__useconds_t, __useconds_t) throw();
# 456 "/usr/include/unistd.h" 3
extern "C" int usleep(__useconds_t);
# 465 "/usr/include/unistd.h" 3
extern "C" int pause();
# 469 "/usr/include/unistd.h" 3
extern "C" int chown(const char *, __uid_t, __gid_t) throw() __attribute__((nonnull(1)));
# 474 "/usr/include/unistd.h" 3
extern "C" int fchown(int, __uid_t, __gid_t) throw();
# 479 "/usr/include/unistd.h" 3
extern "C" int lchown(const char *, __uid_t, __gid_t) throw() __attribute__((nonnull(1)));
# 487 "/usr/include/unistd.h" 3
extern "C" int fchownat(int, const char *, __uid_t, __gid_t, int) throw() __attribute__((nonnull(2)));
# 493 "/usr/include/unistd.h" 3
extern "C" int chdir(const char *) throw() __attribute__((nonnull(1)));
# 497 "/usr/include/unistd.h" 3
extern "C" int fchdir(int) throw();
# 507 "/usr/include/unistd.h" 3
extern "C" char *getcwd(char *, size_t) throw();
# 513 "/usr/include/unistd.h" 3
extern "C" char *get_current_dir_name() throw();
# 520 "/usr/include/unistd.h" 3
extern "C" char *getwd(char *) throw() __attribute__((__deprecated__)) __attribute__((nonnull(1)));
# 526 "/usr/include/unistd.h" 3
extern "C" int dup(int) throw();
# 529 "/usr/include/unistd.h" 3
extern "C" int dup2(int, int) throw();
# 534 "/usr/include/unistd.h" 3
extern "C" int dup3(int, int, int) throw();
# 538 "/usr/include/unistd.h" 3
extern "C" { extern char **__environ; }
# 540 "/usr/include/unistd.h" 3
extern "C" { extern char **environ; }
# 546 "/usr/include/unistd.h" 3
extern "C" int execve(const char *, char *const [], char *const []) throw() __attribute__((nonnull(1)));
# 552 "/usr/include/unistd.h" 3
extern "C" int fexecve(int, char *const [], char *const []) throw();
# 558 "/usr/include/unistd.h" 3
extern "C" int execv(const char *, char *const []) throw() __attribute__((nonnull(1)));
# 563 "/usr/include/unistd.h" 3
extern "C" int execle(const char *, const char *, ...) throw() __attribute__((nonnull(1)));
# 568 "/usr/include/unistd.h" 3
extern "C" int execl(const char *, const char *, ...) throw() __attribute__((nonnull(1)));
# 573 "/usr/include/unistd.h" 3
extern "C" int execvp(const char *, char *const []) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/unistd.h" 3
extern "C" int execlp(const char *, const char *, ...) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/unistd.h" 3
extern "C" int execvpe(const char *, char *const [], char *const []) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/unistd.h" 3
extern "C" int nice(int) throw();
# 598 "/usr/include/unistd.h" 3
extern "C" void _exit(int) __attribute__((__noreturn__));
# 27 "/usr/include/bits/confname.h" 3
enum {
# 28 "/usr/include/bits/confname.h" 3
_PC_LINK_MAX,
# 30 "/usr/include/bits/confname.h" 3
_PC_MAX_CANON,
# 32 "/usr/include/bits/confname.h" 3
_PC_MAX_INPUT,
# 34 "/usr/include/bits/confname.h" 3
_PC_NAME_MAX,
# 36 "/usr/include/bits/confname.h" 3
_PC_PATH_MAX,
# 38 "/usr/include/bits/confname.h" 3
_PC_PIPE_BUF,
# 40 "/usr/include/bits/confname.h" 3
_PC_CHOWN_RESTRICTED,
# 42 "/usr/include/bits/confname.h" 3
_PC_NO_TRUNC,
# 44 "/usr/include/bits/confname.h" 3
_PC_VDISABLE,
# 46 "/usr/include/bits/confname.h" 3
_PC_SYNC_IO,
# 48 "/usr/include/bits/confname.h" 3
_PC_ASYNC_IO,
# 50 "/usr/include/bits/confname.h" 3
_PC_PRIO_IO,
# 52 "/usr/include/bits/confname.h" 3
_PC_SOCK_MAXBUF,
# 54 "/usr/include/bits/confname.h" 3
_PC_FILESIZEBITS,
# 56 "/usr/include/bits/confname.h" 3
_PC_REC_INCR_XFER_SIZE,
# 58 "/usr/include/bits/confname.h" 3
_PC_REC_MAX_XFER_SIZE,
# 60 "/usr/include/bits/confname.h" 3
_PC_REC_MIN_XFER_SIZE,
# 62 "/usr/include/bits/confname.h" 3
_PC_REC_XFER_ALIGN,
# 64 "/usr/include/bits/confname.h" 3
_PC_ALLOC_SIZE_MIN,
# 66 "/usr/include/bits/confname.h" 3
_PC_SYMLINK_MAX,
# 68 "/usr/include/bits/confname.h" 3
_PC_2_SYMLINKS
# 70 "/usr/include/bits/confname.h" 3
};
# 74 "/usr/include/bits/confname.h" 3
enum {
# 75 "/usr/include/bits/confname.h" 3
_SC_ARG_MAX,
# 77 "/usr/include/bits/confname.h" 3
_SC_CHILD_MAX,
# 79 "/usr/include/bits/confname.h" 3
_SC_CLK_TCK,
# 81 "/usr/include/bits/confname.h" 3
_SC_NGROUPS_MAX,
# 83 "/usr/include/bits/confname.h" 3
_SC_OPEN_MAX,
# 85 "/usr/include/bits/confname.h" 3
_SC_STREAM_MAX,
# 87 "/usr/include/bits/confname.h" 3
_SC_TZNAME_MAX,
# 89 "/usr/include/bits/confname.h" 3
_SC_JOB_CONTROL,
# 91 "/usr/include/bits/confname.h" 3
_SC_SAVED_IDS,
# 93 "/usr/include/bits/confname.h" 3
_SC_REALTIME_SIGNALS,
# 95 "/usr/include/bits/confname.h" 3
_SC_PRIORITY_SCHEDULING,
# 97 "/usr/include/bits/confname.h" 3
_SC_TIMERS,
# 99 "/usr/include/bits/confname.h" 3
_SC_ASYNCHRONOUS_IO,
# 101 "/usr/include/bits/confname.h" 3
_SC_PRIORITIZED_IO,
# 103 "/usr/include/bits/confname.h" 3
_SC_SYNCHRONIZED_IO,
# 105 "/usr/include/bits/confname.h" 3
_SC_FSYNC,
# 107 "/usr/include/bits/confname.h" 3
_SC_MAPPED_FILES,
# 109 "/usr/include/bits/confname.h" 3
_SC_MEMLOCK,
# 111 "/usr/include/bits/confname.h" 3
_SC_MEMLOCK_RANGE,
# 113 "/usr/include/bits/confname.h" 3
_SC_MEMORY_PROTECTION,
# 115 "/usr/include/bits/confname.h" 3
_SC_MESSAGE_PASSING,
# 117 "/usr/include/bits/confname.h" 3
_SC_SEMAPHORES,
# 119 "/usr/include/bits/confname.h" 3
_SC_SHARED_MEMORY_OBJECTS,
# 121 "/usr/include/bits/confname.h" 3
_SC_AIO_LISTIO_MAX,
# 123 "/usr/include/bits/confname.h" 3
_SC_AIO_MAX,
# 125 "/usr/include/bits/confname.h" 3
_SC_AIO_PRIO_DELTA_MAX,
# 127 "/usr/include/bits/confname.h" 3
_SC_DELAYTIMER_MAX,
# 129 "/usr/include/bits/confname.h" 3
_SC_MQ_OPEN_MAX,
# 131 "/usr/include/bits/confname.h" 3
_SC_MQ_PRIO_MAX,
# 133 "/usr/include/bits/confname.h" 3
_SC_VERSION,
# 135 "/usr/include/bits/confname.h" 3
_SC_PAGESIZE,
# 138 "/usr/include/bits/confname.h" 3
_SC_RTSIG_MAX,
# 140 "/usr/include/bits/confname.h" 3
_SC_SEM_NSEMS_MAX,
# 142 "/usr/include/bits/confname.h" 3
_SC_SEM_VALUE_MAX,
# 144 "/usr/include/bits/confname.h" 3
_SC_SIGQUEUE_MAX,
# 146 "/usr/include/bits/confname.h" 3
_SC_TIMER_MAX,
# 151 "/usr/include/bits/confname.h" 3
_SC_BC_BASE_MAX,
# 153 "/usr/include/bits/confname.h" 3
_SC_BC_DIM_MAX,
# 155 "/usr/include/bits/confname.h" 3
_SC_BC_SCALE_MAX,
# 157 "/usr/include/bits/confname.h" 3
_SC_BC_STRING_MAX,
# 159 "/usr/include/bits/confname.h" 3
_SC_COLL_WEIGHTS_MAX,
# 161 "/usr/include/bits/confname.h" 3
_SC_EQUIV_CLASS_MAX,
# 163 "/usr/include/bits/confname.h" 3
_SC_EXPR_NEST_MAX,
# 165 "/usr/include/bits/confname.h" 3
_SC_LINE_MAX,
# 167 "/usr/include/bits/confname.h" 3
_SC_RE_DUP_MAX,
# 169 "/usr/include/bits/confname.h" 3
_SC_CHARCLASS_NAME_MAX,
# 172 "/usr/include/bits/confname.h" 3
_SC_2_VERSION,
# 174 "/usr/include/bits/confname.h" 3
_SC_2_C_BIND,
# 176 "/usr/include/bits/confname.h" 3
_SC_2_C_DEV,
# 178 "/usr/include/bits/confname.h" 3
_SC_2_FORT_DEV,
# 180 "/usr/include/bits/confname.h" 3
_SC_2_FORT_RUN,
# 182 "/usr/include/bits/confname.h" 3
_SC_2_SW_DEV,
# 184 "/usr/include/bits/confname.h" 3
_SC_2_LOCALEDEF,
# 187 "/usr/include/bits/confname.h" 3
_SC_PII,
# 189 "/usr/include/bits/confname.h" 3
_SC_PII_XTI,
# 191 "/usr/include/bits/confname.h" 3
_SC_PII_SOCKET,
# 193 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET,
# 195 "/usr/include/bits/confname.h" 3
_SC_PII_OSI,
# 197 "/usr/include/bits/confname.h" 3
_SC_POLL,
# 199 "/usr/include/bits/confname.h" 3
_SC_SELECT,
# 201 "/usr/include/bits/confname.h" 3
_SC_UIO_MAXIOV,
# 203 "/usr/include/bits/confname.h" 3
_SC_IOV_MAX = 60,
# 205 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET_STREAM,
# 207 "/usr/include/bits/confname.h" 3
_SC_PII_INTERNET_DGRAM,
# 209 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_COTS,
# 211 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_CLTS,
# 213 "/usr/include/bits/confname.h" 3
_SC_PII_OSI_M,
# 215 "/usr/include/bits/confname.h" 3
_SC_T_IOV_MAX,
# 219 "/usr/include/bits/confname.h" 3
_SC_THREADS,
# 221 "/usr/include/bits/confname.h" 3
_SC_THREAD_SAFE_FUNCTIONS,
# 223 "/usr/include/bits/confname.h" 3
_SC_GETGR_R_SIZE_MAX,
# 225 "/usr/include/bits/confname.h" 3
_SC_GETPW_R_SIZE_MAX,
# 227 "/usr/include/bits/confname.h" 3
_SC_LOGIN_NAME_MAX,
# 229 "/usr/include/bits/confname.h" 3
_SC_TTY_NAME_MAX,
# 231 "/usr/include/bits/confname.h" 3
_SC_THREAD_DESTRUCTOR_ITERATIONS,
# 233 "/usr/include/bits/confname.h" 3
_SC_THREAD_KEYS_MAX,
# 235 "/usr/include/bits/confname.h" 3
_SC_THREAD_STACK_MIN,
# 237 "/usr/include/bits/confname.h" 3
_SC_THREAD_THREADS_MAX,
# 239 "/usr/include/bits/confname.h" 3
_SC_THREAD_ATTR_STACKADDR,
# 241 "/usr/include/bits/confname.h" 3
_SC_THREAD_ATTR_STACKSIZE,
# 243 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIORITY_SCHEDULING,
# 245 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIO_INHERIT,
# 247 "/usr/include/bits/confname.h" 3
_SC_THREAD_PRIO_PROTECT,
# 249 "/usr/include/bits/confname.h" 3
_SC_THREAD_PROCESS_SHARED,
# 252 "/usr/include/bits/confname.h" 3
_SC_NPROCESSORS_CONF,
# 254 "/usr/include/bits/confname.h" 3
_SC_NPROCESSORS_ONLN,
# 256 "/usr/include/bits/confname.h" 3
_SC_PHYS_PAGES,
# 258 "/usr/include/bits/confname.h" 3
_SC_AVPHYS_PAGES,
# 260 "/usr/include/bits/confname.h" 3
_SC_ATEXIT_MAX,
# 262 "/usr/include/bits/confname.h" 3
_SC_PASS_MAX,
# 265 "/usr/include/bits/confname.h" 3
_SC_XOPEN_VERSION,
# 267 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XCU_VERSION,
# 269 "/usr/include/bits/confname.h" 3
_SC_XOPEN_UNIX,
# 271 "/usr/include/bits/confname.h" 3
_SC_XOPEN_CRYPT,
# 273 "/usr/include/bits/confname.h" 3
_SC_XOPEN_ENH_I18N,
# 275 "/usr/include/bits/confname.h" 3
_SC_XOPEN_SHM,
# 278 "/usr/include/bits/confname.h" 3
_SC_2_CHAR_TERM,
# 280 "/usr/include/bits/confname.h" 3
_SC_2_C_VERSION,
# 282 "/usr/include/bits/confname.h" 3
_SC_2_UPE,
# 285 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG2,
# 287 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG3,
# 289 "/usr/include/bits/confname.h" 3
_SC_XOPEN_XPG4,
# 292 "/usr/include/bits/confname.h" 3
_SC_CHAR_BIT,
# 294 "/usr/include/bits/confname.h" 3
_SC_CHAR_MAX,
# 296 "/usr/include/bits/confname.h" 3
_SC_CHAR_MIN,
# 298 "/usr/include/bits/confname.h" 3
_SC_INT_MAX,
# 300 "/usr/include/bits/confname.h" 3
_SC_INT_MIN,
# 302 "/usr/include/bits/confname.h" 3
_SC_LONG_BIT,
# 304 "/usr/include/bits/confname.h" 3
_SC_WORD_BIT,
# 306 "/usr/include/bits/confname.h" 3
_SC_MB_LEN_MAX,
# 308 "/usr/include/bits/confname.h" 3
_SC_NZERO,
# 310 "/usr/include/bits/confname.h" 3
_SC_SSIZE_MAX,
# 312 "/usr/include/bits/confname.h" 3
_SC_SCHAR_MAX,
# 314 "/usr/include/bits/confname.h" 3
_SC_SCHAR_MIN,
# 316 "/usr/include/bits/confname.h" 3
_SC_SHRT_MAX,
# 318 "/usr/include/bits/confname.h" 3
_SC_SHRT_MIN,
# 320 "/usr/include/bits/confname.h" 3
_SC_UCHAR_MAX,
# 322 "/usr/include/bits/confname.h" 3
_SC_UINT_MAX,
# 324 "/usr/include/bits/confname.h" 3
_SC_ULONG_MAX,
# 326 "/usr/include/bits/confname.h" 3
_SC_USHRT_MAX,
# 329 "/usr/include/bits/confname.h" 3
_SC_NL_ARGMAX,
# 331 "/usr/include/bits/confname.h" 3
_SC_NL_LANGMAX,
# 333 "/usr/include/bits/confname.h" 3
_SC_NL_MSGMAX,
# 335 "/usr/include/bits/confname.h" 3
_SC_NL_NMAX,
# 337 "/usr/include/bits/confname.h" 3
_SC_NL_SETMAX,
# 339 "/usr/include/bits/confname.h" 3
_SC_NL_TEXTMAX,
# 342 "/usr/include/bits/confname.h" 3
_SC_XBS5_ILP32_OFF32,
# 344 "/usr/include/bits/confname.h" 3
_SC_XBS5_ILP32_OFFBIG,
# 346 "/usr/include/bits/confname.h" 3
_SC_XBS5_LP64_OFF64,
# 348 "/usr/include/bits/confname.h" 3
_SC_XBS5_LPBIG_OFFBIG,
# 351 "/usr/include/bits/confname.h" 3
_SC_XOPEN_LEGACY,
# 353 "/usr/include/bits/confname.h" 3
_SC_XOPEN_REALTIME,
# 355 "/usr/include/bits/confname.h" 3
_SC_XOPEN_REALTIME_THREADS,
# 358 "/usr/include/bits/confname.h" 3
_SC_ADVISORY_INFO,
# 360 "/usr/include/bits/confname.h" 3
_SC_BARRIERS,
# 362 "/usr/include/bits/confname.h" 3
_SC_BASE,
# 364 "/usr/include/bits/confname.h" 3
_SC_C_LANG_SUPPORT,
# 366 "/usr/include/bits/confname.h" 3
_SC_C_LANG_SUPPORT_R,
# 368 "/usr/include/bits/confname.h" 3
_SC_CLOCK_SELECTION,
# 370 "/usr/include/bits/confname.h" 3
_SC_CPUTIME,
# 372 "/usr/include/bits/confname.h" 3
_SC_THREAD_CPUTIME,
# 374 "/usr/include/bits/confname.h" 3
_SC_DEVICE_IO,
# 376 "/usr/include/bits/confname.h" 3
_SC_DEVICE_SPECIFIC,
# 378 "/usr/include/bits/confname.h" 3
_SC_DEVICE_SPECIFIC_R,
# 380 "/usr/include/bits/confname.h" 3
_SC_FD_MGMT,
# 382 "/usr/include/bits/confname.h" 3
_SC_FIFO,
# 384 "/usr/include/bits/confname.h" 3
_SC_PIPE,
# 386 "/usr/include/bits/confname.h" 3
_SC_FILE_ATTRIBUTES,
# 388 "/usr/include/bits/confname.h" 3
_SC_FILE_LOCKING,
# 390 "/usr/include/bits/confname.h" 3
_SC_FILE_SYSTEM,
# 392 "/usr/include/bits/confname.h" 3
_SC_MONOTONIC_CLOCK,
# 394 "/usr/include/bits/confname.h" 3
_SC_MULTI_PROCESS,
# 396 "/usr/include/bits/confname.h" 3
_SC_SINGLE_PROCESS,
# 398 "/usr/include/bits/confname.h" 3
_SC_NETWORKING,
# 400 "/usr/include/bits/confname.h" 3
_SC_READER_WRITER_LOCKS,
# 402 "/usr/include/bits/confname.h" 3
_SC_SPIN_LOCKS,
# 404 "/usr/include/bits/confname.h" 3
_SC_REGEXP,
# 406 "/usr/include/bits/confname.h" 3
_SC_REGEX_VERSION,
# 408 "/usr/include/bits/confname.h" 3
_SC_SHELL,
# 410 "/usr/include/bits/confname.h" 3
_SC_SIGNALS,
# 412 "/usr/include/bits/confname.h" 3
_SC_SPAWN,
# 414 "/usr/include/bits/confname.h" 3
_SC_SPORADIC_SERVER,
# 416 "/usr/include/bits/confname.h" 3
_SC_THREAD_SPORADIC_SERVER,
# 418 "/usr/include/bits/confname.h" 3
_SC_SYSTEM_DATABASE,
# 420 "/usr/include/bits/confname.h" 3
_SC_SYSTEM_DATABASE_R,
# 422 "/usr/include/bits/confname.h" 3
_SC_TIMEOUTS,
# 424 "/usr/include/bits/confname.h" 3
_SC_TYPED_MEMORY_OBJECTS,
# 426 "/usr/include/bits/confname.h" 3
_SC_USER_GROUPS,
# 428 "/usr/include/bits/confname.h" 3
_SC_USER_GROUPS_R,
# 430 "/usr/include/bits/confname.h" 3
_SC_2_PBS,
# 432 "/usr/include/bits/confname.h" 3
_SC_2_PBS_ACCOUNTING,
# 434 "/usr/include/bits/confname.h" 3
_SC_2_PBS_LOCATE,
# 436 "/usr/include/bits/confname.h" 3
_SC_2_PBS_MESSAGE,
# 438 "/usr/include/bits/confname.h" 3
_SC_2_PBS_TRACK,
# 440 "/usr/include/bits/confname.h" 3
_SC_SYMLOOP_MAX,
# 442 "/usr/include/bits/confname.h" 3
_SC_STREAMS,
# 444 "/usr/include/bits/confname.h" 3
_SC_2_PBS_CHECKPOINT,
# 447 "/usr/include/bits/confname.h" 3
_SC_V6_ILP32_OFF32,
# 449 "/usr/include/bits/confname.h" 3
_SC_V6_ILP32_OFFBIG,
# 451 "/usr/include/bits/confname.h" 3
_SC_V6_LP64_OFF64,
# 453 "/usr/include/bits/confname.h" 3
_SC_V6_LPBIG_OFFBIG,
# 456 "/usr/include/bits/confname.h" 3
_SC_HOST_NAME_MAX,
# 458 "/usr/include/bits/confname.h" 3
_SC_TRACE,
# 460 "/usr/include/bits/confname.h" 3
_SC_TRACE_EVENT_FILTER,
# 462 "/usr/include/bits/confname.h" 3
_SC_TRACE_INHERIT,
# 464 "/usr/include/bits/confname.h" 3
_SC_TRACE_LOG,
# 467 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_SIZE,
# 469 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_ASSOC,
# 471 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_ICACHE_LINESIZE,
# 473 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_SIZE,
# 475 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_ASSOC,
# 477 "/usr/include/bits/confname.h" 3
_SC_LEVEL1_DCACHE_LINESIZE,
# 479 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_SIZE,
# 481 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_ASSOC,
# 483 "/usr/include/bits/confname.h" 3
_SC_LEVEL2_CACHE_LINESIZE,
# 485 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_SIZE,
# 487 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_ASSOC,
# 489 "/usr/include/bits/confname.h" 3
_SC_LEVEL3_CACHE_LINESIZE,
# 491 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_SIZE,
# 493 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_ASSOC,
# 495 "/usr/include/bits/confname.h" 3
_SC_LEVEL4_CACHE_LINESIZE,
# 499 "/usr/include/bits/confname.h" 3
_SC_IPV6 = 235,
# 501 "/usr/include/bits/confname.h" 3
_SC_RAW_SOCKETS,
# 504 "/usr/include/bits/confname.h" 3
_SC_V7_ILP32_OFF32,
# 506 "/usr/include/bits/confname.h" 3
_SC_V7_ILP32_OFFBIG,
# 508 "/usr/include/bits/confname.h" 3
_SC_V7_LP64_OFF64,
# 510 "/usr/include/bits/confname.h" 3
_SC_V7_LPBIG_OFFBIG,
# 513 "/usr/include/bits/confname.h" 3
_SC_SS_REPL_MAX,
# 516 "/usr/include/bits/confname.h" 3
_SC_TRACE_EVENT_NAME_MAX,
# 518 "/usr/include/bits/confname.h" 3
_SC_TRACE_NAME_MAX,
# 520 "/usr/include/bits/confname.h" 3
_SC_TRACE_SYS_MAX,
# 522 "/usr/include/bits/confname.h" 3
_SC_TRACE_USER_EVENT_MAX,
# 525 "/usr/include/bits/confname.h" 3
_SC_XOPEN_STREAMS,
# 528 "/usr/include/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_INHERIT,
# 530 "/usr/include/bits/confname.h" 3
_SC_THREAD_ROBUST_PRIO_PROTECT
# 532 "/usr/include/bits/confname.h" 3
};
# 536 "/usr/include/bits/confname.h" 3
enum {
# 537 "/usr/include/bits/confname.h" 3
_CS_PATH,
# 540 "/usr/include/bits/confname.h" 3
_CS_V6_WIDTH_RESTRICTED_ENVS,
# 544 "/usr/include/bits/confname.h" 3
_CS_GNU_LIBC_VERSION,
# 546 "/usr/include/bits/confname.h" 3
_CS_GNU_LIBPTHREAD_VERSION,
# 549 "/usr/include/bits/confname.h" 3
_CS_V5_WIDTH_RESTRICTED_ENVS,
# 553 "/usr/include/bits/confname.h" 3
_CS_V7_WIDTH_RESTRICTED_ENVS,
# 557 "/usr/include/bits/confname.h" 3
_CS_LFS_CFLAGS = 1000,
# 559 "/usr/include/bits/confname.h" 3
_CS_LFS_LDFLAGS,
# 561 "/usr/include/bits/confname.h" 3
_CS_LFS_LIBS,
# 563 "/usr/include/bits/confname.h" 3
_CS_LFS_LINTFLAGS,
# 565 "/usr/include/bits/confname.h" 3
_CS_LFS64_CFLAGS,
# 567 "/usr/include/bits/confname.h" 3
_CS_LFS64_LDFLAGS,
# 569 "/usr/include/bits/confname.h" 3
_CS_LFS64_LIBS,
# 571 "/usr/include/bits/confname.h" 3
_CS_LFS64_LINTFLAGS,
# 574 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
# 576 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LDFLAGS,
# 578 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LIBS,
# 580 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFF32_LINTFLAGS,
# 582 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_CFLAGS,
# 584 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LDFLAGS,
# 586 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LIBS,
# 588 "/usr/include/bits/confname.h" 3
_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
# 590 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_CFLAGS,
# 592 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LDFLAGS,
# 594 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LIBS,
# 596 "/usr/include/bits/confname.h" 3
_CS_XBS5_LP64_OFF64_LINTFLAGS,
# 598 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_CFLAGS,
# 600 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
# 602 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LIBS,
# 604 "/usr/include/bits/confname.h" 3
_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
# 607 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_CFLAGS,
# 609 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
# 611 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LIBS,
# 613 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
# 615 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
# 617 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
# 619 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LIBS,
# 621 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
# 623 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_CFLAGS,
# 625 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LDFLAGS,
# 627 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LIBS,
# 629 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
# 631 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
# 633 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
# 635 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
# 637 "/usr/include/bits/confname.h" 3
_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
# 640 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_CFLAGS,
# 642 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
# 644 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LIBS,
# 646 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
# 648 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
# 650 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
# 652 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LIBS,
# 654 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
# 656 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_CFLAGS,
# 658 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LDFLAGS,
# 660 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LIBS,
# 662 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
# 664 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
# 666 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
# 668 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
# 670 "/usr/include/bits/confname.h" 3
_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
# 672 "/usr/include/bits/confname.h" 3
};
# 607 "/usr/include/unistd.h" 3
extern "C" long pathconf(const char *, int) throw() __attribute__((nonnull(1)));
# 611 "/usr/include/unistd.h" 3
extern "C" long fpathconf(int, int) throw();
# 614 "/usr/include/unistd.h" 3
extern "C" long sysconf(int) throw();
# 618 "/usr/include/unistd.h" 3
extern "C" size_t confstr(int, char *, size_t) throw();
# 623 "/usr/include/unistd.h" 3
extern "C" __pid_t getpid() throw();
# 626 "/usr/include/unistd.h" 3
extern "C" __pid_t getppid() throw();
# 631 "/usr/include/unistd.h" 3
extern "C" __pid_t getpgrp() throw();
# 641 "/usr/include/unistd.h" 3
extern "C" __pid_t __getpgid(__pid_t) throw();
# 643 "/usr/include/unistd.h" 3
extern "C" __pid_t getpgid(__pid_t) throw();
# 650 "/usr/include/unistd.h" 3
extern "C" int setpgid(__pid_t, __pid_t) throw();
# 667 "/usr/include/unistd.h" 3
extern "C" int setpgrp() throw();
# 684 "/usr/include/unistd.h" 3
extern "C" __pid_t setsid() throw();
# 688 "/usr/include/unistd.h" 3
extern "C" __pid_t getsid(__pid_t) throw();
# 692 "/usr/include/unistd.h" 3
extern "C" __uid_t getuid() throw();
# 695 "/usr/include/unistd.h" 3
extern "C" __uid_t geteuid() throw();
# 698 "/usr/include/unistd.h" 3
extern "C" __gid_t getgid() throw();
# 701 "/usr/include/unistd.h" 3
extern "C" __gid_t getegid() throw();
# 706 "/usr/include/unistd.h" 3
extern "C" int getgroups(int, __gid_t []) throw();
# 710 "/usr/include/unistd.h" 3
extern "C" int group_member(__gid_t) throw();
# 717 "/usr/include/unistd.h" 3
extern "C" int setuid(__uid_t) throw();
# 722 "/usr/include/unistd.h" 3
extern "C" int setreuid(__uid_t, __uid_t) throw();
# 727 "/usr/include/unistd.h" 3
extern "C" int seteuid(__uid_t) throw();
# 734 "/usr/include/unistd.h" 3
extern "C" int setgid(__gid_t) throw();
# 739 "/usr/include/unistd.h" 3
extern "C" int setregid(__gid_t, __gid_t) throw();
# 744 "/usr/include/unistd.h" 3
extern "C" int setegid(__gid_t) throw();
# 750 "/usr/include/unistd.h" 3
extern "C" int getresuid(__uid_t *, __uid_t *, __uid_t *) throw();
# 755 "/usr/include/unistd.h" 3
extern "C" int getresgid(__gid_t *, __gid_t *, __gid_t *) throw();
# 760 "/usr/include/unistd.h" 3
extern "C" int setresuid(__uid_t, __uid_t, __uid_t) throw();
# 765 "/usr/include/unistd.h" 3
extern "C" int setresgid(__gid_t, __gid_t, __gid_t) throw();
# 773 "/usr/include/unistd.h" 3
extern "C" __pid_t fork() throw();
# 780 "/usr/include/unistd.h" 3
extern "C" __pid_t vfork() throw();
# 786 "/usr/include/unistd.h" 3
extern "C" char *ttyname(int) throw();
# 790 "/usr/include/unistd.h" 3
extern "C" int ttyname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 795 "/usr/include/unistd.h" 3
extern "C" int isatty(int) throw();
# 801 "/usr/include/unistd.h" 3
extern "C" int ttyslot() throw();
# 806 "/usr/include/unistd.h" 3
extern "C" int link(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 812 "/usr/include/unistd.h" 3
extern "C" int linkat(int, const char *, int, const char *, int) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 819 "/usr/include/unistd.h" 3
extern "C" int symlink(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 825 "/usr/include/unistd.h" 3
extern "C" ssize_t readlink(const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 832 "/usr/include/unistd.h" 3
extern "C" int symlinkat(const char *, int, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 836 "/usr/include/unistd.h" 3
extern "C" ssize_t readlinkat(int, const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 842 "/usr/include/unistd.h" 3
extern "C" int unlink(const char *) throw() __attribute__((nonnull(1)));
# 846 "/usr/include/unistd.h" 3
extern "C" int unlinkat(int, const char *, int) throw() __attribute__((nonnull(2)));
# 851 "/usr/include/unistd.h" 3
extern "C" int rmdir(const char *) throw() __attribute__((nonnull(1)));
# 855 "/usr/include/unistd.h" 3
extern "C" __pid_t tcgetpgrp(int) throw();
# 858 "/usr/include/unistd.h" 3
extern "C" int tcsetpgrp(int, __pid_t) throw();
# 865 "/usr/include/unistd.h" 3
extern "C" char *getlogin();
# 873 "/usr/include/unistd.h" 3
extern "C" int getlogin_r(char *, size_t) __attribute__((nonnull(1)));
# 878 "/usr/include/unistd.h" 3
extern "C" int setlogin(const char *) throw() __attribute__((nonnull(1)));
# 59 "/usr/include/getopt.h" 3
extern "C" { extern char *optarg; }
# 73 "/usr/include/getopt.h" 3
extern "C" { extern int optind; }
# 78 "/usr/include/getopt.h" 3
extern "C" { extern int opterr; }
# 82 "/usr/include/getopt.h" 3
extern "C" { extern int optopt; }
# 152 "/usr/include/getopt.h" 3
extern "C" int getopt(int, char *const *, const char *) throw();
# 895 "/usr/include/unistd.h" 3
extern "C" int gethostname(char *, size_t) throw() __attribute__((nonnull(1)));
# 902 "/usr/include/unistd.h" 3
extern "C" int sethostname(const char *, size_t) throw() __attribute__((nonnull(1)));
# 907 "/usr/include/unistd.h" 3
extern "C" int sethostid(long) throw();
# 913 "/usr/include/unistd.h" 3
extern "C" int getdomainname(char *, size_t) throw() __attribute__((nonnull(1)));
# 915 "/usr/include/unistd.h" 3
extern "C" int setdomainname(const char *, size_t) throw() __attribute__((nonnull(1)));
# 922 "/usr/include/unistd.h" 3
extern "C" int vhangup() throw();
# 925 "/usr/include/unistd.h" 3
extern "C" int revoke(const char *) throw() __attribute__((nonnull(1)));
# 933 "/usr/include/unistd.h" 3
extern "C" int profil(unsigned short *, size_t, size_t, unsigned) throw() __attribute__((nonnull(1)));
# 941 "/usr/include/unistd.h" 3
extern "C" int acct(const char *) throw();
# 945 "/usr/include/unistd.h" 3
extern "C" char *getusershell() throw();
# 946 "/usr/include/unistd.h" 3
extern "C" void endusershell() throw();
# 947 "/usr/include/unistd.h" 3
extern "C" void setusershell() throw();
# 953 "/usr/include/unistd.h" 3
extern "C" int daemon(int, int) throw();
# 960 "/usr/include/unistd.h" 3
extern "C" int chroot(const char *) throw() __attribute__((nonnull(1)));
# 964 "/usr/include/unistd.h" 3
extern "C" char *getpass(const char *) __attribute__((nonnull(1)));
# 973 "/usr/include/unistd.h" 3
extern "C" int fsync(int);
# 980 "/usr/include/unistd.h" 3
extern "C" long gethostid();
# 983 "/usr/include/unistd.h" 3
extern "C" void sync() throw();
# 988 "/usr/include/unistd.h" 3
extern "C" int getpagesize() throw() __attribute__((__const__));
# 993 "/usr/include/unistd.h" 3
extern "C" int getdtablesize() throw();
# 998 "/usr/include/unistd.h" 3
extern "C" int truncate(const char *, __off_t) throw() __attribute__((nonnull(1)));
# 1010 "/usr/include/unistd.h" 3
extern "C" int truncate64(const char *, __off64_t) throw() __attribute__((nonnull(1)));
# 1020 "/usr/include/unistd.h" 3
extern "C" int ftruncate(int, __off_t) throw();
# 1030 "/usr/include/unistd.h" 3
extern "C" int ftruncate64(int, __off64_t) throw();
# 1040 "/usr/include/unistd.h" 3
extern "C" int brk(void *) throw();
# 1046 "/usr/include/unistd.h" 3
extern "C" void *sbrk(intptr_t) throw();
# 1061 "/usr/include/unistd.h" 3
extern "C" long syscall(long, ...) throw();
# 1115 "/usr/include/unistd.h" 3
extern "C" int fdatasync(int);
# 1123 "/usr/include/unistd.h" 3
extern "C" char *crypt(const char *, const char *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 1128 "/usr/include/unistd.h" 3
extern "C" void encrypt(char *, int) throw() __attribute__((nonnull(1)));
# 1135 "/usr/include/unistd.h" 3
extern "C" void swab(const void *__restrict__, void *__restrict__, ssize_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 1144 "/usr/include/unistd.h" 3
extern "C" char *ctermid(char *) throw();
# 43 "/usr/include/bits/errno.h" 3
extern "C" int *__errno_location() throw() __attribute__((__const__));
# 55 "/usr/include/errno.h" 3
extern "C" { extern char *program_invocation_name, *program_invocation_short_name; }
# 69 "/usr/include/errno.h" 3
typedef int error_t;
# 57 "/usr/include/sys/time.h" 3
extern "C" { struct timezone {
# 59 "/usr/include/sys/time.h" 3
int tz_minuteswest;
# 60 "/usr/include/sys/time.h" 3
int tz_dsttime;
# 61 "/usr/include/sys/time.h" 3
}; }
# 63 "/usr/include/sys/time.h" 3
extern "C" { typedef struct timezone *__restrict__ __timezone_ptr_t; }
# 73 "/usr/include/sys/time.h" 3
extern "C" int gettimeofday(timeval *__restrict__, __timezone_ptr_t) throw() __attribute__((nonnull(1)));
# 79 "/usr/include/sys/time.h" 3
extern "C" int settimeofday(const timeval *, const struct timezone *) throw() __attribute__((nonnull(1)));
# 87 "/usr/include/sys/time.h" 3
extern "C" int adjtime(const timeval *, timeval *) throw();
# 93 "/usr/include/sys/time.h" 3
enum __itimer_which {
# 96 "/usr/include/sys/time.h" 3
ITIMER_REAL,
# 99 "/usr/include/sys/time.h" 3
ITIMER_VIRTUAL,
# 103 "/usr/include/sys/time.h" 3
ITIMER_PROF
# 105 "/usr/include/sys/time.h" 3
};
# 109 "/usr/include/sys/time.h" 3
extern "C" { struct itimerval {
# 112 "/usr/include/sys/time.h" 3
timeval it_interval;
# 114 "/usr/include/sys/time.h" 3
timeval it_value;
# 115 "/usr/include/sys/time.h" 3
}; }
# 122 "/usr/include/sys/time.h" 3
extern "C" { typedef int __itimer_which_t; }
# 127 "/usr/include/sys/time.h" 3
extern "C" int getitimer(__itimer_which_t, itimerval *) throw();
# 133 "/usr/include/sys/time.h" 3
extern "C" int setitimer(__itimer_which_t, const itimerval *__restrict__, itimerval *__restrict__) throw();
# 140 "/usr/include/sys/time.h" 3
extern "C" int utimes(const char *, const timeval [2]) throw() __attribute__((nonnull(1)));
# 145 "/usr/include/sys/time.h" 3
extern "C" int lutimes(const char *, const timeval [2]) throw() __attribute__((nonnull(1)));
# 149 "/usr/include/sys/time.h" 3
extern "C" int futimes(int, const timeval [2]) throw();
# 156 "/usr/include/sys/time.h" 3
extern "C" int futimesat(int, const char *, const timeval [2]) throw();
# 4 "./common.cu"
static const int basecount = 5;
# 8 "./common.cu"
static const unsigned char DNA_A = ('A');
# 9 "./common.cu"
static const unsigned char DNA_C = ('B');
# 10 "./common.cu"
static const unsigned char DNA_G = ('C');
# 11 "./common.cu"
static const unsigned char DNA_T = ('D');
# 12 "./common.cu"
static const unsigned char DNA_S = ('E');
# 15 "./common.cu"
struct TextureAddress {
# 18 "./common.cu"
union {
# 19 "./common.cu"
unsigned data;
# 22 "./common.cu"
struct {
# 23 "./common.cu"
unsigned short x;
# 24 "./common.cu"
unsigned short y;
# 25 "./common.cu"
};
# 26 "./common.cu"
};
# 27 "./common.cu"
};
# 30 "./common.cu"
struct PixelOfNode {
# 33 "./common.cu"
union {
# 34 "./common.cu"
uint4 data;
# 36 "./common.cu"
struct {
# 37 "./common.cu"
int start;
# 38 "./common.cu"
int end;
# 39 "./common.cu"
TextureAddress childD;
# 40 "./common.cu"
TextureAddress suffix;
# 41 "./common.cu"
};
# 42 "./common.cu"
};
# 43 "./common.cu"
};
# 46 "./common.cu"
struct PixelOfChildren {
# 49 "./common.cu"
union {
# 50 "./common.cu"
uint4 data;
# 51 "./common.cu"
TextureAddress children[4];
# 52 "./common.cu"
};
# 53 "./common.cu"
};
# 5 "./mummergpu.h"
extern "C" { struct QuerySet {
# 7 "./mummergpu.h"
int qfile;
# 9 "./mummergpu.h"
char *h_tex_array;
# 10 "./mummergpu.h"
char *d_tex_array;
# 11 "./mummergpu.h"
int *d_addrs_tex_array;
# 12 "./mummergpu.h"
int *h_addrs_tex_array;
# 13 "./mummergpu.h"
int *h_lengths_array;
# 14 "./mummergpu.h"
int *d_lengths_array;
# 15 "./mummergpu.h"
char **h_names;
# 17 "./mummergpu.h"
unsigned count;
# 18 "./mummergpu.h"
size_t texlen;
# 21 "./mummergpu.h"
size_t bytes_on_board;
# 22 "./mummergpu.h"
}; }
# 25 "./mummergpu.h"
extern "C" { struct AuxiliaryNodeData {
# 27 "./mummergpu.h"
int length;
# 28 "./mummergpu.h"
int depth;
# 29 "./mummergpu.h"
int leafid;
# 30 "./mummergpu.h"
char leafchar;
# 31 "./mummergpu.h"
TextureAddress parent;
# 32 "./mummergpu.h"
}; }
# 35 "./mummergpu.h"
extern "C" { struct Reference {
# 38 "./mummergpu.h"
char *str;
# 39 "./mummergpu.h"
size_t len;
# 41 "./mummergpu.h"
unsigned pitch;
# 42 "./mummergpu.h"
void *d_ref_tex_array;
# 43 "./mummergpu.h"
char *h_ref_tex_array;
# 46 "./mummergpu.h"
void *d_node_tex_array;
# 47 "./mummergpu.h"
void *h_node_tex_array;
# 49 "./mummergpu.h"
void *d_children_tex_array;
# 50 "./mummergpu.h"
void *h_children_tex_array;
# 52 "./mummergpu.h"
unsigned tex_height;
# 53 "./mummergpu.h"
unsigned tex_width;
# 56 "./mummergpu.h"
size_t bytes_on_board;
# 58 "./mummergpu.h"
AuxiliaryNodeData *aux_data;
# 59 "./mummergpu.h"
int num_nodes;
# 61 "./mummergpu.h"
}; }
# 68 "./mummergpu.h"
extern "C" { struct MatchCoord {
# 70 "./mummergpu.h"
unsigned node;
# 71 "./mummergpu.h"
short edge_match_length;
# 72 "./mummergpu.h"
}; }
# 74 "./mummergpu.h"
extern "C" { struct MatchResults {
# 78 "./mummergpu.h"
MatchCoord *d_match_coords;
# 79 "./mummergpu.h"
MatchCoord *h_match_coords;
# 81 "./mummergpu.h"
size_t numCoords;
# 84 "./mummergpu.h"
size_t bytes_on_board;
# 85 "./mummergpu.h"
}; }
# 87 "./mummergpu.h"
extern "C" { typedef unsigned MUMMERGPU_OPTIONS; }
# 89 "./mummergpu.h"
enum MUMMerGPUOption {
# 90 "./mummergpu.h"
DEFAULT,
# 91 "./mummergpu.h"
ON_CPU
# 92 "./mummergpu.h"
};
# 95 "./mummergpu.h"
extern "C" { struct Statistics {
# 97 "./mummergpu.h"
float t_kernel;
# 98 "./mummergpu.h"
float t_output;
# 99 "./mummergpu.h"
float t_to_board;
# 100 "./mummergpu.h"
float t_from_board;
# 101 "./mummergpu.h"
float t_moving_tree_pages;
# 102 "./mummergpu.h"
float t_query_read;
# 103 "./mummergpu.h"
float t_total;
# 104 "./mummergpu.h"
float t_construction;
# 106 "./mummergpu.h"
float bp_avg_query_length;
# 107 "./mummergpu.h"
}; }
# 109 "./mummergpu.h"
extern "C" { struct MatchContext {
# 111 "./mummergpu.h"
char *full_ref;
# 112 "./mummergpu.h"
size_t full_ref_len;
# 114 "./mummergpu.h"
Reference *ref;
# 115 "./mummergpu.h"
QuerySet *queries;
# 116 "./mummergpu.h"
MatchResults results;
# 118 "./mummergpu.h"
bool on_cpu;
# 120 "./mummergpu.h"
int min_match_length;
# 122 "./mummergpu.h"
bool reverse;
# 123 "./mummergpu.h"
bool forwardreverse;
# 124 "./mummergpu.h"
bool forwardcoordinates;
# 125 "./mummergpu.h"
bool show_query_length;
# 126 "./mummergpu.h"
bool maxmatch;
# 128 "./mummergpu.h"
char *stats_file;
# 130 "./mummergpu.h"
Statistics statistics;
# 131 "./mummergpu.h"
}; }
# 134 "./mummergpu.h"
extern "C" { struct ReferencePage {
# 136 "./mummergpu.h"
int begin;
# 137 "./mummergpu.h"
int end;
# 138 "./mummergpu.h"
int shadow_left;
# 139 "./mummergpu.h"
int shadow_right;
# 140 "./mummergpu.h"
MatchResults results;
# 141 "./mummergpu.h"
unsigned id;
# 142 "./mummergpu.h"
Reference ref;
# 143 "./mummergpu.h"
}; }
# 146 "./mummergpu.h"
extern "C" int createReference(const char *, Reference *);
# 147 "./mummergpu.h"
extern "C" int destroyReference(Reference *);
# 149 "./mummergpu.h"
extern "C" int createQuerySet(const char *, QuerySet *);
# 150 "./mummergpu.h"
extern "C" int destroyQuerySet(QuerySet *);
# 152 "./mummergpu.h"
extern "C" int createMatchContext(Reference *, QuerySet *, MatchResults *, MUMMERGPU_OPTIONS, int, char *, bool, bool, bool, bool, MatchContext *);
# 164 "./mummergpu.h"
extern "C" int destroyMatchContext(MatchContext *);
# 167 "./mummergpu.h"
extern "C" int matchQueries(MatchContext *);
# 169 "./mummergpu.h"
extern "C" void printStringForError(int);
# 16 "./mummergpu_kernel.cu"
static texture< uint4, 2, cudaReadModeElementType> nodetex;
# 17 "./mummergpu_kernel.cu"
static texture< uint4, 2, cudaReadModeElementType> childrentex;
# 19 "./mummergpu_kernel.cu"
static texture< char, 2, cudaReadModeElementType> reftex;
# 21 "./mummergpu_kernel.cu"
__attribute__((unused)) void set_result(const TextureAddress &cur, MatchCoord *
# 22 "./mummergpu_kernel.cu"
result, int
# 23 "./mummergpu_kernel.cu"
edge_match_length, int
# 24 "./mummergpu_kernel.cu"
qry_match_len, int
# 25 "./mummergpu_kernel.cu"
min_match_len, int
# 26 "./mummergpu_kernel.cu"
rc)
# 27 "./mummergpu_kernel.cu"
{int volatile ___ = 1;
# 39 "./mummergpu_kernel.cu"
exit(___);}
# 41 "./mummergpu_kernel.cu"
__attribute__((unused)) char getRef(int refpos)
# 42 "./mummergpu_kernel.cu"
{int volatile ___ = 1;
# 48 "./mummergpu_kernel.cu"
exit(___);}
# 50 "./mummergpu_kernel.cu"
__attribute__((unused)) char rc(char c)
# 51 "./mummergpu_kernel.cu"
{int volatile ___ = 1;
# 61 "./mummergpu_kernel.cu"
exit(___);}
# 68 "./mummergpu_kernel.cu"
void mummergpuKernel(MatchCoord *match_coords, char *
# 69 "./mummergpu_kernel.cu"
queries, const int *
# 70 "./mummergpu_kernel.cu"
queryAddrs, const int *
# 71 "./mummergpu_kernel.cu"
queryLengths, const int
# 72 "./mummergpu_kernel.cu"
numQueries, const int
# 73 "./mummergpu_kernel.cu"
min_match_len) ;
# 236 "./mummergpu_kernel.cu"
void mummergpuRCKernel(MatchCoord *match_coords, char *
# 237 "./mummergpu_kernel.cu"
queries, const int *
# 238 "./mummergpu_kernel.cu"
queryAddrs, const int *
# 239 "./mummergpu_kernel.cu"
queryLengths, const int
# 240 "./mummergpu_kernel.cu"
numQueries, const int
# 241 "./mummergpu_kernel.cu"
min_match_len) ;
# 34 "mummergpu.cu"
void runTest(int, char **);
# 37 "mummergpu.cu"
extern "C" void computeGold(MatchResults *, char *, char *, int *, int *, PixelOfNode *, PixelOfChildren *, int, int, int);
# 49 "mummergpu.cu"
extern "C" void getReferenceString(const char *, char **, size_t *);
# 52 "mummergpu.cu"
extern "C" void createTreeTexture(const char *, PixelOfNode **, PixelOfChildren **, unsigned *, unsigned *, AuxiliaryNodeData **, int *, const char *, const char *);
# 61 "mummergpu.cu"
extern "C" void getQueriesTexture(int, char **, size_t *, int **, char ***, int **, unsigned *, size_t, int, bool);
# 72 "mummergpu.cu"
void printAlignments(char *, ReferencePage *, char *, int, int, int, int, int, bool, bool);
# 83 "mummergpu.cu"
int countLeafNodes(int);
# 86 "mummergpu.cu"
struct Timer_t {
# 88 "mummergpu.cu"
timeval start_m;
# 89 "mummergpu.cu"
timeval end_m;
# 90 "mummergpu.cu"
};
# 92 "mummergpu.cu"
void createTimer(Timer_t **timer)
# 93 "mummergpu.cu"
{
# 94 "mummergpu.cu"
Timer_t *ptr = ((Timer_t *)malloc(sizeof(Timer_t)));
# 95 "mummergpu.cu"
memset(ptr, 0, sizeof(Timer_t));
# 97 "mummergpu.cu"
(*timer) = ptr;
# 98 "mummergpu.cu"
}
# 100 "mummergpu.cu"
void startTimer(Timer_t *ptr)
# 101 "mummergpu.cu"
{
# 102 "mummergpu.cu"
gettimeofday(&(ptr->start_m), __null);
# 103 "mummergpu.cu"
}
# 105 "mummergpu.cu"
void stopTimer(Timer_t *ptr)
# 106 "mummergpu.cu"
{
# 107 "mummergpu.cu"
gettimeofday(&(ptr->end_m), __null);
# 108 "mummergpu.cu"
}
# 110 "mummergpu.cu"
float getTimerValue(Timer_t *ptr)
# 111 "mummergpu.cu"
{
# 112 "mummergpu.cu"
Timer_t *timer = ptr;
# 114 "mummergpu.cu"
if (timer == (__null))
# 115 "mummergpu.cu"
{
# 116 "mummergpu.cu"
fprintf(stderr, "Uninitialized timer!!!\n");
# 117 "mummergpu.cu"
return (0.0);
# 118 "mummergpu.cu"
}
# 120 "mummergpu.cu"
if (((timer->end_m).tv_sec) == (0)) { stopTimer(ptr); }
# 122 "mummergpu.cu"
return (float)(((1000.0) * (((timer->end_m).tv_sec) - ((timer->start_m).tv_sec))) + ((0.001000000000000000021) * (((timer->end_m).tv_usec) - ((timer->start_m).tv_usec))));
# 124 "mummergpu.cu"
}
# 126 "mummergpu.cu"
void deleteTimer(Timer_t *ptr)
# 127 "mummergpu.cu"
{
# 128 "mummergpu.cu"
free(ptr);
# 129 "mummergpu.cu"
}
# 132 "mummergpu.cu"
extern "C" int createReference(const char *fromFile, Reference *ref)
# 133 "mummergpu.cu"
{
# 134 "mummergpu.cu"
if ((!(fromFile)) || (!(ref))) {
# 135 "mummergpu.cu"
return -1; }
# 137 "mummergpu.cu"
getReferenceString(fromFile, &(ref->str), &(ref->len));
# 139 "mummergpu.cu"
return 0;
# 140 "mummergpu.cu"
}
# 143 "mummergpu.cu"
extern "C" int destroyReference(Reference *ref)
# 144 "mummergpu.cu"
{
# 145 "mummergpu.cu"
free(ref->h_node_tex_array);
# 146 "mummergpu.cu"
free(ref->h_children_tex_array);
# 147 "mummergpu.cu"
free(ref->str);
# 148 "mummergpu.cu"
free(ref->h_ref_tex_array);
# 149 "mummergpu.cu"
free(ref->aux_data);
# 150 "mummergpu.cu"
(ref->str) = (__null);
# 151 "mummergpu.cu"
(ref->len) = (0);
# 153 "mummergpu.cu"
return 0;
# 154 "mummergpu.cu"
}
# 157 "mummergpu.cu"
extern "C" int createQuerySet(const char *fromFile, QuerySet *queries)
# 158 "mummergpu.cu"
{
# 160 "mummergpu.cu"
fprintf(stderr, "Opening %s...\n", fromFile);
# 161 "mummergpu.cu"
int qfile = open(fromFile, 0);
# 163 "mummergpu.cu"
if (qfile == (-1))
# 164 "mummergpu.cu"
{
# 165 "mummergpu.cu"
fprintf(stderr, "Can\'t open %s: %d\n", fromFile, *__errno_location());
# 166 "mummergpu.cu"
exit(1);
# 167 "mummergpu.cu"
}
# 169 "mummergpu.cu"
(queries->qfile) = qfile;
# 171 "mummergpu.cu"
return 0;
# 172 "mummergpu.cu"
}
# 175 "mummergpu.cu"
extern "C" int destroyQuerySet(QuerySet *queries)
# 176 "mummergpu.cu"
{
# 178 "mummergpu.cu"
if (queries->qfile) {
# 179 "mummergpu.cu"
close(queries->qfile); }
# 181 "mummergpu.cu"
return 0;
# 182 "mummergpu.cu"
}
# 185 "mummergpu.cu"
extern "C" void printStringForError(int err)
# 186 "mummergpu.cu"
{
# 188 "mummergpu.cu"
}
# 191 "mummergpu.cu"
extern "C" int createMatchContext(Reference *ref, QuerySet *
# 192 "mummergpu.cu"
queries, MatchResults *
# 193 "mummergpu.cu"
matches, MUMMERGPU_OPTIONS
# 194 "mummergpu.cu"
options, int
# 195 "mummergpu.cu"
min_match_length, char *
# 196 "mummergpu.cu"
stats_file, bool
# 197 "mummergpu.cu"
reverse, bool
# 198 "mummergpu.cu"
forwardreverse, bool
# 199 "mummergpu.cu"
forwardcoordinates, bool
# 200 "mummergpu.cu"
showQueryLength, MatchContext *
# 201 "mummergpu.cu"
ctx)
# 202 "mummergpu.cu"
{
# 204 "mummergpu.cu"
(ctx->queries) = queries;
# 205 "mummergpu.cu"
(ctx->ref) = ref;
# 206 "mummergpu.cu"
(ctx->full_ref) = (ref->str);
# 207 "mummergpu.cu"
(ctx->full_ref_len) = (ref->len);
# 210 "mummergpu.cu"
(ctx->on_cpu) = (options & (ON_CPU));
# 211 "mummergpu.cu"
(ctx->min_match_length) = min_match_length;
# 212 "mummergpu.cu"
(ctx->stats_file) = stats_file;
# 213 "mummergpu.cu"
(ctx->reverse) = reverse;
# 214 "mummergpu.cu"
(ctx->forwardreverse) = forwardreverse;
# 215 "mummergpu.cu"
(ctx->forwardcoordinates) = forwardcoordinates;
# 216 "mummergpu.cu"
(ctx->show_query_length) = showQueryLength;
# 217 "mummergpu.cu"
return 0;
# 218 "mummergpu.cu"
}
# 221 "mummergpu.cu"
extern "C" int destroyMatchContext(MatchContext *ctx)
# 222 "mummergpu.cu"
{
# 223 "mummergpu.cu"
free(ctx->full_ref);
# 225 "mummergpu.cu"
destroyQuerySet(ctx->queries);
# 226 "mummergpu.cu"
return 0;
# 227 "mummergpu.cu"
}
# 229 "mummergpu.cu"
void buildReferenceTexture(Reference *ref, char *full_ref, size_t begin, size_t end)
# 230 "mummergpu.cu"
{
# 231 "mummergpu.cu"
fprintf(stderr, "Building reference texture...\n");
# 235 "mummergpu.cu"
PixelOfNode *nodeTexture = (__null);
# 236 "mummergpu.cu"
PixelOfChildren *childrenTexture = (__null);
# 238 "mummergpu.cu"
unsigned height = (0);
# 239 "mummergpu.cu"
unsigned width = (0);
# 241 "mummergpu.cu"
AuxiliaryNodeData *aux_data = (__null);
# 242 "mummergpu.cu"
int num_nodes;
# 244 "mummergpu.cu"
(ref->len) = ((end - begin) + (3));
# 245 "mummergpu.cu"
(ref->str) = ((char *)malloc(ref->len));
# 246 "mummergpu.cu"
((ref->str)[0]) = 's';
# 247 "mummergpu.cu"
strncpy((ref->str) + 1, full_ref + begin, (ref->len) - (3));
# 248 "mummergpu.cu"
strcpy(((ref->str) + (ref->len)) - 2, "$");
# 249 "mummergpu.cu"
createTreeTexture(ref->str, &nodeTexture, &childrenTexture, &width, &height, &aux_data, &num_nodes, __null, __null);
# 258 "mummergpu.cu"
(ref->h_node_tex_array) = nodeTexture;
# 259 "mummergpu.cu"
(ref->h_children_tex_array) = childrenTexture;
# 260 "mummergpu.cu"
(ref->tex_width) = width;
# 261 "mummergpu.cu"
(ref->tex_height) = height;
# 263 "mummergpu.cu"
(ref->aux_data) = aux_data;
# 264 "mummergpu.cu"
(ref->num_nodes) = num_nodes;
# 266 "mummergpu.cu"
(ref->bytes_on_board) = ((width * height) * (sizeof(PixelOfNode) + sizeof(PixelOfChildren)));
# 268 "mummergpu.cu"
unsigned refpitch = ((ref->pitch) = (65536));
# 269 "mummergpu.cu"
int numrows = (ceil((ref->len) / ((float)refpitch)));
# 270 "mummergpu.cu"
int blocksize = 4;
# 271 "mummergpu.cu"
numrows += blocksize;
# 273 "mummergpu.cu"
(ref->h_ref_tex_array) = ((char *)malloc(numrows * refpitch));
# 275 "mummergpu.cu"
(ref->bytes_on_board) += (numrows * refpitch);
# 277 "mummergpu.cu"
int z_max = (numrows * refpitch);
# 278 "mummergpu.cu"
for (int z = 0; z < z_max; z++) { ((ref->h_ref_tex_array)[z]) = 'Z'; }
# 280 "mummergpu.cu"
int x, y;
# 281 "mummergpu.cu"
int maxx = 0, maxy = 0;
# 283 "mummergpu.cu"
size_t reflen = (ref->len);
# 284 "mummergpu.cu"
char *refstr = (ref->str);
# 287 "mummergpu.cu"
int block_dim = (refpitch * blocksize);
# 288 "mummergpu.cu"
for (int i = 0; i < reflen; i++)
# 289 "mummergpu.cu"
{
# 290 "mummergpu.cu"
int bigx = (i % block_dim);
# 291 "mummergpu.cu"
int bigy = (i / block_dim);
# 293 "mummergpu.cu"
y = ((bigy * blocksize) + (bigx % blocksize));
# 294 "mummergpu.cu"
x = (bigx / blocksize);
# 298 "mummergpu.cu"
(x < refpitch) ? (static_cast< void>(0)) : __assert_fail("x < refpitch", "mummergpu.cu", 298, __PRETTY_FUNCTION__);
# 299 "mummergpu.cu"
(y < numrows) ? (static_cast< void>(0)) : __assert_fail("y < numrows", "mummergpu.cu", 299, __PRETTY_FUNCTION__);
# 301 "mummergpu.cu"
((ref->h_ref_tex_array)[(y * refpitch) + x]) = (refstr[i]);
# 303 "mummergpu.cu"
if (x > maxx) { maxx = x; }
# 304 "mummergpu.cu"
if (y > maxy) { maxy = y; }
# 305 "mummergpu.cu"
}
# 307 "mummergpu.cu"
if ((maxx >= refpitch) || (maxy >= numrows))
# 308 "mummergpu.cu"
{
# 309 "mummergpu.cu"
fprintf(stderr, "ERROR: maxx: %d refpitch: %d, maxy: %d numrows: %d\n", maxx, refpitch, maxy, numrows);
# 312 "mummergpu.cu"
exit(1);
# 313 "mummergpu.cu"
}
# 315 "mummergpu.cu"
}
# 317 "mummergpu.cu"
void loadReferenceTexture(MatchContext *ctx)
# 318 "mummergpu.cu"
{
# 319 "mummergpu.cu"
Reference *ref = (ctx->ref);
# 320 "mummergpu.cu"
int numrows = (ceil((ref->len) / ((float)(ref->pitch))));
# 321 "mummergpu.cu"
int blocksize = 4;
# 322 "mummergpu.cu"
numrows += blocksize;
# 324 "mummergpu.cu"
cudaChannelFormatDesc refTextureDesc = cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindSigned);
# 327 "mummergpu.cu"
if (!(ctx->on_cpu))
# 328 "mummergpu.cu"
{
# 329 "mummergpu.cu"
Timer_t *toboardtimer = (0);
# 330 "mummergpu.cu"
createTimer(&toboardtimer);
# 331 "mummergpu.cu"
startTimer(toboardtimer);
# 333 "mummergpu.cu"
fprintf(stderr, "allocating reference texture\n");
# 334 "mummergpu.cu"
do { cudaError err = cudaMallocArray((cudaArray **)(&(ref->d_ref_tex_array)), &refTextureDesc, ref->pitch, numrows); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 337, cudaGetErrorString(err)); exit(1); } } while (0);
# 341 "mummergpu.cu"
do { cudaError err = cudaMemcpyToArray((cudaArray *)(ref->d_ref_tex_array), 0, 0, ref->h_ref_tex_array, numrows * (ref->pitch), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 346, cudaGetErrorString(err)); exit(1); } } while (0);
# 348 "mummergpu.cu"
((reftex.addressMode)[0]) = cudaAddressModeClamp;
# 349 "mummergpu.cu"
((reftex.addressMode)[1]) = cudaAddressModeClamp;
# 350 "mummergpu.cu"
(reftex.filterMode) = cudaFilterModePoint;
# 351 "mummergpu.cu"
(reftex.normalized) = (false);
# 353 "mummergpu.cu"
do { cudaError err = cudaBindTextureToArray(reftex, (cudaArray *)(ref->d_ref_tex_array), refTextureDesc); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 353, cudaGetErrorString(err)); exit(1); } } while (0);
# 355 "mummergpu.cu"
stopTimer(toboardtimer);
# 356 "mummergpu.cu"
((ctx->statistics).t_moving_tree_pages) += getTimerValue(toboardtimer);
# 357 "mummergpu.cu"
deleteTimer(toboardtimer);
# 358 "mummergpu.cu"
} else
# 360 "mummergpu.cu"
{
# 361 "mummergpu.cu"
(ref->d_ref_tex_array) = (__null);
# 362 "mummergpu.cu"
}
# 364 "mummergpu.cu"
fprintf(stderr, "done\n");
# 366 "mummergpu.cu"
}
# 368 "mummergpu.cu"
void unloadReferenceTexture(Reference *ref)
# 369 "mummergpu.cu"
{
# 370 "mummergpu.cu"
do { cudaError err = cudaUnbindTexture(reftex); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 370, cudaGetErrorString(err)); exit(1); } } while (0);
# 371 "mummergpu.cu"
do { cudaError err = cudaFreeArray((cudaArray *)(ref->d_ref_tex_array)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 371, cudaGetErrorString(err)); exit(1); } } while (0);
# 372 "mummergpu.cu"
(ref->d_ref_tex_array) = (__null);
# 373 "mummergpu.cu"
}
# 377 "mummergpu.cu"
void loadReference(MatchContext *ctx)
# 378 "mummergpu.cu"
{
# 380 "mummergpu.cu"
Reference *ref = (ctx->ref);
# 384 "mummergpu.cu"
loadReferenceTexture(ctx);
# 386 "mummergpu.cu"
if (!(ctx->on_cpu))
# 387 "mummergpu.cu"
{
# 388 "mummergpu.cu"
Timer_t *toboardtimer = (0);
# 389 "mummergpu.cu"
createTimer(&toboardtimer);
# 390 "mummergpu.cu"
startTimer(toboardtimer);
# 392 "mummergpu.cu"
cudaChannelFormatDesc nodeTextureDesc = cudaCreateChannelDesc(32, 32, 32, 32, cudaChannelFormatKindUnsigned);
# 395 "mummergpu.cu"
do { cudaError err = cudaMallocArray((cudaArray **)(&(ref->d_node_tex_array)), &nodeTextureDesc, ref->tex_width, ref->tex_height); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 398, cudaGetErrorString(err)); exit(1); } } while (0);
# 402 "mummergpu.cu"
do { cudaError err = cudaMemcpyToArray((cudaArray *)(ref->d_node_tex_array), 0, 0, ref->h_node_tex_array, ((ref->tex_width) * (ref->tex_height)) * sizeof(PixelOfNode), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 407, cudaGetErrorString(err)); exit(1); } } while (0);
# 409 "mummergpu.cu"
((nodetex.addressMode)[0]) = cudaAddressModeClamp;
# 410 "mummergpu.cu"
((nodetex.addressMode)[1]) = cudaAddressModeClamp;
# 411 "mummergpu.cu"
(nodetex.filterMode) = cudaFilterModePoint;
# 412 "mummergpu.cu"
(nodetex.normalized) = (false);
# 414 "mummergpu.cu"
do { cudaError err = cudaBindTextureToArray(nodetex, (cudaArray *)(ref->d_node_tex_array), nodeTextureDesc); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 416, cudaGetErrorString(err)); exit(1); } } while (0);
# 418 "mummergpu.cu"
cudaChannelFormatDesc childrenTextureDesc = cudaCreateChannelDesc(32, 32, 32, 32, cudaChannelFormatKindUnsigned);
# 421 "mummergpu.cu"
do { cudaError err = cudaMallocArray((cudaArray **)(&(ref->d_children_tex_array)), &childrenTextureDesc, ref->tex_width, ref->tex_height); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 424, cudaGetErrorString(err)); exit(1); } } while (0);
# 428 "mummergpu.cu"
do { cudaError err = cudaMemcpyToArray((cudaArray *)(ref->d_children_tex_array), 0, 0, ref->h_children_tex_array, ((ref->tex_width) * (ref->tex_height)) * sizeof(PixelOfChildren), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 433, cudaGetErrorString(err)); exit(1); } } while (0);
# 435 "mummergpu.cu"
((childrentex.addressMode)[0]) = cudaAddressModeClamp;
# 436 "mummergpu.cu"
((childrentex.addressMode)[1]) = cudaAddressModeClamp;
# 437 "mummergpu.cu"
(childrentex.filterMode) = cudaFilterModePoint;
# 438 "mummergpu.cu"
(childrentex.normalized) = (false);
# 440 "mummergpu.cu"
do { cudaError err = cudaBindTextureToArray(childrentex, (cudaArray *)(ref->d_children_tex_array), childrenTextureDesc); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 442, cudaGetErrorString(err)); exit(1); } } while (0);
# 443 "mummergpu.cu"
fprintf(stderr, "done\n");
# 445 "mummergpu.cu"
stopTimer(toboardtimer);
# 446 "mummergpu.cu"
((ctx->statistics).t_moving_tree_pages) += getTimerValue(toboardtimer);
# 447 "mummergpu.cu"
deleteTimer(toboardtimer);
# 448 "mummergpu.cu"
} else
# 450 "mummergpu.cu"
{
# 451 "mummergpu.cu"
(ref->d_node_tex_array) = (__null);
# 452 "mummergpu.cu"
(ref->d_children_tex_array) = (__null);
# 453 "mummergpu.cu"
}
# 454 "mummergpu.cu"
}
# 456 "mummergpu.cu"
void unloadReference(MatchContext *ctx)
# 457 "mummergpu.cu"
{
# 458 "mummergpu.cu"
Reference *ref = (ctx->ref);
# 460 "mummergpu.cu"
do { cudaError err = cudaUnbindTexture(nodetex); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 460, cudaGetErrorString(err)); exit(1); } } while (0);
# 461 "mummergpu.cu"
do { cudaError err = cudaFreeArray((cudaArray *)(ref->d_node_tex_array)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 461, cudaGetErrorString(err)); exit(1); } } while (0);
# 462 "mummergpu.cu"
(ref->d_node_tex_array) = (__null);
# 464 "mummergpu.cu"
do { cudaError err = cudaUnbindTexture(childrentex); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 464, cudaGetErrorString(err)); exit(1); } } while (0);
# 465 "mummergpu.cu"
do { cudaError err = cudaFreeArray((cudaArray *)(ref->d_children_tex_array)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 465, cudaGetErrorString(err)); exit(1); } } while (0);
# 466 "mummergpu.cu"
(ref->d_children_tex_array) = (__null);
# 468 "mummergpu.cu"
unloadReferenceTexture(ctx->ref);
# 469 "mummergpu.cu"
}
# 473 "mummergpu.cu"
void loadQueries(MatchContext *ctx)
# 474 "mummergpu.cu"
{
# 475 "mummergpu.cu"
Timer_t *toboardtimer = (0);
# 476 "mummergpu.cu"
createTimer(&toboardtimer);
# 477 "mummergpu.cu"
startTimer(toboardtimer);
# 479 "mummergpu.cu"
QuerySet *queries = (ctx->queries);
# 480 "mummergpu.cu"
(queries->bytes_on_board) = (0);
# 482 "mummergpu.cu"
unsigned numQueries = (queries->count);
# 484 "mummergpu.cu"
if (!(ctx->on_cpu))
# 485 "mummergpu.cu"
{
# 486 "mummergpu.cu"
fprintf(stderr, "loadQueries on GPU: Allocating device memory for queries...\n");
# 488 "mummergpu.cu"
do { cudaError err = cudaMalloc((void **)(&(queries->d_tex_array)), queries->texlen); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 488, cudaGetErrorString(err)); exit(1); } } while (0);
# 490 "mummergpu.cu"
(queries->bytes_on_board) += (queries->texlen);
# 492 "mummergpu.cu"
do { cudaError err = cudaMemcpy((void *)(queries->d_tex_array), (queries->h_tex_array) + ((queries->h_addrs_tex_array)[0]), queries->texlen, cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 495, cudaGetErrorString(err)); exit(1); } } while (0);
# 497 "mummergpu.cu"
do { cudaError err = cudaMalloc((void **)(&(queries->d_addrs_tex_array)), numQueries * sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 498, cudaGetErrorString(err)); exit(1); } } while (0);
# 500 "mummergpu.cu"
(queries->bytes_on_board) += (numQueries * sizeof(int));
# 502 "mummergpu.cu"
do { cudaError err = cudaMemcpy((void *)(queries->d_addrs_tex_array), queries->h_addrs_tex_array, numQueries * sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 505, cudaGetErrorString(err)); exit(1); } } while (0);
# 507 "mummergpu.cu"
do { cudaError err = cudaMalloc((void **)(&(queries->d_lengths_array)), numQueries * sizeof(int)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 508, cudaGetErrorString(err)); exit(1); } } while (0);
# 510 "mummergpu.cu"
(queries->bytes_on_board) += (numQueries * sizeof(int));
# 512 "mummergpu.cu"
do { cudaError err = cudaMemcpy((void *)(queries->d_lengths_array), queries->h_lengths_array, numQueries * sizeof(int), cudaMemcpyHostToDevice); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 515, cudaGetErrorString(err)); exit(1); } } while (0);
# 517 "mummergpu.cu"
fprintf(stderr, "loadQueries on GPU: allocated %ld bytes done\n", (((2) * numQueries) * sizeof(int)) + (queries->texlen));
# 518 "mummergpu.cu"
} else
# 520 "mummergpu.cu"
{
# 521 "mummergpu.cu"
(queries->d_addrs_tex_array) = (__null);
# 522 "mummergpu.cu"
(queries->d_tex_array) = (__null);
# 523 "mummergpu.cu"
(queries->d_lengths_array) = (__null);
# 524 "mummergpu.cu"
fprintf(stderr, "loadQueries on CPU: allocated %ld bytes done\n", (numQueries * sizeof(int)) + (queries->texlen));
# 525 "mummergpu.cu"
}
# 527 "mummergpu.cu"
stopTimer(toboardtimer);
# 528 "mummergpu.cu"
((ctx->statistics).t_to_board) += getTimerValue(toboardtimer);
# 529 "mummergpu.cu"
deleteTimer(toboardtimer);
# 530 "mummergpu.cu"
}
# 532 "mummergpu.cu"
void unloadQueries(MatchContext *ctx)
# 533 "mummergpu.cu"
{
# 534 "mummergpu.cu"
QuerySet *queries = (ctx->queries);
# 536 "mummergpu.cu"
do { cudaError err = cudaFree(queries->d_tex_array); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 536, cudaGetErrorString(err)); exit(1); } } while (0);
# 537 "mummergpu.cu"
(queries->d_tex_array) = (__null);
# 539 "mummergpu.cu"
do { cudaError err = cudaFree(queries->d_addrs_tex_array); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 539, cudaGetErrorString(err)); exit(1); } } while (0);
# 540 "mummergpu.cu"
(queries->d_addrs_tex_array) = (__null);
# 542 "mummergpu.cu"
do { cudaError err = cudaFree(queries->d_lengths_array); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 542, cudaGetErrorString(err)); exit(1); } } while (0);
# 543 "mummergpu.cu"
(queries->d_lengths_array) = (__null);
# 545 "mummergpu.cu"
(queries->bytes_on_board) = (0);
# 546 "mummergpu.cu"
}
# 548 "mummergpu.cu"
void loadResultBuffer(MatchContext *ctx)
# 549 "mummergpu.cu"
{
# 550 "mummergpu.cu"
unsigned numQueries = ((ctx->queries)->count);
# 552 "mummergpu.cu"
(numQueries) ? (static_cast< void>(0)) : __assert_fail("numQueries", "mummergpu.cu", 552, __PRETTY_FUNCTION__);
# 554 "mummergpu.cu"
int match_length = (ctx->min_match_length);
# 556 "mummergpu.cu"
unsigned numCoords = (0);
# 558 "mummergpu.cu"
numCoords = (((ctx->queries)->texlen) - (numQueries * (match_length + 1)));
# 560 "mummergpu.cu"
((ctx->results).numCoords) = numCoords;
# 562 "mummergpu.cu"
fprintf(stderr, "Allocating result array for %d queries (%d bytes) ...", numQueries, numCoords * sizeof(MatchCoord));
# 563 "mummergpu.cu"
((ctx->results).h_match_coords) = ((MatchCoord *)calloc(numCoords, sizeof(MatchCoord)));
# 565 "mummergpu.cu"
if (!(ctx->on_cpu))
# 566 "mummergpu.cu"
{
# 567 "mummergpu.cu"
Timer_t *toboardtimer = (0);
# 568 "mummergpu.cu"
createTimer(&toboardtimer);
# 569 "mummergpu.cu"
startTimer(toboardtimer);
# 571 "mummergpu.cu"
((ctx->results).bytes_on_board) = (0);
# 573 "mummergpu.cu"
do { cudaError err = cudaMalloc((void **)(&((ctx->results).d_match_coords)), numCoords * sizeof(MatchCoord)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 574, cudaGetErrorString(err)); exit(1); } } while (0);
# 575 "mummergpu.cu"
((ctx->results).bytes_on_board) += (numCoords * sizeof(MatchCoord));
# 577 "mummergpu.cu"
do { cudaError err = cudaMemset((void *)((ctx->results).d_match_coords), 0, numCoords * sizeof(MatchCoord)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 578, cudaGetErrorString(err)); exit(1); } } while (0);
# 580 "mummergpu.cu"
stopTimer(toboardtimer);
# 581 "mummergpu.cu"
((ctx->statistics).t_to_board) += getTimerValue(toboardtimer);
# 582 "mummergpu.cu"
deleteTimer(toboardtimer);
# 583 "mummergpu.cu"
} else
# 585 "mummergpu.cu"
{
# 586 "mummergpu.cu"
((ctx->results).d_match_coords) = (__null);
# 587 "mummergpu.cu"
}
# 589 "mummergpu.cu"
fprintf(stderr, "done\n");
# 590 "mummergpu.cu"
}
# 592 "mummergpu.cu"
void unloadResultBuffer(MatchContext *ctx)
# 593 "mummergpu.cu"
{
# 594 "mummergpu.cu"
do { cudaError err = cudaFree((ctx->results).d_match_coords); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 594, cudaGetErrorString(err)); exit(1); } } while (0);
# 596 "mummergpu.cu"
((ctx->results).bytes_on_board) = (0);
# 597 "mummergpu.cu"
}
# 600 "mummergpu.cu"
void freeResults(MatchContext *ctx, ReferencePage pages[], unsigned num_pages)
# 601 "mummergpu.cu"
{
# 602 "mummergpu.cu"
for (int i = 0; i < num_pages; ++i)
# 603 "mummergpu.cu"
{
# 604 "mummergpu.cu"
free(((pages[i]).results).h_match_coords);
# 605 "mummergpu.cu"
}
# 606 "mummergpu.cu"
}
# 608 "mummergpu.cu"
void transferResultsFromDevice(MatchContext *ctx)
# 609 "mummergpu.cu"
{
# 610 "mummergpu.cu"
if (!(ctx->on_cpu))
# 611 "mummergpu.cu"
{
# 612 "mummergpu.cu"
Timer_t *fromboardtimer = (0);
# 613 "mummergpu.cu"
createTimer(&fromboardtimer);
# 614 "mummergpu.cu"
startTimer(fromboardtimer);
# 616 "mummergpu.cu"
do { cudaError err = cudaMemcpy((ctx->results).h_match_coords, (ctx->results).d_match_coords, ((ctx->results).numCoords) * sizeof(MatchCoord), cudaMemcpyDeviceToHost); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "mummergpu.cu", 619, cudaGetErrorString(err)); exit(1); } } while (0);
# 621 "mummergpu.cu"
stopTimer(fromboardtimer);
# 622 "mummergpu.cu"
((ctx->statistics).t_from_board) += getTimerValue(fromboardtimer);
# 623 "mummergpu.cu"
deleteTimer(fromboardtimer);
# 624 "mummergpu.cu"
}
# 626 "mummergpu.cu"
}
# 629 "mummergpu.cu"
int flushOutput();
# 630 "mummergpu.cu"
int addToBuffer(char *);
# 632 "mummergpu.cu"
inline int match_coord_addrs(int qryid, int qry_addrs, int match_length)
# 633 "mummergpu.cu"
{
# 634 "mummergpu.cu"
return qry_addrs - (qryid * (match_length + 1));
# 635 "mummergpu.cu"
}
# 639 "mummergpu.cu"
struct packed_slot {
# 641 "mummergpu.cu"
unsigned short page;
# 642 "mummergpu.cu"
unsigned short qpos;
# 643 "mummergpu.cu"
MatchCoord coord;
# 644 "mummergpu.cu"
};
# 646 "mummergpu.cu"
struct packed_slot_array {
# 648 "mummergpu.cu"
packed_slot *slots;
# 649 "mummergpu.cu"
unsigned num_slots;
# 650 "mummergpu.cu"
};
# 652 "mummergpu.cu"
void addPackedOutput(MatchContext *ctx, packed_slot_array **curr_output, packed_slot_array slot_array[])
# 653 "mummergpu.cu"
{
# 654 "mummergpu.cu"
unsigned numQueries = ((ctx->queries)->count);
# 655 "mummergpu.cu"
if ((*curr_output) == (__null))
# 656 "mummergpu.cu"
{
# 657 "mummergpu.cu"
(*curr_output) = slot_array;
# 658 "mummergpu.cu"
} else
# 660 "mummergpu.cu"
{
# 661 "mummergpu.cu"
for (int i = 0; i < numQueries; i++)
# 662 "mummergpu.cu"
{
# 663 "mummergpu.cu"
if ((slot_array[i]).num_slots)
# 664 "mummergpu.cu"
{
# 666 "mummergpu.cu"
(((*curr_output)[i]).slots) = ((packed_slot *)realloc(((*curr_output)[i]).slots, ((((*curr_output)[i]).num_slots) + ((slot_array[i]).num_slots)) * sizeof(packed_slot)));
# 668 "mummergpu.cu"
memcpy((((*curr_output)[i]).slots) + (((*curr_output)[i]).num_slots), (slot_array[i]).slots, ((slot_array[i]).num_slots) * sizeof(packed_slot));
# 671 "mummergpu.cu"
(((*curr_output)[i]).num_slots) += ((slot_array[i]).num_slots);
# 672 "mummergpu.cu"
free((slot_array[i]).slots);
# 673 "mummergpu.cu"
}
# 674 "mummergpu.cu"
}
# 675 "mummergpu.cu"
free(slot_array);
# 676 "mummergpu.cu"
}
# 677 "mummergpu.cu"
}
# 679 "mummergpu.cu"
char numbuffer[32];
# 681 "mummergpu.cu"
void printRCSlots(MatchContext *ctx, ReferencePage pages[], int qry, packed_slot_array *slots)
# 682 "mummergpu.cu"
{
# 683 "mummergpu.cu"
char *h_tex_array = ((ctx->queries)->h_tex_array);
# 684 "mummergpu.cu"
int *h_addrs_tex_array = ((ctx->queries)->h_addrs_tex_array);
# 685 "mummergpu.cu"
int qrylen = (((ctx->queries)->h_lengths_array)[qry]);
# 687 "mummergpu.cu"
addToBuffer((char *)("> "));
# 688 "mummergpu.cu"
addToBuffer(*(((ctx->queries)->h_names) + qry));
# 689 "mummergpu.cu"
addToBuffer((char *)(" Reverse"));
# 691 "mummergpu.cu"
if (ctx->show_query_length)
# 692 "mummergpu.cu"
{
# 693 "mummergpu.cu"
addToBuffer((char *)("  Len = "));
# 694 "mummergpu.cu"
sprintf(numbuffer, "%d", qrylen);
# 695 "mummergpu.cu"
addToBuffer(numbuffer);
# 696 "mummergpu.cu"
}
# 698 "mummergpu.cu"
addToBuffer((char *)("\n"));
# 700 "mummergpu.cu"
for (int j = 0; j < (slots->num_slots); ++j)
# 701 "mummergpu.cu"
{
# 702 "mummergpu.cu"
packed_slot slot = ((slots->slots)[j]);
# 704 "mummergpu.cu"
if (((slot.coord).edge_match_length) & 32768)
# 705 "mummergpu.cu"
{
# 706 "mummergpu.cu"
printAlignments(ctx->full_ref, &(pages[slot.page]), h_tex_array + (h_addrs_tex_array[qry]), qrylen, (slot.coord).node, slot.qpos, ((slot.coord).edge_match_length) & 32767, ctx->min_match_length, 1, ctx->forwardcoordinates);
# 716 "mummergpu.cu"
}
# 717 "mummergpu.cu"
}
# 718 "mummergpu.cu"
}
# 719 "mummergpu.cu"
int FOO;
# 720 "mummergpu.cu"
void printForwardSlots(MatchContext *ctx, ReferencePage pages[], int qry, packed_slot_array *slots)
# 721 "mummergpu.cu"
{
# 722 "mummergpu.cu"
char *h_tex_array = ((ctx->queries)->h_tex_array);
# 723 "mummergpu.cu"
int *h_addrs_tex_array = ((ctx->queries)->h_addrs_tex_array);
# 724 "mummergpu.cu"
int qrylen = (((ctx->queries)->h_lengths_array)[qry]);
# 726 "mummergpu.cu"
addToBuffer((char *)("> "));
# 727 "mummergpu.cu"
addToBuffer(*(((ctx->queries)->h_names) + qry));
# 729 "mummergpu.cu"
if (ctx->show_query_length)
# 730 "mummergpu.cu"
{
# 731 "mummergpu.cu"
addToBuffer((char *)("  Len = "));
# 732 "mummergpu.cu"
sprintf(numbuffer, "%d", qrylen);
# 733 "mummergpu.cu"
addToBuffer(numbuffer);
# 734 "mummergpu.cu"
}
# 736 "mummergpu.cu"
addToBuffer((char *)("\n"));
# 738 "mummergpu.cu"
for (int j = 0; j < (slots->num_slots); ++j)
# 739 "mummergpu.cu"
{
# 740 "mummergpu.cu"
packed_slot slot = ((slots->slots)[j]);
# 741 "mummergpu.cu"
if (!(((slot.coord).edge_match_length) & 32768))
# 742 "mummergpu.cu"
{
# 743 "mummergpu.cu"
printAlignments(ctx->full_ref, &(pages[slot.page]), h_tex_array + (h_addrs_tex_array[qry]), qrylen, (slot.coord).node, slot.qpos, (slot.coord).edge_match_length, ctx->min_match_length, 0, ctx->forwardcoordinates);
# 753 "mummergpu.cu"
}
# 754 "mummergpu.cu"
}
# 755 "mummergpu.cu"
FOO += (slots->num_slots);
# 756 "mummergpu.cu"
}
# 758 "mummergpu.cu"
void printPackedResults(MatchContext *ctx, ReferencePage pages[], packed_slot_array slot_array[])
# 759 "mummergpu.cu"
{
# 760 "mummergpu.cu"
unsigned numQueries = ((ctx->queries)->count);
# 761 "mummergpu.cu"
FOO = 0;
# 762 "mummergpu.cu"
for (int qry = 0; qry < numQueries; qry++)
# 763 "mummergpu.cu"
{
# 764 "mummergpu.cu"
packed_slot_array *slots = (&(slot_array[qry]));
# 766 "mummergpu.cu"
if (ctx->reverse)
# 767 "mummergpu.cu"
{
# 768 "mummergpu.cu"
printRCSlots(ctx, pages, qry, slots);
# 769 "mummergpu.cu"
} else
# 771 "mummergpu.cu"
{
# 772 "mummergpu.cu"
printForwardSlots(ctx, pages, qry, slots);
# 774 "mummergpu.cu"
if (ctx->forwardreverse)
# 775 "mummergpu.cu"
{
# 776 "mummergpu.cu"
printRCSlots(ctx, pages, qry, slots);
# 777 "mummergpu.cu"
}
# 778 "mummergpu.cu"
}
# 779 "mummergpu.cu"
}
# 780 "mummergpu.cu"
printf("FOO = %d\n", FOO);
# 781 "mummergpu.cu"
flushOutput();
# 782 "mummergpu.cu"
}
# 784 "mummergpu.cu"
void packSlots(MatchContext *ctx, MatchResults *results, unsigned page_num, packed_slot_array **slot_arrays, bool rc)
# 785 "mummergpu.cu"
{
# 786 "mummergpu.cu"
unsigned numQueries = ((ctx->queries)->count);
# 788 "mummergpu.cu"
int *h_addrs_tex_array = ((ctx->queries)->h_addrs_tex_array);
# 790 "mummergpu.cu"
int match_length = (ctx->min_match_length);
# 792 "mummergpu.cu"
(*slot_arrays) = ((packed_slot_array *)calloc(numQueries, sizeof(packed_slot_array)));
# 794 "mummergpu.cu"
for (int i = 0; i < numQueries; i++)
# 795 "mummergpu.cu"
{
# 796 "mummergpu.cu"
int qlen;
# 798 "mummergpu.cu"
if (i == (numQueries - (1))) {
# 799 "mummergpu.cu"
qlen = ((((ctx->queries)->texlen) - (h_addrs_tex_array[i])) - match_length); } else {
# 801 "mummergpu.cu"
qlen = (((h_addrs_tex_array[i + 1]) - (h_addrs_tex_array[i])) - match_length); }
# 803 "mummergpu.cu"
packed_slot *qslots = ((packed_slot *)calloc(qlen, sizeof(packed_slot)));
# 804 "mummergpu.cu"
int filled = 0;
# 805 "mummergpu.cu"
for (int p = 0; p < qlen; ++p)
# 806 "mummergpu.cu"
{
# 807 "mummergpu.cu"
MatchCoord *coords = (results->h_match_coords);
# 809 "mummergpu.cu"
int query_coord_begin = match_coord_addrs(i, h_addrs_tex_array[i], match_length);
# 810 "mummergpu.cu"
int query_coord_end = ((i < (numQueries - (1))) ? (match_coord_addrs(i + 1, h_addrs_tex_array[i + 1], match_length)) : (results->numCoords));
# 813 "mummergpu.cu"
int query_coord = (query_coord_begin + p);
# 815 "mummergpu.cu"
if (((query_coord < query_coord_end) && (((coords[query_coord]).node) > (1))) && ((!(((coords[query_coord]).edge_match_length) & 32768)) == (!rc)))
# 818 "mummergpu.cu"
{
# 819 "mummergpu.cu"
packed_slot s;
# 820 "mummergpu.cu"
(s.page) = page_num;
# 821 "mummergpu.cu"
(s.qpos) = p;
# 822 "mummergpu.cu"
(s.coord) = (coords[query_coord]);
# 823 "mummergpu.cu"
(qslots[filled++]) = s;
# 824 "mummergpu.cu"
}
# 825 "mummergpu.cu"
}
# 827 "mummergpu.cu"
if (filled)
# 828 "mummergpu.cu"
{
# 829 "mummergpu.cu"
packed_slot *pslots = ((packed_slot *)calloc(filled, sizeof(packed_slot)));
# 830 "mummergpu.cu"
memcpy(pslots, qslots, filled * sizeof(packed_slot));
# 832 "mummergpu.cu"
(((*slot_arrays)[i]).slots) = pslots;
# 833 "mummergpu.cu"
(((*slot_arrays)[i]).num_slots) = filled;
# 834 "mummergpu.cu"
} else
# 836 "mummergpu.cu"
{
# 837 "mummergpu.cu"
(((*slot_arrays)[i]).slots) = (__null);
# 838 "mummergpu.cu"
(((*slot_arrays)[i]).num_slots) = (0);
# 839 "mummergpu.cu"
}
# 841 "mummergpu.cu"
free(qslots);
# 842 "mummergpu.cu"
}
# 843 "mummergpu.cu"
}
# 845 "mummergpu.cu"
int getQueryBlock(MatchContext *ctx, size_t device_mem_avail)
# 846 "mummergpu.cu"
{
# 847 "mummergpu.cu"
QuerySet *queries = (ctx->queries);
# 848 "mummergpu.cu"
char *queryTex = (__null);
# 849 "mummergpu.cu"
int *queryAddrs = (__null);
# 850 "mummergpu.cu"
int *queryLengths = (__null);
# 851 "mummergpu.cu"
unsigned numQueries;
# 852 "mummergpu.cu"
size_t queryLen;
# 853 "mummergpu.cu"
char **names;
# 855 "mummergpu.cu"
Timer_t *queryreadtimer = (0);
# 856 "mummergpu.cu"
createTimer(&queryreadtimer);
# 857 "mummergpu.cu"
startTimer(queryreadtimer);
# 859 "mummergpu.cu"
getQueriesTexture(queries->qfile, &queryTex, &queryLen, &queryAddrs, &names, &queryLengths, &numQueries, device_mem_avail, ctx->min_match_length, (ctx->reverse) || (ctx->forwardreverse));
# 870 "mummergpu.cu"
stopTimer(queryreadtimer);
# 871 "mummergpu.cu"
((ctx->statistics).t_query_read) += getTimerValue(queryreadtimer);
# 872 "mummergpu.cu"
deleteTimer(queryreadtimer);
# 874 "mummergpu.cu"
(queries->h_tex_array) = queryTex;
# 875 "mummergpu.cu"
(queries->count) = numQueries;
# 876 "mummergpu.cu"
(queries->h_addrs_tex_array) = queryAddrs;
# 877 "mummergpu.cu"
(queries->texlen) = queryLen;
# 878 "mummergpu.cu"
(queries->h_names) = names;
# 879 "mummergpu.cu"
(queries->h_lengths_array) = queryLengths;
# 881 "mummergpu.cu"
return numQueries;
# 882 "mummergpu.cu"
}
# 885 "mummergpu.cu"
void destroyQueryBlock(QuerySet *queries)
# 886 "mummergpu.cu"
{
# 887 "mummergpu.cu"
free(queries->h_tex_array);
# 888 "mummergpu.cu"
(queries->h_tex_array) = (__null);
# 890 "mummergpu.cu"
for (int i = 0; i < (queries->count); ++i) {
# 891 "mummergpu.cu"
free((queries->h_names)[i]); }
# 893 "mummergpu.cu"
free(queries->h_names);
# 895 "mummergpu.cu"
(queries->count) = (0);
# 896 "mummergpu.cu"
(queries->texlen) = (0);
# 898 "mummergpu.cu"
free(queries->h_addrs_tex_array);
# 899 "mummergpu.cu"
(queries->h_addrs_tex_array) = (__null);
# 901 "mummergpu.cu"
free(queries->h_lengths_array);
# 902 "mummergpu.cu"
(queries->h_lengths_array) = (__null);
# 903 "mummergpu.cu"
}
# 906 "mummergpu.cu"
void writeStatisticsFile(MatchContext *ctx, char *stats_filename)
# 907 "mummergpu.cu"
{
# 908 "mummergpu.cu"
if (!(stats_filename)) {
# 909 "mummergpu.cu"
return; }
# 911 "mummergpu.cu"
FILE *f = fopen(stats_filename, "w");
# 913 "mummergpu.cu"
if (!(f))
# 914 "mummergpu.cu"
{
# 915 "mummergpu.cu"
fprintf(stderr, "WARNING: could not open %s for writing\n", stats_filename);
# 916 "mummergpu.cu"
return;
# 917 "mummergpu.cu"
}
# 919 "mummergpu.cu"
fprintf(f, "Total,%f\n", (ctx->statistics).t_total);
# 920 "mummergpu.cu"
fprintf(f, "Kernel,%f\n", (ctx->statistics).t_kernel);
# 921 "mummergpu.cu"
fprintf(f, "Print matches,%f\n", (ctx->statistics).t_output);
# 922 "mummergpu.cu"
fprintf(f, "Copy queries to GPU,%f\n", (ctx->statistics).t_to_board);
# 923 "mummergpu.cu"
fprintf(f, "Copy output from GPU,%f\n", (ctx->statistics).t_from_board);
# 924 "mummergpu.cu"
fprintf(f, "Copy suffix tree to GPU,%f\n", (ctx->statistics).t_moving_tree_pages);
# 925 "mummergpu.cu"
fprintf(f, "Read queries from disk,%f\n", (ctx->statistics).t_query_read);
# 926 "mummergpu.cu"
fprintf(f, "Suffix tree constructions,%f\n", (ctx->statistics).t_construction);
# 928 "mummergpu.cu"
fprintf(f, "Minimum substring length, %d\n", ctx->min_match_length);
# 929 "mummergpu.cu"
fprintf(f, "Average query length, %f\n", (ctx->statistics).bp_avg_query_length);
# 930 "mummergpu.cu"
fclose(f);
# 931 "mummergpu.cu"
}
# 933 "mummergpu.cu"
int matchSubset(MatchContext *ctx, int
# 934 "mummergpu.cu"
query_block_offset, ReferencePage
# 935 "mummergpu.cu"
pages[], unsigned
# 936 "mummergpu.cu"
num_pages)
# 937 "mummergpu.cu"
{
# 939 "mummergpu.cu"
loadQueries(ctx);
# 940 "mummergpu.cu"
packed_slot_array *packed_slots = (__null);
# 941 "mummergpu.cu"
for (unsigned i = (0); i < num_pages; ++i)
# 942 "mummergpu.cu"
{
# 943 "mummergpu.cu"
(ctx->ref) = (&((pages[i]).ref));
# 944 "mummergpu.cu"
loadReference(ctx);
# 945 "mummergpu.cu"
loadResultBuffer(ctx);
# 947 "mummergpu.cu"
Timer_t *ktimer = (0);
# 948 "mummergpu.cu"
createTimer(&ktimer);
# 950 "mummergpu.cu"
unsigned numQueries = ((ctx->queries)->count);
# 951 "mummergpu.cu"
int blocksize = ((numQueries > (256)) ? (256) : numQueries);
# 953 "mummergpu.cu"
dim3 dimBlock(blocksize, 1, 1);
# 954 "mummergpu.cu"
dim3 dimGrid(ceil(numQueries / ((float)256)), 1, 1);
# 956 "mummergpu.cu"
if (!(ctx->on_cpu))
# 957 "mummergpu.cu"
{
# 958 "mummergpu.cu"
fprintf(stderr, "Using blocks of %d x %d x %d threads\n", dimBlock.x, dimBlock.y, dimBlock.z);
# 960 "mummergpu.cu"
fprintf(stderr, "Using a grid of %d x %d x %d blocks\n", dimGrid.x, dimGrid.y, dimBlock.z);
# 962 "mummergpu.cu"
fprintf(stderr, "Memory footprint is:\n\tqueries: %d\n\tref: %d\n\tresults: %d\n", (ctx->queries)->bytes_on_board, (ctx->ref)->bytes_on_board, (ctx->results).bytes_on_board);
# 966 "mummergpu.cu"
}
# 968 "mummergpu.cu"
startTimer(ktimer);
# 970 "mummergpu.cu"
bool alignRC = (ctx->reverse);
# 972 "mummergpu.cu"
if (ctx->on_cpu)
# 973 "mummergpu.cu"
{
# 974 "mummergpu.cu"
if (alignRC)
# 975 "mummergpu.cu"
{
# 976 "mummergpu.cu"
computeGold(&(ctx->results), (ctx->ref)->str, (ctx->queries)->h_tex_array, (ctx->queries)->h_addrs_tex_array, (ctx->queries)->h_lengths_array, (PixelOfNode *)((ctx->ref)->h_node_tex_array), (PixelOfChildren *)((ctx->ref)->h_children_tex_array), (ctx->queries)->count, ctx->min_match_length, 32768);
# 986 "mummergpu.cu"
} else
# 988 "mummergpu.cu"
{
# 989 "mummergpu.cu"
computeGold(&(ctx->results), (ctx->ref)->str, (ctx->queries)->h_tex_array, (ctx->queries)->h_addrs_tex_array, (ctx->queries)->h_lengths_array, (PixelOfNode *)((ctx->ref)->h_node_tex_array), (PixelOfChildren *)((ctx->ref)->h_children_tex_array), (ctx->queries)->count, ctx->min_match_length, 0);
# 999 "mummergpu.cu"
}
# 1000 "mummergpu.cu"
} else
# 1002 "mummergpu.cu"
{
# 1004 "mummergpu.cu"
if (alignRC)
# 1005 "mummergpu.cu"
{
# 1006 "mummergpu.cu"
cudaConfigureCall(dimGrid, dimBlock, 0) ? ((void)0) : mummergpuRCKernel((ctx->results).d_match_coords, (ctx->queries)->d_tex_array, (ctx->queries)->d_addrs_tex_array, (ctx->queries)->d_lengths_array, numQueries, ctx->min_match_length);
# 1012 "mummergpu.cu"
} else
# 1014 "mummergpu.cu"
{
# 1015 "mummergpu.cu"
cudaConfigureCall(dimGrid, dimBlock, 0) ? ((void)0) : mummergpuKernel((ctx->results).d_match_coords, (ctx->queries)->d_tex_array, (ctx->queries)->d_addrs_tex_array, (ctx->queries)->d_lengths_array, numQueries, ctx->min_match_length);
# 1021 "mummergpu.cu"
}
# 1023 "mummergpu.cu"
}
# 1025 "mummergpu.cu"
cudaThreadSynchronize();
# 1028 "mummergpu.cu"
cudaError_t err = cudaGetLastError();
# 1029 "mummergpu.cu"
if ((cudaSuccess) != err)
# 1030 "mummergpu.cu"
{
# 1031 "mummergpu.cu"
fprintf(stderr, "Kernel execution failed: %s.\n", cudaGetErrorString(err));
# 1033 "mummergpu.cu"
exit(1);
# 1034 "mummergpu.cu"
}
# 1036 "mummergpu.cu"
stopTimer(ktimer);
# 1038 "mummergpu.cu"
float ktime = getTimerValue(ktimer);
# 1039 "mummergpu.cu"
((ctx->statistics).t_kernel) += ktime;
# 1040 "mummergpu.cu"
fprintf(stderr, "kernel time= %f\n", ktime);
# 1041 "mummergpu.cu"
deleteTimer(ktimer);
# 1043 "mummergpu.cu"
transferResultsFromDevice(ctx);
# 1044 "mummergpu.cu"
((pages[i]).results) = (ctx->results);
# 1046 "mummergpu.cu"
packed_slot_array *packed;
# 1047 "mummergpu.cu"
packSlots(ctx, &((pages[i]).results), i, &packed, ctx->reverse);
# 1048 "mummergpu.cu"
addPackedOutput(ctx, &packed_slots, packed);
# 1051 "mummergpu.cu"
if (ctx->forwardreverse)
# 1052 "mummergpu.cu"
{
# 1053 "mummergpu.cu"
Timer_t *rctimer = (0);
# 1054 "mummergpu.cu"
createTimer(&rctimer);
# 1055 "mummergpu.cu"
startTimer(rctimer);
# 1057 "mummergpu.cu"
if (ctx->on_cpu)
# 1058 "mummergpu.cu"
{
# 1059 "mummergpu.cu"
computeGold(&(ctx->results), (ctx->ref)->str, (ctx->queries)->h_tex_array, (ctx->queries)->h_addrs_tex_array, (ctx->queries)->h_lengths_array, (PixelOfNode *)((ctx->ref)->h_node_tex_array), (PixelOfChildren *)((ctx->ref)->h_children_tex_array), (ctx->queries)->count, ctx->min_match_length, 32768);
# 1069 "mummergpu.cu"
} else
# 1071 "mummergpu.cu"
{
# 1073 "mummergpu.cu"
cudaConfigureCall(dimGrid, dimBlock, 0) ? ((void)0) : mummergpuRCKernel((ctx->results).d_match_coords, (ctx->queries)->d_tex_array, (ctx->queries)->d_addrs_tex_array, (ctx->queries)->d_lengths_array, numQueries, ctx->min_match_length);
# 1079 "mummergpu.cu"
cudaThreadSynchronize();
# 1080 "mummergpu.cu"
}
# 1082 "mummergpu.cu"
stopTimer(rctimer);
# 1084 "mummergpu.cu"
float rctime = getTimerValue(rctimer);
# 1085 "mummergpu.cu"
((ctx->statistics).t_kernel) += rctime;
# 1086 "mummergpu.cu"
fprintf(stderr, "rc kernel time= %f\n", rctime);
# 1087 "mummergpu.cu"
deleteTimer(rctimer);
# 1089 "mummergpu.cu"
transferResultsFromDevice(ctx);
# 1090 "mummergpu.cu"
((pages[i]).results) = (ctx->results);
# 1092 "mummergpu.cu"
packed_slot_array *packed;
# 1093 "mummergpu.cu"
packSlots(ctx, &((pages[i]).results), i, &packed, 1);
# 1094 "mummergpu.cu"
addPackedOutput(ctx, &packed_slots, packed);
# 1095 "mummergpu.cu"
}
# 1097 "mummergpu.cu"
free(((pages[i]).results).h_match_coords);
# 1098 "mummergpu.cu"
(((pages[i]).results).h_match_coords) = (__null);
# 1100 "mummergpu.cu"
unloadReference(ctx);
# 1101 "mummergpu.cu"
unloadResultBuffer(ctx);
# 1102 "mummergpu.cu"
}
# 1105 "mummergpu.cu"
Timer_t *otimer = (0);
# 1106 "mummergpu.cu"
createTimer(&otimer);
# 1107 "mummergpu.cu"
startTimer(otimer);
# 1109 "mummergpu.cu"
printPackedResults(ctx, pages, packed_slots);
# 1111 "mummergpu.cu"
stopTimer(otimer);
# 1112 "mummergpu.cu"
((ctx->statistics).t_output) += getTimerValue(otimer);
# 1113 "mummergpu.cu"
deleteTimer(otimer);
# 1115 "mummergpu.cu"
for (int i = 0; i < ((ctx->queries)->count); ++i)
# 1116 "mummergpu.cu"
{
# 1117 "mummergpu.cu"
free((packed_slots[i]).slots);
# 1118 "mummergpu.cu"
}
# 1119 "mummergpu.cu"
free(packed_slots);
# 1121 "mummergpu.cu"
unloadQueries(ctx);
# 1122 "mummergpu.cu"
return 0;
# 1123 "mummergpu.cu"
}
# 1130 "mummergpu.cu"
extern "C" int matchQueries(MatchContext *ctx)
# 1131 "mummergpu.cu"
{
# 1132 "mummergpu.cu"
(sizeof(PixelOfNode) == sizeof(uint4)) ? (static_cast< void>(0)) : __assert_fail("sizeof(struct PixelOfNode) == sizeof(uint4)", "mummergpu.cu", 1132, __PRETTY_FUNCTION__);
# 1133 "mummergpu.cu"
(sizeof(PixelOfChildren) == sizeof(uint4)) ? (static_cast< void>(0)) : __assert_fail("sizeof(struct PixelOfChildren) == sizeof(uint4)", "mummergpu.cu", 1133, __PRETTY_FUNCTION__);
# 1135 "mummergpu.cu"
((ctx->statistics).t_kernel) = ((0.0));
# 1136 "mummergpu.cu"
((ctx->statistics).t_output) = ((0.0));
# 1137 "mummergpu.cu"
((ctx->statistics).t_to_board) = ((0.0));
# 1138 "mummergpu.cu"
((ctx->statistics).t_from_board) = ((0.0));
# 1139 "mummergpu.cu"
((ctx->statistics).t_moving_tree_pages) = ((0.0));
# 1140 "mummergpu.cu"
((ctx->statistics).t_query_read) = ((0.0));
# 1141 "mummergpu.cu"
((ctx->statistics).t_total) = ((0.0));
# 1142 "mummergpu.cu"
((ctx->statistics).t_construction) = ((0.0));
# 1143 "mummergpu.cu"
((ctx->statistics).bp_avg_query_length) = ((0.0));
# 1145 "mummergpu.cu"
Timer_t *ttimer = (0);
# 1146 "mummergpu.cu"
createTimer(&ttimer);
# 1147 "mummergpu.cu"
startTimer(ttimer);
# 1149 "mummergpu.cu"
Timer_t *ctimer = (0);
# 1150 "mummergpu.cu"
createTimer(&ctimer);
# 1151 "mummergpu.cu"
startTimer(ctimer);
# 1154 "mummergpu.cu"
unsigned bases_in_ref = ((ctx->full_ref_len) - (3));
# 1156 "mummergpu.cu"
unsigned page_size = (((7500000) < bases_in_ref) ? (7500000) : bases_in_ref);
# 1157 "mummergpu.cu"
unsigned num_reference_pages = (bases_in_ref / page_size);
# 1159 "mummergpu.cu"
ReferencePage *pages = ((ReferencePage *)calloc(num_reference_pages, sizeof(ReferencePage)));
# 1161 "mummergpu.cu"
unsigned page_overlap = (8192 + 1);
# 1164 "mummergpu.cu"
((pages[0]).begin) = 1;
# 1165 "mummergpu.cu"
((pages[0]).end) = (((((pages[0]).begin) + page_size) + ceil(page_overlap / (2.0))) + (1));
# 1168 "mummergpu.cu"
((pages[0]).shadow_left) = (-1);
# 1169 "mummergpu.cu"
((pages[0]).id) = (0);
# 1171 "mummergpu.cu"
buildReferenceTexture(&((pages[0]).ref), ctx->full_ref, (pages[0]).begin, (pages[0]).end);
# 1173 "mummergpu.cu"
for (int i = 1; i < (num_reference_pages - (1)); ++i)
# 1174 "mummergpu.cu"
{
# 1175 "mummergpu.cu"
((pages[i]).begin) = (((pages[i - 1]).end) - page_overlap);
# 1176 "mummergpu.cu"
((pages[i]).end) = ((((pages[i]).begin) + page_size) + page_overlap);
# 1178 "mummergpu.cu"
((pages[i - 1]).shadow_right) = ((pages[i]).begin);
# 1179 "mummergpu.cu"
((pages[i]).shadow_left) = ((pages[i - 1]).end);
# 1180 "mummergpu.cu"
((pages[i]).id) = i;
# 1181 "mummergpu.cu"
buildReferenceTexture(&((pages[i]).ref), ctx->full_ref, (pages[i]).begin, (pages[i]).end);
# 1182 "mummergpu.cu"
}
# 1184 "mummergpu.cu"
if (num_reference_pages > (1))
# 1185 "mummergpu.cu"
{
# 1186 "mummergpu.cu"
int last_page = (num_reference_pages - (1));
# 1187 "mummergpu.cu"
((pages[last_page]).begin) = (((pages[last_page - 1]).end) - page_overlap);
# 1188 "mummergpu.cu"
((pages[last_page]).end) = ((ctx->full_ref_len) - (1));
# 1189 "mummergpu.cu"
((pages[last_page - 1]).shadow_right) = ((pages[last_page]).begin);
# 1190 "mummergpu.cu"
((pages[last_page]).shadow_right) = (-1);
# 1191 "mummergpu.cu"
((pages[last_page]).shadow_left) = ((pages[last_page - 1]).end);
# 1192 "mummergpu.cu"
((pages[last_page]).id) = last_page;
# 1193 "mummergpu.cu"
buildReferenceTexture(&((pages[last_page]).ref), ctx->full_ref, (pages[last_page]).begin, (pages[last_page]).end);
# 1197 "mummergpu.cu"
}
# 1199 "mummergpu.cu"
stopTimer(ctimer);
# 1200 "mummergpu.cu"
((ctx->statistics).t_construction) += getTimerValue(ctimer);
# 1201 "mummergpu.cu"
deleteTimer(ctimer);
# 1203 "mummergpu.cu"
cudaDeviceProp props;
# 1204 "mummergpu.cu"
if (!(ctx->on_cpu))
# 1205 "mummergpu.cu"
{
# 1206 "mummergpu.cu"
int deviceCount = 0;
# 1207 "mummergpu.cu"
cudaGetDeviceCount(&deviceCount);
# 1209 "mummergpu.cu"
if (deviceCount != 1)
# 1210 "mummergpu.cu"
{
# 1213 "mummergpu.cu"
}
# 1215 "mummergpu.cu"
cudaGetDeviceProperties(&props, 0);
# 1216 "mummergpu.cu"
fprintf(stderr, "Running under CUDA %d.%d\n", props.major, props.minor);
# 1217 "mummergpu.cu"
fprintf(stderr, "CUDA device has %d bytes of memory\n", props.totalGlobalMem);
# 1218 "mummergpu.cu"
} else
# 1220 "mummergpu.cu"
{
# 1221 "mummergpu.cu"
(props.totalGlobalMem) = (804585472);
# 1222 "mummergpu.cu"
}
# 1224 "mummergpu.cu"
size_t mem_avail = (0);
# 1225 "mummergpu.cu"
for (int i = 0; i < num_reference_pages; ++i)
# 1226 "mummergpu.cu"
{
# 1227 "mummergpu.cu"
mem_avail = (max((unsigned)(((pages[i]).ref).bytes_on_board), (unsigned)mem_avail));
# 1229 "mummergpu.cu"
}
# 1231 "mummergpu.cu"
mem_avail = ((props.totalGlobalMem) - mem_avail);
# 1233 "mummergpu.cu"
fprintf(stderr, "There are %d bytes left on the board\n", mem_avail);
# 1235 "mummergpu.cu"
mem_avail -= ((64 * 1024) * 1024);
# 1237 "mummergpu.cu"
while (getQueryBlock(ctx, mem_avail))
# 1238 "mummergpu.cu"
{
# 1239 "mummergpu.cu"
matchSubset(ctx, 0, pages, num_reference_pages);
# 1240 "mummergpu.cu"
((ctx->statistics).bp_avg_query_length) = ((((ctx->queries)->texlen) / ((float)((ctx->queries)->count))) - (2));
# 1241 "mummergpu.cu"
destroyQueryBlock(ctx->queries);
# 1242 "mummergpu.cu"
cudaThreadExit();
# 1243 "mummergpu.cu"
}
# 1245 "mummergpu.cu"
for (int i = 0; i < num_reference_pages; ++i)
# 1246 "mummergpu.cu"
{
# 1247 "mummergpu.cu"
destroyReference(&((pages[i]).ref));
# 1248 "mummergpu.cu"
}
# 1249 "mummergpu.cu"
free(pages);
# 1251 "mummergpu.cu"
stopTimer(ttimer);
# 1252 "mummergpu.cu"
((ctx->statistics).t_total) += getTimerValue(ttimer);
# 1253 "mummergpu.cu"
deleteTimer(ttimer);
# 1255 "mummergpu.cu"
writeStatisticsFile(ctx, ctx->stats_file);
# 1257 "mummergpu.cu"
return 0;
# 1258 "mummergpu.cu"
}
# 1 "mummergpu.cudafe1.stub.c"
# 1 "mummergpu.cudafe1.stub.c" 1 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 1 3
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 3
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

# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h" 1 3
# 90 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h" 3
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
# 91 "/home/bachelor/deicide218/cuda-3.2/bin/../include/common_functions.h" 2 3
# 164 "/home/bachelor/deicide218/cuda-3.2/bin/../include/crt/host_runtime.h" 2 3







#pragma pack()
# 2 "mummergpu.cudafe1.stub.c" 2 3
# 1 "mummergpu.fatbin.c" 1 3
# 1 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 1 3
# 83 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
extern "C" {
# 97 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
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
# 152 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
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
# 203 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/home/bachelor/deicide218/cuda-3.2/bin/../include/__cudaFatFormat.h" 3
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "mummergpu.fatbin.c" 2 3

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_20$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000001784,0x0000000000000040,0x0038004000140114,0x0001000c00400003\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000340\n"
".quad 0x00000000000001bd,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x00000000000004fd\n"
".quad 0x0000000000000074,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000571\n"
".quad 0x00000000000001c8,0x0000000e00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x00000001000000a8,0x0000000000000006,0x0000000000000000,0x0000000000000739\n"
".quad 0x0000000000000658,0x1800000900000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000184,0x0000000000000002,0x0000000000000000,0x0000000000000d91\n"
".quad 0x0000000000000048,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000d9,0x0000000000000002,0x0000000000000000,0x0000000000000dd9\n"
".quad 0x00000000000000bc,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000000006,0x0000000000000000,0x0000000000000e95\n"
".quad 0x0000000000000778,0x1200000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000149,0x0000000000000002,0x0000000000000000,0x000000000000160d\n"
".quad 0x0000000000000048,0x0000000700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000010d,0x0000000000000002,0x0000000000000000,0x0000000000001655\n"
".quad 0x0000000000000004,0x0000000700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000069,0x0000000000000002,0x0000000000000000,0x0000000000001659\n"
".quad 0x00000000000000bc,0x0000000700000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000010000009f,0x0000000000000002,0x0000000000000000,0x0000000000001715\n"
".quad 0x000000000000006c,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x37315a5f2e747865\n"
".quad 0x706772656d6d756d,0x656e72654b435275,0x6374614d3031506c,0x635064726f6f4368\n"
".quad 0x69695f3353694b50,0x666e692e766e2e00,0x756d37315a5f2e6f,0x5275706772656d6d\n"
".quad 0x506c656e72654b43,0x43686374614d3031,0x4b50635064726f6f,0x2e0069695f335369\n"
".quad 0x006f666e692e766e,0x5a5f2e747865742e,0x72656d6d756d3531,0x656e72654b757067\n"
".quad 0x6374614d3031506c,0x635064726f6f4368,0x69695f3353694b50,0x666e692e766e2e00\n"
".quad 0x756d35315a5f2e6f,0x4b75706772656d6d,0x3031506c656e7265,0x6f6f43686374614d\n"
".quad 0x53694b5063506472,0x766e2e0069695f33,0x6e6174736e6f632e,0x37315a5f2e363174\n"
".quad 0x706772656d6d756d,0x656e72654b435275,0x6374614d3031506c,0x635064726f6f4368\n"
".quad 0x69695f3353694b50,0x6e6f632e766e2e00,0x5f2e30746e617473,0x656d6d756d37315a\n"
".quad 0x654b435275706772,0x4d3031506c656e72,0x726f6f4368637461,0x3353694b50635064\n"
".quad 0x2e766e2e0069695f,0x746e6174736e6f63,0x756d35315a5f2e30,0x4b75706772656d6d\n"
".quad 0x3031506c656e7265,0x6f6f43686374614d,0x53694b5063506472,0x5a5f000069695f33\n"
".quad 0x72656d6d756d3731,0x72654b4352757067,0x614d3031506c656e,0x64726f6f43686374\n"
".quad 0x5f3353694b506350,0x6d35315a5f006969,0x75706772656d6d75,0x31506c656e72654b\n"
".quad 0x6f43686374614d30,0x694b50635064726f,0x65720069695f3353,0x646f6e0078657466\n"
".quad 0x6968630078657465,0x7865746e6572646c,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0100030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0200030000000000,0x0000000000000000,0x0000000000000000,0x0300030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0700030000000000,0x0000000000000000,0x0000000000077800,0x0a00030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0b00030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0400030000000000,0x0000000000000000,0x0000000000065800\n"
".quad 0x0600030000000000,0x0000000000000000,0x0000000000000000,0x0900030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0800030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0500030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0710120000000100,0x0000000000000000,0x0000000000077800,0x0410120000002e00\n"
".quad 0x0000000000000000,0x0000000000065800,0x00001a0000005900,0x0000000000000000\n"
".quad 0x0000000000000000,0x00001a0000006000,0x0000000000000000,0x0000000000000000\n"
".quad 0x00001a0000006800,0x0000000000000000,0x0000000000000000,0x00440400005de400\n"
".quad 0x00000094001c0428,0x00400020009de42c,0x0000008400dc0428,0x00c06000001c032c\n"
".quad 0x00c06000209c0370,0x00c00080105d0370,0x06000008001c0348,0x8e40010001dc2320\n"
".quad 0x000000000021e718,0x0000001000dde280,0x00c00010009ce318,0x00400110021de450\n"
".quad 0x078000c0011ca328,0x004000d0215c4320,0x078000e0019ca348,0x004000f021dc4320\n"
".quad 0x00000000409c8548,0x0000000060dc8584,0x00c00004811c0384,0x00c06000015c0348\n"
".quad 0x00400080019de470,0x00c06000411c0328,0x000000fc001de470,0x00000010515c0328\n"
".quad 0x0dc0002021dca350,0x00c00020211ce320,0x0040011030dd0350,0x00c00020519c4348\n"
".quad 0x00400090421c4350,0x0fc00020535e0348,0x8e0000fc31dc2320,0x00c0047c211c2318\n"
".quad 0x00000018839d4370,0x000000000001e748,0x014000a0245c0380,0x00c00004321c0348\n"
".quad 0x000000fc03dde448,0x000000fc041de428,0x000000fc025de428,0x000000fc029de428\n"
".quad 0x000000fc02dde428,0x004000b0449c4328,0x8e0000fca1dc2348,0x200000fc01dc0319\n"
".quad 0x000000a000a1e719,0x00fc000000000340,0x000000040281e268,0x000000fc02c1e418\n"
".quad 0x00c3fffc00000328,0x00c4000000004368,0x0100003d155c0368,0x00c0047ca51c2348\n"
".quad 0x0000002804dde470,0x00000041259c4328,0x01000054a09c0348,0x000010e000000748\n"
".quad 0x0000005940dc4368,0x00000000209c2548,0x0e0000fc21dc2384,0x00000d400001e719\n"
".quad 0x00000cc000000740,0x00c00040011c0370,0x00c0004000dc0360,0x00c0004045dc0358\n"
".quad 0x0000000d215c0458,0x0000005d211c0418,0x13c000fc411c8618,0x0ec0010421dc2380\n"
".quad 0x00000000031de419,0x000001a000000728,0x000000e00001e760,0x0ec0010c21dc2340\n"
".quad 0x000000c00001e719,0x0ec0011c21dc2340,0x000000a00001e719,0x0ec0015021dc2340\n"
".quad 0x000000800001e719,0x00000080001de740,0x00000010001df440,0x00000014001df428\n"
".quad 0x00000018001df428,0x0000001c001df428,0x000000fc001df428,0x8e0000fc01dc0328\n"
".quad 0x000002000001e71a,0x8e400110a1dc2340,0x00000030131c8519,0x000001400081e7c8\n"
".quad 0x00c0007c30200340,0x00c00074f1600368,0x00c0001430a00358,0x1bc00020f1200358\n"
".quad 0x000000017020a320,0x0000001501606340,0x0000000020222340,0x00000014e1604340\n"
".quad 0x0000000040208548,0x000000104fe06594,0x00fffffca29c0394,0x000000fc02dde448\n"
".quad 0x00000000001de728,0x00c0004000dc03a8,0x00000000a09c0458,0x0000000d20dc041c\n"
".quad 0x00000009209c0418,0x10c101fc209c8618,0x0e0000fcb1dc2380,0x000002a000000719\n"
".quad 0x00000008019de460,0x000001e00001e728,0x00000008311d0340,0x00c00004415c0348\n"
".quad 0x8e000014b1dc2348,0x000000c00081e718,0x0000002840a00340,0x00000010b1210348\n"
".quad 0x00c0000431e00348,0x00c0000422a00348,0x00fffffc42e00348,0x0000006000a1e748\n"
".quad 0x0000002ca2800340,0x00000008b1c00348,0x000000fc02c1e448,0x0000002804dde428\n"
".quad 0x00c0047ca51c3328,0x01c0000534dc0370,0x00c00004a29c0348,0x00c0000421dc0348\n"
".quad 0x000000fd451c5348,0x01000055311c0348,0x0e00000c73dc2348,0x00000059415c431a\n"
".quad 0x00000000409c2548,0x8e0000fc21dc2384,0x000000000005e71a,0x000000000021e7b0\n"
".quad 0x00c0000c715c03b0,0x00c0004875dc2368,0x00c00008711c2358,0x00000015715c4358\n"
".quad 0x00c3fffc411c0340,0x00000015215e0468,0x00000011211e0418,0x104202fc411c8618\n"
".quad 0x00000010211e8480,0x0e00001021dc231c,0x000000400001e719,0x00000030131c8540\n"
".quad 0x00000280001de7c8,0x01c0000534dc0340,0x00c0000471dc0348,0x00c00004a29c0348\n"
".quad 0x000000fd451c4348,0x01000055311c0348,0x0e00000c71dc2348,0x00000059415c431a\n"
".quad 0x00000000409c2548,0x000000600001e784,0x8e0000fc21dc2340,0x000000000021e71a\n"
".quad 0x03fffce0001de7b0,0x8e0000fc21dc2340,0x00000000001de71a,0x03fff3000001e7b0\n"
".quad 0x00000030131c8540,0x00000060001de7c8,0x00000030131c8540,0x00000040119c85c0\n"
".quad 0x000000fc01dde4c0,0x8e400110a1dc2328,0x0000001872dd0319,0x000001a00081e748\n"
".quad 0x00c0004000e00340,0x00c0004000200358,0x00c00074f1a00360,0x00c0001431600358\n"
".quad 0x00c0004001200358,0x00c0007c30200358,0x1bc00020f0a00368,0x0000001900e06320\n"
".quad 0x000000004020a340,0x0000000ce0e04340,0x0000000050222348,0x0000001022e06540\n"
".quad 0x0000000020208594,0x0000002ca01d0394,0x00c00040c09c0348,0x00c00040c0dc0360\n"
".quad 0x00fffffc029c0358,0x00c0004025dc0348,0x00000000001de758,0x0000000d20dc04a8\n"
".quad 0x0000005d209c0418,0x124101fc209c8618,0x00c00004925c0380,0x01c00004f3dc0348\n"
".quad 0x8e00002481dc2348,0x000000fd041c431a,0x00000040109c8548,0x0000000c001de4c8\n"
".quad 0x03ffec200001e728,0x00000000001de740,0x0000000000000080,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x00000000180c0400\n"
".quad 0x0000100000000800,0x0000200000001800,0x0802040000002400,0x0000020000001000\n"
".quad 0x0000110008020400,0x0802040000000100,0x0000000000001200,0x00000d00080a0400\n"
".quad 0x2819030028002000,0xffffff000c170400,0x11f00000240005ff,0xffffff000c170400\n"
".quad 0x11f00000200004ff,0xffffff000c170400,0x21f00000180003ff,0xffffff000c170400\n"
".quad 0x21f00000100002ff,0xffffff000c170400,0x21f00000080001ff,0xffffff000c170400\n"
".quad 0x21f00000000000ff,0x2401b000080d0400,0x005de40000002000,0x001c042800440400\n"
".quad 0x009de42c00000094,0x00dc042800400020,0x001c032c00000084,0x209c037000c06000\n"
".quad 0x105d037000c06000,0x009c034800c00080,0x21dc232006000008,0x0021e7188e400100\n"
".quad 0x00dde28000000000,0x201ce31800000010,0x211ca35000c00010,0x015c4320078000c0\n"
".quad 0x219ca348004000d0,0x00dde420078000e0,0x411c852800400110,0x01dc438400000000\n"
".quad 0x30dc0348004000f0,0x209c034800c00004,0x601c857000c06000,0x30dc038400000000\n"
".quad 0x015de47000c06000,0x20dc032800400080,0x419ca3500000000c,0x409ce3200bc00020\n"
".quad 0x315c435000c00020,0x21dc435000c00020,0x309e034800400090,0x01dc23200dc00020\n"
".quad 0x419c23188e400110,0x70dd437000c0047c,0x0001e74800000014,0x435c038000000000\n"
".quad 0x011de448014000a0,0x125c852800400110,0x029de4c000000020,0x02dde428000000fc\n"
".quad 0x639c4328000000fc,0x421c0348004000b0,0xa1dc234800fffffc,0x91dc03198e0000fc\n"
".quad 0x00a1e719200000fc,0x91000340000000a0,0x0281e26800fc0000,0x02c1e41800000004\n"
".quad 0x41000328000000fc,0x4240436800c3fffc,0x011d036800c40000,0x0000074800000028\n"
".quad 0x415c236000000280,0x411c037000c0047c,0x515c434801000034,0x43dc254800000038\n"
".quad 0xf1dc238400000004,0x0001e7190ec00104,0xf1dc234000000120,0x0001e7190ec0010c\n"
".quad 0xf1dc234000000100,0x0001e7190ec0011c,0xf1dc2340000000e0,0x0001e7190ec00150\n"
".quad 0xf1dc2340000000c0,0x0001e7190ec001c4,0x001df440000000a0,0x03ddf24000000000\n"
".quad 0x03ddf21800000150,0x03ddf2180000011c,0x03ddf2180000010c,0x03ddf41800000104\n"
".quad 0xf1dc2328000000fc,0x000007190e0000fc,0x0001e76800001380,0x00000740000010a0\n"
".quad 0x911c037000001020,0x941c036000c00040,0x445c035800c00040,0x215c045800c00040\n"
".quad 0x211c041800000041,0x411c861800000045,0xf1dc238013c000fc,0x031de4190ec00104\n"
".quad 0x0000072800000024,0x0001e760000001a0,0xf1dc2340000000e0,0x0001e7190ec0010c\n"
".quad 0xf1dc2340000000c0,0x0001e7190ec0011c,0xf1dc2340000000a0,0x0001e7190ec00150\n"
".quad 0x001de74000000080,0x025df44000000080,0x025df42800000010,0x025df42800000014\n"
".quad 0x025df42800000018,0x025df4280000001c,0x91dc0328000000fc,0x0001e71a8e0000fc\n"
".quad 0xa1dc2340000001a0,0x131c85198e400110,0x0081e7c800000030,0x01200340000000e0\n"
".quad 0x0160036800c0007d,0x01a1e25800c00015,0x1120a31800020000,0x21a0654000000011\n"
".quad 0x5122239400000010,0x2120854000000010,0xa29c039400000000,0x02dde44800fffffc\n"
".quad 0x001de728000000fc,0x915c03a800000000,0xa11c045800c00040,0x215c041c00000024\n"
".quad 0x211c041800000015,0x411c861800000011,0xb1dc238010c101fc,0x000007190e0000fc\n"
".quad 0x0001e760000001e0,0x519d034000000180,0x61dc034800000010,0xb1dc234800c00004\n"
".quad 0x0001e7188e00001c,0x61dc0340000000a0,0xb19d034800000028,0x541c034800000018\n"
".quad 0x729c034800c00004,0x62dc134800c00004,0xa29c034800fffffc,0xb41c03480000002c\n"
".quad 0x02ddf44800000010,0xa29c0328000000fc,0x441c134800c00004,0x019d034800c00004\n"
".quad 0x0000074800000028,0x61dc236000000280,0x619c037000c0047c,0x71dc434801000034\n"
".quad 0x63dc254800000038,0xf1dc238400000004,0x0001e7190ec00104,0xf1dc234000000120\n"
".quad 0x0001e7190ec0010c,0xf1dc234000000100,0x0001e7190ec0011c,0xf1dc2340000000e0\n"
".quad 0x0001e7190ec00150,0xf1dc2340000000c0,0x0001e7190ec001c4,0x001df440000000a0\n"
".quad 0x03ddf24000000000,0x03ddf21800000150,0x03ddf2180000011c,0x03ddf2180000010c\n"
".quad 0x03ddf41800000104,0x03dc2328000000fc,0xf1dc231a0e000015,0x0005e71a8e0000fc\n"
".quad 0x0021e7b000000000,0x01dc03b000000000,0x045c236800c0000d,0x019c235800c00049\n"
".quad 0x11dc435800c00009,0x619c03400000001d,0x21de046800c3fffc,0x219e04180000001d\n"
".quad 0x619c861800000019,0x219e8480104202fc,0xf1dc231c00000018,0x0001e7190e000018\n"
".quad 0x131c854000000040,0x001de7c800000030,0xa29c0340000004a0,0x041c034800c00004\n"
".quad 0x0000074800c00005,0x019d0360000002a0,0x61dc234800000028,0x619c037000c0047c\n"
".quad 0x71dc434801000034,0x63dc254800000038,0xf1dc238400000004,0x0001e7190ec00104\n"
".quad 0xf1dc234000000120,0x0001e7190ec0010c,0xf1dc234000000100,0x0001e7190ec0011c\n"
".quad 0xf1dc2340000000e0,0x0001e7190ec00150,0xf1dc2340000000c0,0x0001e7190ec001c4\n"
".quad 0x001df440000000a0,0x03ddf24000000000,0x03ddf21800000150,0x03ddf2180000011c\n"
".quad 0x03ddf2180000010c,0x03ddf41800000104,0x01dc2328000000fc,0x0001e71a0e000015\n"
".quad 0xf1dc234000000060,0x0021e71a8e0000fc,0x001de7b000000000,0xf1dc234003fffac0\n"
".quad 0x001de71a8e0000fc,0x0001e7b000000000,0x131c854003ffefa0,0x001de7c800000030\n"
".quad 0x131c854000000060,0x111c85c000000030,0x041de4c000000040,0xa1dc2328000000fc\n"
".quad 0x02dd03198e400110,0x0081e74800000011,0x9160034000000140,0x9120036000c00040\n"
".quad 0x51a0035800c00040,0x4160035800c00040,0x41e0036800c0007c,0x6120a35800c00014\n"
".quad 0xb160434000000014,0x7122236800c20000,0x2160654000000010,0x2120859400000010\n"
".quad 0xa11d039400000000,0xc15c03480000002c,0xc41c036000c00040,0x429c035800c00040\n"
".quad 0x545c034800fffffc,0x001de75800c00040,0x215c04a800000000,0x211c041800000041\n"
".quad 0x411c861800000045,0x001c0380124101fc,0x209c034800fffffc,0x81dc234801c00020\n"
".quad 0x30dc431a8e000000,0x111c8548000000fc,0x025de4c800000040,0x0001e72800000014\n"
".quad 0x001de74003ffe740,0x0000008000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000010000000000,0x00000000180c0400\n"
".quad 0x0000100000000800,0x0000200000001800,0x0802040000002400,0x0000020000001000\n"
".quad 0x0000110008020400,0x0802040000000100,0x0000000000001200,0x00000c00080a0400\n"
".quad 0x2819030028002000,0xffffff000c170400,0x11f00000240005ff,0xffffff000c170400\n"
".quad 0x11f00000200004ff,0xffffff000c170400,0x21f00000180003ff,0xffffff000c170400\n"
".quad 0x21f00000100002ff,0xffffff000c170400,0x21f00000080001ff,0xffffff000c170400\n"
".quad 0x21f00000000000ff,0x2301a400080d0400,0x1007040000002000,0xffffff0000001200\n"
".quad 0xffffffffffffffff,0x00001100100704ff,0xffffffffffffff00,0x100704ffffffffff\n"
".quad 0xffffff0000001000,0xffffffffffffffff,0x00000f00081204ff,0x0811040000002000\n"
".quad 0x0000200000000f00,0x00000e0008120400,0x0811040000002000,0x0000200000000e00\n"
".quad 0x0000000600000000,0x0000178400000005,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000a800000000,0x000000a800000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x0000073900000f05,0x0000000000000000,0x0000000000000000,0x0000075c00000000\n"
".quad 0x0000075c00000000,0x0000000400000000,0x6000000000000000,0x00000e9500000e05\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000088000000000,0x0000088000000000\n"
".quad 0x0000000400000000,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_20$[774];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x6361622f656d6f68,0x65642f726f6c6568\n"
".quad 0x3831326564696369,0x2e332d616475632f,0x34366e65706f2f32,0x65622f2f62696c2f\n"
".quad 0x6f766e202f2f090a,0x2e332063636e6570,0x20746c6975622032,0x2d30313032206e6f\n"
".quad 0x090a0a33302d3131,0x656c62697369762e,0x5f20636e75662e20,0x725f74657330315a\n"
".quad 0x314b52746c757365,0x6572757478655434,0x5073736572646441,0x43686374614d3031\n"
".quad 0x6969696964726f6f,0x6d617261702e2820,0x5f5f203436752e20,0x6d72617061647563\n"
".quad 0x7330315a5f5f3166,0x6c757365725f7465,0x78655434314b5274,0x7264644165727574\n"
".quad 0x614d303150737365,0x64726f6f43686374,0x702e202c69696969,0x36752e206d617261\n"
".quad 0x616475635f5f2034,0x5f5f32666d726170,0x725f74657330315a,0x314b52746c757365\n"
".quad 0x6572757478655434,0x5073736572646441,0x43686374614d3031,0x6969696964726f6f\n"
".quad 0x6d617261702e202c,0x5f5f203233732e20,0x6d72617061647563,0x7330315a5f5f3366\n"
".quad 0x6c757365725f7465,0x78655434314b5274,0x7264644165727574,0x614d303150737365\n"
".quad 0x64726f6f43686374,0x702e202c69696969,0x33732e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f34666d726170,0x725f74657330315a,0x314b52746c757365,0x6572757478655434\n"
".quad 0x5073736572646441,0x43686374614d3031,0x6969696964726f6f,0x6d617261702e202c\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x7330315a5f5f3566,0x6c757365725f7465\n"
".quad 0x78655434314b5274,0x7264644165727574,0x614d303150737365,0x64726f6f43686374\n"
".quad 0x702e202c69696969,0x33732e206d617261,0x616475635f5f2032,0x5f5f36666d726170\n"
".quad 0x725f74657330315a,0x314b52746c757365,0x6572757478655434,0x5073736572646441\n"
".quad 0x43686374614d3031,0x6969696964726f6f,0x7369762e090a0a29,0x75662e20656c6269\n"
".quad 0x7261702e2820636e,0x203233732e206d61,0x6572616475635f5f,0x6567365a5f5f6674\n"
".quad 0x5f20296966655274,0x666552746567365a,0x617261702e282069,0x5f203233732e206d\n"
".quad 0x726170616475635f,0x67365a5f5f31666d,0x0a29696665527465,0x62697369762e090a\n"
".quad 0x636e75662e20656c,0x6d617261702e2820,0x5f5f203233732e20,0x6674657261647563\n"
".quad 0x29636372325a5f5f,0x20636372325a5f20,0x206d617261702e28,0x635f5f203233732e\n"
".quad 0x666d726170616475,0x636372325a5f5f31,0x2d2d2f2f090a0a29,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x6f43202f2f090a2d,0x20676e696c69706d\n"
".quad 0x706772656d6d756d,0x692e337070632e75,0x632f706d742f2820,0x6a75712e23494263\n"
".quad 0x2f2f090a29517952,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2f2f090a0a2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x202f2f090a2d2d2d,0x3a736e6f6974704f,0x2d2d2d2d2f2f090a,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x0a2d2d2d2d2d2d2d,0x72615420202f2f09,0x2c7874703a746567\n"
".quad 0x5f6d733a41534920,0x69646e45202c3032,0x6c7474696c3a6e61,0x746e696f50202c65\n"
".quad 0x3a657a6953207265,0x20202f2f090a3436,0x74704f2809334f2d,0x6f6974617a696d69\n"
".quad 0x296c6576656c206e,0x672d20202f2f090a,0x6775626544280930,0x0a296c6576656c20\n"
".quad 0x326d2d20202f2f09,0x74726f7065522809,0x726f736976646120,0x2f2f090a29736569\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x662e090a0a2d2d2d\n"
".quad 0x3c22093109656c69,0x2d646e616d6d6f63,0x090a223e656e696c,0x093209656c69662e\n"
".quad 0x6772656d6d756d22,0x66616475632e7570,0x0a227570672e3265,0x3309656c69662e09\n"
".quad 0x6e6f6d6d6f632209,0x662e090a2275632e,0x6d22093409656c69,0x75706772656d6d75\n"
".quad 0x69662e090a22682e,0x752f22093509656c,0x672f62696c2f7273,0x365f3638782f6363\n"
".quad 0x2d78756e696c2d34,0x2e342e342f756e67,0x64756c636e692f35,0x6665646474732f65\n"
".quad 0x69662e090a22682e,0x682f22093609656c,0x686361622f656d6f,0x6965642f726f6c65\n"
".quad 0x2f38313265646963,0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x697665642f747263,0x69746e75725f6563,0x2e090a22682e656d,0x22093709656c6966\n"
".quad 0x61622f656d6f682f,0x642f726f6c656863,0x3132656469636965,0x332d616475632f38\n"
".quad 0x2e2f6e69622f322e,0x64756c636e692f2e,0x645f74736f682f65,0x682e73656e696665\n"
".quad 0x656c69662e090a22,0x6d6f682f22093809,0x6c65686361622f65,0x69636965642f726f\n"
".quad 0x75632f3831326564,0x622f322e332d6164,0x6e692f2e2e2f6e69,0x75622f6564756c63\n"
".quad 0x79745f6e69746c69,0x090a22682e736570,0x093909656c69662e,0x622f656d6f682f22\n"
".quad 0x2f726f6c65686361,0x3265646963696564,0x2d616475632f3831,0x2f6e69622f322e33\n"
".quad 0x756c636e692f2e2e,0x63697665642f6564,0x2e73657079745f65,0x6c69662e090a2268\n"
".quad 0x682f220930310965,0x686361622f656d6f,0x6965642f726f6c65,0x2f38313265646963\n"
".quad 0x322e332d61647563,0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x745f726576697264\n"
".quad 0x0a22682e73657079,0x3109656c69662e09,0x656d6f682f220931,0x6f6c65686361622f\n"
".quad 0x6469636965642f72,0x6475632f38313265,0x69622f322e332d61,0x636e692f2e2e2f6e\n"
".quad 0x7275732f6564756c,0x7079745f65636166,0x2e090a22682e7365,0x09323109656c6966\n"
".quad 0x622f656d6f682f22,0x2f726f6c65686361,0x3265646963696564,0x2d616475632f3831\n"
".quad 0x2f6e69622f322e33,0x756c636e692f2e2e,0x75747865742f6564,0x73657079745f6572\n"
".quad 0x69662e090a22682e,0x2f2209333109656c,0x6361622f656d6f68,0x65642f726f6c6568\n"
".quad 0x3831326564696369,0x2e332d616475632f,0x2e2e2f6e69622f32,0x6564756c636e692f\n"
".quad 0x5f726f746365762f,0x22682e7365707974,0x09656c69662e090a,0x6d6f682f22093431\n"
".quad 0x6c65686361622f65,0x69636965642f726f,0x75632f3831326564,0x622f322e332d6164\n"
".quad 0x6e692f2e2e2f6e69,0x65642f6564756c63,0x75616c5f65636976,0x617261705f68636e\n"
".quad 0x682e73726574656d,0x656c69662e090a22,0x6f682f2209353109,0x65686361622f656d\n"
".quad 0x636965642f726f6c,0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962\n"
".quad 0x632f6564756c636e,0x61726f74732f7472,0x7373616c635f6567,0x69662e090a22682e\n"
".quad 0x2f2209363109656c,0x6c636e692f727375,0x737469622f656475,0x682e73657079742f\n"
".quad 0x656c69662e090a22,0x73752f2209373109,0x64756c636e692f72,0x682e656d69742f65\n"
".quad 0x656c69662e090a22,0x6d756d2209383109,0x6b5f75706772656d,0x75632e6c656e7265\n"
".quad 0x656c69662e090a22,0x6f682f2209393109,0x65686361622f656d,0x636965642f726f6c\n"
".quad 0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962,0x632f6564756c636e\n"
".quad 0x75665f6e6f6d6d6f,0x2e736e6f6974636e,0x6c69662e090a2268,0x682f220930320965\n"
".quad 0x686361622f656d6f,0x6965642f726f6c65,0x2f38313265646963,0x322e332d61647563\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x6e75665f6874616d,0x682e736e6f697463\n"
".quad 0x656c69662e090a22,0x6f682f2209313209,0x65686361622f656d,0x636965642f726f6c\n"
".quad 0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962,0x6d2f6564756c636e\n"
".quad 0x736e6f635f687461,0x22682e73746e6174,0x09656c69662e090a,0x6d6f682f22093232\n"
".quad 0x6c65686361622f65,0x69636965642f726f,0x75632f3831326564,0x622f322e332d6164\n"
".quad 0x6e692f2e2e2f6e69,0x65642f6564756c63,0x6e75665f65636976,0x682e736e6f697463\n"
".quad 0x656c69662e090a22,0x6f682f2209333209,0x65686361622f656d,0x636965642f726f6c\n"
".quad 0x632f383132656469,0x2f322e332d616475,0x692f2e2e2f6e6962,0x732f6564756c636e\n"
".quad 0x6f74615f31315f6d,0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x6d6f682f22093432,0x6c65686361622f65,0x69636965642f726f,0x75632f3831326564\n"
".quad 0x622f322e332d6164,0x6e692f2e2e2f6e69,0x6d732f6564756c63,0x6d6f74615f32315f\n"
".quad 0x74636e75665f6369,0x0a22682e736e6f69,0x3209656c69662e09,0x656d6f682f220935\n"
".quad 0x6f6c65686361622f,0x6469636965642f72,0x6475632f38313265,0x69622f322e332d61\n"
".quad 0x636e692f2e2e2f6e,0x5f6d732f6564756c,0x6c62756f645f3331,0x6974636e75665f65\n"
".quad 0x090a22682e736e6f,0x363209656c69662e,0x2f656d6f682f2209,0x726f6c6568636162\n"
".quad 0x656469636965642f,0x616475632f383132,0x6e69622f322e332d,0x6c636e692f2e2e2f\n"
".quad 0x325f6d732f656475,0x63696d6f74615f30,0x6f6974636e75665f,0x2e090a22682e736e\n"
".quad 0x09373209656c6966,0x622f656d6f682f22,0x2f726f6c65686361,0x3265646963696564\n"
".quad 0x2d616475632f3831,0x2f6e69622f322e33,0x756c636e692f2e2e,0x30325f6d732f6564\n"
".quad 0x736e6972746e695f,0x090a22682e736369,0x383209656c69662e,0x2f656d6f682f2209\n"
".quad 0x726f6c6568636162,0x656469636965642f,0x616475632f383132,0x6e69622f322e332d\n"
".quad 0x6c636e692f2e2e2f,0x667275732f656475,0x636e75665f656361,0x22682e736e6f6974\n"
".quad 0x09656c69662e090a,0x6d6f682f22093932,0x6c65686361622f65,0x69636965642f726f\n"
".quad 0x75632f3831326564,0x622f322e332d6164,0x6e692f2e2e2f6e69,0x65742f6564756c63\n"
".quad 0x65665f6572757478,0x636e75665f686374,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x6d6f682f22093033,0x6c65686361622f65,0x69636965642f726f,0x75632f3831326564\n"
".quad 0x622f322e332d6164,0x6e692f2e2e2f6e69,0x616d2f6564756c63,0x74636e75665f6874\n"
".quad 0x6c62645f736e6f69,0x22682e337874705f,0x7369762e090a0a0a,0x75662e20656c6269\n"
".quad 0x7330315a5f20636e,0x6c757365725f7465,0x78655434314b5274,0x7264644165727574\n"
".quad 0x614d303150737365,0x64726f6f43686374,0x702e282069696969,0x36752e206d617261\n"
".quad 0x616475635f5f2034,0x5f5f31666d726170,0x725f74657330315a,0x314b52746c757365\n"
".quad 0x6572757478655434,0x5073736572646441,0x43686374614d3031,0x6969696964726f6f\n"
".quad 0x6d617261702e202c,0x5f5f203436752e20,0x6d72617061647563,0x7330315a5f5f3266\n"
".quad 0x6c757365725f7465,0x78655434314b5274,0x7264644165727574,0x614d303150737365\n"
".quad 0x64726f6f43686374,0x702e202c69696969,0x33732e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f33666d726170,0x725f74657330315a,0x314b52746c757365,0x6572757478655434\n"
".quad 0x5073736572646441,0x43686374614d3031,0x6969696964726f6f,0x6d617261702e202c\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x7330315a5f5f3466,0x6c757365725f7465\n"
".quad 0x78655434314b5274,0x7264644165727574,0x614d303150737365,0x64726f6f43686374\n"
".quad 0x702e202c69696969,0x33732e206d617261,0x616475635f5f2032,0x5f5f35666d726170\n"
".quad 0x725f74657330315a,0x314b52746c757365,0x6572757478655434,0x5073736572646441\n"
".quad 0x43686374614d3031,0x6969696964726f6f,0x6d617261702e202c,0x5f5f203233732e20\n"
".quad 0x6d72617061647563,0x7330315a5f5f3666,0x6c757365725f7465,0x78655434314b5274\n"
".quad 0x7264644165727574,0x614d303150737365,0x64726f6f43686374,0x7b090a2969696969\n"
".quad 0x2e206765722e090a,0x313c722520323375,0x65722e090a3b3e38,0x25203436752e2067\n"
".quad 0x090a3b3e363c6472,0x72702e206765722e,0x3e333c7025206465,0x09636f6c2e090a3b\n"
".quad 0x0a30093732093831,0x6967656257444c24,0x657330315a5f5f6e,0x746c757365725f74\n"
".quad 0x7478655434314b52,0x6572646441657275,0x74614d3031507373,0x6964726f6f436863\n"
".quad 0x646c090a3a696969,0x752e6d617261702e,0x3164722509203436,0x6475635f5f5b202c\n"
".quad 0x5f31666d72617061,0x5f74657330315a5f,0x4b52746c75736572,0x7275747865543431\n"
".quad 0x7373657264644165,0x686374614d303150,0x69696964726f6f43,0x766f6d090a3b5d69\n"
".quad 0x722509203436732e,0x31647225202c3264,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x5b202c3364722509,0x6170616475635f5f,0x315a5f5f32666d72,0x7365725f74657330\n"
".quad 0x5434314b52746c75,0x6441657275747865,0x3031507373657264,0x6f6f43686374614d\n"
".quad 0x3b5d696969696472,0x36732e766f6d090a,0x2c34647225092034,0x090a3b3364722520\n"
".quad 0x6d617261702e646c,0x722509203233752e,0x75635f5f5b202c31,0x33666d7261706164\n"
".quad 0x74657330315a5f5f,0x52746c757365725f,0x757478655434314b,0x7365726464416572\n"
".quad 0x6374614d30315073,0x696964726f6f4368,0x6f6d090a3b5d6969,0x2509203233732e76\n"
".quad 0x3b317225202c3272,0x7261702e646c090a,0x09203233752e6d61,0x5f5f5b202c337225\n"
".quad 0x6d72617061647563,0x7330315a5f5f3466,0x6c757365725f7465,0x78655434314b5274\n"
".quad 0x7264644165727574,0x614d303150737365,0x64726f6f43686374,0x090a3b5d69696969\n"
".quad 0x203233732e766f6d,0x7225202c34722509,0x702e646c090a3b33,0x3233752e6d617261\n"
".quad 0x5b202c3572250920,0x6170616475635f5f,0x315a5f5f35666d72,0x7365725f74657330\n"
".quad 0x5434314b52746c75,0x6441657275747865,0x3031507373657264,0x6f6f43686374614d\n"
".quad 0x3b5d696969696472,0x33732e766f6d090a,0x202c367225092032,0x646c090a3b357225\n"
".quad 0x752e6d617261702e,0x2c37722509203233,0x616475635f5f5b20,0x5f5f36666d726170\n"
".quad 0x725f74657330315a,0x314b52746c757365,0x6572757478655434,0x5073736572646441\n"
".quad 0x43686374614d3031,0x6969696964726f6f,0x2e766f6d090a3b5d,0x3872250920323373\n"
".quad 0x090a3b377225202c,0x2e656c2e70746573,0x3170250920323373,0x25202c347225202c\n"
".quad 0x702540090a3b3672,0x2409206172622031,0x3230315f305f744c,0x636f6c2e090a3b36\n"
".quad 0x3009353309383109,0x3233622e726f090a,0x25202c3272250920,0x3b387225202c3272\n"
".quad 0x2e32762e646c090a,0x72257b0920363175,0x2c7d303172252c39,0x302b326472255b20\n"
".quad 0x636f6c2e090a3b5d,0x3009363309383109,0x33622e646e61090a,0x2c31317225092032\n"
".quad 0x33202c3031722520,0x2e6c6873090a3b31,0x3172250920323362,0x202c397225202c32\n"
".quad 0x2e646461090a3b35,0x3172250920323373,0x2c31317225202c33,0x090a3b3231722520\n"
".quad 0x203233752e726873,0x25202c3431722509,0x0a3b35202c303172,0x3233622e6c687309\n"
".quad 0x202c353172250920,0x3731202c34317225,0x732e646461090a3b,0x3631722509203233\n"
".quad 0x202c33317225202c,0x73090a3b35317225,0x5b09203233752e74,0x2c5d302b34647225\n"
".quad 0x090a3b3631722520,0x09383109636f6c2e,0x7473090a30093733,0x255b09203631732e\n"
".quad 0x202c5d342b346472,0x744c240a3b327225,0x3a363230315f305f,0x3109636f6c2e090a\n"
".quad 0x090a300939330938,0x444c240a3b746572,0x315a5f5f646e6557,0x7365725f74657330\n"
".quad 0x5434314b52746c75,0x6441657275747865,0x3031507373657264,0x6f6f43686374614d\n"
".quad 0x0a3a696969696472,0x5a5f202f2f207d09,0x65725f7465733031,0x34314b52746c7573\n"
".quad 0x4165727574786554,0x3150737365726464,0x6f43686374614d30,0x0a6969696964726f\n"
".quad 0x6c61626f6c672e09,0x6665727865742e20,0x3b78657466657220,0x697369762e090a0a\n"
".quad 0x6e75662e20656c62,0x617261702e282063,0x5f203233732e206d,0x746572616475635f\n"
".quad 0x746567365a5f5f66,0x5a5f202969666552,0x6966655274656736,0x6d617261702e2820\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x6567365a5f5f3166,0x090a296966655274\n"
".quad 0x206765722e090a7b,0x3c7225203233752e,0x722e090a3b3e3631,0x203233662e206765\n"
".quad 0x0a3b3e30313c6625,0x383109636f6c2e09,0x4c240a3009323409,0x5f6e696765625744\n"
".quad 0x6552746567365a5f,0x2e646c090a3a6966,0x33752e6d61726170,0x202c317225092032\n"
".quad 0x70616475635f5f5b,0x5a5f5f31666d7261,0x6966655274656736,0x2e766f6d090a3b5d\n"
".quad 0x3272250920323373,0x090a3b317225202c,0x203233732e726873,0x7225202c33722509\n"
".quad 0x61090a3b32202c32,0x09203233622e646e,0x337225202c347225,0x3b3533353536202c\n"
".quad 0x6e722e747663090a,0x3233732e3233662e,0x25202c3166250920,0x766f6d090a3b3472\n"
".quad 0x662509203233662e,0x0a3b316625202c32,0x3233622e646e6109,0x25202c3572250920\n"
".quad 0x090a3b33202c3272,0x203233732e726873,0x7225202c36722509,0x090a3b3831202c32\n"
".quad 0x203233622e6c6873,0x7225202c37722509,0x61090a3b32202c36,0x09203233732e6464\n"
".quad 0x357225202c387225,0x090a3b377225202c,0x662e6e722e747663,0x09203233732e3233\n"
".quad 0x387225202c336625,0x662e766f6d090a3b,0x2c34662509203233,0x6d090a3b33662520\n"
".quad 0x09203233662e766f,0x306630202c356625,0x3b30303030303030,0x2f2f092020202020\n"
".quad 0x2e766f6d090a3020,0x3666250920323366,0x090a3b356625202c,0x203233662e766f6d\n"
".quad 0x6630202c37662509,0x3030303030303030,0x2f0920202020203b,0x766f6d090a30202f\n"
".quad 0x662509203233662e,0x0a3b376625202c38,0x2e64322e78657409,0x662e3233752e3476\n"
".quad 0x2c3972257b203233,0x3172252c30317225,0x2c7d323172252c31,0x2c7865746665725b\n"
".quad 0x3466252c3266257b,0x3866252c3666252c,0x6f6c2e090a3b5d7d,0x0937340938310963\n"
".quad 0x732e766f6d090a30,0x3331722509203233,0x090a3b397225202c,0x732e38732e747663\n"
".quad 0x3431722509203233,0x0a3b33317225202c,0x617261702e747309,0x5b09203233732e6d\n"
".quad 0x6572616475635f5f,0x6567365a5f5f6674,0x202c5d6966655274,0x72090a3b34317225\n"
".quad 0x57444c240a3b7465,0x67365a5f5f646e65,0x0a3a696665527465,0x5a5f202f2f207d09\n"
".quad 0x6966655274656736,0x697369762e090a0a,0x6e75662e20656c62,0x617261702e282063\n"
".quad 0x5f203233732e206d,0x746572616475635f,0x636372325a5f5f66,0x636372325a5f2029\n"
".quad 0x6d617261702e2820,0x5f5f203233732e20,0x6d72617061647563,0x6372325a5f5f3166\n"
".quad 0x2e090a7b090a2963,0x3233752e20676572,0x3b3e31313c722520,0x2e206765722e090a\n"
".quad 0x3c70252064657270,0x6f6c2e090a3b3e37,0x0931350938310963,0x656257444c240a30\n"
".quad 0x72325a5f5f6e6967,0x2e646c090a3a6363,0x33752e6d61726170,0x202c317225092032\n"
".quad 0x70616475635f5f5b,0x5a5f5f31666d7261,0x090a3b5d63637232,0x732e38732e747663\n"
".quad 0x2c32722509203233,0x2e090a3b31722520,0x3509383109636f6c,0x766f6d090a300932\n"
".quad 0x722509203233752e,0x090a3b3536202c33,0x2e71652e70746573,0x3170250920323373\n"
".quad 0x25202c327225202c,0x702540090a3b3372,0x2409206172622031,0x3835325f325f744c\n"
".quad 0x752e766f6d090a3b,0x2c34722509203233,0x6573090a3b373620,0x33732e71652e7074\n"
".quad 0x202c327025092032,0x347225202c327225,0x2032702540090a3b,0x744c240920617262\n"
".quad 0x0a3b3431355f325f,0x3233752e766f6d09,0x37202c3572250920,0x70746573090a3b31\n"
".quad 0x203233732e71652e,0x7225202c33702509,0x0a3b357225202c32,0x7262203370254009\n"
".quad 0x325f744c24092061,0x6d090a3b3037375f,0x09203233752e766f,0x3b3438202c367225\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x2c327225202c3470,0x40090a3b36722520\n"
".quad 0x2061726220347025,0x315f325f744c2409,0x6f6d090a3b363230,0x2509203233752e76\n"
".quad 0x3b333131202c3772,0x652e70746573090a,0x2509203233732e71,0x2c327225202c3570\n"
".quad 0x40090a3b37722520,0x2061726220357025,0x315f325f744c2409,0x7262090a3b323832\n"
".quad 0x240920696e752e61,0x3335315f325f744c,0x325f744c240a3b38,0x2e090a3a3835325f\n"
".quad 0x3509383109636f6c,0x766f6d090a300934,0x722509203233732e,0x090a3b3438202c38\n"
".quad 0x20696e752e617262,0x5f333142424c2409,0x0a3b636372325a5f,0x31355f325f744c24\n"
".quad 0x636f6c2e090a3a34,0x3009353509383109,0x33732e766f6d090a,0x202c387225092032\n"
".quad 0x617262090a3b3137,0x4c240920696e752e,0x325a5f5f33314242,0x744c240a3b636372\n"
".quad 0x0a3a3037375f325f,0x383109636f6c2e09,0x6d090a3009363509,0x09203233732e766f\n"
".quad 0x3b3736202c387225,0x6e752e617262090a,0x3142424c24092069,0x636372325a5f5f33\n"
".quad 0x5f325f744c240a3b,0x2e090a3a36323031,0x3509383109636f6c,0x766f6d090a300937\n"
".quad 0x722509203233732e,0x090a3b3536202c38,0x20696e752e617262,0x5f333142424c2409\n"
".quad 0x0a3b636372325a5f,0x32315f325f744c24,0x6f6c2e090a3a3238,0x0938350938310963\n"
".quad 0x732e766f6d090a30,0x2c38722509203233,0x617262090a3b3020,0x4c240920696e752e\n"
".quad 0x325a5f5f33314242,0x744c240a3b636372,0x3a383335315f325f,0x3109636f6c2e090a\n"
".quad 0x090a300939350938,0x203233732e766f6d,0x7225202c38722509,0x3142424c240a3b32\n"
".quad 0x636372325a5f5f33,0x732e766f6d090a3a,0x2c39722509203233,0x73090a3b38722520\n"
".quad 0x2e6d617261702e74,0x5f5f5b0920323373,0x6674657261647563,0x5d636372325a5f5f\n"
".quad 0x090a3b397225202c,0x444c240a3b746572,0x325a5f5f646e6557,0x207d090a3a636372\n"
".quad 0x6372325a5f202f2f,0x626f6c672e090a63,0x727865742e206c61,0x7465646f6e206665\n"
".quad 0x6c672e090a3b7865,0x65742e206c61626f,0x6968632066657278,0x7865746e6572646c\n"
".quad 0x746e652e090a0a3b,0x6d35315a5f207972,0x75706772656d6d75,0x31506c656e72654b\n"
".quad 0x6f43686374614d30,0x694b50635064726f,0x0a282069695f3353,0x6d617261702e0909\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x6d756d35315a5f5f,0x654b75706772656d\n"
".quad 0x4d3031506c656e72,0x726f6f4368637461,0x3353694b50635064,0x6374616d5f69695f\n"
".quad 0x7364726f6f635f68,0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x6d35315a5f5f6d72,0x75706772656d6d75,0x31506c656e72654b,0x6f43686374614d30\n"
".quad 0x694b50635064726f,0x5f5f5f69695f3353,0x617261705f6c6176,0x736569726575716d\n"
".quad 0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f,0x6d35315a5f5f6d72\n"
".quad 0x75706772656d6d75,0x31506c656e72654b,0x6f43686374614d30,0x694b50635064726f\n"
".quad 0x75715f69695f3353,0x7372646441797265,0x7261702e09090a2c,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x6d35315a5f5f6d72,0x75706772656d6d75,0x31506c656e72654b\n"
".quad 0x6f43686374614d30,0x694b50635064726f,0x75715f69695f3353,0x74676e654c797265\n"
".quad 0x702e09090a2c7368,0x33732e206d617261,0x616475635f5f2032,0x315a5f5f6d726170\n"
".quad 0x6772656d6d756d35,0x6c656e72654b7570,0x686374614d303150,0x50635064726f6f43\n"
".quad 0x5f69695f3353694b,0x69726575516d756e,0x702e09090a2c7365,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x6772656d6d756d35,0x6c656e72654b7570\n"
".quad 0x686374614d303150,0x50635064726f6f43,0x5f69695f3353694b,0x6374616d5f6e696d\n"
".quad 0x090a296e656c5f68,0x206765722e090a7b,0x3c7225203233752e,0x2e090a3b3e343131\n"
".quad 0x3436752e20676572,0x3e37323c64722520,0x206765722e090a3b,0x3c6625203233662e\n"
".quad 0x722e090a3b3e3433,0x646572702e206765,0x3b3e33323c702520,0x6c61636f6c2e090a\n"
".quad 0x206e67696c612e20,0x5f5f2038622e2034,0x636f6c5f61647563,0x335f7261765f6c61\n"
".quad 0x5f32325f30333432,0x736e6f635f6e6f6e,0x315f766572705f74,0x2e090a3b5d345b36\n"
".quad 0x612e206c61636f6c,0x203631206e67696c,0x75635f5f2038622e,0x6c61636f6c5f6164\n"
".quad 0x3432335f7261765f,0x6f6e5f36315f3932,0x5f74736e6f635f6e,0x5b32335f65646f6e\n"
".quad 0x6c2e090a3b5d3631,0x333709383109636f,0x6257444c240a3009,0x315a5f5f6e696765\n"
".quad 0x6772656d6d756d35,0x6c656e72654b7570,0x686374614d303150,0x50635064726f6f43\n"
".quad 0x3a69695f3353694b,0x33752e766f6d090a,0x202c317225092032,0x782e646961746325\n"
".quad 0x752e766f6d090a3b,0x2c32722509203233,0x782e6469746e2520,0x34326c756d090a3b\n"
".quad 0x203233752e6f6c2e,0x7225202c33722509,0x0a3b327225202c31,0x3233752e766f6d09\n"
".quad 0x25202c3472250920,0x090a3b782e646974,0x203233752e646461,0x7225202c35722509\n"
".quad 0x0a3b337225202c34,0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3672\n"
".quad 0x5f6d726170616475,0x6d6d756d35315a5f,0x72654b7570677265,0x614d3031506c656e\n"
".quad 0x64726f6f43686374,0x5f3353694b506350,0x75516d756e5f6969,0x0a3b5d7365697265\n"
".quad 0x74672e7074657309,0x702509203233732e,0x202c367225202c31,0x2540090a3b357225\n"
".quad 0x0920617262203170,0x34335f335f744c24,0x7262090a3b323635,0x240920696e752e61\n"
".quad 0x5a5f5f303542424c,0x72656d6d756d3531,0x656e72654b757067,0x6374614d3031506c\n"
".quad 0x635064726f6f4368,0x69695f3353694b50,0x5f335f744c240a3b,0x090a3a3236353433\n"
".quad 0x09383109636f6c2e,0x7663090a30093937,0x33732e3436732e74,0x2c31647225092032\n"
".quad 0x6d090a3b35722520,0x2e656469772e6c75,0x6472250920323373,0x202c357225202c32\n"
".quad 0x702e646c090a3b34,0x3436752e6d617261,0x202c336472250920,0x70616475635f5f5b\n"
".quad 0x35315a5f5f6d7261,0x706772656d6d756d,0x506c656e72654b75,0x43686374614d3031\n"
".quad 0x4b50635064726f6f,0x715f69695f335369,0x676e654c79726575,0x61090a3b5d736874\n"
".quad 0x09203436752e6464,0x7225202c34647225,0x32647225202c3364,0x6c672e646c090a3b\n"
".quad 0x3233732e6c61626f,0x5b202c3772250920,0x3b5d302b34647225,0x3109636f6c2e090a\n"
".quad 0x090a300933380938,0x203233752e766f6d,0x3b30202c38722509,0x3109636f6c2e090a\n"
".quad 0x090a300938380938,0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3564\n"
".quad 0x5f6d726170616475,0x6d6d756d35315a5f,0x72654b7570677265,0x614d3031506c656e\n"
".quad 0x64726f6f43686374,0x5f3353694b506350,0x79726575715f6969,0x0a3b5d7372646441\n"
".quad 0x3436752e64646109,0x202c366472250920,0x7225202c35647225,0x2e646c090a3b3264\n"
".quad 0x732e6c61626f6c67,0x2c39722509203233,0x302b366472255b20,0x636f6c2e090a3b5d\n"
".quad 0x3009393809383109,0x36732e747663090a,0x2509203233732e34,0x397225202c376472\n"
".quad 0x61702e646c090a3b,0x203233732e6d6172,0x5b202c3031722509,0x6170616475635f5f\n"
".quad 0x6d35315a5f5f6d72,0x75706772656d6d75,0x31506c656e72654b,0x6f43686374614d30\n"
".quad 0x694b50635064726f,0x696d5f69695f3353,0x5f686374616d5f6e,0x6c090a3b5d6e656c\n"
".quad 0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c38,0x5f5f6d7261706164\n"
".quad 0x656d6d756d35315a,0x6e72654b75706772,0x74614d3031506c65,0x5064726f6f436863\n"
".quad 0x695f3353694b5063,0x5f686374616d5f69,0x3b5d7364726f6f63,0x69772e6c756d090a\n"
".quad 0x09203233732e6564,0x7225202c39647225,0x61090a3b38202c39,0x09203436752e6464\n"
".quad 0x25202c3031647225,0x647225202c386472,0x2e646461090a3b39,0x3172250920323375\n"
".quad 0x2c30317225202c31,0x6c756d090a3b3120,0x33752e6f6c2e3432,0x2c32317225092032\n"
".quad 0x7225202c35722520,0x747663090a3b3131,0x3233752e3436752e,0x2c31316472250920\n"
".quad 0x090a3b3231722520,0x656469772e6c756d,0x722509203233752e,0x317225202c323164\n"
".quad 0x73090a3b38202c32,0x09203436752e6275,0x25202c3331647225,0x7225202c30316472\n"
".quad 0x7573090a3b323164,0x2509203233732e62,0x377225202c333172,0x0a3b30317225202c\n"
".quad 0x3233752e766f6d09,0x202c343172250920,0x70746573090a3b30,0x203233732e746c2e\n"
".quad 0x7225202c32702509,0x34317225202c3331,0x2032702540090a3b,0x424c240920617262\n"
".quad 0x35315a5f5f303542,0x706772656d6d756d,0x506c656e72654b75,0x43686374614d3031\n"
".quad 0x4b50635064726f6f,0x0a3b69695f335369,0x3233732e64646109,0x202c353172250920\n"
".quad 0x3b31202c33317225,0x33732e766f6d090a,0x2c36317225092032,0x090a3b3531722520\n"
".quad 0x203436752e766f6d,0x202c343164722509,0x702e646c090a3b30,0x3436752e6d617261\n"
".quad 0x2c35316472250920,0x616475635f5f5b20,0x315a5f5f6d726170,0x6772656d6d756d35\n"
".quad 0x6c656e72654b7570,0x686374614d303150,0x50635064726f6f43,0x5f69695f3353694b\n"
".quad 0x61705f6c61765f5f,0x69726575716d6172,0x6461090a3b5d7365,0x2509203436732e64\n"
".quad 0x7225202c36316472,0x31647225202c3764,0x2e766f6d090a3b35,0x3172250920323373\n"
".quad 0x6d090a3b30202c37,0x09203233732e766f,0x3b30202c38317225,0x33732e766f6d090a\n"
".quad 0x2c39317225092032,0x766f6d090a3b3020,0x722509203233732e,0x36317225202c3032\n"
".quad 0x5f335f744c240a3b,0x200a3a3638353533,0x3e706f6f6c3c2f2f,0x6f6220706f6f4c20\n"
".quad 0x20656e696c207964,0x7473656e202c3938,0x7470656420676e69,0x7365202c31203a68\n"
".quad 0x20646574616d6974,0x6f69746172657469,0x6e6b6e75203a736e,0x766f6d090a6e776f\n"
".quad 0x722509203233732e,0x090a3b30202c3132,0x752e656c2e746573,0x09203233732e3233\n"
".quad 0x7225202c32327225,0x31327225202c3831,0x732e67656e090a3b,0x3332722509203233\n"
".quad 0x0a3b32327225202c,0x3233752e766f6d09,0x202c343272250920,0x2e746573090a3b30\n"
".quad 0x752e3233752e7165,0x3532722509203233,0x25202c387225202c,0x656e090a3b343272\n"
".quad 0x2509203233732e67,0x327225202c363272,0x622e726f090a3b35,0x3732722509203233\n"
".quad 0x202c33327225202c,0x6d090a3b36327225,0x09203233752e766f,0x3b30202c38327225\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x37327225202c3370,0x0a3b38327225202c\n"
".quad 0x7262203370254009,0x335f744c24092061,0x0a3b32343835335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c393820\n"
".quad 0x656c6562616c2064,0x5f335f744c242064,0x2e090a3638353533,0x3109383109636f6c\n"
".quad 0x6f6d090a30093630,0x2509203233752e76,0x0a3b30202c393272,0x3233622e646e6109\n"
".quad 0x202c303372250920,0x35362d202c387225,0x726f090a3b363335,0x722509203233622e\n"
".quad 0x30337225202c3133,0x6f6d090a3b30202c,0x2509203233752e76,0x0a3b31202c323372\n"
".quad 0x3233622e646e6109,0x202c333372250920,0x3536202c31337225,0x726f090a3b353335\n"
".quad 0x722509203233622e,0x2c33337225202c38,0x0a3b363335353620,0x3233732e766f6d09\n"
".quad 0x202c383172250920,0x2e766f6d090a3b31,0x3172250920323373,0x4c240a3b30202c39\n"
".quad 0x343835335f335f74,0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c393820656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36383535335f335f,0x3109636f6c2e090a,0x0a30093131310938,0x3436732e74766309\n"
".quad 0x722509203233732e,0x317225202c373164,0x2e646461090a3b38,0x6472250920343673\n"
".quad 0x31647225202c3831,0x3431647225202c36,0x732e646461090a3b,0x3164722509203436\n"
".quad 0x3731647225202c39,0x3b3831647225202c,0x6f6c672e646c090a,0x092038732e6c6162\n"
".quad 0x255b202c34337225,0x3b5d302b39316472,0x33752e766f6d090a,0x2c35337225092032\n"
".quad 0x746573090a3b3020,0x3233732e71652e70,0x25202c3470250920,0x337225202c343372\n"
".quad 0x34702540090a3b35,0x4c24092061726220,0x363930345f335f74,0x335f744c240a3b32\n"
".quad 0x0a3a36363836335f,0x706f6f6c3c2f2f20,0x6220706f6f4c203e,0x656e696c2079646f\n"
".quad 0x6f6d090a31313120,0x2509203233752e76,0x387225202c363372,0x752e726873090a3b\n"
".quad 0x3733722509203233,0x202c36337225202c,0x6c6873090a3b3631,0x722509203233622e\n"
".quad 0x2c387225202c3833,0x6873090a3b363120,0x2509203233752e72,0x337225202c393372\n"
".quad 0x090a3b3631202c38,0x662e6e722e747663,0x09203233752e3233,0x337225202c316625\n"
".quad 0x2e766f6d090a3b39,0x3266250920323366,0x090a3b316625202c,0x662e6e722e747663\n"
".quad 0x09203233752e3233,0x337225202c336625,0x2e766f6d090a3b37,0x3466250920323366\n"
".quad 0x090a3b336625202c,0x203233662e766f6d,0x6630202c35662509,0x3030303030303030\n"
".quad 0x2f0920202020203b,0x766f6d090a30202f,0x662509203233662e,0x0a3b356625202c36\n"
".quad 0x3233662e766f6d09,0x30202c3766250920,0x3030303030303066,0x0920202020203b30\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x3b376625202c3866,0x64322e786574090a\n"
".quad 0x2e3233752e34762e,0x3472257b20323366,0x252c313472252c30,0x333472252c323472\n"
".quad 0x646c6968635b2c7d,0x7b2c7865746e6572,0x2c3466252c326625,0x7d3866252c366625\n"
".quad 0x6c3c2f2f200a3b5d,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c31313120656e69,0x616c206461656820,0x4c242064656c6562,0x363836335f335f74\n"
".quad 0x09636f6c2e090a36,0x3009313231093831,0x33732e766f6d090a,0x2c34347225092032\n"
".quad 0x090a3b3034722520,0x203233732e766f6d,0x25202c3534722509,0x6f6d090a3b313472\n"
".quad 0x2509203233732e76,0x347225202c363472,0x2e766f6d090a3b32,0x3472250920323373\n"
".quad 0x3b33347225202c37,0x3109636f6c2e090a,0x0a30093232310938,0x3233732e766f6d09\n"
".quad 0x202c383472250920,0x6c2e090a3b387225,0x323109383109636f,0x766f6d090a300934\n"
".quad 0x722509203233752e,0x0a3b3536202c3934,0x71652e7074657309,0x702509203233732e\n"
".quad 0x2c34337225202c35,0x090a3b3934722520,0x6172622035702540,0x5f335f744c240920\n"
".quad 0x2f2f200a3b383532,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x313120656e696c20,0x2064616568202c31,0x2064656c6562616c,0x36335f335f744c24\n"
".quad 0x766f6d090a363638,0x722509203233752e,0x0a3b3736202c3035,0x71652e7074657309\n"
".quad 0x702509203233732e,0x2c34337225202c36,0x090a3b3035722520,0x6172622036702540\n"
".quad 0x5f335f744c240920,0x2f2f200a3b303737,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x313120656e696c20,0x2064616568202c31,0x2064656c6562616c\n"
".quad 0x36335f335f744c24,0x766f6d090a363638,0x722509203233752e,0x0a3b3137202c3135\n"
".quad 0x71652e7074657309,0x702509203233732e,0x2c34337225202c37,0x090a3b3135722520\n"
".quad 0x6172622037702540,0x5f335f744c240920,0x2f200a3b36323031,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3131\n"
".quad 0x64656c6562616c20,0x335f335f744c2420,0x6f6d090a36363836,0x2509203233752e76\n"
".quad 0x3b3438202c323572,0x652e70746573090a,0x2509203233732e71,0x34337225202c3870\n"
".quad 0x0a3b32357225202c,0x7262203870254009,0x335f744c24092061,0x200a3b323832315f\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313131,0x656c6562616c2064,0x5f335f744c242064,0x62090a3636383633\n"
".quad 0x0920696e752e6172,0x35315f335f744c24,0x5f744c240a3b3833,0x200a3a3835325f33\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313131,0x656c6562616c2064,0x5f335f744c242064,0x2e090a3636383633\n"
".quad 0x3109383109636f6c,0x6f6d090a30093632,0x2509203233732e76,0x34347225202c3872\n"
".quad 0x752e617262090a3b,0x5f744c240920696e,0x240a3b3431355f33,0x3037375f335f744c\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c31313120656e,0x62616c2064616568,0x744c242064656c65,0x36363836335f335f\n"
".quad 0x3109636f6c2e090a,0x0a30093732310938,0x3233732e766f6d09,0x25202c3872250920\n"
".quad 0x7262090a3b353472,0x240920696e752e61,0x3431355f335f744c,0x5f335f744c240a3b\n"
".quad 0x2f200a3a36323031,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3131,0x64656c6562616c20,0x335f335f744c2420\n"
".quad 0x6c2e090a36363836,0x323109383109636f,0x766f6d090a300938,0x722509203233732e\n"
".quad 0x3b36347225202c38,0x6e752e617262090a,0x335f744c24092069,0x4c240a3b3431355f\n"
".quad 0x323832315f335f74,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c31313120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36363836335f335f,0x3109636f6c2e090a,0x0a30093932310938,0x3233732e766f6d09\n"
".quad 0x25202c3872250920,0x7262090a3b373472,0x240920696e752e61,0x3431355f335f744c\n"
".quad 0x5f335f744c240a3b,0x2f200a3a38333531,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3131,0x64656c6562616c20\n"
".quad 0x335f335f744c2420,0x6c2e090a36363836,0x333109383109636f,0x766f6d090a300930\n"
".quad 0x722509203233752e,0x4c240a3b30202c38,0x3a3431355f335f74,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3131312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a36363836335f33,0x383109636f6c2e09\n"
".quad 0x090a300931333109,0x203233752e766f6d,0x30202c3335722509,0x2e70746573090a3b\n"
".quad 0x09203233752e656e,0x387225202c397025,0x0a3b33357225202c,0x7262203970254009\n"
".quad 0x335f744c24092061,0x0a3b32323137335f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c393820,0x656c6562616c2064\n"
".quad 0x5f335f744c242064,0x2e090a3638353533,0x3109383109636f6c,0x7473090a30093933\n"
".quad 0x752e6c61636f6c2e,0x635f5f5b09203233,0x61636f6c5f616475,0x32335f7261765f6c\n"
".quad 0x6e5f32325f303334,0x74736e6f635f6e6f,0x36315f766572705f,0x347225202c5d302b\n"
".quad 0x2e766f6d090a3b38,0x3572250920323373,0x3b39337225202c34,0x33732e766f6d090a\n"
".quad 0x2c35357225092032,0x090a3b3733722520,0x2e65672e70746573,0x3170250920323373\n"
".quad 0x2c30317225202c30,0x090a3b3831722520,0x7262203031702540,0x335f744c24092061\n"
".quad 0x0a3b34333637335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c393820,0x656c6562616c2064,0x5f335f744c242064\n"
".quad 0x2e090a3638353533,0x3309383109636f6c,0x6c756d090a300936,0x203436752e6f6c2e\n"
".quad 0x202c303264722509,0x38202c3431647225,0x752e646461090a3b,0x3264722509203436\n"
".quad 0x3331647225202c31,0x3b3032647225202c,0x33622e646e61090a,0x2c36357225092032\n"
".quad 0x33202c3733722520,0x2e6c6873090a3b31,0x3572250920323362,0x2c39337225202c37\n"
".quad 0x646461090a3b3520,0x722509203233732e,0x36357225202c3835,0x0a3b37357225202c\n"
".quad 0x3233752e72687309,0x202c393572250920,0x3b35202c37337225,0x33622e6c6873090a\n"
".quad 0x2c30367225092032,0x31202c3935722520,0x2e646461090a3b37,0x3672250920323373\n"
".quad 0x2c38357225202c31,0x090a3b3036722520,0x61626f6c672e7473,0x5b09203233752e6c\n"
".quad 0x5d302b3132647225,0x0a3b31367225202c,0x383109636f6c2e09,0x6d090a3009373309\n"
".quad 0x09203233732e766f,0x3b30202c32367225,0x6f6c672e7473090a,0x203631732e6c6162\n"
".quad 0x2b31326472255b09,0x32367225202c5d34,0x5f335f744c240a3b,0x200a3a3433363733\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3938,0x64656c6562616c20,0x335f335f744c2420,0x6c2e090a36383535\n"
".quad 0x343109383109636f,0x627573090a300932,0x722509203233732e,0x38317225202c3831\n"
".quad 0x6c2e090a3b31202c,0x343109383109636f,0x766f6d090a300935,0x722509203233732e\n"
".quad 0x090a3b30202c3931,0x20696e752e617262,0x325f335f744c2409,0x744c240a3b363033\n"
".quad 0x32323137335f335f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c31313120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36363836335f335f,0x31752e747663090a,0x2509203233752e36,0x387225202c333672\n"
".quad 0x722e747663090a3b,0x33752e3233662e6e,0x202c396625092032,0x6d090a3b33367225\n"
".quad 0x09203233662e766f,0x6625202c30316625,0x2e726873090a3b39,0x3672250920323375\n"
".quad 0x202c387225202c34,0x747663090a3b3631,0x2e3233662e6e722e,0x3166250920323375\n"
".quad 0x3b34367225202c31,0x33662e766f6d090a,0x2c32316625092032,0x090a3b3131662520\n"
".quad 0x203233662e766f6d,0x30202c3331662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x33316625202c3431,0x662e766f6d090a3b\n"
".quad 0x3531662509203233,0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x25202c3631662509,0x6574090a3b353166,0x2e34762e64322e78\n"
".quad 0x203233662e323375,0x72252c353672257b,0x2c373672252c3636,0x6e5b2c7d38367225\n"
".quad 0x7b2c78657465646f,0x3166252c30316625,0x252c343166252c32,0x200a3b5d7d363166\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313131,0x656c6562616c2064,0x5f335f744c242064,0x2e090a3636383633\n"
".quad 0x3109383109636f6c,0x6f6d090a30093135,0x2509203233732e76,0x367225202c393672\n"
".quad 0x2e766f6d090a3b35,0x3772250920323373,0x3b36367225202c30,0x33732e766f6d090a\n"
".quad 0x2c31377225092032,0x090a3b3936722520,0x203233752e766f6d,0x30202c3237722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x7225202c31317025,0x32377225202c3931\n"
".quad 0x3131702540090a3b,0x4c24092061726220,0x303438335f335f74,0x6c3c2f2f200a3b32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c31313120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x363836335f335f74,0x732e627573090a36\n"
".quad 0x3337722509203233,0x202c30377225202c,0x61090a3b39367225,0x09203233732e6464\n"
".quad 0x7225202c34377225,0x090a3b31202c3337,0x2e746c2e70746573,0x3170250920323373\n"
".quad 0x2c39317225202c32,0x090a3b3437722520,0x7262203231702540,0x335f744c24092061\n"
".quad 0x0a3b34313938335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c31313120,0x6c6562616c206461,0x335f744c24206465\n"
".quad 0x090a36363836335f,0x09383109636f6c2e,0x61090a3009333631,0x09203233732e6464\n"
".quad 0x7225202c35377225,0x090a3b31202c3037,0x09383109636f6c2e,0x61090a3009343631\n"
".quad 0x09203233732e6464,0x7225202c36377225,0x38317225202c3337,0x732e646461090a3b\n"
".quad 0x3831722509203233,0x202c36377225202c,0x636f6c2e090a3b31,0x0935363109383109\n"
".quad 0x732e627573090a30,0x3737722509203233,0x202c39317225202c,0x73090a3b33377225\n"
".quad 0x09203233732e6275,0x7225202c39317225,0x090a3b31202c3737,0x20696e752e617262\n"
".quad 0x335f335f744c2409,0x4c240a3b38353638,0x313938335f335f74,0x6c3c2f2f200a3a34\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c31313120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x363836335f335f74,0x09636f6c2e090a36\n"
".quad 0x3009323731093831,0x33732e646461090a,0x2c38317225092032,0x25202c3831722520\n"
".quad 0x6c2e090a3b393172,0x373109383109636f,0x646461090a300933,0x722509203233732e\n"
".quad 0x39317225202c3537,0x0a3b39367225202c,0x383109636f6c2e09,0x090a300934373109\n"
".quad 0x203233732e766f6d,0x30202c3931722509,0x5f335f744c240a3b,0x200a3a3835363833\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313131,0x656c6562616c2064,0x5f335f744c242064,0x63090a3636383633\n"
".quad 0x732e3436732e7476,0x3164722509203233,0x3b38317225202c37,0x6e752e617262090a\n"
".quad 0x335f744c24092069,0x0a3b36343138335f,0x38335f335f744c24,0x2f2f200a3a323034\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x313120656e696c20\n"
".quad 0x2064616568202c31,0x2064656c6562616c,0x36335f335f744c24,0x6f6c2e090a363638\n"
".quad 0x3038310938310963,0x2e646461090a3009,0x3172250920323373,0x2c38317225202c38\n"
".quad 0x646461090a3b3120,0x722509203436732e,0x647225202c373164,0x090a3b31202c3731\n"
".quad 0x09383109636f6c2e,0x61090a3009313831,0x09203233732e6464,0x7225202c35377225\n"
".quad 0x240a3b31202c3936,0x3138335f335f744c,0x3c2f2f200a3a3634,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x31313120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3836335f335f744c,0x636f6c2e090a3636,0x0934383109383109\n"
".quad 0x752e646461090a30,0x3264722509203436,0x3731647225202c32,0x3b3831647225202c\n"
".quad 0x6f6c672e646c090a,0x092038732e6c6162,0x255b202c34337225,0x3b5d302b32326472\n"
".quad 0x3109636f6c2e090a,0x0a30093638310938,0x3233732e766f6d09,0x202c383772250920\n"
".quad 0x70746573090a3b30,0x203233732e656e2e,0x25202c3331702509,0x377225202c343372\n"
".quad 0x70746573090a3b38,0x203233732e74672e,0x25202c3431702509,0x377225202c353772\n"
".quad 0x31702540090a3b30,0x2409206172622034,0x3231345f335f744c,0x3c2f2f200a3b3831\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x31313120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3836335f335f744c,0x70252140090a3636\n"
".quad 0x0920617262203331,0x31345f335f744c24,0x5f4c240a3b383132,0x3a38333533335f33\n"
".quad 0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62,0x2e090a3838312065\n"
".quad 0x3109383109636f6c,0x6873090a30093838,0x2509203233732e72,0x377225202c393772\n"
".quad 0x61090a3b32202c35,0x09203233622e646e,0x7225202c30387225,0x33353536202c3937\n"
".quad 0x2e747663090a3b35,0x732e3233662e6e72,0x3731662509203233,0x0a3b30387225202c\n"
".quad 0x3233662e766f6d09,0x202c383166250920,0x61090a3b37316625,0x09203233622e646e\n"
".quad 0x7225202c31387225,0x090a3b33202c3537,0x203233732e726873,0x25202c3238722509\n"
".quad 0x3b3831202c353772,0x33622e6c6873090a,0x2c33387225092032,0x32202c3238722520\n"
".quad 0x732e646461090a3b,0x3438722509203233,0x202c31387225202c,0x63090a3b33387225\n"
".quad 0x33662e6e722e7476,0x2509203233732e32,0x387225202c393166,0x2e766f6d090a3b34\n"
".quad 0x3266250920323366,0x3b39316625202c30,0x33662e766f6d090a,0x2c31326625092032\n"
".quad 0x3030303030663020,0x202020203b303030,0x6d090a30202f2f09,0x09203233662e766f\n"
".quad 0x6625202c32326625,0x766f6d090a3b3132,0x662509203233662e,0x30306630202c3332\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a,0x2c34326625092032\n"
".quad 0x090a3b3332662520,0x762e64322e786574,0x33662e3233752e34,0x2c353872257b2032\n"
".quad 0x3872252c36387225,0x2c7d383872252c37,0x2c7865746665725b,0x66252c383166257b\n"
".quad 0x2c323266252c3032,0x0a3b5d7d34326625,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c38383120,0x6c6562616c206461\n"
".quad 0x5f335f4c24206465,0x2e090a3833353333,0x3409383109636f6c,0x766f6d090a300937\n"
".quad 0x722509203233732e,0x35387225202c3938,0x09636f6c2e090a3b,0x3009383831093831\n"
".quad 0x38732e747663090a,0x722509203233732e,0x39387225202c3039,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x7225202c35317025,0x30397225202c3433,0x3531702540090a3b\n"
".quad 0x4c24092061726220,0x373139335f335f74,0x6c3c2f2f200a3b30,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c393820656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x36383535335f335f,0x636f6c2e7473090a,0x09203233752e6c61\n"
".quad 0x5f616475635f5f5b,0x61765f6c61636f6c,0x5f30333432335f72,0x635f6e6f6e5f3232\n"
".quad 0x6572705f74736e6f,0x2c5d302b36315f76,0x090a3b3834722520,0x20696e752e617262\n"
".quad 0x335f335f744c2409,0x4c240a3b34353336,0x373139335f335f74,0x6c3c2f2f200a3a30\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c38383120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x38333533335f335f,0x3109636f6c2e090a\n"
".quad 0x0a30093939310938,0x3233732e64646109,0x202c383172250920,0x3b31202c38317225\n"
".quad 0x36732e646461090a,0x3731647225092034,0x2c3731647225202c,0x6f6c2e090a3b3120\n"
".quad 0x3030320938310963,0x2e646461090a3009,0x3772250920323373,0x2c35377225202c35\n"
".quad 0x6f6c2e090a3b3120,0x3130320938310963,0x2e646461090a3009,0x6472250920343675\n"
".quad 0x31647225202c3332,0x3831647225202c37,0x6c672e646c090a3b,0x2038732e6c61626f\n"
".quad 0x5b202c3433722509,0x5d302b3332647225,0x09636f6c2e090a3b,0x3009363831093831\n"
".quad 0x672e70746573090a,0x2509203233732e74,0x377225202c363170,0x3b30377225202c35\n"
".quad 0x203631702540090a,0x744c240920617262,0x30333731345f335f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c38383120656e\n"
".quad 0x62616c2064616568,0x5f4c242064656c65,0x0a38333533335f33,0x3233732e766f6d09\n"
".quad 0x202c313972250920,0x70746573090a3b30,0x203233732e656e2e,0x25202c3731702509\n"
".quad 0x397225202c343372,0x2e766f6d090a3b31,0x7025092064657270,0x37317025202c3331\n"
".quad 0x702e766f6d090a3b,0x3170250920646572,0x3b39317025202c38,0x203731702540090a\n"
".quad 0x5f4c240920617262,0x3b38333533335f33,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3131312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a36363836335f33,0x696e752e61726209,0x5f335f744c240920\n"
".quad 0x240a3b3831323134,0x3731345f335f744c,0x3c2f2f200a3a3033,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x31313120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3836335f335f744c,0x2e766f6d090a3636,0x3972250920323373\n"
".quad 0x73090a3b30202c32,0x732e656e2e707465,0x3331702509203233,0x202c34337225202c\n"
".quad 0x4c240a3b32397225,0x313231345f335f74,0x5f335f4c240a3a38,0x200a3a3439373333\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c313131,0x656c6562616c2064,0x5f335f744c242064,0x2e090a3636383633\n"
".quad 0x3209383109636f6c,0x2540090a30093130,0x2061726220333170,0x335f335f744c2409\n"
".quad 0x2f200a3b36363836,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3820656e696c2079,0x2064616568202c39,0x2064656c6562616c,0x35335f335f744c24\n"
".quad 0x2e7473090a363835,0x33752e6c61636f6c,0x75635f5f5b092032,0x6c61636f6c5f6164\n"
".quad 0x3432335f7261765f,0x6f6e5f32325f3033,0x5f74736e6f635f6e,0x2b36315f76657270\n"
".quad 0x38347225202c5d30,0x752e617262090a3b,0x5f744c240920696e,0x3b34353336335f33\n"
".quad 0x345f335f744c240a,0x2f200a3a32363930,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3820656e696c2079,0x2064616568202c39,0x2064656c6562616c\n"
".quad 0x35335f335f744c24,0x2e646c090a363835,0x33752e6c61636f6c,0x2c38347225092032\n"
".quad 0x616475635f5f5b20,0x765f6c61636f6c5f,0x30333432335f7261,0x5f6e6f6e5f32325f\n"
".quad 0x72705f74736e6f63,0x5d302b36315f7665,0x6f6c2e646c090a3b,0x203233732e6c6163\n"
".quad 0x5b202c3137722509,0x6c5f616475635f5f,0x7261765f6c61636f,0x315f39323432335f\n"
".quad 0x6f635f6e6f6e5f36,0x65646f6e5f74736e,0x0a3b5d302b32335f,0x3233732e766f6d09\n"
".quad 0x202c353772250920,0x335f744c240a3b30,0x0a3a34353336335f,0x35325f335f744c24\n"
".quad 0x3c2f2f200a3a3236,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c393820656e696c,0x616c206461656820,0x4c242064656c6562,0x383535335f335f74\n"
".quad 0x09636f6c2e090a36,0x3009393032093831,0x33732e627573090a,0x2c33397225092032\n"
".quad 0x25202c3537722520,0x6573090a3b313772,0x33732e65672e7074,0x2c30327025092032\n"
".quad 0x25202c3031722520,0x2540090a3b383172,0x2061726220303270,0x335f335f744c2409\n"
".quad 0x2f200a3b38333939,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3820656e696c2079,0x2064616568202c39,0x2064656c6562616c,0x35335f335f744c24\n"
".quad 0x6f6c2e090a363835,0x0936330938310963,0x752e766f6d090a30,0x3439722509203233\n"
".quad 0x090a3b387225202c,0x203233752e726873,0x25202c3539722509,0x3b3631202c343972\n"
".quad 0x6f6c2e6c756d090a,0x722509203436752e,0x647225202c343264,0x090a3b38202c3431\n"
".quad 0x203436752e646461,0x202c353264722509,0x25202c3331647225,0x61090a3b34326472\n"
".quad 0x09203233622e646e,0x7225202c36397225,0x0a3b3133202c3539,0x3233622e6c687309\n"
".quad 0x202c373972250920,0x3b3631202c387225,0x33752e726873090a,0x2c38397225092032\n"
".quad 0x31202c3739722520,0x2e6c6873090a3b36,0x3972250920323362,0x2c38397225202c39\n"
".quad 0x646461090a3b3520,0x722509203233732e,0x397225202c303031,0x3b39397225202c36\n"
".quad 0x33752e726873090a,0x3130317225092032,0x202c35397225202c,0x2e6c6873090a3b35\n"
".quad 0x3172250920323362,0x30317225202c3230,0x090a3b3731202c31,0x203233732e646461\n"
".quad 0x202c333031722509,0x25202c3030317225,0x73090a3b32303172,0x6c61626f6c672e74\n"
".quad 0x255b09203233752e,0x2c5d302b35326472,0x0a3b333031722520,0x383109636f6c2e09\n"
".quad 0x73090a3009373309,0x6c61626f6c672e74,0x255b09203631732e,0x2c5d342b35326472\n"
".quad 0x240a3b3339722520,0x3939335f335f744c,0x3c2f2f200a3a3833,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x2c393820656e696c,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x383535335f335f74,0x09636f6c2e090a36,0x3009323132093831\n"
".quad 0x33732e766f6d090a,0x2c39317225092032,0x090a3b3339722520,0x09383109636f6c2e\n"
".quad 0x73090a3009333132,0x09203233732e6275,0x25202c3430317225,0x397225202c383172\n"
".quad 0x2e627573090a3b33,0x3172250920323373,0x3430317225202c38,0x6873090a3b31202c\n"
".quad 0x2509203233622e6c,0x7225202c35303172,0x0a3b3631202c3834,0x3233752e72687309\n"
".quad 0x202c343572250920,0x31202c3530317225,0x2e766f6d090a3b36,0x3172250920323375\n"
".quad 0x38347225202c3630,0x752e726873090a3b,0x3535722509203233,0x2c3630317225202c\n"
".quad 0x744c240a3b363120,0x3a363033325f335f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c39382065,0x6c6562616c206461\n"
".quad 0x335f744c24206465,0x090a36383535335f,0x09383109636f6c2e,0x63090a3009353132\n"
".quad 0x33662e6e722e7476,0x2509203233752e32,0x357225202c353266,0x2e766f6d090a3b34\n"
".quad 0x3266250920323366,0x3b35326625202c36,0x6e722e747663090a,0x3233752e3233662e\n"
".quad 0x202c373266250920,0x6d090a3b35357225,0x09203233662e766f,0x6625202c38326625\n"
".quad 0x766f6d090a3b3732,0x662509203233662e,0x30306630202c3932,0x203b303030303030\n"
".quad 0x30202f2f09202020,0x33662e766f6d090a,0x2c30336625092032,0x090a3b3932662520\n"
".quad 0x203233662e766f6d,0x30202c3133662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x31336625202c3233,0x322e786574090a3b\n"
".quad 0x3233752e34762e64,0x72257b203233662e,0x303172252c373031,0x2c39303172252c38\n"
".quad 0x5b2c7d3031317225,0x2c78657465646f6e,0x66252c363266257b,0x2c303366252c3832\n"
".quad 0x0a3b5d7d32336625,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c393820,0x656c6562616c2064,0x5f335f744c242064\n"
".quad 0x2e090a3638353533,0x3209383109636f6c,0x6f6d090a30093731,0x2509203233732e76\n"
".quad 0x7225202c31313172,0x6f6d090a3b373031,0x2509203233732e76,0x7225202c32313172\n"
".quad 0x7473090a3b303131,0x752e6c61636f6c2e,0x635f5f5b09203233,0x61636f6c5f616475\n"
".quad 0x32335f7261765f6c,0x6e5f36315f393234,0x74736e6f635f6e6f,0x32335f65646f6e5f\n"
".quad 0x317225202c5d302b,0x6f6c2e090a3b3131,0x3831320938310963,0x2e766f6d090a3009\n"
".quad 0x3872250920323373,0x3b3231317225202c,0x33732e646461090a,0x2c37317225092032\n"
".quad 0x31202c3731722520,0x752e646461090a3b,0x3164722509203436,0x3431647225202c34\n"
".quad 0x6573090a3b31202c,0x33732e656e2e7074,0x2c31327025092032,0x25202c3531722520\n"
".quad 0x2540090a3b373172,0x2061726220313270,0x335f335f744c2409,0x4c240a3b36383535\n"
".quad 0x315a5f5f30354242,0x6772656d6d756d35,0x6c656e72654b7570,0x686374614d303150\n"
".quad 0x50635064726f6f43,0x3a69695f3353694b,0x3109636f6c2e090a,0x0a30093632320938\n"
".quad 0x240a3b7469786509,0x5f5f646e6557444c,0x656d6d756d35315a,0x6e72654b75706772\n"
".quad 0x74614d3031506c65,0x5064726f6f436863,0x695f3353694b5063,0x2f2f207d090a3a69\n"
".quad 0x6d756d35315a5f20,0x654b75706772656d,0x4d3031506c656e72,0x726f6f4368637461\n"
".quad 0x3353694b50635064,0x652e090a0a69695f,0x315a5f207972746e,0x6772656d6d756d37\n"
".quad 0x6e72654b43527570,0x74614d3031506c65,0x5064726f6f436863,0x695f3353694b5063\n"
".quad 0x702e09090a282069,0x36752e206d617261,0x616475635f5f2034,0x315a5f5f6d726170\n"
".quad 0x6772656d6d756d37,0x6e72654b43527570,0x74614d3031506c65,0x5064726f6f436863\n"
".quad 0x695f3353694b5063,0x5f686374616d5f69,0x0a2c7364726f6f63,0x6d617261702e0909\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x6d756d37315a5f5f,0x435275706772656d\n"
".quad 0x31506c656e72654b,0x6f43686374614d30,0x694b50635064726f,0x5f5f5f69695f3353\n"
".quad 0x617261705f6c6176,0x736569726575716d,0x7261702e09090a2c,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x6d37315a5f5f6d72,0x75706772656d6d75,0x6c656e72654b4352\n"
".quad 0x686374614d303150,0x50635064726f6f43,0x5f69695f3353694b,0x6464417972657571\n"
".quad 0x702e09090a2c7372,0x36752e206d617261,0x616475635f5f2034,0x315a5f5f6d726170\n"
".quad 0x6772656d6d756d37,0x6e72654b43527570,0x74614d3031506c65,0x5064726f6f436863\n"
".quad 0x695f3353694b5063,0x4c79726575715f69,0x0a2c736874676e65,0x6d617261702e0909\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x6d756d37315a5f5f,0x435275706772656d\n"
".quad 0x31506c656e72654b,0x6f43686374614d30,0x694b50635064726f,0x756e5f69695f3353\n"
".quad 0x736569726575516d,0x7261702e09090a2c,0x203233732e206d61,0x6170616475635f5f\n"
".quad 0x6d37315a5f5f6d72,0x75706772656d6d75,0x6c656e72654b4352,0x686374614d303150\n"
".quad 0x50635064726f6f43,0x5f69695f3353694b,0x6374616d5f6e696d,0x090a296e656c5f68\n"
".quad 0x206765722e090a7b,0x3c7225203233752e,0x2e090a3b3e383331,0x3436752e20676572\n"
".quad 0x3e34323c64722520,0x206765722e090a3b,0x3c6625203233662e,0x722e090a3b3e3433\n"
".quad 0x646572702e206765,0x3b3e38333c702520,0x6c61636f6c2e090a,0x206e67696c612e20\n"
".quad 0x5f5f2038622e2034,0x636f6c5f61647563,0x335f7261765f6c61,0x5f39315f33383532\n"
".quad 0x736e6f635f6e6f6e,0x36315f7275635f74,0x6c2e090a3b5d345b,0x6c612e206c61636f\n"
".quad 0x622e2034206e6769,0x616475635f5f2038,0x765f6c61636f6c5f,0x38393532335f7261\n"
".quad 0x5f6e6f6e5f32325f,0x72705f74736e6f63,0x5d345b30325f7665,0x61636f6c2e090a3b\n"
".quad 0x6e67696c612e206c,0x2038622e20363120,0x6c5f616475635f5f,0x7261765f6c61636f\n"
".quad 0x315f37393532335f,0x6f635f6e6f6e5f36,0x65646f6e5f74736e,0x3b5d36315b32335f\n"
".quad 0x3109636f6c2e090a,0x0a30093134320938,0x6967656257444c24,0x756d37315a5f5f6e\n"
".quad 0x5275706772656d6d,0x506c656e72654b43,0x43686374614d3031,0x4b50635064726f6f\n"
".quad 0x0a3a69695f335369,0x3233752e766f6d09,0x25202c3172250920,0x3b782e6469617463\n"
".quad 0x33752e766f6d090a,0x202c327225092032,0x3b782e6469746e25,0x2e34326c756d090a\n"
".quad 0x09203233752e6f6c,0x317225202c337225,0x090a3b327225202c,0x203233752e766f6d\n"
".quad 0x7425202c34722509,0x61090a3b782e6469,0x09203233752e6464,0x347225202c357225\n"
".quad 0x090a3b337225202c,0x6d617261702e646c,0x722509203233732e,0x75635f5f5b202c36\n"
".quad 0x5f5f6d7261706164,0x656d6d756d37315a,0x654b435275706772,0x4d3031506c656e72\n"
".quad 0x726f6f4368637461,0x3353694b50635064,0x516d756e5f69695f,0x3b5d736569726575\n"
".quad 0x672e70746573090a,0x2509203233732e74,0x2c367225202c3170,0x40090a3b35722520\n"
".quad 0x2061726220317025,0x335f345f744c2409,0x62090a3b38333939,0x0920696e752e6172\n"
".quad 0x5f5f363842424c24,0x656d6d756d37315a,0x654b435275706772,0x4d3031506c656e72\n"
".quad 0x726f6f4368637461,0x3353694b50635064,0x744c240a3b69695f,0x38333939335f345f\n"
".quad 0x09636f6c2e090a3a,0x3009363432093831,0x36732e747663090a,0x2509203233732e34\n"
".quad 0x357225202c316472,0x772e6c756d090a3b,0x203233732e656469,0x25202c3264722509\n"
".quad 0x090a3b34202c3572,0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3364\n"
".quad 0x5f6d726170616475,0x6d6d756d37315a5f,0x4b43527570677265,0x3031506c656e7265\n"
".quad 0x6f6f43686374614d,0x53694b5063506472,0x6575715f69695f33,0x6874676e654c7972\n"
".quad 0x646461090a3b5d73,0x722509203436752e,0x33647225202c3464,0x0a3b32647225202c\n"
".quad 0x626f6c672e646c09,0x09203233732e6c61,0x72255b202c377225,0x090a3b5d302b3464\n"
".quad 0x09383109636f6c2e,0x6c090a3009393532,0x2e6d617261702e64,0x6472250920343675\n"
".quad 0x75635f5f5b202c35,0x5f5f6d7261706164,0x656d6d756d37315a,0x654b435275706772\n"
".quad 0x4d3031506c656e72,0x726f6f4368637461,0x3353694b50635064,0x726575715f69695f\n"
".quad 0x3b5d737264644179,0x36752e646461090a,0x2c36647225092034,0x25202c3564722520\n"
".quad 0x646c090a3b326472,0x2e6c61626f6c672e,0x3872250920323373,0x2b366472255b202c\n"
".quad 0x6f6c2e090a3b5d30,0x3036320938310963,0x2e747663090a3009,0x203233732e343673\n"
".quad 0x25202c3764722509,0x2e646c090a3b3872,0x33732e6d61726170,0x202c397225092032\n"
".quad 0x70616475635f5f5b,0x37315a5f5f6d7261,0x706772656d6d756d,0x656e72654b435275\n"
".quad 0x6374614d3031506c,0x635064726f6f4368,0x69695f3353694b50,0x74616d5f6e696d5f\n"
".quad 0x3b5d6e656c5f6863,0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c38647225\n"
".quad 0x726170616475635f,0x756d37315a5f5f6d,0x5275706772656d6d,0x506c656e72654b43\n"
".quad 0x43686374614d3031,0x4b50635064726f6f,0x6d5f69695f335369,0x6f6f635f68637461\n"
".quad 0x6d090a3b5d736472,0x2e656469772e6c75,0x6472250920323373,0x202c387225202c39\n"
".quad 0x2e646461090a3b38,0x6472250920343675,0x38647225202c3031,0x0a3b39647225202c\n"
".quad 0x3233752e64646109,0x202c303172250920,0x0a3b31202c397225,0x6c2e34326c756d09\n"
".quad 0x2509203233752e6f,0x357225202c313172,0x0a3b30317225202c,0x3436752e74766309\n"
".quad 0x722509203233752e,0x317225202c313164,0x2e6c756d090a3b31,0x3233752e65646977\n"
".quad 0x2c32316472250920,0x38202c3131722520,0x752e627573090a3b,0x3164722509203436\n"
".quad 0x3031647225202c33,0x3b3231647225202c,0x3109636f6c2e090a,0x0a30093336320938\n"
".quad 0x3233732e766f6d09,0x202c323172250920,0x6573090a3b377225,0x33732e746c2e7074\n"
".quad 0x202c327025092032,0x397225202c377225,0x2032702540090a3b,0x424c240920617262\n"
".quad 0x37315a5f5f363842,0x706772656d6d756d,0x656e72654b435275,0x6374614d3031506c\n"
".quad 0x635064726f6f4368,0x69695f3353694b50,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x202c343164722509,0x70616475635f5f5b,0x37315a5f5f6d7261,0x706772656d6d756d\n"
".quad 0x656e72654b435275,0x6374614d3031506c,0x635064726f6f4368,0x69695f3353694b50\n"
".quad 0x705f6c61765f5f5f,0x726575716d617261,0x61090a3b5d736569,0x09203436752e6464\n"
".quad 0x25202c3531647225,0x647225202c376472,0x646461090a3b3431,0x722509203436752e\n"
".quad 0x647225202c363164,0x090a3b31202c3531,0x203233732e627573,0x25202c3331722509\n"
".quad 0x3b397225202c3772,0x33732e646461090a,0x2c34317225092032,0x31202c3331722520\n"
".quad 0x732e627573090a3b,0x3531722509203233,0x31202c397225202c,0x6f6c2e646c090a3b\n"
".quad 0x203233752e6c6163,0x5b202c3631722509,0x6c5f616475635f5f,0x7261765f6c61636f\n"
".quad 0x315f33383532335f,0x6f635f6e6f6e5f39,0x5f7275635f74736e,0x090a3b5d302b3631\n"
".quad 0x203233732e766f6d,0x30202c3731722509,0x732e766f6d090a3b,0x3831722509203233\n"
".quad 0x6f6d090a3b30202c,0x2509203233732e76,0x317225202c393172,0x345f744c240a3b34\n"
".quad 0x0a3a32363930345f,0x706f6f6c3c2f2f20,0x6220706f6f4c203e,0x656e696c2079646f\n"
".quad 0x656e202c33363220,0x656420676e697473,0x202c31203a687470,0x6574616d69747365\n"
".quad 0x7461726574692064,0x6e75203a736e6f69,0x6d090a6e776f6e6b,0x09203233732e766f\n"
".quad 0x3b30202c30327225,0x656c2e746573090a,0x3233732e3233752e,0x202c313272250920\n"
".quad 0x7225202c37317225,0x67656e090a3b3032,0x722509203233732e,0x31327225202c3232\n"
".quad 0x752e766f6d090a3b,0x3332722509203233,0x6573090a3b30202c,0x3233752e71652e74\n"
".quad 0x722509203233752e,0x36317225202c3432,0x0a3b33327225202c,0x3233732e67656e09\n"
".quad 0x202c353272250920,0x6f090a3b34327225,0x2509203233622e72,0x327225202c363272\n"
".quad 0x3b35327225202c32,0x33752e766f6d090a,0x2c37327225092032,0x746573090a3b3020\n"
".quad 0x3233732e71652e70,0x25202c3370250920,0x327225202c363272,0x33702540090a3b37\n"
".quad 0x4c24092061726220,0x313231345f345f74,0x6c3c2f2f200a3b38,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c33363220656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363930345f345f74,0x09636f6c2e090a32,0x3009313832093831\n"
".quad 0x33752e766f6d090a,0x2c38327225092032,0x646e61090a3b3020,0x722509203233622e\n"
".quad 0x36317225202c3932,0x36333535362d202c,0x33622e726f090a3b,0x2c30337225092032\n"
".quad 0x30202c3932722520,0x752e766f6d090a3b,0x3133722509203233,0x6e61090a3b31202c\n"
".quad 0x2509203233622e64,0x337225202c323372,0x3533353536202c30,0x33622e726f090a3b\n"
".quad 0x2c36317225092032,0x36202c3233722520,0x6d090a3b36333535,0x09203233732e766f\n"
".quad 0x3b31202c37317225,0x33732e766f6d090a,0x2c38317225092032,0x5f744c240a3b3020\n"
".quad 0x3a38313231345f34,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3336322065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a32363930345f34,0x383109636f6c2e09,0x090a300936383209,0x203233732e627573\n"
".quad 0x25202c3333722509,0x317225202c323172,0x2e747663090a3b37,0x203233732e343675\n"
".quad 0x202c373164722509,0x61090a3b33337225,0x09203436732e6464,0x25202c3831647225\n"
".quad 0x7225202c37316472,0x646c090a3b353164,0x2e6c61626f6c672e,0x3433722509203873\n"
".quad 0x38316472255b202c,0x6c2e090a3b5d312b,0x323509383109636f,0x2e766f6d090a3009\n"
".quad 0x3372250920323375,0x090a3b3536202c35,0x2e71652e70746573,0x3470250920323373\n"
".quad 0x202c34337225202c,0x40090a3b35337225,0x2061726220347025,0x375f345f744c2409\n"
".quad 0x2f2f200a3b323836,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x363220656e696c20,0x2064616568202c33,0x2064656c6562616c,0x30345f345f744c24\n"
".quad 0x766f6d090a323639,0x722509203233752e,0x0a3b3736202c3633,0x71652e7074657309\n"
".quad 0x702509203233732e,0x2c34337225202c35,0x090a3b3633722520,0x6172622035702540\n"
".quad 0x5f345f744c240920,0x2f200a3b38333937,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x64616568202c3336,0x64656c6562616c20\n"
".quad 0x345f345f744c2420,0x6f6d090a32363930,0x2509203233752e76,0x3b3137202c373372\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x34337225202c3670,0x0a3b37337225202c\n"
".quad 0x7262203670254009,0x345f744c24092061,0x200a3b343931385f,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c333632\n"
".quad 0x656c6562616c2064,0x5f345f744c242064,0x6d090a3236393034,0x09203233752e766f\n"
".quad 0x3438202c38337225,0x2e70746573090a3b,0x09203233732e7165,0x337225202c377025\n"
".quad 0x3b38337225202c34,0x622037702540090a,0x5f744c2409206172,0x0a3b303534385f34\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c33363220,0x6c6562616c206461,0x345f744c24206465,0x090a32363930345f\n"
".quad 0x203233752e766f6d,0x31202c3933722509,0x746573090a3b3331,0x3233732e71652e70\n"
".quad 0x25202c3870250920,0x337225202c343372,0x38702540090a3b39,0x4c24092061726220\n"
".quad 0x363037385f345f74,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c33363220656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x32363930345f345f,0x6e752e617262090a,0x345f744c24092069,0x240a3b323639385f\n"
".quad 0x3836375f345f744c,0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c33363220656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363930345f345f74,0x09636f6c2e090a32,0x0a30093435093831,0x3233732e766f6d09\n"
".quad 0x202c303472250920,0x617262090a3b3438,0x4c240920696e752e,0x5f5f69646e655744\n"
".quad 0x38315f636372325a,0x4c240a3b39325f31,0x383339375f345f74,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363220656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32363930345f345f,0x3109636f6c2e090a\n"
".quad 0x090a300935350938,0x203233732e766f6d,0x37202c3034722509,0x2e617262090a3b31\n"
".quad 0x444c240920696e75,0x5a5f5f69646e6557,0x3138315f63637232,0x744c240a3b39325f\n"
".quad 0x3a343931385f345f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3336322065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a32363930345f34,0x383109636f6c2e09,0x6d090a3009363509,0x09203233732e766f\n"
".quad 0x3736202c30347225,0x752e617262090a3b,0x57444c240920696e,0x325a5f5f69646e65\n"
".quad 0x5f3138315f636372,0x5f744c240a3b3932,0x0a3a303534385f34,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c33363220\n"
".quad 0x6c6562616c206461,0x345f744c24206465,0x090a32363930345f,0x09383109636f6c2e\n"
".quad 0x6f6d090a30093735,0x2509203233732e76,0x3b3536202c303472,0x6e752e617262090a\n"
".quad 0x6557444c24092069,0x72325a5f5f69646e,0x325f3138315f6363,0x345f744c240a3b39\n"
".quad 0x200a3a363037385f,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c333632,0x656c6562616c2064,0x5f345f744c242064\n"
".quad 0x2e090a3236393034,0x3509383109636f6c,0x766f6d090a300938,0x722509203233732e\n"
".quad 0x090a3b30202c3034,0x20696e752e617262,0x646e6557444c2409,0x636372325a5f5f69\n"
".quad 0x3b39325f3138315f,0x385f345f744c240a,0x2f2f200a3a323639,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x363220656e696c20,0x2064616568202c33\n"
".quad 0x2064656c6562616c,0x30345f345f744c24,0x6f6c2e090a323639,0x0939350938310963\n"
".quad 0x732e766f6d090a30,0x3034722509203233,0x0a3b34337225202c,0x69646e6557444c24\n"
".quad 0x5f636372325a5f5f,0x0a3a39325f313831,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c33363220,0x6c6562616c206461\n"
".quad 0x345f744c24206465,0x090a32363930345f,0x09383109636f6c2e,0x6d090a3009363832\n"
".quad 0x09203233732e766f,0x7225202c31347225,0x766f6d090a3b3034,0x722509203233752e\n"
".quad 0x090a3b30202c3234,0x2e71652e70746573,0x3970250920323373,0x202c30347225202c\n"
".quad 0x40090a3b32347225,0x2061726220397025,0x345f345f744c2409,0x4c240a3b38333336\n"
".quad 0x343232345f345f74,0x6c3c2f2f200a3a32,0x6f6f4c203e706f6f,0x6c2079646f622070\n"
".quad 0x0a36383220656e69,0x3233752e766f6d09,0x202c333472250920,0x73090a3b36317225\n"
".quad 0x09203233752e7268,0x7225202c34347225,0x0a3b3631202c3334,0x3233622e6c687309\n"
".quad 0x202c353472250920,0x3631202c36317225,0x752e726873090a3b,0x3634722509203233\n"
".quad 0x202c35347225202c,0x747663090a3b3631,0x2e3233662e6e722e,0x3166250920323375\n"
".quad 0x0a3b36347225202c,0x3233662e766f6d09,0x25202c3266250920,0x747663090a3b3166\n"
".quad 0x2e3233662e6e722e,0x3366250920323375,0x0a3b34347225202c,0x3233662e766f6d09\n"
".quad 0x25202c3466250920,0x766f6d090a3b3366,0x662509203233662e,0x3030306630202c35\n"
".quad 0x20203b3030303030,0x30202f2f09202020,0x33662e766f6d090a,0x202c366625092032\n"
".quad 0x6f6d090a3b356625,0x2509203233662e76,0x30306630202c3766,0x203b303030303030\n"
".quad 0x202f2f0920202020,0x662e766f6d090a30,0x2c38662509203233,0x74090a3b37662520\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x252c373472257b20,0x393472252c383472\n"
".quad 0x5b2c7d303572252c,0x6e6572646c696863,0x3266257b2c786574,0x3666252c3466252c\n"
".quad 0x0a3b5d7d3866252c,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c36383220,0x6c6562616c206461,0x345f744c24206465\n"
".quad 0x090a32343232345f,0x09383109636f6c2e,0x6d090a3009363932,0x09203233732e766f\n"
".quad 0x7225202c31357225,0x766f6d090a3b3734,0x722509203233732e,0x38347225202c3235\n"
".quad 0x732e766f6d090a3b,0x3335722509203233,0x0a3b39347225202c,0x3233732e766f6d09\n"
".quad 0x202c343572250920,0x2e090a3b30357225,0x3209383109636f6c,0x6f6d090a30093739\n"
".quad 0x2509203233732e76,0x317225202c353572,0x636f6c2e090a3b36,0x0939393209383109\n"
".quad 0x752e766f6d090a30,0x3635722509203233,0x73090a3b3536202c,0x732e71652e707465\n"
".quad 0x3031702509203233,0x202c31347225202c,0x40090a3b36357225,0x6172622030317025\n"
".quad 0x5f345f744c240920,0x2f2f200a3b383532,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x383220656e696c20,0x2064616568202c36,0x2064656c6562616c\n"
".quad 0x32345f345f744c24,0x766f6d090a323432,0x722509203233752e,0x0a3b3736202c3735\n"
".quad 0x71652e7074657309,0x702509203233732e,0x31347225202c3131,0x0a3b37357225202c\n"
".quad 0x6220313170254009,0x5f744c2409206172,0x200a3b3037375f34,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c363832\n"
".quad 0x656c6562616c2064,0x5f345f744c242064,0x6d090a3234323234,0x09203233752e766f\n"
".quad 0x3137202c38357225,0x2e70746573090a3b,0x09203233732e7165,0x7225202c32317025\n"
".quad 0x38357225202c3134,0x3231702540090a3b,0x4c24092061726220,0x363230315f345f74\n"
".quad 0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c36383220656e,0x62616c2064616568,0x744c242064656c65,0x32343232345f345f\n"
".quad 0x33752e766f6d090a,0x2c39357225092032,0x6573090a3b343820,0x33732e71652e7074\n"
".quad 0x2c33317025092032,0x25202c3134722520,0x2540090a3b393572,0x2061726220333170\n"
".quad 0x315f345f744c2409,0x2f2f200a3b323832,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x383220656e696c20,0x2064616568202c36,0x2064656c6562616c\n"
".quad 0x32345f345f744c24,0x617262090a323432,0x4c240920696e752e,0x383335315f345f74\n"
".quad 0x5f345f744c240a3b,0x2f2f200a3a383532,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x383220656e696c20,0x2064616568202c36,0x2064656c6562616c\n"
".quad 0x32345f345f744c24,0x6f6c2e090a323432,0x3130330938310963,0x2e766f6d090a3009\n"
".quad 0x3172250920323373,0x3b31357225202c36,0x6e752e617262090a,0x345f744c24092069\n"
".quad 0x4c240a3b3431355f,0x3a3037375f345f74,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3638322065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a32343232345f34,0x383109636f6c2e09,0x090a300932303309\n"
".quad 0x203233732e766f6d,0x25202c3631722509,0x7262090a3b323572,0x240920696e752e61\n"
".quad 0x3431355f345f744c,0x5f345f744c240a3b,0x2f200a3a36323031,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x64616568202c3638\n"
".quad 0x64656c6562616c20,0x345f345f744c2420,0x6c2e090a32343232,0x303309383109636f\n"
".quad 0x766f6d090a300933,0x722509203233732e,0x33357225202c3631,0x752e617262090a3b\n"
".quad 0x5f744c240920696e,0x240a3b3431355f34,0x3832315f345f744c,0x6c3c2f2f200a3a32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36383220656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x343232345f345f74,0x09636f6c2e090a32\n"
".quad 0x3009343033093831,0x33732e766f6d090a,0x2c36317225092032,0x090a3b3435722520\n"
".quad 0x20696e752e617262,0x355f345f744c2409,0x5f744c240a3b3431,0x0a3a383335315f34\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c36383220,0x6c6562616c206461,0x345f744c24206465,0x090a32343232345f\n"
".quad 0x09383109636f6c2e,0x6d090a3009353033,0x09203233752e766f,0x3b30202c36317225\n"
".quad 0x355f345f744c240a,0x3c2f2f200a3a3431,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x36383220656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3232345f345f744c,0x636f6c2e090a3234,0x0936303309383109,0x752e766f6d090a30\n"
".quad 0x3036722509203233,0x6573090a3b30202c,0x33752e656e2e7074,0x2c34317025092032\n"
".quad 0x25202c3631722520,0x2540090a3b303672,0x2061726220343170,0x345f345f744c2409\n"
".quad 0x2f200a3b38393432,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x64616568202c3336,0x64656c6562616c20,0x345f345f744c2420\n"
".quad 0x6c2e090a32363930,0x313309383109636f,0x2e7473090a300934,0x33752e6c61636f6c\n"
".quad 0x75635f5f5b092032,0x6c61636f6c5f6164,0x3532335f7261765f,0x6f6e5f32325f3839\n"
".quad 0x5f74736e6f635f6e,0x2b30325f76657270,0x35357225202c5d30,0x732e766f6d090a3b\n"
".quad 0x3136722509203233,0x0a3b36347225202c,0x3233732e766f6d09,0x202c323672250920\n"
".quad 0x73090a3b34347225,0x732e65672e707465,0x3531702509203233,0x25202c397225202c\n"
".quad 0x2540090a3b373172,0x2061726220353170,0x345f345f744c2409,0x2f200a3b30313033\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x64616568202c3336,0x64656c6562616c20,0x345f345f744c2420,0x6c2e090a32363930\n"
".quad 0x363309383109636f,0x2e646e61090a3009,0x3672250920323362,0x2c34347225202c33\n"
".quad 0x6873090a3b313320,0x2509203233622e6c,0x347225202c343672,0x61090a3b35202c36\n"
".quad 0x09203233732e6464,0x7225202c35367225,0x34367225202c3336,0x752e726873090a3b\n"
".quad 0x3636722509203233,0x202c34347225202c,0x2e6c6873090a3b35,0x3672250920323362\n"
".quad 0x2c36367225202c37,0x6461090a3b373120,0x2509203233732e64,0x367225202c383672\n"
".quad 0x3b37367225202c35,0x6f6c672e7473090a,0x203233752e6c6162,0x2b33316472255b09\n"
".quad 0x38367225202c5d30,0x09636f6c2e090a3b,0x0a30093733093831,0x3233732e766f6d09\n"
".quad 0x202c393672250920,0x0a3b38363732332d,0x626f6c672e747309,0x09203631732e6c61\n"
".quad 0x342b33316472255b,0x3b39367225202c5d,0x345f345f744c240a,0x2f200a3a30313033\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x64616568202c3336,0x64656c6562616c20,0x345f345f744c2420,0x6c2e090a32363930\n"
".quad 0x313309383109636f,0x627573090a300937,0x722509203233732e,0x37317225202c3731\n"
".quad 0x6c2e090a3b31202c,0x323309383109636f,0x766f6d090a300930,0x722509203233732e\n"
".quad 0x090a3b30202c3831,0x20696e752e617262,0x325f345f744c2409,0x744c240a3b363033\n"
".quad 0x38393432345f345f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c36383220656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x32343232345f345f,0x31752e747663090a,0x2509203233752e36,0x317225202c303772\n"
".quad 0x2e747663090a3b36,0x752e3233662e6e72,0x2c39662509203233,0x090a3b3037722520\n"
".quad 0x203233662e766f6d,0x25202c3031662509,0x726873090a3b3966,0x722509203233752e\n"
".quad 0x36317225202c3137,0x63090a3b3631202c,0x33662e6e722e7476,0x2509203233752e32\n"
".quad 0x377225202c313166,0x2e766f6d090a3b31,0x3166250920323366,0x3b31316625202c32\n"
".quad 0x33662e766f6d090a,0x2c33316625092032,0x3030303030663020,0x202020203b303030\n"
".quad 0x6d090a30202f2f09,0x09203233662e766f,0x6625202c34316625,0x766f6d090a3b3331\n"
".quad 0x662509203233662e,0x30306630202c3531,0x203b303030303030,0x30202f2f09202020\n"
".quad 0x33662e766f6d090a,0x2c36316625092032,0x090a3b3531662520,0x762e64322e786574\n"
".quad 0x33662e3233752e34,0x2c323772257b2032,0x3772252c33377225,0x2c7d353772252c34\n"
".quad 0x78657465646f6e5b,0x252c303166257b2c,0x343166252c323166,0x3b5d7d363166252c\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3638322065,0x6562616c20646165,0x5f744c242064656c,0x0a32343232345f34\n"
".quad 0x383109636f6c2e09,0x090a300936323309,0x203233732e766f6d,0x25202c3637722509\n"
".quad 0x6f6d090a3b323772,0x2509203233732e76,0x377225202c373772,0x2e766f6d090a3b33\n"
".quad 0x3772250920323373,0x3b36377225202c38,0x33752e766f6d090a,0x2c39377225092032\n"
".quad 0x746573090a3b3020,0x3233732e71652e70,0x202c363170250920,0x7225202c38317225\n"
".quad 0x702540090a3b3937,0x0920617262203631,0x33345f345f744c24,0x2f2f200a3b383737\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x383220656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x32345f345f744c24,0x627573090a323432\n"
".quad 0x722509203233732e,0x37377225202c3038,0x0a3b36377225202c,0x3233732e64646109\n"
".quad 0x202c313872250920,0x3b31202c30387225,0x6c2e70746573090a,0x2509203233732e74\n"
".quad 0x317225202c373170,0x3b31387225202c38,0x203731702540090a,0x744c240920617262\n"
".quad 0x30393234345f345f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c36383220656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x32343232345f345f,0x3109636f6c2e090a,0x0a30093833330938,0x3233732e64646109\n"
".quad 0x202c323872250920,0x3b31202c37377225,0x3109636f6c2e090a,0x0a30093933330938\n"
".quad 0x3233732e64646109,0x202c333872250920,0x7225202c30387225,0x646461090a3b3731\n"
".quad 0x722509203233732e,0x33387225202c3731,0x6c2e090a3b31202c,0x343309383109636f\n"
".quad 0x627573090a300930,0x722509203233732e,0x38317225202c3438,0x0a3b30387225202c\n"
".quad 0x3233732e62757309,0x202c383172250920,0x3b31202c34387225,0x6e752e617262090a\n"
".quad 0x345f744c24092069,0x0a3b32323533345f,0x34345f345f744c24,0x2f2f200a3a303932\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x383220656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x32345f345f744c24,0x6f6c2e090a323432\n"
".quad 0x3734330938310963,0x2e646461090a3009,0x3172250920323373,0x2c37317225202c37\n"
".quad 0x090a3b3831722520,0x09383109636f6c2e,0x61090a3009383433,0x09203233732e6464\n"
".quad 0x7225202c32387225,0x36377225202c3831,0x09636f6c2e090a3b,0x3009393433093831\n"
".quad 0x33732e766f6d090a,0x2c38317225092032,0x617262090a3b3020,0x4c240920696e752e\n"
".quad 0x323533345f345f74,0x345f744c240a3b32,0x0a3a38373733345f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c36383220\n"
".quad 0x6c6562616c206461,0x345f744c24206465,0x090a32343232345f,0x09383109636f6c2e\n"
".quad 0x61090a3009353533,0x09203233732e6464,0x7225202c37317225,0x090a3b31202c3731\n"
".quad 0x09383109636f6c2e,0x61090a3009363533,0x09203233732e6464,0x7225202c32387225\n"
".quad 0x240a3b31202c3637,0x3533345f345f744c,0x3c2f2f200a3a3232,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x36383220656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3232345f345f744c,0x636f6c2e090a3234,0x0939353309383109\n"
".quad 0x732e627573090a30,0x3538722509203233,0x202c32317225202c,0x63090a3b37317225\n"
".quad 0x732e3436752e7476,0x3164722509203233,0x3b35387225202c39,0x36752e646461090a\n"
".quad 0x3032647225092034,0x2c3931647225202c,0x0a3b353164722520,0x626f6c672e646c09\n"
".quad 0x25092038732e6c61,0x72255b202c363872,0x0a3b5d312b303264,0x383109636f6c2e09\n"
".quad 0x6d090a3009323509,0x09203233752e766f,0x3536202c37387225,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x7225202c38317025,0x37387225202c3638,0x3831702540090a3b\n"
".quad 0x4c24092061726220,0x383733355f345f74,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c36383220656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32343232345f345f,0x33752e766f6d090a,0x2c38387225092032\n"
".quad 0x6573090a3b373620,0x33732e71652e7074,0x2c39317025092032,0x25202c3638722520\n"
".quad 0x2540090a3b383872,0x2061726220393170,0x355f345f744c2409,0x2f2f200a3b343336\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x383220656e696c20\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x32345f345f744c24,0x766f6d090a323432\n"
".quad 0x722509203233752e,0x0a3b3137202c3938,0x71652e7074657309,0x702509203233732e\n"
".quad 0x36387225202c3032,0x0a3b39387225202c,0x6220303270254009,0x5f744c2409206172\n"
".quad 0x0a3b303938355f34,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c36383220,0x6c6562616c206461,0x345f744c24206465\n"
".quad 0x090a32343232345f,0x203233752e766f6d,0x38202c3039722509,0x70746573090a3b34\n"
".quad 0x203233732e71652e,0x25202c3132702509,0x397225202c363872,0x32702540090a3b30\n"
".quad 0x2409206172622031,0x3431365f345f744c,0x6c3c2f2f200a3b36,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c36383220656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x343232345f345f74,0x752e766f6d090a32,0x3139722509203233\n"
".quad 0x090a3b333131202c,0x2e71652e70746573,0x3270250920323373,0x2c36387225202c32\n"
".quad 0x090a3b3139722520,0x7262203232702540,0x345f744c24092061,0x200a3b323034365f\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c363832,0x656c6562616c2064,0x5f345f744c242064,0x62090a3234323234\n"
".quad 0x0920696e752e6172,0x36365f345f744c24,0x5f744c240a3b3835,0x0a3a383733355f34\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c36383220,0x6c6562616c206461,0x345f744c24206465,0x090a32343232345f\n"
".quad 0x09383109636f6c2e,0x6f6d090a30093435,0x2509203233732e76,0x3b3438202c323972\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x72325a5f5f69646e,0x325f3138315f6363\n"
".quad 0x345f744c240a3b30,0x200a3a343336355f,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c363832,0x656c6562616c2064\n"
".quad 0x5f345f744c242064,0x2e090a3234323234,0x3509383109636f6c,0x766f6d090a300935\n"
".quad 0x722509203233732e,0x0a3b3137202c3239,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x6372325a5f5f6964,0x30325f3138315f63,0x5f345f744c240a3b,0x2f200a3a30393835\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x64616568202c3638,0x64656c6562616c20,0x345f345f744c2420,0x6c2e090a32343232\n"
".quad 0x363509383109636f,0x2e766f6d090a3009,0x3972250920323373,0x090a3b3736202c32\n"
".quad 0x20696e752e617262,0x646e6557444c2409,0x636372325a5f5f69,0x3b30325f3138315f\n"
".quad 0x365f345f744c240a,0x2f2f200a3a363431,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x383220656e696c20,0x2064616568202c36,0x2064656c6562616c\n"
".quad 0x32345f345f744c24,0x6f6c2e090a323432,0x0937350938310963,0x732e766f6d090a30\n"
".quad 0x3239722509203233,0x62090a3b3536202c,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x5f636372325a5f5f,0x0a3b30325f313831,0x34365f345f744c24,0x3c2f2f200a3a3230\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x36383220656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3232345f345f744c,0x636f6c2e090a3234\n"
".quad 0x3009383509383109,0x33732e766f6d090a,0x2c32397225092032,0x617262090a3b3020\n"
".quad 0x4c240920696e752e,0x5f5f69646e655744,0x38315f636372325a,0x4c240a3b30325f31\n"
".quad 0x383536365f345f74,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c36383220656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x32343232345f345f,0x3109636f6c2e090a,0x090a300939350938,0x203233732e766f6d\n"
".quad 0x25202c3239722509,0x444c240a3b363872,0x5a5f5f69646e6557,0x3138315f63637232\n"
".quad 0x2f2f200a3a30325f,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x383220656e696c20,0x2064616568202c36,0x2064656c6562616c,0x32345f345f744c24\n"
".quad 0x6f6c2e090a323432,0x3935330938310963,0x2e766f6d090a3009,0x3472250920323373\n"
".quad 0x3b32397225202c31,0x3109636f6c2e090a,0x0a30093136330938,0x3233732e766f6d09\n"
".quad 0x202c333972250920,0x70746573090a3b30,0x203233732e656e2e,0x25202c3332702509\n"
".quad 0x397225202c323972,0x70746573090a3b33,0x203233732e74672e,0x25202c3432702509\n"
".quad 0x377225202c323872,0x32702540090a3b37,0x2409206172622034,0x3536345f345f744c\n"
".quad 0x3c2f2f200a3b3439,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x36383220656e696c,0x6c2064616568202c,0x242064656c656261,0x3232345f345f744c\n"
".quad 0x70252140090a3234,0x0920617262203332,0x36345f345f744c24,0x5f4c240a3b343935\n"
".quad 0x3a34313938335f34,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62\n"
".quad 0x2e090a3336332065,0x3309383109636f6c,0x6873090a30093336,0x2509203233732e72\n"
".quad 0x387225202c343972,0x61090a3b32202c32,0x09203233622e646e,0x7225202c35397225\n"
".quad 0x33353536202c3439,0x2e747663090a3b35,0x732e3233662e6e72,0x3731662509203233\n"
".quad 0x0a3b35397225202c,0x3233662e766f6d09,0x202c383166250920,0x61090a3b37316625\n"
".quad 0x09203233622e646e,0x7225202c36397225,0x090a3b33202c3238,0x203233732e726873\n"
".quad 0x25202c3739722509,0x3b3831202c323872,0x33622e6c6873090a,0x2c38397225092032\n"
".quad 0x32202c3739722520,0x732e646461090a3b,0x3939722509203233,0x202c36397225202c\n"
".quad 0x63090a3b38397225,0x33662e6e722e7476,0x2509203233732e32,0x397225202c393166\n"
".quad 0x2e766f6d090a3b39,0x3266250920323366,0x3b39316625202c30,0x33662e766f6d090a\n"
".quad 0x2c31326625092032,0x3030303030663020,0x202020203b303030,0x6d090a30202f2f09\n"
".quad 0x09203233662e766f,0x6625202c32326625,0x766f6d090a3b3132,0x662509203233662e\n"
".quad 0x30306630202c3332,0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a\n"
".quad 0x2c34326625092032,0x090a3b3332662520,0x762e64322e786574,0x33662e3233752e34\n"
".quad 0x30303172257b2032,0x252c31303172252c,0x3172252c32303172,0x6665725b2c7d3330\n"
".quad 0x3166257b2c786574,0x252c303266252c38,0x343266252c323266,0x3c2f2f200a3b5d7d\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x33363320656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x313938335f345f4c,0x09636f6c2e090a34\n"
".quad 0x0a30093734093831,0x3233732e766f6d09,0x2c34303172250920,0x0a3b303031722520\n"
".quad 0x383109636f6c2e09,0x090a300933363309,0x732e38732e747663,0x3031722509203233\n"
".quad 0x3430317225202c35,0x2e70746573090a3b,0x09203233732e7165,0x7225202c35327025\n"
".quad 0x30317225202c3134,0x32702540090a3b35,0x2409206172622035,0x3534345f345f744c\n"
".quad 0x3c2f2f200a3b3634,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x33363220656e696c,0x6c2064616568202c,0x242064656c656261,0x3930345f345f744c\n"
".quad 0x6c2e7473090a3236,0x3233752e6c61636f,0x6475635f5f5b0920,0x5f6c61636f6c5f61\n"
".quad 0x393532335f726176,0x6e6f6e5f32325f38,0x705f74736e6f635f,0x302b30325f766572\n"
".quad 0x3b35357225202c5d,0x6e752e617262090a,0x345f744c24092069,0x0a3b30333731345f\n"
".quad 0x34345f345f744c24,0x2f2f200a3a363435,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x363320656e696c20,0x2064616568202c33,0x2064656c6562616c\n"
".quad 0x3938335f345f4c24,0x636f6c2e090a3431,0x0934373309383109,0x732e646461090a30\n"
".quad 0x3731722509203233,0x202c37317225202c,0x636f6c2e090a3b31,0x0935373309383109\n"
".quad 0x732e646461090a30,0x3238722509203233,0x202c32387225202c,0x636f6c2e090a3b31\n"
".quad 0x0936373309383109,0x732e627573090a30,0x3031722509203233,0x2c32317225202c36\n"
".quad 0x090a3b3731722520,0x2e3436752e747663,0x6472250920323373,0x30317225202c3132\n"
".quad 0x2e646461090a3b36,0x6472250920343675,0x32647225202c3232,0x3531647225202c31\n"
".quad 0x6c672e646c090a3b,0x2038732e6c61626f,0x202c373031722509,0x312b32326472255b\n"
".quad 0x636f6c2e090a3b5d,0x3009323509383109,0x33752e766f6d090a,0x3830317225092032\n"
".quad 0x73090a3b3536202c,0x732e71652e707465,0x3632702509203233,0x2c3730317225202c\n"
".quad 0x0a3b383031722520,0x6220363270254009,0x5f744c2409206172,0x0a3b343730335f34\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c33363320,0x6c6562616c206461,0x5f345f4c24206465,0x6d090a3431393833\n"
".quad 0x09203233752e766f,0x36202c3930317225,0x70746573090a3b37,0x203233732e71652e\n"
".quad 0x25202c3732702509,0x7225202c37303172,0x2540090a3b393031,0x2061726220373270\n"
".quad 0x335f345f744c2409,0x2f2f200a3b303333,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x363320656e696c20,0x2064616568202c33,0x2064656c6562616c\n"
".quad 0x3938335f345f4c24,0x2e766f6d090a3431,0x3172250920323375,0x0a3b3137202c3031\n"
".quad 0x71652e7074657309,0x702509203233732e,0x30317225202c3832,0x3031317225202c37\n"
".quad 0x3832702540090a3b,0x4c24092061726220,0x363835335f345f74,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363320656e\n"
".quad 0x62616c2064616568,0x5f4c242064656c65,0x0a34313938335f34,0x3233752e766f6d09\n"
".quad 0x2c31313172250920,0x6573090a3b343820,0x33732e71652e7074,0x2c39327025092032\n"
".quad 0x202c373031722520,0x090a3b3131317225,0x7262203932702540,0x345f744c24092061\n"
".quad 0x200a3b323438335f,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c333633,0x656c6562616c2064,0x335f345f4c242064\n"
".quad 0x6f6d090a34313938,0x2509203233752e76,0x3131202c32313172,0x70746573090a3b33\n"
".quad 0x203233732e71652e,0x25202c3033702509,0x7225202c37303172,0x2540090a3b323131\n"
".quad 0x2061726220303370,0x345f345f744c2409,0x2f2f200a3b383930,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x363320656e696c20,0x2064616568202c33\n"
".quad 0x2064656c6562616c,0x3938335f345f4c24,0x2e617262090a3431,0x744c240920696e75\n"
".quad 0x3b343533345f345f,0x335f345f744c240a,0x2f2f200a3a343730,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x363320656e696c20,0x2064616568202c33\n"
".quad 0x2064656c6562616c,0x3938335f345f4c24,0x636f6c2e090a3431,0x3009343509383109\n"
".quad 0x33732e766f6d090a,0x3331317225092032,0x62090a3b3438202c,0x0920696e752e6172\n"
".quad 0x69646e6557444c24,0x5f636372325a5f5f,0x0a3b31315f313831,0x33335f345f744c24\n"
".quad 0x3c2f2f200a3a3033,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x33363320656e696c,0x6c2064616568202c,0x242064656c656261,0x313938335f345f4c\n"
".quad 0x09636f6c2e090a34,0x0a30093535093831,0x3233732e766f6d09,0x2c33313172250920\n"
".quad 0x7262090a3b313720,0x240920696e752e61,0x5f69646e6557444c,0x315f636372325a5f\n"
".quad 0x240a3b31315f3138,0x3835335f345f744c,0x6c3c2f2f200a3a36,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c33363320656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x34313938335f345f,0x3109636f6c2e090a,0x090a300936350938\n"
".quad 0x203233732e766f6d,0x202c333131722509,0x617262090a3b3736,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x38315f636372325a,0x4c240a3b31315f31,0x323438335f345f74\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c33363320656e,0x62616c2064616568,0x5f4c242064656c65,0x0a34313938335f34\n"
".quad 0x383109636f6c2e09,0x6d090a3009373509,0x09203233732e766f,0x36202c3331317225\n"
".quad 0x2e617262090a3b35,0x444c240920696e75,0x5a5f5f69646e6557,0x3138315f63637232\n"
".quad 0x744c240a3b31315f,0x3a383930345f345f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3336332065,0x6562616c20646165\n"
".quad 0x345f4c242064656c,0x090a34313938335f,0x09383109636f6c2e,0x6f6d090a30093835\n"
".quad 0x2509203233732e76,0x3b30202c33313172,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x72325a5f5f69646e,0x315f3138315f6363,0x345f744c240a3b31,0x200a3a343533345f\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c333633,0x656c6562616c2064,0x335f345f4c242064,0x6c2e090a34313938\n"
".quad 0x393509383109636f,0x2e766f6d090a3009,0x3172250920323373,0x30317225202c3331\n"
".quad 0x6557444c240a3b37,0x72325a5f5f69646e,0x315f3138315f6363,0x6c3c2f2f200a3a31\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c33363320656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x34313938335f345f,0x3109636f6c2e090a\n"
".quad 0x0a30093637330938,0x3233732e766f6d09,0x202c313472250920,0x090a3b3331317225\n"
".quad 0x09383109636f6c2e,0x73090a3009313633,0x732e74672e707465,0x3133702509203233\n"
".quad 0x202c32387225202c,0x40090a3b37377225,0x6172622031337025,0x5f345f744c240920\n"
".quad 0x200a3b3630313734,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c333633,0x656c6562616c2064,0x335f345f4c242064\n"
".quad 0x6f6d090a34313938,0x2509203233732e76,0x3b30202c34313172,0x6e2e70746573090a\n"
".quad 0x2509203233732e65,0x347225202c323370,0x3431317225202c31,0x702e766f6d090a3b\n"
".quad 0x3270250920646572,0x3b32337025202c33,0x72702e766f6d090a,0x3333702509206465\n"
".quad 0x0a3b34337025202c,0x6220323370254009,0x345f4c2409206172,0x0a3b34313938335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c36383220,0x6c6562616c206461,0x345f744c24206465,0x090a32343232345f\n"
".quad 0x20696e752e617262,0x345f345f744c2409,0x4c240a3b34393536,0x303137345f345f74\n"
".quad 0x6c3c2f2f200a3a36,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c36383220656e69,0x616c206461656820,0x4c242064656c6562,0x343232345f345f74\n"
".quad 0x732e766f6d090a32,0x3131722509203233,0x73090a3b30202c35,0x732e656e2e707465\n"
".quad 0x3332702509203233,0x202c31347225202c,0x240a3b3531317225,0x3536345f345f744c\n"
".quad 0x345f4c240a3a3439,0x0a3a30373139335f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c36383220,0x6c6562616c206461\n"
".quad 0x345f744c24206465,0x090a32343232345f,0x09383109636f6c2e,0x40090a3009363733\n"
".quad 0x6172622033327025,0x5f345f744c240920,0x200a3b3234323234,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c333632\n"
".quad 0x656c6562616c2064,0x5f345f744c242064,0x73090a3236393034,0x2e6c61636f6c2e74\n"
".quad 0x5f5f5b0920323375,0x636f6c5f61647563,0x335f7261765f6c61,0x5f32325f38393532\n"
".quad 0x736e6f635f6e6f6e,0x325f766572705f74,0x7225202c5d302b30,0x617262090a3b3535\n"
".quad 0x4c240920696e752e,0x333731345f345f74,0x345f744c240a3b30,0x0a3a38333336345f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c33363220,0x6c6562616c206461,0x345f744c24206465,0x090a32363930345f\n"
".quad 0x6c61636f6c2e646c,0x722509203233752e,0x635f5f5b202c3535,0x61636f6c5f616475\n"
".quad 0x32335f7261765f6c,0x6e5f32325f383935,0x74736e6f635f6e6f,0x30325f766572705f\n"
".quad 0x646c090a3b5d302b,0x732e6c61636f6c2e,0x3837722509203233,0x6475635f5f5b202c\n"
".quad 0x5f6c61636f6c5f61,0x393532335f726176,0x6e6f6e5f36315f37,0x6e5f74736e6f635f\n"
".quad 0x302b32335f65646f,0x2e766f6d090a3b5d,0x3872250920323373,0x4c240a3b30202c32\n"
".quad 0x333731345f345f74,0x345f744c240a3a30,0x200a3a323635325f,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c333632\n"
".quad 0x656c6562616c2064,0x5f345f744c242064,0x2e090a3236393034,0x3309383109636f6c\n"
".quad 0x7573090a30093438,0x2509203233732e62,0x7225202c36313172,0x38377225202c3238\n"
".quad 0x2e70746573090a3b,0x09203233732e6567,0x7225202c35337025,0x3b37317225202c39\n"
".quad 0x203533702540090a,0x744c240920617262,0x34313335345f345f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363220656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32363930345f345f,0x3109636f6c2e090a\n"
".quad 0x090a300936330938,0x203233752e766f6d,0x202c373131722509,0x73090a3b36317225\n"
".quad 0x09203233752e7268,0x25202c3831317225,0x3631202c37313172,0x622e646e61090a3b\n"
".quad 0x3131722509203233,0x3831317225202c39,0x73090a3b3133202c,0x09203233622e6c68\n"
".quad 0x25202c3032317225,0x3b3631202c363172,0x33752e726873090a,0x3132317225092032\n"
".quad 0x2c3032317225202c,0x6873090a3b363120,0x2509203233622e6c,0x7225202c32323172\n"
".quad 0x0a3b35202c313231,0x3233732e64646109,0x2c33323172250920,0x202c393131722520\n"
".quad 0x090a3b3232317225,0x203233752e726873,0x202c343231722509,0x35202c3831317225\n"
".quad 0x622e6c6873090a3b,0x3231722509203233,0x3432317225202c35,0x61090a3b3731202c\n"
".quad 0x09203233732e6464,0x25202c3632317225,0x7225202c33323172,0x7473090a3b353231\n"
".quad 0x2e6c61626f6c672e,0x72255b0920323375,0x202c5d302b333164,0x090a3b3632317225\n"
".quad 0x09383109636f6c2e,0x726f090a30093733,0x722509203233622e,0x317225202c373231\n"
".quad 0x36373233202c3631,0x672e7473090a3b38,0x31732e6c61626f6c,0x316472255b092036\n"
".quad 0x7225202c5d342b33,0x744c240a3b373231,0x34313335345f345f,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363220656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32363930345f345f,0x3109636f6c2e090a\n"
".quad 0x0a30093738330938,0x3233732e766f6d09,0x202c383172250920,0x090a3b3631317225\n"
".quad 0x09383109636f6c2e,0x73090a3009383833,0x09203233732e6275,0x25202c3832317225\n"
".quad 0x317225202c373172,0x627573090a3b3631,0x722509203233732e,0x32317225202c3731\n"
".quad 0x73090a3b31202c38,0x09203233622e6c68,0x25202c3932317225,0x3b3631202c353572\n"
".quad 0x33752e726873090a,0x2c31367225092032,0x202c393231722520,0x766f6d090a3b3631\n"
".quad 0x722509203233752e,0x357225202c303331,0x2e726873090a3b35,0x3672250920323375\n"
".quad 0x3033317225202c32,0x4c240a3b3631202c,0x363033325f345f74,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363220656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32363930345f345f,0x3109636f6c2e090a\n"
".quad 0x0a30093039330938,0x2e6e722e74766309,0x203233752e323366,0x25202c3532662509\n"
".quad 0x6f6d090a3b313672,0x2509203233662e76,0x326625202c363266,0x2e747663090a3b35\n"
".quad 0x752e3233662e6e72,0x3732662509203233,0x0a3b32367225202c,0x3233662e766f6d09\n"
".quad 0x202c383266250920,0x6d090a3b37326625,0x09203233662e766f,0x6630202c39326625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020,0x3366250920323366\n"
".quad 0x3b39326625202c30,0x33662e766f6d090a,0x2c31336625092032,0x3030303030663020\n"
".quad 0x202020203b303030,0x6d090a30202f2f09,0x09203233662e766f,0x6625202c32336625\n"
".quad 0x786574090a3b3133,0x752e34762e64322e,0x7b203233662e3233,0x72252c3133317225\n"
".quad 0x333172252c323331,0x7d34333172252c33,0x657465646f6e5b2c,0x2c363266257b2c78\n"
".quad 0x3366252c38326625,0x5d7d323366252c30,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c33363220656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32363930345f345f,0x3109636f6c2e090a,0x0a30093239330938\n"
".quad 0x3233732e766f6d09,0x2c35333172250920,0x0a3b313331722520,0x3233732e766f6d09\n"
".quad 0x2c36333172250920,0x0a3b343331722520,0x61636f6c2e747309,0x5b09203233752e6c\n"
".quad 0x6c5f616475635f5f,0x7261765f6c61636f,0x315f37393532335f,0x6f635f6e6f6e5f36\n"
".quad 0x65646f6e5f74736e,0x202c5d302b32335f,0x090a3b3533317225,0x09383109636f6c2e\n"
".quad 0x6d090a3009333933,0x09203233732e766f,0x7225202c36317225,0x6c2e090a3b363331\n"
".quad 0x363209383109636f,0x646461090a300933,0x722509203436752e,0x647225202c333164\n"
".quad 0x090a3b38202c3331,0x203233732e627573,0x25202c3231722509,0x0a3b31202c323172\n"
".quad 0x656e2e7074657309,0x702509203233732e,0x35317225202c3633,0x0a3b32317225202c\n"
".quad 0x6220363370254009,0x5f744c2409206172,0x3b32363930345f34,0x5f363842424c240a\n"
".quad 0x6d6d756d37315a5f,0x4b43527570677265,0x3031506c656e7265,0x6f6f43686374614d\n"
".quad 0x53694b5063506472,0x2e090a3a69695f33,0x3409383109636f6c,0x7865090a30093130\n"
".quad 0x57444c240a3b7469,0x37315a5f5f646e65,0x706772656d6d756d,0x656e72654b435275\n"
".quad 0x6374614d3031506c,0x635064726f6f4368,0x69695f3353694b50,0x202f2f207d090a3a\n"
".quad 0x6d6d756d37315a5f,0x4b43527570677265,0x3031506c656e7265,0x6f6f43686374614d\n"
".quad 0x53694b5063506472,0x00000a0a69695f33\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[4562];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_20", (char*)__deviceText_$sm_20$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_20$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"436dc3007ad70603",(char*)"mummergpu.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x27bbc0ac,&__elfEntries1};
# 3 "mummergpu.cudafe1.stub.c" 2 3
struct __T20 {struct MatchCoord *__par0;char *__par1;const int *__par2;const int *__par3;int __par4;int __par5;int __dummy_field;};
struct __T21 {struct MatchCoord *__par0;char *__par1;const int *__par2;const int *__par3;int __par4;int __par5;int __dummy_field;};
extern void __device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *, char *, const int *, const int *, const int, const int);
extern void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *, char *, const int *, const int *, const int, const int);
extern"C" {void ** __cudaRegisterFatBinary2(void*, size_t);}
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_nodetex(void) __attribute__((__constructor__));
void __device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii(struct MatchCoord *__par0, char *__par1, const int *__par2, const int *__par3, const int __par4, const int __par5){ struct __T20 *__T27 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T27->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T27->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T27->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T27->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T27->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T27->__par5) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuKernel)); (void)cudaLaunch(((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuKernel))); };}
void mummergpuKernel( struct MatchCoord *__cuda_0,char *__cuda_1,const int *__cuda_2,const int *__cuda_3,const int __cuda_4,const int __cuda_5)
# 74 "./mummergpu_kernel.cu"
{__device_stub__Z15mummergpuKernelP10MatchCoordPcPKiS3_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 228 "./mummergpu_kernel.cu"
}
# 1 "mummergpu.cudafe1.stub.c"
void __device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( struct MatchCoord *__par0, char *__par1, const int *__par2, const int *__par3, const int __par4, const int __par5) { struct __T21 *__T28 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T28->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T28->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T28->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T28->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T28->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T28->__par5) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel)); (void)cudaLaunch(((char *)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel))); }; }
void mummergpuRCKernel( struct MatchCoord *__cuda_0,char *__cuda_1,const int *__cuda_2,const int *__cuda_3,const int __cuda_4,const int __cuda_5)
# 242 "./mummergpu_kernel.cu"
{__device_stub__Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 402 "./mummergpu_kernel.cu"
}
# 1 "mummergpu.cudafe1.stub.c"
static void __sti____cudaRegisterAll_17_mummergpu_cpp1_ii_nodetex(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary2((void*)(&__fatDeviceText), sizeof(__deviceText_$compute_20$)); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuRCKernel), (char*)"_Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii", "_Z17mummergpuRCKernelP10MatchCoordPcPKiS3_ii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(struct MatchCoord *, char *, const int *, const int *, const int, const int))mummergpuKernel), (char*)"_Z15mummergpuKernelP10MatchCoordPcPKiS3_ii", "_Z15mummergpuKernelP10MatchCoordPcPKiS3_ii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&nodetex, (const void**)"nodetex", "nodetex", 2, 0, 0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&childrentex, (const void**)"childrentex", "childrentex", 2, 0, 0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&reftex, (const void**)"reftex", "reftex", 2, 0, 0); }
# 1 "mummergpu.cudafe1.stub.c" 2
