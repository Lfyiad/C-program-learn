#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5()
{
	int x1, y1;
	int x2, y2;
	printf("输入第一个复数：");
	scanf("%d,%d", &x1, &y1);
	printf("输入第二个复数：");
	scanf("%d,%d", &x2, &y2);
	if ((y1 - y2) > 0)//虚部为正
	{
		if ((x1-x2)!=0){ printf("差为：%d+%di", (x1 - x2), (y1 - y2));}//实部为不为零
		else { printf("差为：%di", (y1 - y2)); }
	}
	else if ((y1 - y2) < 0)//虚部为负
	{
		if ((x1 - x2) != 0) { printf("差为：%d%di", (x1 - x2), (y1 - y2)); }
		else { printf("差为：%di", (y1 - y2)); }
	}
	else//虚部为零
	{
		printf("差为：%d", (x1 - x2));
	}

}