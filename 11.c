#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main11()
{
	int a = 0;
	scanf("%d", &a);
	int temp = a / 10;
	switch (temp)
	{
	case 10:
	case 9:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 7:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("����");
		break;
	default:
		printf("������������");
		break;
	}

	return 0;
}