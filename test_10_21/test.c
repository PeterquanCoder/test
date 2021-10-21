#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//strlen,strcmp的头文件
#include <windows.h>//Sleep的头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//
//	}
//
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	for(i = 0; i < 3; i++)
	{
		printf("请输入密码;>");
		scanf("%s",password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;

			
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}

	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");

	

	return 0;
}
