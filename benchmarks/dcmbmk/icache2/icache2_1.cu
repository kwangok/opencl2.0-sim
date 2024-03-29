
#include "../common/repeat.h"

#define LTEST_FUNC(N,M,STRING)	\
__global__ void kicache_line_##N##_##M (unsigned int *ts, unsigned int* out, int p1, int p2, int its)	\
{																										\
	volatile int t1 = p1;				\
	volatile int t2 = p1*p1;				\
	volatile int t3 = p1*p1+p1;			\
	volatile int t4 = p1*p1+p2;			\
	volatile int t5 = p1*p2;				\
	volatile int t6 = p1*p2+p1;			\
	volatile int t7 = p1*p2+p2;			\
	volatile int t8 = p2*p1*p2;			\
	unsigned int start_time, stop_time;			\
		start_time = clock();	\
		for (int i=0;i<its;i++)	{	\
			repeat##N (t1 = abs(t2); t2 = abs(t3); t3=abs(t4); t4=abs(t5); t5=abs(t6); t6=abs(t7); t7=abs(t8); t8=abs(t1);) 	\
			STRING						\
		}							\
		stop_time = clock();		\
	out[0] = t1+t2+t3+t4+t5+t6+t7+t8;		\
	ts[(blockIdx.x*blockDim.x + threadIdx.x)*2] = start_time;		\
	ts[(blockIdx.x*blockDim.x + threadIdx.x)*2 +1] = stop_time;		\
}

#define LTEST0(N) LTEST_FUNC(N,0,;)
#define LTEST1(N) LTEST_FUNC(N,1,t1 = abs(t2);)
#define LTEST2(N) LTEST_FUNC(N,2,t1 = abs(t2); t2 = abs(t3);)
#define LTEST3(N) LTEST_FUNC(N,3,t1 = abs(t2); t2 = abs(t3); t3 = abs(t4); )
#define LTEST4(N) LTEST_FUNC(N,4,t1 = abs(t2); t2 = abs(t3); t3 = abs(t4); t4 = abs(t5); )
#define LTEST5(N) LTEST_FUNC(N,5,t1 = abs(t2); t2 = abs(t3); t3 = abs(t4); t4 = abs(t5); t5 = abs(t6); )
#define LTEST6(N) LTEST_FUNC(N,6,t1 = abs(t2); t2 = abs(t3); t3 = abs(t4); t4 = abs(t5); t5 = abs(t6); t6 = abs(t7); )
#define LTEST7(N) LTEST_FUNC(N,7,t1 = abs(t2); t2 = abs(t3); t3 = abs(t4); t4 = abs(t5); t5 = abs(t6); t6 = abs(t7); t7 = abs(t8); )

#define LTESTS(N) LTEST0(N) LTEST1(N) LTEST2(N) LTEST3(N) LTEST4(N) LTEST5(N) LTEST6(N) LTEST7(N)

LTESTS(117);
LTESTS(118);
LTESTS(119);
LTESTS(120);
LTESTS(121);
LTESTS(122);
LTESTS(123);
LTESTS(124);
LTESTS(125);
LTESTS(126);
LTESTS(127);
LTESTS(128);
LTESTS(129);
LTESTS(130);
LTESTS(131);
LTESTS(132);
LTESTS(133);
LTESTS(134);
LTESTS(135);
LTESTS(136);
LTESTS(137);
LTESTS(138);
LTESTS(139);
LTESTS(140);
LTESTS(141);


