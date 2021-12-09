#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4  //�������ΪN*N
int get_matrix(int a[N][N])
{
	int i = 0, j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j] != 0 && a[i][j] != 1)
				return 1;
		}
	}
	return 0;
}
void warshall(int a[N][N])
{
	//(1)i=1
	//(2)������j���a[j,i]=1.���k=0��1. ... ,N-1,a[j,k]=a[j,k]|a[i,k]
	//(3)i��1��
	//(4)���i<N��ת������2������ֹͣ
	int i = 0, j = 0, k = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[j][i])//�жϵ�i���ϵĵ�j��Ԫ���ǲ���1����1��Ҫ�߼���
			{
				for (k = 0; k < N; k++)
				{
					a[j][k] = a[j][k] | a[i][k];//�߼���
				}
			}
		}
	}
}
void output_matrix(int a[N][N])
{
	int i = 0, j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[N][N] = { 0 };
	printf("please input a matrix with %d*%d\n", N, N);
	if (get_matrix(a))
	{
		printf("Get matrix error!Only 0 or 1 in matrix!\n");
		return 1;//���󷵻�������������ֵΪ1��
	}
	warshall(a);
	output_matrix(a);
	return 0;//��������������������ֵΪ0
}