#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(unsigned int* a, unsigned int* b,unsigned int* result)// 辗转相除法求最大公约数
{
	unsigned int temp_a, temp_b;
	if (*a >= *b) { temp_a = *a; temp_b = *b; }
	else { temp_a = *b; temp_b = *a; }

	if (temp_a % temp_b == 0) {
		*result = temp_b;
		return 0; 
	}
	else {
		*a = temp_b,*b = temp_a %temp_b;
		return -1;
	}
}

int main14()
{
	unsigned int a, b,result,function_return;
	printf("请输入两个正整数(a,b):");
	scanf("%d,%d", &a, &b);
	unsigned int temp_a = a, temp_b = b;	
	do {
		function_return = calculate(&a, &b,&result);
	} while (function_return != 0);
	printf("%d和%d的最大公因数是：%d\n", temp_a, temp_b, result);
	printf("%d和%d的最小公倍数是：%d\n", temp_a, temp_b, (temp_a * temp_b) / result);

	return 0;
}
