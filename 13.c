#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main13()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("sum=%d\n", sum);

	return 0;
}