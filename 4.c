#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4()
{
	float a1, a2;
	printf("����aͬѧ���Ƴɼ���");
	scanf("%f,%f", &a1, &a2);
	float b1, b2;
	printf("����bͬѧ���Ƴɼ���");
	scanf("%f,%f", &b1, &b2);
	float c1, c2;
	printf("����cͬѧ���Ƴɼ���");
	scanf("%f,%f", &c1, &c2);
	printf("���Ƴɼ�ƽ���ֱַ�Ϊ��%f,%f", ((a1+b1+c1) / 3), ((a2 + b2+ c2 ) / 3));
	return 0;
}