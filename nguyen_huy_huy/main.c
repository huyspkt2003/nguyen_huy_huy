#include <stdio.h>
#include <math.h>

//Chức năng: In ra cac vi tri cua so lon nhat trong mang
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: vi tri cua so lon nhat trong mang
void position(int* arr, int num_elements)
{
	
	int max = 0;

	for (int i = 0; i < num_elements; i++)
	{
		if (*(arr+i) > max)
		{
			max = *(arr + i);
		}
	}
	for (int i = 0; i < num_elements; i++)
	{
		if (*(arr+i) == max)
		{
			printf("%d\t", i);
		}
	}
	
}


int main()
{
	int arr[] = { 1,2,2,4,9,9,1,9 };
	position(arr,8);

}









