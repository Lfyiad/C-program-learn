#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main6()
{
	int a1, a2, b1, b2, h1, h2;
	scanf("%d,%d,%d,%d", &a1, &a2, &b1, &b2);
	h1 = a1 - a2;
	h2 = b1 - b2;
	printf("%d+%di", h1, h2);
	getchar();
	return 0;
}