#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void menu()
{
	printf("*****************************\n");
	printf("**********  1.piay   ********\n");
	printf("**********  0.exit   ********\n");
	printf("*****************************\n");

}

#include  <stdlib.h>
#include <time.h>
void game()
{
	//��������Ϸ�Ĺ���
	//1.���������    ͷ�ļ�#include  <stdlib.h>
	//rand����������һ��0-32767֮������
	//ʱ���  ������

	int ret = rand() % 100 - 1;//%100��������0-99��Ȼ���1����1-100
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
		}
	}



}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{ 
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}

	} while (input);

	 



	return 0;
}

