#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������дӴ�С
// //�������ֵ�ʱ��ǵüӿո�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//��ӡ3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100 ; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//
//		}
//		
//		
//	}
//	return 0;
//}
//


//���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = 0;
//	if (a > b)
//	{
//		max = b;
//	}
//	else
//		max = b;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//
//}


//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (m%n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("���Լ��%d\n", n);
//	//��С������=n*m/���Լ��
//
//	return 0;
//}




//��ӡ1000��2000������
// �ܱ�4���ܱ�100����
// �ܱ�400����
//����һ
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}


//����2
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}

		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}


	return 0;
}