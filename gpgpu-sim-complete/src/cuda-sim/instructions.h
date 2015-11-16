// DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED BY THE MAKEFILE (see target for instructions.h)
#include "ptx_ir.h"
#ifndef instructions_h_included
#define instructions_h_included
void abs_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void addp_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void add_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void addc_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void and_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void andn_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void atom_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void bar_sync_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void bfe_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void bfi_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void bfind_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void bra_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void brx_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void break_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void breakaddr_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void brev_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void brkpt_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void call_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void callp_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void clz_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void cnot_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void cos_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void cvt_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void cvta_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void div_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void ex2_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void exit_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void fma_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void isspacep_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void ld_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void ldu_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void lg2_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void mad24_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void mad_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void madp_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void madc_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void max_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void membar_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void min_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void mov_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void mul24_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void mul_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void neg_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void nandn_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void norn_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void not_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void or_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void orn_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void pmevent_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void popc_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void prefetch_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void prefetchu_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void prmt_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void shfl_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void rcp_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void red_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void rem_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void ret_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void retp_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void rsqrt_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void sad_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void selp_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void setp_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void set_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void shf_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void shl_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void shr_impl( const ptx_instruction *pI, ptx_thread_info *thread );
void sin_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void slct_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void sqrt_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void ssy_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void st_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void sub_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void nop_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void subc_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void suld_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void sured_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void sust_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void suq_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void tex_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void txq_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void trap_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vabsdiff_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vadd_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vmad_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vmax_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vmin_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vset_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vshl_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vshr_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vsub_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void vote_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void xor_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void testp_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
void copysign_impl( const ptx_instruction *pI, ptx_thread_info *thread ) ;
#endif
