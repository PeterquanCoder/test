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
//		printf("���벻��ȷ\n");
//			
//			
//
//	}
//
//	return 0;
//}*/




//whileѭ��
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

//bieak��continue��ʹ��
//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
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
	//��whileѭ���У�continue����������������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��

	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}

	return 0;
}