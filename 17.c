#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main17()
{
	float a = 0.0f, b = 0.0f;
	char sign = ' ';
	scanf("%f%c%f", &a, &sign, &b);
	switch (sign)
	{
	case '+':
		printf("%g%c%g=%g", a, sign, b, (a + b));
		break;
	case '-':
		printf("%g%c%g=%g", a, sign, b, (a - b));
		break;
	case '*':
		printf("%g%c%g=%g", a, sign, b, (a * b));
		break;
	case '/':
		if (b == 0)
		{
			printf(" ‰»Î”–ŒÛ£°");
			break;
		}
		else
		{
			printf("%g%c%g=%g", a, sign, b, (a / b));
			break;
		}
	}

	return 0;
}