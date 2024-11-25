#include <stdio.h>

int main21()
{
	//定义三个一维数组
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int arr3[5] = { 11,12,13,14,15 };

	//定义一个指针数组用于存放一维数组的地址
	int* arr_p[3] = {arr1,arr2,arr3};

	//获取指针
	int** p = arr_p;
	
	//遍历数组
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", *(*p + j));
		}
		printf("\n");
		p++;
	}

	return 0;
}