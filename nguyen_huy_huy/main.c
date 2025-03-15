#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = {1,2,3,4,5,11,22,33,6,7,8,73};
	int sum_of_ele = sizeof(arr) / sizeof(arr[0]);
	int uocchung = 0;
	
	for (int i = 0; i < sum_of_ele ; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
				uocchung++;

		}
		if (uocchung == 2)
			printf("%d\t", arr[i]);
		 uocchung = 0;
	}



}








