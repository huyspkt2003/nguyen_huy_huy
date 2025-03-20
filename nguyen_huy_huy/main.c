#include <stdio.h>
#include <math.h>

//Chức năng: in ra các giá trị la số nguyên tố trong array
//Input: mảng, số lượng phần tử
// (int* array, so_luong)
//Output: no
void position(int* arr, int num_elements)
{
	int uocchung;

	for (int i = 0; i < num_elements; i++)
	{
		uocchung = 0;
		
			for (int j = 1; j <= *(arr + i); j++)
			{
			
					if (*(arr + i) % j == 0)
							   uocchung++;

			}
		if (uocchung == 2)
		{
			printf(" % d\t", *(arr + i));
			
		}
			
	}
	
}

int main()
{
	int arr[] = { 1,3,2,4,7,9,1,9 };
	position(arr,8);


}









