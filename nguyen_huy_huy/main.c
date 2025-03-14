#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = { 1,2,3,4,7 };
	int num_elements = (sizeof(arr) / sizeof(arr[0])) - 1;
	float sum_odd = 0;
	float odd = 0;

	for (int i = 0; i <= num_elements; i++)
	{
		if (arr[i] %2 !=0)
		{
			printf("%d\t", arr[i]);
		}
	}
	


}







