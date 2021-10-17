//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("章权\n");
//
//		return 0;
//}
                                 //常量
//#include <stdio.h>
//int main()
//{
//1.字面常量
   // 3.14
   //10
   // 
//2.const修饰的常量
    /*const int num = 10;
    printf("num = %d\n", num);*/

//3.#define 定义的标识符常量
//#define MAX 10000
//
//int main()
//{
//	int n = MAX;
//	printf("n = %d\n",n);
    //4.枚举常量


//	return 0;
//}
//4.枚举常量
#include <stdio.h>
enum Sex
{
    MALE,
    FEMALE,
    SECRET,

};

int main()
{
    enum SEX s = MALE;
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    return 0;
}