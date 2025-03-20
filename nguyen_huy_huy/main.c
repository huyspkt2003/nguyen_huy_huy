#include <stdio.h>
#include <math.h>

//Chức năng: Tính TBC cac phan tu la so le của mảng
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: TBC của các phần tử lẻ trong mảng
float average(int* array, int num_elements)
{
	
	float sum_odd = 0;
	float odd = 0;
	float average_odd = 0;

	for (int i = 0; i < num_elements; i++)
	{
		if (*(array+i) % 2 != 0)
		{
			odd += *(array + i);
			sum_odd++;
		}
	}
	average_odd = odd / sum_odd;
	return average_odd;

}


int main()
{
	float TBC = 0;
	int arr[] = { 1,2,3,4,7 };
	TBC = average(arr, 5);

	printf("TBC la: %f", TBC);

}









