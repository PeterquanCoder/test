//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
////��������Ϸ
//int main()
//{
//	int n, m, i = 0;
//	srand(time(NULL));
//	n = rand() % 100 + 1;
//	do {
//		printf("��������Ҫ��������֣�");
//		scanf("%d", &m);
//		i++;
//		if (m > n)
//			printf("���󣬲´��ˣ�\n");
//		else if (m < n)
//			printf("���󣬲�С�ˣ�\n");
//	} while (m != n);
//	printf("����ˣ�\n");
//	printf("������%d��\n", i);
//	if (i <= 5)
//		printf("������������ô��Ͳ¶��ˣ�");
//	else if (i > 5)
//		printf("������Ҫ�Ľ��������ö��ַ�");
//	return 0;
//}



//������Ϸ
#include <stdio.h>
#include <time.h>
void play(int n)
{
	int i, m = 0, t = 0;
	for (i = 0; i < n; i++)
	{
		t = rand() % 6 + 1;
		m += t;
		printf("\t��%d����%d\n", i + 1, t);
	}
	printf("\t�ܵ���Ϊ��%d\n", m);
}
int main()
{
	int c;//��������
	int n;//���ӵ�����
	int i, j;
	do {
		srand(time(NULL));
		printf("�������ӵ����������0�˳�����\n");
		scanf("%d", &n);
		if (n == 0)break;//����һ������
		printf("�����뱾�۲�������������0�˳���");
		scanf("%d", &c);
		if (c == 0)break;//����һ����
		for (i = 0; i < c; i++)
		{
			printf("\n��%dλѡ��Ͷ��������Ϊ��\n", i + 1);
			play(n);
		}
		printf("\n");
	} while (1);
	return 0;
}

