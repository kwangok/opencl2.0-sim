// Copyright (c) 2009-2011, Tor M. Aamodt
// The University of British Columbia
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// Redistributions in binary form must reproduce the above copyright notice, this
// list of conditions and the following disclaimer in the documentation and/or
// other materials provided with the distribution.
// Neither the name of The University of British Columbia nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "cuda_device_printf.h"
#include "ptx_ir.h"

void decode_space( memory_space_t &space, ptx_thread_info *thread, const operand_info &op, memory_space *&mem, addr_t &addr);

int my_cuda_printf(const char *fmtstr, const char *arg_list)
{
   FILE *fp = stdout;
   unsigned i = 0, j = 0;
   unsigned arg_offset = 0;
   char buf[64];
   bool in_fmt = false;
   int ret_value = 0;
   while (fmtstr[i]) {
      char c = fmtstr[i++];
      if (!in_fmt) {
         if (c != '%') {
            ret_value += fprintf(fp, "%c", c);
         } else {
            in_fmt = true;
            buf[0] = c;
            j = 1;
         }
      } else {
         if (!(c == 'u' || c == 'f' || c == 'd')) {
            printf("GPGPU-Sim PTX: ERROR ** printf parsing support is limited to %%u, %%f, %%d at present");
            abort();
         }
         buf[j] = c;
         buf[j+1] = 0;
         void * ptr = (void*)&arg_list[arg_offset];
         //unsigned long long value = ((unsigned long long*)arg_list)[arg_offset];
         if (c == 'u' || c == 'd') {
            ret_value += fprintf(fp, buf, *((unsigned long long*)ptr));
         } else if (c == 'f') {
            double tmp = *((double*)ptr);
            ret_value += fprintf(fp, buf, tmp);
         }
         arg_offset++;
         in_fmt = false;
      }
   }
   return ret_value;
}

/*
 * Currently the PTX built-in function vprintf is still
 * in the developing stage and not ready for use.
 * TODO: Fully implement vprintf
 */
