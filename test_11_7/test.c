#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一维数组
//int main()
//{
//	char arr1[5] = { 0 };
//	int siz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d\n", siz);
//	scanf("%s", &arr1);
//	printf("%s", arr1);
//	return 0;
//}


//二维数组
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


}
int main()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int x = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (x = 0; x < sz; x++)
	{
		printf("%d ", arr[x]);
	}
	return 0;
}