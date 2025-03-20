#include <stdio.h>
#include <math.h>

//Chức năng: Xây dựng hàm. dùng để điếm có bao nhiêu ký tự space (dấu cách) trong chuỗi
//Input: chuỗi
// (char* string)
//Output: so ki tu space
int sum_space(char* string)
{
	int sum_ele = 0;
	int sum_space = 0;
	while (string [sum_ele] != 0)
	{
		if (string[sum_ele] == ' ')
		{
			sum_space++;
		}
		sum_ele++;

	}
	return sum_space;
	
}

int main()
{
	int tong = 0;
	char str[] = "hello world hihi";
	tong = sum_space(str);
	printf("%d", tong);

}









