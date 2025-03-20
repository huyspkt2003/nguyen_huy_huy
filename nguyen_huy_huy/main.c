#include <stdio.h>
#include <math.h>

//Chức năng: sap xep cac phan tu theo gia tri tang dan
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: no
void position(int* arr, int num_elements)
{
	int temp = 0;
	int uocchung;

	for (int i = 0; i < num_elements; i++)
	{
		for (int i = 0; i < num_elements - 1; i++)
		{
			if (*(arr+i) > *(arr+i+1))
			{
				temp = *(arr + i+1);
				*(arr + i+1) = *(arr+i);
				*(arr + i) = temp;
			}
		}
			
	}
	
}

int main()
{
	int arr[] = { 1,3,2,4,7,9,1,9 };
	position(arr,8);


}









