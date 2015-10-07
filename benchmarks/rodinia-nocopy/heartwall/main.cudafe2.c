# 1 "main.cudafe1.gpu"
# 21 "define.c"
struct params_common_change;
# 38 "define.c"
struct params_common;
# 270 "define.c"
struct params_unique;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 21 "define.c"
struct params_common_change {
# 27 "define.c"
float *d_frame;
# 28 "define.c"
int frame_no; char __nv_no_debug_dummy_end_padding_0[4];};
# 30 "define.c"
typedef struct params_common_change params_common_change;
# 38 "define.c"
struct params_common {
# 48 "define.c"
int sSize;
# 49 "define.c"
int tSize;
# 50 "define.c"
int maxMove;
# 51 "define.c"
float alpha;
# 57 "define.c"
int no_frames;
# 58 "define.c"
int frame_rows;
# 59 "define.c"
int frame_cols;
# 60 "define.c"
int frame_elem;
# 61 "define.c"
int frame_mem;
# 67 "define.c"
int endoPoints;
# 68 "define.c"
int endo_mem;
# 70 "define.c"
int *endoRow;
# 71 "define.c"
int *endoCol;
# 72 "define.c"
int *tEndoRowLoc;
# 73 "define.c"
int *tEndoColLoc;
# 75 "define.c"
int *d_endoRow;
# 76 "define.c"
int *d_endoCol;
# 77 "define.c"
int *d_tEndoRowLoc;
# 78 "define.c"
int *d_tEndoColLoc;
# 80 "define.c"
float *d_endoT;
# 85 "define.c"
int epiPoints;
# 86 "define.c"
int epi_mem;
# 88 "define.c"
int *epiRow;
# 89 "define.c"
int *epiCol;
# 90 "define.c"
int *tEpiRowLoc;
# 91 "define.c"
int *tEpiColLoc;
# 93 "define.c"
int *d_epiRow;
# 94 "define.c"
int *d_epiCol;
# 95 "define.c"
int *d_tEpiRowLoc;
# 96 "define.c"
int *d_tEpiColLoc;
# 98 "define.c"
float *d_epiT;
# 104 "define.c"
int allPoints;
# 110 "define.c"
int in_rows;
# 111 "define.c"
int in_cols;
# 112 "define.c"
int in_elem;
# 113 "define.c"
int in_mem;
# 119 "define.c"
int in2_rows;
# 120 "define.c"
int in2_cols;
# 121 "define.c"
int in2_elem;
# 122 "define.c"
int in2_mem;
# 128 "define.c"
int conv_rows;
# 129 "define.c"
int conv_cols;
# 130 "define.c"
int conv_elem;
# 131 "define.c"
int conv_mem;
# 132 "define.c"
int ioffset;
# 133 "define.c"
int joffset;
# 143 "define.c"
int in2_pad_add_rows;
# 144 "define.c"
int in2_pad_add_cols;
# 145 "define.c"
int in2_pad_cumv_rows;
# 146 "define.c"
int in2_pad_cumv_cols;
# 147 "define.c"
int in2_pad_cumv_elem;
# 148 "define.c"
int in2_pad_cumv_mem;
# 154 "define.c"
int in2_pad_cumv_sel_rows;
# 155 "define.c"
int in2_pad_cumv_sel_cols;
# 156 "define.c"
int in2_pad_cumv_sel_elem;
# 157 "define.c"
int in2_pad_cumv_sel_mem;
# 158 "define.c"
int in2_pad_cumv_sel_rowlow;
# 159 "define.c"
int in2_pad_cumv_sel_rowhig;
# 160 "define.c"
int in2_pad_cumv_sel_collow;
# 161 "define.c"
int in2_pad_cumv_sel_colhig;
# 167 "define.c"
int in2_pad_cumv_sel2_rowlow;
# 168 "define.c"
int in2_pad_cumv_sel2_rowhig;
# 169 "define.c"
int in2_pad_cumv_sel2_collow;
# 170 "define.c"
int in2_pad_cumv_sel2_colhig;
# 171 "define.c"
int in2_sub_cumh_rows;
# 172 "define.c"
int in2_sub_cumh_cols;
# 173 "define.c"
int in2_sub_cumh_elem;
# 174 "define.c"
int in2_sub_cumh_mem;
# 180 "define.c"
int in2_sub_cumh_sel_rows;
# 181 "define.c"
int in2_sub_cumh_sel_cols;
# 182 "define.c"
int in2_sub_cumh_sel_elem;
# 183 "define.c"
int in2_sub_cumh_sel_mem;
# 184 "define.c"
int in2_sub_cumh_sel_rowlow;
# 185 "define.c"
int in2_sub_cumh_sel_rowhig;
# 186 "define.c"
int in2_sub_cumh_sel_collow;
# 187 "define.c"
int in2_sub_cumh_sel_colhig;
# 193 "define.c"
int in2_sub_cumh_sel2_rowlow;
# 194 "define.c"
int in2_sub_cumh_sel2_rowhig;
# 195 "define.c"
int in2_sub_cumh_sel2_collow;
# 196 "define.c"
int in2_sub_cumh_sel2_colhig;
# 197 "define.c"
int in2_sub2_rows;
# 198 "define.c"
int in2_sub2_cols;
# 199 "define.c"
int in2_sub2_elem;
# 200 "define.c"
int in2_sub2_mem;
# 210 "define.c"
int in2_sqr_rows;
# 211 "define.c"
int in2_sqr_cols;
# 212 "define.c"
int in2_sqr_elem;
# 213 "define.c"
int in2_sqr_mem;
# 219 "define.c"
int in2_sqr_sub2_rows;
# 220 "define.c"
int in2_sqr_sub2_cols;
# 221 "define.c"
int in2_sqr_sub2_elem;
# 222 "define.c"
int in2_sqr_sub2_mem;
# 228 "define.c"
int in_sqr_rows;
# 229 "define.c"
int in_sqr_cols;
# 230 "define.c"
int in_sqr_elem;
# 231 "define.c"
int in_sqr_mem;
# 237 "define.c"
int tMask_rows;
# 238 "define.c"
int tMask_cols;
# 239 "define.c"
int tMask_elem;
# 240 "define.c"
int tMask_mem;
# 246 "define.c"
int mask_rows;
# 247 "define.c"
int mask_cols;
# 248 "define.c"
int mask_elem;
# 249 "define.c"
int mask_mem;
# 255 "define.c"
int mask_conv_rows;
# 256 "define.c"
int mask_conv_cols;
# 257 "define.c"
int mask_conv_elem;
# 258 "define.c"
int mask_conv_mem;
# 259 "define.c"
int mask_conv_ioffset;
# 260 "define.c"
int mask_conv_joffset; char __nv_no_debug_dummy_end_padding_0[4];};
# 262 "define.c"
typedef struct params_common params_common;
# 270 "define.c"
struct params_unique {
# 276 "define.c"
int *d_Row;
# 277 "define.c"
int *d_Col;
# 278 "define.c"
int *d_tRowLoc;
# 279 "define.c"
int *d_tColLoc;
# 280 "define.c"
float *d_T;
# 286 "define.c"
int point_no;
# 292 "define.c"
int in_pointer;
# 298 "define.c"
float *d_in2;
# 304 "define.c"
float *d_conv;
# 305 "define.c"
float *d_in_mod;
# 315 "define.c"
float *d_in2_pad_cumv;
# 321 "define.c"
float *d_in2_pad_cumv_sel;
# 327 "define.c"
float *d_in2_sub_cumh;
# 333 "define.c"
float *d_in2_sub_cumh_sel;
# 339 "define.c"
float *d_in2_sub2;
# 349 "define.c"
float *d_in2_sqr;
# 355 "define.c"
float *d_in2_sqr_sub2;
# 361 "define.c"
float *d_in_sqr;
# 367 "define.c"
float *d_tMask;
# 373 "define.c"
float *d_mask;
# 379 "define.c"
float *d_mask_conv;};
# 381 "define.c"
typedef struct params_unique params_unique;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 902 "kernel.cu"
extern int fdividef();
# 906 "kernel.cu"
extern int sqrtf();
# 1230 "kernel.cu"
extern int fabsf();

#include "main.cudafe2.stub.c"
