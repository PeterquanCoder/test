#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////阶乘
//int fact(int n)
//{
//	if (n <= 1)
//		return 0;
//	else
//		return n * fact(n - 1);
//}
//
//int main()
//{
//	int i;
//	printf("请输入要求阶乘的一个整数：");
//	scanf("%d", &i);
//	printf("%d的阶乘结果为%d\n", i, fact(i));
//	return 0;
//}


//进制转换
#include <stdio.h>
#include <string.h>
void convto(char* s, int n, int b)
{
	char bit[] = { "0123456789ABCDEF" };//为了实现多种进制的转化
	int len;
	if (n == 0)
	{
		strcpy(s, "");
		return;
	}
	convto(s, n / b, b);
	len = strlen(s);
	s[len] = bit[n % b];
	s[len + 1] = '\0';
}
void main(void)
{
	char s[80];
	int old, base;
	printf("请输入十进制数：");
	scanf("%d", &old);
	printf("请输入转换的进制：");
	scanf("%d", &base);
	convto(s, old, base);
	printf("%s\n", s);
	getchar()

}