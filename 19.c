#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main19()
{
	int arr[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += arr[i][i];
	}
	printf("%d", sum);
}