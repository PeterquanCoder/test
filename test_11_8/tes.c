#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define NUH 13
////˳���㷨
////�������У�쳲���������
//int main()
//{
//	int i;
//	int fib[NUH] = { 1,1 };
//
//	for (i = 2; i < NUH; i++);
//	{
//		fib[i] = fib[i - i] + fib[i - 2];
//	}
//	for (i = 0; i < NUH; i++)
//	{
//		printf("%d����������;%d\n", i, fib[i]);
//	}
//	getchar();
//	return 0;
//
//
//
//}

#define FETCH 1000
#define RATE 0.0171
int main()
{
	double corpus[49];
	int i;
	corpus[48] = (double)FETCH;
	for (i = 47; i > 0; i--)
	{
		corpus[i] = (corpus[i + 1] + FETCH) / (1 + RATE / 12);
	}
	for (i = 48; i > 0; i--)
	{
		printf("��%2d��ĩ�����ϼƣ�%.2f\n", i, corpus[i]);
	}
	getchar();
	return 0;

}
