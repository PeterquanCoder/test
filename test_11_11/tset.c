#define _CRT_SECURE_NO_WARNINGS
////��ŵ������
//#include <stdio.h>
//void hanoi(int n, char A, char B, char C)//n�����ӣ�A,B,C,��ʾ��������
//{
//	if (n == 1)//ֻ��һ�����Ӿ�ֱ���ƶ���C
//	{
//		printf("moving from %c to %c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A,C,B);//�ѣ�n-1�������ӿ���һ�������Aͨ��C�ƶ���B
//		printf("moving from %c to %c\n", A, C);//��A����������ֱ���ƶ���C
//		hanoi(n - 1, B, A, C);//����B�ϵģ�n-1�������Ӵ�Bͨ��A�ƶ���C
//	}
//}
//
//int main()
//{
//	int p;
//	printf("���������ӵĸ�����");
//	scanf("%d",&p);
//	hanoi(p, 'A', 'B', 'C');
//	return 0;
//}






//������̨������
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
	printf("������̨��������");
	scanf("%d", &t);
	int count = ways(t);
	printf("��������������%d�ַ���", count);
	return 0;
}
