#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1()
{
	int jiecheng = 1;
	int n;
	int i = 1;
	scanf("%d", &n);
	while (i <= n)
	{
		jiecheng = jiecheng * i;
		i= i+ 1;
	}
	printf("%d\n", jiecheng);

	return 0;
}