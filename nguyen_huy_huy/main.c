#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = { 6,7,5,4,2,8,5,6,4 };
	int min_temp = 0;
	int sum_of_ele = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;
	
	
		for (int i = 0; i < sum_of_ele-1; i++)
		{
			for (int i = 0; i < sum_of_ele - 1; i++)
			{
				if (arr[i] > arr[i + 1])
				{
					temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;
				}
			}
		}
		

}









