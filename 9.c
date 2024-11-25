#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void panduan(int x)
{
    if (x >= 1 && x <= 10)
    {
        printf("A\n");
    }
    else if (x >= 11 && x <= 20)
    {
        printf("B\n");
    }
    else if (x >= 21 && x <= 30)
    {
        printf("C\n");
    }
    else
    {
        printf("输入数据有误");
    }
}

int main9()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    panduan(a);
    panduan(b);
    panduan(c);
}