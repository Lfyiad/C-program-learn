#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(unsigned int* a, unsigned int* b,unsigned int* result)// շת����������Լ��
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
	printf("����������������(a,b):");
	scanf("%d,%d", &a, &b);
	unsigned int temp_a = a, temp_b = b;	
	do {
		function_return = calculate(&a, &b,&result);
	} while (function_return != 0);
	printf("%d��%d����������ǣ�%d\n", temp_a, temp_b, result);
	printf("%d��%d����С�������ǣ�%d\n", temp_a, temp_b, (temp_a * temp_b) / result);

	return 0;
}
