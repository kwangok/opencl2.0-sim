#include <iostream>
#include <map>

#define __CUDA_RUNTIME_API_H__

#include <builtin_types.h>
#include <driver_types.h>

#include "cuda_device_runtime.h"
#include "ptx_ir.h"
#include "cuda-sim.h"
#include "../stream_manager.h"
#include "../gpgpu-sim/gpu-sim.h"

#define DEV_RUNTIME_REPORT(a) \
	if( g_debug_execution ) \
	{ \
		std::cout << __FILE__ << ", " << __LINE__ << ": " << a << "\n"; \
		std::cout.flush(); \
	}

class device_launch_config_t {
public:
	device_launch_config_t() {}
	
	device_launch_config_t(
		dim3 _grid_dim,
		dim3 _block_dim,
		unsigned int _shared_mem,
		function_info * _entry):
			grid_dim(_grid_dim),
			block_dim(_block_dim),
			shared_mem(_shared_mem),
			entry(_entry) {}
	
	dim3 grid_dim;
	dim3 block_dim;
	unsigned int shared_mem;
	function_info * entry;
};

std::map<void *, device_launch_config_t> g_cuda_device_launch_param_map;
std::list<stream_operation> g_cuda_device_launch_op;
extern stream_manager *g_stream_manager;
unsigned long long g_total_param_size = 0;
unsigned long long g_max_total_param_size = 0;

/*
 * TODO: Implement cudaGetParameterBufferV2 function
 *
 * extern __device__ __cudart_builtin__ void * CUDARTAPI
 * cudaGetParameterBufferV2(void *func, dim3 gridDimension, dim3 blockDimension, unsigned int sharedMemSize);
 *
 * The first parameter is a pointer to the kernel to be launched, and the
 * other parameters specify the launch configuration, i.e., as grid
 * dimension, block dimension, and shared memory size. The maximum size
 * of the parameter buffer is 4KB.
 */

void gpgpusim_cuda_getParameterBufferV2(
		const ptx_instruction * pI,
		ptx_thread_info * thread,
		const function_info * target_func)
{
	unsigned n_return = target_func->has_return();
	unsigned n_args = target_func->num_args();

	// Must have a return value
	assert(n_return);
	// There must be exactly 4 parameters passed in
	assert(n_args == 4);

	function_info * child_kernel_entry;
	struct dim3 grid_dim, block_dim;
	unsigned int shared_mem;

	for (unsigned arg = 0; arg < n_args; ++arg)
	{
		const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
		const symbol *formal_param = target_func->get_arg(arg);
		unsigned size=formal_param->get_size_in_bytes();
		assert( formal_param->is_param_local() );
		assert( actual_param_op.is_param_local() );
		addr_t from_addr = actual_param_op.get_symbol()->get_address();

		if (arg == 0)
		{
			// TODO: Handle kernel function pointer
			assert(size == sizeof(function_info*));
			unsigned long long buf;
			// TODO: Is this a valid type casting?
			thread->m_local_mem->read(from_addr, size, &buf);
			child_kernel_entry = (function_info*)buf;
			assert(child_kernel_entry);
			DEV_RUNTIME_REPORT("Child kernel name: " << child_kernel_entry->get_name());
		}
		else if (arg == 1)
		{
			// Handle grid dimension
			assert(size == sizeof(struct dim3));
			thread->m_local_mem->read(from_addr, size, &grid_dim);
			DEV_RUNTIME_REPORT("Grid dimension = (" << grid_dim.x << ", " << grid_dim.y << ", " << grid_dim.z << ")");
		}
		else if (arg == 2)
		{
			// Handle block dimension
			assert(size == sizeof(struct dim3));
			thread->m_local_mem->read(from_addr, size, &block_dim);
			DEV_RUNTIME_REPORT("Block dimension = (" << block_dim.x << ", " << block_dim.y << ", " << block_dim.z << ")");
		}
		else if (arg == 3)
		{
			// TODO: Handle shared memory size
			assert(size == sizeof(unsigned int));
			// TODO: What is going on here?
			thread->m_local_mem->read(from_addr, size, &shared_mem);
			DEV_RUNTIME_REPORT("Shared memory " << shared_mem);
		}
	}
	// TODO: Allocate parameter buffer in global memory
	// Get total child kernel argument size and malloc buffer in global memory
	unsigned child_kernel_arg_size = child_kernel_entry->get_args_aligned_size();
	void * param_buffer = thread->get_gpu()->gpu_malloc(child_kernel_arg_size);
	g_total_param_size += ((child_kernel_arg_size + 255) / 256 * 256);
	DEV_RUNTIME_REPORT(
		"child kernel arg size total " << child_kernel_arg_size << ", parameter buffer allocated at " << param_buffer
	);

	if(g_total_param_size > g_max_total_param_size)
	{
		g_max_total_param_size = g_total_param_size;
	}

	// Store param buffer address and launch config
	device_launch_config_t device_launch_config(grid_dim, block_dim, shared_mem, child_kernel_entry);
	assert(g_cuda_device_launch_param_map.find(param_buffer) == g_cuda_device_launch_param_map.end());
	g_cuda_device_launch_param_map[param_buffer] = device_launch_config;

	// Copy the buffer address to retval0
	const operand_info &actual_return_op = pI->operand_lookup(0); //retval0
	const symbol *formal_return = target_func->get_return_var(); //void *
	unsigned int return_size = formal_return->get_size_in_bytes();
	DEV_RUNTIME_REPORT("cudaGetParameterBufferV2 return value has size of " << return_size);
	assert(actual_return_op.is_param_local());
	assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(void *));
	addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
	thread->m_local_mem->write(ret_param_addr, return_size, &param_buffer, NULL, NULL);
}

