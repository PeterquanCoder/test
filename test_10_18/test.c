#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//i/*nt main()
//{
//	int day = 9;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("输入不正确\n");
//			
//			
//
//	}
//
//	return 0;
//}*/




//while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}

//bieak和continue的使用
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的中止循环
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}


int main()
{
	int i = 1;
	//在while循环中，continue的作用是跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一步循环

	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}

	return 0;
}