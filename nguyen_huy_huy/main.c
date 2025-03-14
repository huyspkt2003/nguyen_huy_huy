#include <stdio.h>

int main()
{
	int arr[] = { 1,2,2,4,5,4,6,5,6,4 };
	int max = 0;
	int so_luong = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		{
			printf("%d\t", i);
		}
	}



}