void gpgpusim_cuda_vprintf(const ptx_instruction * pI, ptx_thread_info * thread, const function_info * target_func ) 
{
    char *fmtstr = NULL;
    char *arg_list = NULL;
    unsigned n_return = target_func->has_return();
    unsigned n_args = target_func->num_args();
    assert( n_args == 2 );

    int step = thread->m_vprintf_execution_step;
    int arg = step;
    addr_t from_addr = 0;
    unsigned size;

    if (step < 2)
    {
        const operand_info &actual_param_op = pI->operand_lookup(n_return+1+arg);
        const symbol *formal_param = target_func->get_arg(arg);
        unsigned size=formal_param->get_size_in_bytes();
        assert( formal_param->is_param_local() );
        assert( actual_param_op.is_param_local() );
        from_addr = actual_param_op.get_symbol()->get_address();
    }

    if (step == 0)
    {
        if (thread->m_vprintf_execution_substep != thread->m_vprintf_memory_substep) return;
        if (thread->m_vprintf_execution_substep == 0)
        {
            thread->m_last_effective_address = from_addr;
            thread->m_last_memory_space = local_space;
            thread->m_vprintf_execution_substep = 1;
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "vprintf step 0 substep 0 sent read request to addr 0x%lx, thread address = %p\n", thread->m_last_effective_address, thread);
            }
            // deicide
        }
        else if (thread->m_vprintf_execution_substep == 1)
        {
            thread->m_last_effective_address = from_addr + 4;
            thread->m_last_memory_space = local_space;
            thread->m_vprintf_execution_substep = 2;
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "vprintf step 0 substep 1 sent read request to addr 0x%lx, thread address = %p\n", thread->m_last_effective_address, thread);
            }
            // deicide
        }
        else
        {
            if (thread->m_vprintf_execution_substep == 2) (thread->m_fmtstr).clear();
            thread->m_last_effective_address = thread->m_fmtstr_addr + (thread->m_fmtstr).size();
            thread->m_last_memory_space = global_space;
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "fmtstr address = 0x%llx\n", thread->m_fmtstr_addr);
                fprintf(stderr, "vprintf step 0 substep %d sent read request to addr 0x%lx, thread address = %p\n", thread->m_vprintf_execution_substep, thread->m_last_effective_address, thread);
            }
            // deicide
            thread->m_vprintf_execution_substep++;
        }
    }
    else if (step == 1)
    {
        if (thread->m_vprintf_execution_substep != thread->m_vprintf_memory_substep) return;
        if (thread->m_vprintf_execution_substep == 0)
        {
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "fmtstr:\n");
                std::vector<char>::iterator it;
                for (it = (thread->m_fmtstr).begin(); it != (thread->m_fmtstr).end(); ++it)
                {
                    fprintf(stderr, "%c", *it);
                }
            }
            // deicide
            thread->m_last_effective_address = from_addr;
            thread->m_last_memory_space = local_space;
            thread->m_vprintf_execution_substep = 1;
        }
        else if (thread->m_vprintf_execution_substep == 1)
        {
            thread->m_last_effective_address = from_addr + 4;
            thread->m_last_memory_space = local_space;
            thread->m_vprintf_execution_substep = 2;
        }
        else
        {
            if (thread->m_vprintf_execution_substep == 2) (thread->m_arg_list).clear();
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "local_mem_framesize = %d\n", thread->get_finfo()->local_mem_framesize());
            }
            // deicide
            if (thread->m_arg_list.size() >= thread->get_finfo()->local_mem_framesize())
            {
                // Print out content
                char * fmtstr   = (char*)malloc((thread->m_fmtstr).size() * sizeof(char));
                char * arg_list = (char*)malloc((thread->m_arg_list).size() * sizeof(char));
                std::vector<char>::iterator it;
                int i;
                for (it = (thread->m_fmtstr).begin(), i = 0; it != (thread->m_fmtstr).end(); ++it, ++i)
                {
                    fmtstr[i] = *it;
                }
                for (it = (thread->m_arg_list).begin(), i = 0; it != (thread->m_arg_list).end(); ++it, ++i)
                {
                    arg_list[i] = *it;
                }
                int ret = my_cuda_printf(fmtstr,arg_list);
                free(fmtstr);
                free(arg_list);
                // Set retval0
                const operand_info &actual_return_op = pI->operand_lookup(0);
                // cudaError_t
                const symbol *formal_return = target_func->get_return_var();
                unsigned int return_size = formal_return->get_size_in_bytes();
                assert(actual_return_op.is_param_local());
                assert(actual_return_op.get_symbol()->get_size_in_bytes() == return_size && return_size == sizeof(int));
                thread->m_vprintf_data = malloc(sizeof(int));
                *((int*)(thread->m_vprintf_data)) = ret;
                addr_t ret_param_addr = actual_return_op.get_symbol()->get_address();
                thread->m_last_effective_address = ret_param_addr;
                thread->m_last_memory_space = param_space_local;
                thread->m_vprintf_execution_step = 2;
                return;
            }
            thread->m_last_effective_address = thread->m_arg_list_addr + (thread->m_arg_list).size();
            // deicide
            if (thread->get_hw_tid() == 64 && thread->get_hw_sid() == 1)
            {
                fprintf(stderr, "vprintf step 1 substep %d sent read request to addr 0x%lx, thread address = %p\n", thread->m_vprintf_execution_substep, thread->m_last_effective_address, thread);
            }
            // deicide
            // thread->m_last_memory_space = global_space;
            thread->m_last_memory_space = local_space;
            thread->m_vprintf_execution_substep++;
        }
    }
    else if (step == 2)
    {
        fprintf(stderr, "vprintf done\n");
    }
    else
    {
        fprintf(stderr, "Unknown step for vprintf\n");
    }
}

