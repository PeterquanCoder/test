#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int id = 0;
//    float C_score = 0.0;
//    float math_score = 0.0;
//    float English_score = 0.0;
//    scanf("%d,%f,%f,%f", &id, &C_score, &math_score, &English_score);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, C_score, math_score, English_score);
//
//    return 0;
//}


//传址调用
//void Swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap(&num1, &num2);
//	printf("Swap::num1=%d num2=%d", num1, num2);
//
//
//
//	return 0;
//}




//int main()
//{
//    int j, n, i = 0;
//    char a;
//    a = getchar();
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 4 - i; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (n = i + 1; n > 0; n--)
//        {
//            printf("%c ", a);
//        }
//        printf("\n");
//    }
//
//
//
//
//
//
//
//
//
//    return 0;


//int main()
//{
//    int i = 0;
//    char arr[] = {73,32,99,97,110,111,32,105,116,33 };
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%c",arr[i]);
//    }
//
//
//
//
//    return 0;
//}


#include <stdio.h>
int main()
{
    int y = 0;
    int m = 0;
    int d = 0;
    scanf("%4d%2d%2d", &y, &m, &d);

    if (y >= 1990 && y <= 2015)
    {
        printf("year=%04d\n", y);
    }
    else
    {
        printf("输入错误，请重新输入1990到2015的数\n");
    }
    if (m >= 01 && m <= 12)
    {
        printf("month=%02d\n", m);
    }
    else
    {
        printf("输入错误，请重新输入1到12的数\n");
    }
    if (d >= 01 && d <= 30)
    {
        printf("date=%02d\n", d);
    }
    else
    {
        printf("输入错误，请重新输入1到30的数\n");
    }



    return 0;
}