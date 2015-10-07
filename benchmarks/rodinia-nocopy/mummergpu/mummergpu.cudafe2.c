# 1 "mummergpu.cudafe1.gpu"
# 118 "./common.cuh"
struct __T10;
# 115 "./common.cuh"
union __T11;
# 114 "./common.cuh"
struct TextureAddress;
# 179 "./common.cuh"
struct MatchInfo;
# 189 "./common.cuh"
struct Alignment;
# 79 "./mummergpu.h"
struct MatchCoord;
# 153 "./mummergpu_kernel.cuh"
struct __T12;
# 150 "./mummergpu_kernel.cuh"
union __T13;
# 147 "./mummergpu_kernel.cuh"
struct _MatchCoord;
# 170 "./mummergpu_kernel.cuh"
struct __T14;
# 181 "./mummergpu_kernel.cuh"
struct __T15;
# 168 "./mummergpu_kernel.cuh"
union __T16;
# 164 "./mummergpu_kernel.cuh"
union __T17;
# 161 "./mummergpu_kernel.cuh"
struct _PixelOfChildren;
# 200 "./mummergpu_kernel.cuh"
struct __T18;
# 211 "./mummergpu_kernel.cuh"
struct __T19;
# 198 "./mummergpu_kernel.cuh"
union __T110;
# 194 "./mummergpu_kernel.cuh"
union __T111;
# 191 "./mummergpu_kernel.cuh"
struct _PixelOfChildrenNoData;
# 221 "./mummergpu_kernel.cuh"
struct _PixelOfChildrenNoDataBasesOnly;
# 239 "./mummergpu_kernel.cuh"
struct __T112;
# 236 "./mummergpu_kernel.cuh"
union __T113;
# 233 "./mummergpu_kernel.cuh"
struct _PixelOfNode;
# 253 "./mummergpu_kernel.cuh"
struct _PixelOfNodeNoData;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
# 145 "/usr/include/bits/types.h" 3
typedef long __clock_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
# 118 "./common.cuh"
struct __T10 {
# 123 "./common.cuh"
unsigned x;};
# 115 "./common.cuh"
union __T11 {
# 116 "./common.cuh"
unsigned data;
# 118 "./common.cuh"
struct  {
# 123 "./common.cuh"
unsigned x;};};
# 114 "./common.cuh"
struct TextureAddress {
# 115 "./common.cuh"
union  {
# 116 "./common.cuh"
unsigned data;
# 118 "./common.cuh"
struct  {
# 123 "./common.cuh"
unsigned x;};};};
# 179 "./common.cuh"
struct MatchInfo {
# 181 "./common.cuh"
unsigned resultsoffset;
# 182 "./common.cuh"
unsigned queryid;
# 183 "./common.cuh"
struct TextureAddress matchnode;
# 184 "./common.cuh"
unsigned numLeaves;
# 185 "./common.cuh"
unsigned short edgematch;
# 186 "./common.cuh"
unsigned short qrystartpos;};
# 187 "./common.cuh"
typedef struct MatchInfo MatchInfo;
# 189 "./common.cuh"
struct Alignment {
# 191 "./common.cuh"
int left_in_ref;
# 192 "./common.cuh"
unsigned short matchlen;__pad__(volatile char __dummy[2];)};
# 193 "./common.cuh"
typedef struct Alignment Alignment;
# 153 "./mummergpu_kernel.cuh"
struct __T12 {
# 154 "./mummergpu_kernel.cuh"
int node;
# 155 "./mummergpu_kernel.cuh"
int edge_match_length;};
# 150 "./mummergpu_kernel.cuh"
union __T13 {
# 151 "./mummergpu_kernel.cuh"
int2 data;
# 153 "./mummergpu_kernel.cuh"
struct  {
# 154 "./mummergpu_kernel.cuh"
int node;
# 155 "./mummergpu_kernel.cuh"
int edge_match_length;};};
# 147 "./mummergpu_kernel.cuh"
struct _MatchCoord {
# 150 "./mummergpu_kernel.cuh"
union  {
# 151 "./mummergpu_kernel.cuh"
int2 data;
# 153 "./mummergpu_kernel.cuh"
struct  {
# 154 "./mummergpu_kernel.cuh"
int node;
# 155 "./mummergpu_kernel.cuh"
int edge_match_length;};};} __attribute__((__aligned__(8)));
# 170 "./mummergpu_kernel.cuh"
struct __T14 {
# 171 "./mummergpu_kernel.cuh"
uchar3 a;
# 172 "./mummergpu_kernel.cuh"
uchar3 c;
# 173 "./mummergpu_kernel.cuh"
uchar3 g;
# 174 "./mummergpu_kernel.cuh"
uchar3 t;
# 175 "./mummergpu_kernel.cuh"
uchar3 d;
# 177 "./mummergpu_kernel.cuh"
char leafchar;};
# 181 "./mummergpu_kernel.cuh"
struct __T15 {
# 182 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 183 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 184 "./mummergpu_kernel.cuh"
char leafchar0;};
# 168 "./mummergpu_kernel.cuh"
union __T16 {
# 170 "./mummergpu_kernel.cuh"
struct  {
# 171 "./mummergpu_kernel.cuh"
uchar3 a;
# 172 "./mummergpu_kernel.cuh"
uchar3 c;
# 173 "./mummergpu_kernel.cuh"
uchar3 g;
# 174 "./mummergpu_kernel.cuh"
uchar3 t;
# 175 "./mummergpu_kernel.cuh"
uchar3 d;
# 177 "./mummergpu_kernel.cuh"
char leafchar;};
# 181 "./mummergpu_kernel.cuh"
struct  {
# 182 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 183 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 184 "./mummergpu_kernel.cuh"
char leafchar0;};};
# 164 "./mummergpu_kernel.cuh"
union __T17 {
# 165 "./mummergpu_kernel.cuh"
uint4 data;
# 168 "./mummergpu_kernel.cuh"
union  {
# 170 "./mummergpu_kernel.cuh"
struct  {
# 171 "./mummergpu_kernel.cuh"
uchar3 a;
# 172 "./mummergpu_kernel.cuh"
uchar3 c;
# 173 "./mummergpu_kernel.cuh"
uchar3 g;
# 174 "./mummergpu_kernel.cuh"
uchar3 t;
# 175 "./mummergpu_kernel.cuh"
uchar3 d;
# 177 "./mummergpu_kernel.cuh"
char leafchar;};
# 181 "./mummergpu_kernel.cuh"
struct  {
# 182 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 183 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 184 "./mummergpu_kernel.cuh"
char leafchar0;};};};
# 161 "./mummergpu_kernel.cuh"
struct _PixelOfChildren {
# 164 "./mummergpu_kernel.cuh"
union  {
# 165 "./mummergpu_kernel.cuh"
uint4 data;
# 168 "./mummergpu_kernel.cuh"
union  {
# 170 "./mummergpu_kernel.cuh"
struct  {
# 171 "./mummergpu_kernel.cuh"
uchar3 a;
# 172 "./mummergpu_kernel.cuh"
uchar3 c;
# 173 "./mummergpu_kernel.cuh"
uchar3 g;
# 174 "./mummergpu_kernel.cuh"
uchar3 t;
# 175 "./mummergpu_kernel.cuh"
uchar3 d;
# 177 "./mummergpu_kernel.cuh"
char leafchar;};
# 181 "./mummergpu_kernel.cuh"
struct  {
# 182 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 183 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 184 "./mummergpu_kernel.cuh"
char leafchar0;};};};};
# 200 "./mummergpu_kernel.cuh"
struct __T18 {
# 201 "./mummergpu_kernel.cuh"
uchar3 a;
# 202 "./mummergpu_kernel.cuh"
uchar3 c;
# 203 "./mummergpu_kernel.cuh"
uchar3 g;
# 204 "./mummergpu_kernel.cuh"
uchar3 t;
# 205 "./mummergpu_kernel.cuh"
uchar3 d;
# 207 "./mummergpu_kernel.cuh"
char leafchar;};
# 211 "./mummergpu_kernel.cuh"
struct __T19 {
# 212 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 213 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 214 "./mummergpu_kernel.cuh"
char leafchar0;};
# 198 "./mummergpu_kernel.cuh"
union __T110 {
# 200 "./mummergpu_kernel.cuh"
struct  {
# 201 "./mummergpu_kernel.cuh"
uchar3 a;
# 202 "./mummergpu_kernel.cuh"
uchar3 c;
# 203 "./mummergpu_kernel.cuh"
uchar3 g;
# 204 "./mummergpu_kernel.cuh"
uchar3 t;
# 205 "./mummergpu_kernel.cuh"
uchar3 d;
# 207 "./mummergpu_kernel.cuh"
char leafchar;};
# 211 "./mummergpu_kernel.cuh"
struct  {
# 212 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 213 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 214 "./mummergpu_kernel.cuh"
char leafchar0;};};
# 194 "./mummergpu_kernel.cuh"
union __T111 {
# 195 "./mummergpu_kernel.cuh"
uint4 data;
# 198 "./mummergpu_kernel.cuh"
union  {
# 200 "./mummergpu_kernel.cuh"
struct  {
# 201 "./mummergpu_kernel.cuh"
uchar3 a;
# 202 "./mummergpu_kernel.cuh"
uchar3 c;
# 203 "./mummergpu_kernel.cuh"
uchar3 g;
# 204 "./mummergpu_kernel.cuh"
uchar3 t;
# 205 "./mummergpu_kernel.cuh"
uchar3 d;
# 207 "./mummergpu_kernel.cuh"
char leafchar;};
# 211 "./mummergpu_kernel.cuh"
struct  {
# 212 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 213 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 214 "./mummergpu_kernel.cuh"
char leafchar0;};};};
# 191 "./mummergpu_kernel.cuh"
struct _PixelOfChildrenNoData {
# 194 "./mummergpu_kernel.cuh"
union  {
# 195 "./mummergpu_kernel.cuh"
uint4 data;
# 198 "./mummergpu_kernel.cuh"
union  {
# 200 "./mummergpu_kernel.cuh"
struct  {
# 201 "./mummergpu_kernel.cuh"
uchar3 a;
# 202 "./mummergpu_kernel.cuh"
uchar3 c;
# 203 "./mummergpu_kernel.cuh"
uchar3 g;
# 204 "./mummergpu_kernel.cuh"
uchar3 t;
# 205 "./mummergpu_kernel.cuh"
uchar3 d;
# 207 "./mummergpu_kernel.cuh"
char leafchar;};
# 211 "./mummergpu_kernel.cuh"
struct  {
# 212 "./mummergpu_kernel.cuh"
uchar3 leafid;
# 213 "./mummergpu_kernel.cuh"
unsigned char pad[12];
# 214 "./mummergpu_kernel.cuh"
char leafchar0;};};};};
# 221 "./mummergpu_kernel.cuh"
struct _PixelOfChildrenNoDataBasesOnly {
# 223 "./mummergpu_kernel.cuh"
uchar3 a;
# 224 "./mummergpu_kernel.cuh"
uchar3 c;
# 225 "./mummergpu_kernel.cuh"
uchar3 g;
# 226 "./mummergpu_kernel.cuh"
uchar3 t;
# 227 "./mummergpu_kernel.cuh"
uchar3 d;
# 229 "./mummergpu_kernel.cuh"
char leafchar;};
# 239 "./mummergpu_kernel.cuh"
struct __T112 {
# 240 "./mummergpu_kernel.cuh"
uchar3 parent;
# 241 "./mummergpu_kernel.cuh"
uchar3 suffix;
# 243 "./mummergpu_kernel.cuh"
uchar3 start;
# 244 "./mummergpu_kernel.cuh"
uchar3 end;
# 245 "./mummergpu_kernel.cuh"
uchar3 depth;
# 247 "./mummergpu_kernel.cuh"
unsigned char pad;};
# 236 "./mummergpu_kernel.cuh"
union __T113 {
# 237 "./mummergpu_kernel.cuh"
uint4 data;
# 239 "./mummergpu_kernel.cuh"
struct  {
# 240 "./mummergpu_kernel.cuh"
uchar3 parent;
# 241 "./mummergpu_kernel.cuh"
uchar3 suffix;
# 243 "./mummergpu_kernel.cuh"
uchar3 start;
# 244 "./mummergpu_kernel.cuh"
uchar3 end;
# 245 "./mummergpu_kernel.cuh"
uchar3 depth;
# 247 "./mummergpu_kernel.cuh"
unsigned char pad;};};
# 233 "./mummergpu_kernel.cuh"
struct _PixelOfNode {
# 236 "./mummergpu_kernel.cuh"
union  {
# 237 "./mummergpu_kernel.cuh"
uint4 data;
# 239 "./mummergpu_kernel.cuh"
struct  {
# 240 "./mummergpu_kernel.cuh"
uchar3 parent;
# 241 "./mummergpu_kernel.cuh"
uchar3 suffix;
# 243 "./mummergpu_kernel.cuh"
uchar3 start;
# 244 "./mummergpu_kernel.cuh"
uchar3 end;
# 245 "./mummergpu_kernel.cuh"
uchar3 depth;
# 247 "./mummergpu_kernel.cuh"
unsigned char pad;};};};
# 253 "./mummergpu_kernel.cuh"
struct _PixelOfNodeNoData {
# 255 "./mummergpu_kernel.cuh"
uchar3 parent;
# 256 "./mummergpu_kernel.cuh"
uchar3 suffix;
# 258 "./mummergpu_kernel.cuh"
uchar3 start;
# 259 "./mummergpu_kernel.cuh"
uchar3 end;
# 260 "./mummergpu_kernel.cuh"
uchar3 depth;
# 262 "./mummergpu_kernel.cuh"
unsigned char pad;};
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "mummergpu.cudafe2.stub.c"
