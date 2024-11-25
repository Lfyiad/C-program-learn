#include <stdio.h>

int main12()
{
	/*
	指针运算：
		步长：指针移动一次，走了多少字节
		char:1
		short:2
		int:4
		long:4
		long long:8

		加法：指针向后移动N步 p + 1
		减法：指针往前移动N步 p - 1

	*/
	int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p + 1);
	printf("%p\n", p - 1);

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p2 = &arr;
	printf("%d\n", *p2);
	printf("%d\n", *p2 + 1);
	printf("%d\n", *p2 + 2);

	/*
		野指针：指针指向的空间未分配（修改器原理）
		悬空指针：指针指向的空间已分配，但是被释放了，被其他进程利用后数值不正确
	*/

	return 0;
}