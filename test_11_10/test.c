#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////�׳�
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
//	printf("������Ҫ��׳˵�һ��������");
//	scanf("%d", &i);
//	printf("%d�Ľ׳˽��Ϊ%d\n", i, fact(i));
//	return 0;
//}


//����ת��
#include <stdio.h>
#include <string.h>
void convto(char* s, int n, int b)
{
	char bit[] = { "0123456789ABCDEF" };//Ϊ��ʵ�ֶ��ֽ��Ƶ�ת��
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
	printf("������ʮ��������");
	scanf("%d", &old);
	printf("������ת���Ľ��ƣ�");
	scanf("%d", &base);
	convto(s, old, base);
	printf("%s\n", s);
	getchar()

}