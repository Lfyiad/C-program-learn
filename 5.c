#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5()
{
	int x1, y1;
	int x2, y2;
	printf("�����һ��������");
	scanf("%d,%d", &x1, &y1);
	printf("����ڶ���������");
	scanf("%d,%d", &x2, &y2);
	if ((y1 - y2) > 0)//�鲿Ϊ��
	{
		if ((x1-x2)!=0){ printf("��Ϊ��%d+%di", (x1 - x2), (y1 - y2));}//ʵ��Ϊ��Ϊ��
		else { printf("��Ϊ��%di", (y1 - y2)); }
	}
	else if ((y1 - y2) < 0)//�鲿Ϊ��
	{
		if ((x1 - x2) != 0) { printf("��Ϊ��%d%di", (x1 - x2), (y1 - y2)); }
		else { printf("��Ϊ��%di", (y1 - y2)); }
	}
	else//�鲿Ϊ��
	{
		printf("��Ϊ��%d", (x1 - x2));
	}

}