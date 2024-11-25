#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main3()
{
	float zhengfangxing_a = 0.0f;
	float sanjiaoxing_yao = 0.0f;
	float sanjiaoxing_di = 0.0f;

	printf("正方形边长：");
	scanf("%f", &zhengfangxing_a);
	printf("三角形腰长/底：");
	scanf("%f,%f", &sanjiaoxing_yao, &sanjiaoxing_di);

	float zhengfangxing_bianchang = 4 * zhengfangxing_a;
	float zhengfangxing_mianji = zhengfangxing_a * zhengfangxing_a;

	float sanjiaoxing_bianchang = 2 * sanjiaoxing_yao + sanjiaoxing_di;
	float sanjiaoxing_mianji = 0.5 * sanjiaoxing_di * sqrt(sanjiaoxing_yao * sanjiaoxing_yao - (0.5 * sanjiaoxing_di) * (0.5 * sanjiaoxing_di));
	printf("正方形边长为：%f\n", zhengfangxing_bianchang);
	printf("正方形面积为：%f\n", zhengfangxing_mianji);
	printf("三角形边长为：%f\n", sanjiaoxing_bianchang);
	printf("三角形面积为：%f\n", sanjiaoxing_mianji);
}