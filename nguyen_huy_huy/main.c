#include <stdio.h>
#include <math.h>

//Chức năng: dùng để chuyễn chữ thường thành chư IN HOA
//Input: chuỗi
// (char* string)
//Output: no
void upper_case(char* string)
{
	int sum_ele = 0;
	int sum_space = 0;
	while (string [sum_ele] != 0)
	{
		if (string[sum_ele] >= 97)
		{
			string[sum_ele] -= 32;
		}
		sum_ele++;

	}
}

int main()
{
	int tong = 0;
	char str[] = "Hello world hihi";
	upper_case(str);
	

}









