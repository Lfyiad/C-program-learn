#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main3()
{
	float zhengfangxing_a = 0.0f;
	float sanjiaoxing_yao = 0.0f;
	float sanjiaoxing_di = 0.0f;

	printf("�����α߳���");
	scanf("%f", &zhengfangxing_a);
	printf("����������/�ף�");
	scanf("%f,%f", &sanjiaoxing_yao, &sanjiaoxing_di);

	float zhengfangxing_bianchang = 4 * zhengfangxing_a;
	float zhengfangxing_mianji = zhengfangxing_a * zhengfangxing_a;

	float sanjiaoxing_bianchang = 2 * sanjiaoxing_yao + sanjiaoxing_di;
	float sanjiaoxing_mianji = 0.5 * sanjiaoxing_di * sqrt(sanjiaoxing_yao * sanjiaoxing_yao - (0.5 * sanjiaoxing_di) * (0.5 * sanjiaoxing_di));
	printf("�����α߳�Ϊ��%f\n", zhengfangxing_bianchang);
	printf("���������Ϊ��%f\n", zhengfangxing_mianji);
	printf("�����α߳�Ϊ��%f\n", sanjiaoxing_bianchang);
	printf("���������Ϊ��%f\n", sanjiaoxing_mianji);
}