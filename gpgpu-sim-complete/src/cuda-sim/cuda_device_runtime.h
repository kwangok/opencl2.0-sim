#ifndef CUDA_DEVICE_RUNTIME_INCLUDED
#define CUDA_DEVICE_RUNTIME_INCLUDED

void gpgpusim_cuda_getParameterBufferV2(
		const class ptx_instruction * pI,
		class ptx_thread_info * thread,
		const class function_info * target_func);

void gpgpusim_cuda_launchDeviceV2(
		const class ptx_instruction * pI,
		class ptx_thread_info * thread,
		const class function_info * target_func);

void gpgpusim_cuda_streamCreateWithFlags(
		const ptx_instruction * pI,
		ptx_thread_info * thread,
		const class function_info * target_func);

#endif
