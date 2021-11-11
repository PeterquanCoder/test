#define _CRT_SECURE_NO_WARNINGS
////汉诺塔问题
//#include <stdio.h>
//void hanoi(int n, char A, char B, char C)//n个盘子，A,B,C,表示三根柱子
//{
//	if (n == 1)//只有一个盘子就直接移动到C
//	{
//		printf("moving from %c to %c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A,C,B);//把（n-1）个盘子看成一个整体从A通过C移动到B
//		printf("moving from %c to %c\n", A, C);//把A上最大的盘子直接移动到C
//		hanoi(n - 1, B, A, C);//把在B上的（n-1）个盘子从B通过A移动到C
//	}
//}
//
//int main()
//{
//	int p;
//	printf("请输入盘子的个数：");
//	scanf("%d",&p);
//	hanoi(p, 'A', 'B', 'C');
//	return 0;
//}






//青蛙跳台阶问题
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ways(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
		return ways(n - 1) + ways(n - 2);//
}
int  main()
{
	int t;
	printf("请输入台阶总数：");
	scanf("%d", &t);
	int count = ways(t);
	printf("青蛙跳到顶部有%d种方法", count);
	return 0;
}
