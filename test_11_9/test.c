//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////ʵ��1.0
//int main()
//{
//	int i1, i2, i3, i4, i5;
//	long multi, result;
//	for (i1 = 1; i1 <= 9; i1++)
//	{
//		for (i2 = 0; i2 <= 9; i2++)
//		{
//			for (i3 = 0; i3 <= 9; i3++)
//			{
//				for (i4 = 0; i4 <= 9; i4++)
//				{
//					for (i5 = 1; i5 <= 9; i5++)
//					{
//						multi = i1 * 10000 + i2 * 1000 + i3 * 100 + i4 * 10 + 15;
//						result = i5 * 100000 + i5 * 10000 + i5 * 1000 + i5 * 100 + i5 * 10 + i5;
//						if (multi * i1 == result)
//						{
//							printf("\n%5d%2d%2d%2d%2d\n", i1, i2, i3, i4, i5);
//							printf("X%12d\n", i1);
//							printf("______________\n");
//							printf("%3d%2d%2d%2d%2d%2d\n", i5, i5, i5, i5, i5, i5);
//
//						}
//
//					}
//				}
//
//			}
//
//		}
//	}
//	getchar();
//	return 0;
//}
//
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int j, i[5];//ѭ������������i������ʾ4�������
	int sign;//�ۼ�����ʱ�ķ���
	int result;//��������ʽ�Ľ��ֵ
	int count = 0;//��������ͳ�Ʒ��������ķ���
	int num[6];//���������
	float left, right;//�����м���
	char oper[5] = { ' ','+','-','*','/' };//�����
	printf("������5������");
	for (j = 1; j <= 5; j++)
	{
		scanf("%d", &num[j]);
	}
	printf("����������");
	scanf("%d", &result);
	for (i[1] = 1; i[1] <= 4; i[1]++)//ѭ��4���������1.��ʾ+��2.��ʾ-��3.��ʾ*��4.��ʾ/
	{
		if ((i[1] < 4) || (num[2]) != 0)//�������/����ڶ�������������Ϊ0
		{
			for (i[2] = 1; i[2] <= 4; i[2]++)
			{
				if ((i[2] < 4) || (num[3] != 0))
				{
					for (i[3] = 1; i[3] <= 4; i[3]++)
					{
						if ((i[3] < 4) || num[4] != 0)
						{
							for (i[4] = 1; i[4] <= 4; i[4]++)
							{
								if ((i[4] < 4) || (num[5] != 0))
								{
									left = 0;
									right = num[1];
									sign = 1;
									for (j = 1; j <= 4; j++)
									{
										switch (oper[i[j]])
										{
										case '+':
											left = left + sign * right;
											sign = 1;
											right = num[j + 1];
											break;
										case '-':
											left = left + sign * right;
											sign = -1;
											right = num[j + 1];
											break;//ͨ��-1��ʵ�ּ���
										case'*':
											right = right * num[j + 1];
											break;//ʵ�ֳ˷�
										case'/':
											right = right / num[j + 1];
											break;

										}
									}
									if (left + sign * right == result)
									{
										count++;
										printf("%3d: ", count);
										for (j = 1; j <= 4; j++)
										{
											printf("%d%c", num[j], oper[i[j]]);
										}
										printf("%d=%d\n", num[5], result);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (count == 0)
		printf("û�з���Ҫ��ķ���");
	getchar();
	return 0;
}