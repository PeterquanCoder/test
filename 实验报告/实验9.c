#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a = 7;
	float x = 2.5, y = 4.7, z;
	z = x + a % 3 * (int)(x + y) % 2 / 4;
	printf("z=%f\n", z);

}

