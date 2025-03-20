#include <stdio.h>
#include <math.h>

//Chức năng: Tính tổng giá trị của mảng
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: Tổng của các phần tử trong mảng
int sum_array(int* array, int num_elements)
{
	int sum = 0;
	for (int i = 0; i < num_elements; i++)
	{
		sum = sum + *(array+i);
	}
	return sum;

}


int main()
{
	int tong = 0;
	int arr[] = { 1,2,3 };
	tong = sum_array(arr, 3);
	printf("The sum of element of array is:%d", tong);
}









