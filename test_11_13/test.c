//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
////猜数字游戏
//int main()
//{
//	int n, m, i = 0;
//	srand(time(NULL));
//	n = rand() % 100 + 1;
//	do {
//		printf("请输入所要输入的数字：");
//		scanf("%d", &m);
//		i++;
//		if (m > n)
//			printf("错误，猜大了！\n");
//		else if (m < n)
//			printf("错误，猜小了！\n");
//	} while (m != n);
//	printf("答对了！\n");
//	printf("共猜了%d次\n", i);
//	if (i <= 5)
//		printf("你个大聪明，这么快就猜对了！");
//	else if (i > 5)
//		printf("方法需要改进，常试用二分法");
//	return 0;
//}



//骰子游戏
#include <stdio.h>
#include <time.h>
void play(int n)
{
	int i, m = 0, t = 0;
	for (i = 0; i < n; i++)
	{
		t = rand() % 6 + 1;
		m += t;
		printf("\t第%d粒：%d\n", i + 1, t);
	}
	printf("\t总点数为：%d\n", m);
}
int main()
{
	int c;//参赛人数
	int n;//骰子的数量
	int i, j;
	do {
		srand(time(NULL));
		printf("设置骰子的数量（输出0退出）：\n");
		scanf("%d", &n);
		if (n == 0)break;//最少一个骰子
		printf("请输入本论参赛人数（输入0退出）");
		scanf("%d", &c);
		if (c == 0)break;//最少一个人
		for (i = 0; i < c; i++)
		{
			printf("\n第%d位选手投出的骰子为；\n", i + 1);
			play(n);
		}
		printf("\n");
	} while (1);
	return 0;
}

