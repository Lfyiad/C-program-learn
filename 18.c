#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main18()
{
	char str[100];
	fgets(str, sizeof(str)/sizeof(char),stdin);
	int i;
	for (i = 0; str[i] != '\n'; i++);

	printf("�ַ����к���%d���ַ�", i);
	getchar();
	return 0;
}
