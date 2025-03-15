#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = { 1,2,2,4,5,4,6,5,6,100 };
	int max = 0;
	int sum_of_ele = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sum_of_ele; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\t", max);
	



}









