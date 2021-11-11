#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define HAXN 64
int a[HAXN + 1][HAXN + 1] = { 0 };
void schedule(int k, int n)//������k��ʼ��n��ѡ�ֵ��ճ�
{
	int i, j;
	if (n == 2)
	{
		a[k][1] = k;//����ѡ�ֱ��
		a[k][2] = k + 1;//����ѡ�ֱ��
		a[k + 1][1] = k + 1;//����ѡ�ֱ��
		a[k + 1][2] = k;//����ѡ�ֱ��
	}
	else//�����㷨�Ĺؼ��ǰ�һ��������ֳ�С���֡�������ѭ��һ�ηֳ�4��С����
	{
		schedule(k, n / 2);//�����㷨�Ĺؼ��������Ͻ�
		schedule(k + n / 2, n / 2);//�����㷨�Ĺؼ��������½�
		for (i = k; i < k + n / 2; i++)//������Ͻ�
		{
			for (j = n / 2 + 1; j <= n; j++)
			{
				a[i][j] = a[i + n / 2][j - n / 2];
			}
		}
		for (i = k + n / 2; i < k + n; i++)//������½�
		{
			for (j = n / 2 + 1; j <= n; j++)
			{
				a[i][j] = a[i - n / 2][j - n / 2];
			}
		}

	}
}


int main()
{
	int m, i, j;
	printf("�������ѡ��������");
	scanf("%d", &m);
	j = 2;
	for (i = 2; i < 8; i++)//�ж������Ƿ����2������������
	{

		j = j * 2;
		if (j == m) break;
	}
	if (i >= 8)
	{
		printf("����ѡ����������Ϊ2�������ݣ�����2��С��64\n");
		return 0;
	}
	schedule(1, m);
	printf("\n���");
	for (i = 2; i <= m; i++)//��ӡ��������
	{
		printf("%3d��", i - 1);
	}
	printf("\n");
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%4d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
