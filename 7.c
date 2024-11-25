#include <stdio.h>

//ц╟ещеепР

int main7()
{
	int arr[] = { 2,5,1,3,4,55,88,25,26,15,16,15,64,8,46,48,96,45 };
	int len = sizeof(arr) / sizeof(int);
	int temp = 0;

	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len -1 - i; j++)
		{
			temp = arr[j];
			if (arr[j] >= arr[j + 1])
			{
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}