#include <stdio.h>

int main12()
{
	/*
	ָ�����㣺
		������ָ���ƶ�һ�Σ����˶����ֽ�
		char:1
		short:2
		int:4
		long:4
		long long:8

		�ӷ���ָ������ƶ�N�� p + 1
		������ָ����ǰ�ƶ�N�� p - 1

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
		Ұָ�룺ָ��ָ��Ŀռ�δ���䣨�޸���ԭ��
		����ָ�룺ָ��ָ��Ŀռ��ѷ��䣬���Ǳ��ͷ��ˣ��������������ú���ֵ����ȷ
	*/

	return 0;
}