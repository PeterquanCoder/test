#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数调用
//void Swap(int* pa, int* pb)//数字的交换
//{
//    int c = 0;
//    c = *pa;
//    *pa = *pb;
//    *pb = c;
//}
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d,%d", &a, &b);
//    printf("a=%d,b=%d\n", a, b);
//    Swap(&a, &b);
//    printf("a=%d,b=%d\n", a);
//    return 0;
//
//}






//#include <math.h>
//
//int is_prime(int n)//素数判断
//{
//	int m = 0;
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//
//	return 1;
//
//}
//
//
//int main()
//{
//	int x = 0;
//	int count = 0;
//	for (x = 100; x <= 200; x++)
//	{
//		if (is_prime(x) == 1)
//		{
//			printf("%d ", x);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}


//int is_leap_year(int n)//闰年函数
//{
//	if (n % 400 == 0)
//	{
//		return 1;
//	}
//	else if (n % 4 == 0 && n % 100 != 0)
//		{
//
//			return 1;
//		}
//	else
//
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//
//
//	}
//
//
//	return 0;
//
//
//}



//`



//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	int m = 0;
//	
//	scanf("%d %d",&a,&b);
//	n = a / b;
//	m = a % b;
//	printf("%d %d",n,m);
//
//	return 0;
//}




#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d", &a, &b);
    c = (a % 100 + b % 100) % 100;//取余的重要性，
    printf("%d", c);





    return 0;
}