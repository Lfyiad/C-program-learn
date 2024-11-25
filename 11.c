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
		printf("优");
		break;
	case 8:
		printf("良");
		break;
	case 7:
		printf("中");
		break;
	case 6:
		printf("及");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("不及");
		break;
	default:
		printf("输入数据有误！");
		break;
	}

	return 0;
}