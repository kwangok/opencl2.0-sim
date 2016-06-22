#include <iostream>
#include <map>

#define __CUDA_RUNTIME_API_H__
#undef  __CUDA_RUNTIME_API_H__

#include "cuda_device_runtime.h"
#include "ptx_ir.h"
#include "ptx_sim.h"
#include "cuda-sim.h"
#include "../gpgpu-sim/gpu-sim.h"
#include "gpu/gpgpu-sim/cuda_gpu.hh"

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

std::map<new_addr_type, device_launch_config_t> g_cuda_device_launch_param_map;
std::list<stream_operation> g_cuda_device_launch_op;
extern stream_manager *g_stream_manager;
unsigned long long g_total_param_size = 0;
unsigned long long g_max_total_param_size = 0;

// deicide
// For stream finding
unsigned long long int cta_map_index_head = 0;
std::map<unsigned long long int, dim3>cta_map;
// deicide

// For pagetable
unsigned char
touchPages(unsigned char *ptr, size_t size)
{
    unsigned char sum = 0;
    for (unsigned i = 0; i < size; i += 4096) {
        sum += ptr[i];
    }
    sum += ptr[size-1];
    return sum;
}

/*
 * This function implements PTX built-in function cudaGetParameterBufferV2
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
    assert(pI->m_is_cdp == 2);

	unsigned n_return = target_func->has_return();
	unsigned n_args = target_func->num_args();

	// Must have a return value
	assert(n_return);
	// There must be exactly 4 parameters passed in
	assert(n_args == 4);

	function_info * child_kernel_entry;
	struct dim3 grid_dim, block_dim;
	unsigned int shared_mem;

    int step = thread->m_cdp_execution_step;
    int arg = step;
    addr_t from_addr = 0;
    unsigned size;
    if (arg < 4)
    {
        const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
        const symbol *formal_param = target_func->get_arg(arg);
        size = formal_param->get_size_in_bytes();
        assert( formal_param->is_param_local() );
        assert( actual_param_op.is_param_local() );
        from_addr = actual_param_op.get_symbol()->get_address();
    }

    if (step == 0)
    {
        // Step 0: Read out kernel function pointer from param0 in local memory (through gem5-gpu memory system)
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        // Handle kernel function pointer
        assert(size == sizeof(function_info*));
        // Leave local memory read to gem5-gpu
        thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        if (thread->m_cdp_execution_substep >= 2)
            thread->m_cdp_execution_step = 1;
    }
    else if (step == 1)
    {
        // Step 1: Read out grid dimension from param1 in local memory (through gem5-gpu memory system)
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        // Handle grid dimension
        assert(size == sizeof(struct dim3));
        thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        if (thread->m_cdp_execution_substep >= 3)
            thread->m_cdp_execution_step = 2;
    }
    else if (step == 2)
    {
        // Step 2: Read out block dimension from param2 in local memory (through gem5-gpu memory system)
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        // Handle block dimension
        assert(size == sizeof(struct dim3));
        thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        if (thread->m_cdp_execution_substep >= 3)
            thread->m_cdp_execution_step = 3;
    }
    else if (step == 3)
    {
        // Step 3: Read out shared memory size from param3 in local memory (through gem5-gpu memory system)
        if (thread->m_cdp_execution_step != thread->m_cdp_memory_step) return;
        // Handle shared memory size
        assert(size == sizeof(unsigned int));
        thread->m_last_effective_address = from_addr;
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_step = 4;
    }
    else if (step == 4)
    {
        // Step 4: Allocate space in global memory for child kernel parameter and write it to return address
        // TODO: Integrate this part with the original gpgpu-sim style set_data
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        // Copy the buffer address to retval0
        // retval0
        const operand_info &actual_return_op = pI->operand_lookup(0);
        // void *
        const symbol * formal_return = target_func->get_return_var();
        unsigned int return_size = formal_return->get_size_in_bytes();
        assert(actual_return_op.is_param_local());
        // assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(void *));
        addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
        if (thread->m_cdp_execution_substep == 0)
        {
            // Allocate parameter buffer in global memory
            // Get total child kernel argument size and malloc buffer in global memory
            function_info * child_kernel_entry = (function_info*)(thread->m_child_kernel_entry);
            unsigned child_kernel_arg_size = child_kernel_entry->get_args_aligned_size();

            void * param_buffer = NULL;
            int error = posix_memalign((void**)&param_buffer, 128, child_kernel_arg_size);
            if (error) {
                fprintf(stderr, "ERROR: cudaMalloc failed with code: %d, Exiting...\n", error);
                exit(-1);
            }
            touchPages((unsigned char*)param_buffer, child_kernel_arg_size);
            CudaGPU * gpu = thread->get_gpu()->gem5CudaGPU;
            gpu->registerDeviceMemory(gpu->getThreadContext(), (Addr)param_buffer, child_kernel_arg_size);

            g_total_param_size += ((child_kernel_arg_size + 255) / 256 * 256);

            if(g_total_param_size > g_max_total_param_size)
            {
                g_max_total_param_size = g_total_param_size;
            }

            // Store param buffer address and launch config
            device_launch_config_t device_launch_config(
                                    thread->m_grid_dim, 
                                    thread->m_block_dim, 
                                    thread->m_shared_mem_size, 
                                    child_kernel_entry);
            assert(g_cuda_device_launch_param_map.find((new_addr_type)param_buffer) == g_cuda_device_launch_param_map.end());
            g_cuda_device_launch_param_map[(new_addr_type)param_buffer] = device_launch_config;

            // Set write data
            thread->m_cudaGetParameterBufferRet = malloc(sizeof(unsigned long long));
            *((unsigned long long*)(thread->m_cudaGetParameterBufferRet)) = (unsigned long long)param_buffer;
            // thread->m_cdp_data = malloc(sizeof(unsigned long long));
            // *((unsigned long long*)(thread->m_cdp_data)) = (unsigned long long)param_buffer;
        }

        thread->m_last_effective_address = ret_param_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        if (thread->m_cdp_execution_substep >= 2)
            thread->m_cdp_execution_step = 5;
    }
    else if (step == 5)
    {
        fprintf(stderr, "cudaGetParameterBufferV2 done\n");
    }
    else
    {
        fprintf(stderr, "Unknown step for cudaGetParameterBufferV2\n");
    }
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
    assert(pI->m_is_cdp == 4);

	unsigned n_return = target_func->has_return();
	unsigned n_args = target_func->num_args();

	// Must have a return value
	assert(n_return);
	// There must be exactly 2 parameters passed in
	assert(n_args == 2);

    int step = thread->m_cdp_execution_step;
    int arg = step;
    addr_t from_addr = 0;
    unsigned size;
    if (arg < 2)
    {
        const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
        const symbol *formal_param = target_func->get_arg(arg);
        size = formal_param->get_size_in_bytes();
        assert( formal_param->is_param_local() );
        assert( actual_param_op.is_param_local() );
        from_addr = actual_param_op.get_symbol()->get_address();
    }

    if (step == 0)
    {
        // Step 0: Read out parameter buffer address from param0 in local memory (through gem5-gpu memory system)
        // Then read out the parameter buffer content in global memory and write it to child kernel's parameter memory
        // Handle parameter buffer
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        if (thread->m_cdp_execution_substep < 2)
        {
            assert(size == sizeof(new_addr_type));
            thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
            thread->m_cdp_expected_address = thread->m_last_effective_address;
            thread->m_last_memory_space = local_space;
            thread->m_cdp_execution_substep++;
        }
        else if (thread->m_cdp_execution_substep == 2)
        {
            // Get either child grid or native grid info through parameter_buffer address
            assert(g_cuda_device_launch_param_map.find(thread->m_parameter_buffer) != g_cuda_device_launch_param_map.end());
            device_launch_config_t config = g_cuda_device_launch_param_map[thread->m_parameter_buffer];
            function_info * device_kernel_entry = config.entry;
            thread->m_device_grid = new kernel_info_t(config.grid_dim, config.block_dim, device_kernel_entry);
            thread->m_device_grid->set_inst_base_vaddr(thread->get_gpu()->gem5CudaGPU->getInstBaseVaddr());
            thread->m_device_grid->launch_cycle = gpu_sim_cycle + gpu_tot_sim_cycle;
            kernel_info_t & parent_grid = thread->get_kernel();
            thread->m_device_grid->set_parent(&parent_grid, thread->get_ctaid(), thread->get_tid());  

            thread->m_device_launch_op = stream_operation(thread->m_device_grid, false, NULL);
            (thread->m_device_launch_op).set_type(stream_child_kernel_launch);
            (thread->m_device_launch_op).setThreadContext(thread->get_gpu()->gem5CudaGPU->getThreadContext());

            thread->m_device_kernel_arg_total_words = device_kernel_entry->get_args_aligned_size() / 4;
            if (device_kernel_entry->get_args_aligned_size() % 4 != 0) thread->m_device_kernel_arg_total_words++;

            thread->m_last_effective_address = thread->m_parameter_buffer;
            thread->m_cdp_expected_address = thread->m_last_effective_address;
            thread->m_last_memory_space = global_space;
            thread->m_cdp_execution_substep++;
        }
        else
        {
            thread->m_last_effective_address = thread->m_parameter_buffer + ((thread->m_cdp_execution_substep - 2) * sizeof(unsigned int));
            thread->m_cdp_expected_address = thread->m_last_effective_address;
            thread->m_last_memory_space = global_space;
            thread->m_cdp_execution_substep++;
            if ((thread->m_cdp_execution_substep - 2) >= thread->m_device_kernel_arg_total_words)
                thread->m_cdp_execution_step = 1;
        }
    }
    else if (step == 1)
    {
        // Step 1: Read out child kernel's stream hold from param1 in local memory (through gem5-gpu memory system)
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        assert(size == sizeof(unsigned long long int));

        thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        // Load 2 words
        if (thread->m_cdp_execution_substep >= 2) thread->m_cdp_execution_step = 2;
    }
    else if (step == 2)
    {
        // Step 2: Write the return value to return address
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;

        assert(cta_map.find(thread->m_child_stream_hold) != cta_map.end());
        dim3 target_ctaid = cta_map[thread->m_child_stream_hold];
        assert(target_ctaid.x == thread->get_ctaid().x && target_ctaid.y == thread->get_ctaid().y && target_ctaid.z == thread->get_ctaid().z);
        kernel_info_t & parent_kernel = thread->get_kernel();
        struct stream_group_id sg_id;
        sg_id.kernel_id = parent_kernel.get_uid();
        sg_id.cta_id    = thread->get_ctaid();
        CUstream_st * child_stream = parent_kernel.get_default_stream_cta(sg_id);
        // Must be a device stream
        assert(child_stream->getType() == stream_device);
        (thread->m_device_launch_op).set_stream(child_stream);

        g_cuda_device_launch_op.push_back(thread->m_device_launch_op);
        g_cuda_device_launch_param_map.erase(thread->m_parameter_buffer);
        // Set retval0
        const operand_info &actual_return_op = pI->operand_lookup(0);
        // cudaError_t
        const symbol *formal_return = target_func->get_return_var();
        unsigned int return_size = formal_return->get_size_in_bytes();
        assert(actual_return_op.is_param_local());
        // assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(cudaError_t));
        thread->m_cdp_data = malloc(sizeof(cudaError_t));
        *((cudaError_t*)(thread->m_cdp_data)) = cudaSuccess;
        addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
        thread->m_last_effective_address = ret_param_addr;
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = param_space_local;
        thread->m_cdp_execution_step = 3;
    }
    else if (step == 3)
    {
        fprintf(stderr, "cudaLaunchDeviceV2 done\n");
    }
    else
    {
        fprintf(stderr, "Unknown step for cudaLaunchDeviceV2\n");
    }
}

/*
 * TODO: Implement cudaStreamCreateWithFlags function
 *
 * extern __device__ __cudart_builtin__ cudaError_t CUDARTAPI
 * cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned int flags);
 *
 * The first parameter is a pointer to a new stream to be created, and the
 * second parameter is to determine the bahviors of the new stream
 */
