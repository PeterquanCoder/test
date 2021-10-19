#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
	//int i = 0;
	//int k = 0;
//{
//	int ch = 1;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


//计算n!
//i/*nt main()
//{
//
//	int i = 0;
//	int n = 0;
//	int tet = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tet *= i;
//	}
//	printf("%d\n", tet);
//
//	return 0;
//}*/



//int main()
//{
//	int a = 0;
//	int n = 0;
//	int b = 1;
//	int sum = 0; 
//	for (n = 1; n <=3; n++)
//	{
//		b = 1;//把b初始化成1
//		for (a = 1; a <= n; a++)
//		{
//			b *= a;
//		}
//		sum += b;
//	}
//	
//	printf("%d\n",sum);
//
//	return 0;
//}


int main()
{
	
	int n = 0;
	int b = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		b *= n;
		sum += b;
	}

	printf("%d\n", sum);

	return 0;
}