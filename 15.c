#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int jiami(char* str);

int main15()
{
	char str[100];
	printf("�������ַ�����");
	fgets(str, sizeof(str)/sizeof(char), stdin);
	printf("��������ַ����ǣ�%s\n", str);

	int i,status;
	for (i = 0; str[i]!='\n'; i++)
	{
		if (str[i] == 0 && str[i+1]==0 && str[i+2]==0) break;
		else status = jiami(&str[i]);
		if (status == -1)
		{
			printf("������ַ�%c�޷������ܣ�\n", str[i]);
		}
	}

	printf("���ܺ���ַ����ǣ�%s\n", str);
	getchar();

	return 0;
}

int jiami(char* str)
{
	if ((*str >= 'a' && *str <= "z") || (*str >= 'A' && *str <= 'Z'))
	{
		if ((*str >= 'w' && *str <= "z") || (*str >= 'W' && *str <= 'Z'))
		{
			*str = *str - 22;
		}
		else *str += 4;
		return 0;
	}
	else if (*str == ' ')return 0;
	else return -1;
}