void gpgpusim_cuda_streamCreateWithFlags(const ptx_instruction * pI, ptx_thread_info * thread, const function_info * target_func) {
    if (thread->m_cdp_execution_step != thread->m_cdp_memory_step) return;
    assert(pI->m_is_cdp == 1);

	unsigned n_return = target_func->has_return();
	unsigned n_args = target_func->num_args();

	// Must have a return value
	assert(n_return);
	// There must be exactly 2 parameters passed in
	assert(n_args == 2);

	unsigned int flags;
    assert(thread->m_cdp_execution_step <= 4);
    unsigned step = thread->m_cdp_execution_step;
    unsigned arg = (thread->m_cdp_execution_step >= 2) ? 1 : thread->m_cdp_execution_step;
    const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
    const symbol *formal_param = target_func->get_arg(arg);
    unsigned size = formal_param->get_size_in_bytes();
    assert(formal_param->is_param_local());
    assert(actual_param_op.is_param_local());
    addr_t from_addr = actual_param_op.get_symbol()->get_address();

    if (step == 0)
    {
        // Handle cudaStream_t * pStream, address of cudaStream_t
        // We assume here gem5-gpu is a 64-bit system
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        assert(size == sizeof(struct CUstream_st *));
        // Leave local memory read to gem5-gpu
        thread->m_last_effective_address = from_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        // Load 2 words
        if (thread->m_cdp_execution_substep >= 2)
            thread->m_cdp_execution_step = 1; 
    }
    else if (step == 1)
    {   
        // Handle unsigned int flags, MUST be cudaStreamNonBlocking
        assert(size == sizeof(unsigned int));
        // Leave local memory read to gem5-gpu
        thread->m_last_effective_address = from_addr;
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_step = 2;
    }
    else if (step == 2)
    {
        if (thread->m_cdp_execution_substep != thread->m_cdp_memory_substep) return;
        // Create stream and write back to param0
        // deicide: 
        // Create cta_map for mapping index and ctaid
        // We don't write the whole stream to the memory, but rather write an index hold for it
        if (thread->m_cdp_execution_substep == 0)
        {
            assert(thread->m_child_stream_flag == cudaStreamNonBlocking);
            struct stream_group_id sg_id;
            sg_id.kernel_id = thread->get_kernel().get_uid();
            sg_id.cta_id    = thread->get_ctaid();
            thread->get_kernel().create_stream_cta(sg_id);
            cta_map[cta_map_index_head] = thread->get_ctaid();
            // thread->m_cdp_data = malloc(sizeof(unsigned long long int));
            // *((unsigned long long int*)(thread->m_cdp_data)) = cta_map_index_head;
            thread->m_cudaStreamCreateWithFlagsStream = malloc(sizeof(unsigned long long int));
            *((unsigned long long int*)(thread->m_cudaStreamCreateWithFlagsStream)) = cta_map_index_head;
            cta_map_index_head++;
        }
        // Leave local memory write to gem5-gpu
        thread->m_last_effective_address = thread->m_child_stream_addr + (thread->m_cdp_execution_substep * sizeof(unsigned int));
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = local_space;
        thread->m_cdp_execution_substep++;
        if (thread->m_cdp_execution_substep >= 2)
            thread->m_cdp_execution_step = 3;
    }
    else if (step == 3)
    {
        // Set retval0
        const operand_info &actual_return_op = pI->operand_lookup(0);
        // cudaError_t
        const symbol *formal_return = target_func->get_return_var();
        unsigned int return_size = formal_return->get_size_in_bytes();
        assert(actual_return_op.is_param_local());
        // assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(cudaError_t));
        thread->m_cdp_data = malloc(sizeof(cudaError_t));
        *((cudaError_t*)(thread->m_cdp_data)) = cudaSuccess;
        addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
        thread->m_last_effective_address = ret_param_addr;
        thread->m_cdp_expected_address = thread->m_last_effective_address;
        thread->m_last_memory_space = param_space_local;
        thread->m_cdp_execution_step = 4;
    }
    else if (step == 4)
    {
        fprintf(stderr, "cudaStreamCreateWithFlags done\n");
    }
    else
    {
        fprintf(stderr, "Unknown step for cudaStreamCreateWithFlags\n");
    }
}

bool launch_one_device_kernel() {
    if (!g_cuda_device_launch_op.empty())
    {
        stream_operation op = g_cuda_device_launch_op.front();
        assert(op.get_type() == stream_child_kernel_launch);
        g_stream_manager->push(op);
        g_cuda_device_launch_op.pop_front();
        return true;
    }
    return false;
}