/*
 * TODO: Implement cudaLaunchDeviceV2 function
 *
 * extern __device__ __cudart_builtin__ cudaError_t CUDARTAPI
 * cudaLaunchDeviceV2(void *parameterBuffer, cudaStream_t stream);
 *
 * The first parameter is a pointer to the parameter buffer, and the
 * second parameter is the stream associated with the launch.
 */

void gpgpusim_cuda_launchDeviceV2(
		const ptx_instruction * pI,
		ptx_thread_info * thread,
		const function_info * target_func)
{
	unsigned n_return = target_func->has_return();
	unsigned n_args = target_func->num_args();

	// Must have a return value
	assert(n_return);
	// There must be exactly 2 parameters passed in
	assert(n_args == 2);

	kernel_info_t * device_grid = NULL;
	function_info * device_kernel_entry = NULL;
	void * parameter_buffer;
	struct CUstream_st * child_stream;
	device_launch_config_t config;
	stream_operation device_launch_op;

	for (unsigned arg = 0; arg < n_args; ++arg)
	{
		const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
		const symbol *formal_param = target_func->get_arg(arg);
		unsigned size=formal_param->get_size_in_bytes();
		assert( formal_param->is_param_local() );
		assert( actual_param_op.is_param_local() );
		addr_t from_addr = actual_param_op.get_symbol()->get_address();

		if (arg == 0)
		{
			// TODO: Handle parameter buffer
			assert(size == sizeof(void *));
			thread->m_local_mem->read(from_addr, size, &parameter_buffer);
			assert((size_t)parameter_buffer >= GLOBAL_HEAP_START);
			DEV_RUNTIME_REPORT("Parameter buffer locating at global memory " << parameter_buffer);

			// Get either child grid or native grid info through parameter_buffer address
			assert(g_cuda_device_launch_param_map.find(parameter_buffer) != g_cuda_device_launch_param_map.end());
			config = g_cuda_device_launch_param_map[parameter_buffer];
			device_kernel_entry = config.entry;
			DEV_RUNTIME_REPORT("find device kernel " << device_kernel_entry->get_name());

			// Copy data in parameter_buffer to device kernel param memory
			unsigned device_kernel_arg_size = device_kernel_entry->get_args_aligned_size();
			DEV_RUNTIME_REPORT("device_kernel_arg_size " << device_kernel_arg_size);
			memory_space *device_kernel_param_mem;

			// Create child kernel_info_t and index it with parameter_buffer address
			device_grid = new kernel_info_t(config.grid_dim, config.block_dim, device_kernel_entry);
			device_grid->launch_cycle = gpu_sim_cycle + gpu_tot_sim_cycle;
			kernel_info_t & parent_grid = thread->get_kernel();
			DEV_RUNTIME_REPORT(
				"child kernel launched by " << parent_grid.name() << ", cta (" <<
				thread->get_ctaid().x << ", " << thread->get_ctaid().y << ", " << thread->get_ctaid().z <<
				"), thread (" << thread->get_tid().x << ", " << thread->get_tid().y << ", " << thread->get_tid().z <<
				")"
			);
			device_grid->set_parent(&parent_grid, thread->get_ctaid(), thread->get_tid());  
			// TODO: Set child kernel stream
			device_launch_op = stream_operation(device_grid, true, NULL);
			device_kernel_param_mem = device_grid->get_param_memory();

			size_t param_start_address = 0;
			// Copy in word
			for(unsigned n = 0; n < device_kernel_arg_size; n += 4)
			{
				unsigned int oneword;
				thread->get_gpu()->get_global_memory()->read((size_t)parameter_buffer + n, 4, &oneword);
				device_kernel_param_mem->write(param_start_address + n, 4, &oneword, NULL, NULL); 
			}
		}
		else if (arg == 1)
		{
			// TODO: Handle device-side stream (optional)
			assert(size == sizeof(cudaStream_t));
			thread->m_local_mem->read(from_addr, size, &child_stream);
		}
	}
	// TODO: Launch child kernel
	g_cuda_device_launch_op.push_back(device_launch_op);
	g_cuda_device_launch_param_map.erase(parameter_buffer);

	// Set retval0
	const operand_info &actual_return_op = pI->operand_lookup(0); //retval0
	const symbol *formal_return = target_func->get_return_var(); //cudaError_t
	unsigned int return_size = formal_return->get_size_in_bytes();
	DEV_RUNTIME_REPORT("cudaLaunchDeviceV2 return value has size of " << return_size);
	assert(actual_return_op.is_param_local());
	assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(cudaError_t));
	cudaError_t error = cudaSuccess;
	addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
	thread->m_local_mem->write(ret_param_addr, return_size, &error, NULL, NULL);
}
