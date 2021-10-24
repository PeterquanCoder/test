#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数字排列从大到小
// //输入数字的时候记得加空格
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


//打印3的倍数
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


//最大公约数
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
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//
//}


//辗转相除法
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
//	printf("最大公约数%d\n", n);
//	//最小公倍数=n*m/最大公约数
//
//	return 0;
//}




//打印1000到2000的闰年
// 能被4不能被100整除
// 能被400整除
//方法一
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


//方法2
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