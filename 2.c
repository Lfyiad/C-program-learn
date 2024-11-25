#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main2()
{
	int a, b;
	float c;
	scanf("%d,%d", &a, &b);
	printf("%d+%d=%d\n", a, b, (a + b));
	printf("%d-%d=%d\n", a, b, (a - b));
	printf("%d*%d=%d\n", a, b, (a * b));
	printf("%d/%d=%f\n", a, b, (a/(float)b));
	getchar();
}