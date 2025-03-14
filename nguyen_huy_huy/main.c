#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = { 1,2,3 };
	int num_elements = (sizeof(arr) / sizeof(arr[0])) - 1;
	int sum = 0;

	for (int i = 0; i <= num_elements; i++)
	{
		sum = sum + arr[i];
	}
	printf("The sum of elements in the array is: %d", sum);


}




