#include <stdio.h>
#include <math.h>

//Chức năng: in ra các giá trị LẼ trong mảng arr
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: no
void position(int* arr, int num_elements)
{
	
	int max = 0;

	for (int i = 0; i < num_elements; i++)
	{
		if (*(arr + i)%2 !=0)
		{
			 printf("%d\t", * (arr + i));
		}
	}
	
}


int main()
{
	int arr[] = { 1,2,2,4,9,9,1,9 };
	position(arr,8);


}









