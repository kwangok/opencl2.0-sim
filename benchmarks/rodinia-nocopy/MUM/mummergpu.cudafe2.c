# 1 "mummergpu.cudafe1.gpu"
# 22 "./common.cu"
struct __T10;
# 18 "./common.cu"
union __T11;
# 15 "./common.cu"
struct TextureAddress;
# 36 "./common.cu"
struct __T12;
# 33 "./common.cu"
union __T13;
# 30 "./common.cu"
struct PixelOfNode;
# 49 "./common.cu"
union __T14;
# 46 "./common.cu"
struct PixelOfChildren;
# 68 "./mummergpu.h"
struct MatchCoord;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 145 "/usr/include/bits/types.h" 3
typedef long __clock_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
# 22 "./common.cu"
struct __T10 {
# 23 "./common.cu"
unsigned short x;
# 24 "./common.cu"
unsigned short y;};
# 18 "./common.cu"
union __T11 {
# 19 "./common.cu"
unsigned data;
# 22 "./common.cu"
struct  {
# 23 "./common.cu"
unsigned short x;
# 24 "./common.cu"
unsigned short y;};};
# 15 "./common.cu"
struct TextureAddress {
# 18 "./common.cu"
union  {
# 19 "./common.cu"
unsigned data;
# 22 "./common.cu"
struct  {
# 23 "./common.cu"
unsigned short x;
# 24 "./common.cu"
unsigned short y;};};};
# 36 "./common.cu"
struct __T12 {
# 37 "./common.cu"
int start;
# 38 "./common.cu"
int end;
# 39 "./common.cu"
struct TextureAddress childD;
# 40 "./common.cu"
struct TextureAddress suffix;};
# 33 "./common.cu"
union __T13 {
# 34 "./common.cu"
uint4 data;
# 36 "./common.cu"
struct  {
# 37 "./common.cu"
int start;
# 38 "./common.cu"
int end;
# 39 "./common.cu"
struct TextureAddress childD;
# 40 "./common.cu"
struct TextureAddress suffix;};};
# 30 "./common.cu"
struct PixelOfNode {
# 33 "./common.cu"
union  {
# 34 "./common.cu"
uint4 data;
# 36 "./common.cu"
struct  {
# 37 "./common.cu"
int start;
# 38 "./common.cu"
int end;
# 39 "./common.cu"
struct TextureAddress childD;
# 40 "./common.cu"
struct TextureAddress suffix;};};};
# 49 "./common.cu"
union __T14 {
# 50 "./common.cu"
uint4 data;
# 51 "./common.cu"
struct TextureAddress children[4];};
# 46 "./common.cu"
struct PixelOfChildren {
# 49 "./common.cu"
union  {
# 50 "./common.cu"
uint4 data;
# 51 "./common.cu"
struct TextureAddress children[4];};};
# 68 "./mummergpu.h"
struct MatchCoord {
# 70 "./mummergpu.h"
unsigned node;
# 71 "./mummergpu.h"
short edge_match_length;__pad__(volatile char __dummy[2];)};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 16 "./mummergpu_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(nodetex,nodetex);
# 17 "./mummergpu_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(childrentex,childrentex);
# 19 "./mummergpu_kernel.cu"
__loc_sc__(__text__,,) __texture_type__ __text_var(reftex,reftex);

#include "mummergpu.cudafe2.stub.c"
