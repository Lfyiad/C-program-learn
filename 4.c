#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4()
{
	float a1, a2;
	printf("输入a同学两科成绩：");
	scanf("%f,%f", &a1, &a2);
	float b1, b2;
	printf("输入b同学两科成绩：");
	scanf("%f,%f", &b1, &b2);
	float c1, c2;
	printf("输入c同学两科成绩：");
	scanf("%f,%f", &c1, &c2);
	printf("两科成绩平均分分别为：%f,%f", ((a1+b1+c1) / 3), ((a2 + b2+ c2 ) / 3));
	return 0;
}