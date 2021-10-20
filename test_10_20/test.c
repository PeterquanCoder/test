#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = printf("Hello world!");
    printf("\n");
    printf("%d\n", a);





    return 0;
}



#include <stdio.h>
int main()
{
    char st[] = "Hello world!";
    printf("Hello world!\n");
    printf("%d", sizeof(st) / sizeof(st[0]) - 1);




    return 0;
}