#include <stdio.h>

int main21()
{
	//��������һά����
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int arr3[5] = { 11,12,13,14,15 };

	//����һ��ָ���������ڴ��һά����ĵ�ַ
	int* arr_p[3] = {arr1,arr2,arr3};

	//��ȡָ��
	int** p = arr_p;
	
	//��������
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