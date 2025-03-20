#include <stdio.h>
#include <math.h>

//Chức năng: dùng để chuyễn chữ thường thành chư IN HOA
//Input: chuỗi
// (char* string)
//Output: so tu trong chuoi
void sum_word(char* string)
{
	int sum_ele = 0;
	int sum_word = 0;
	while (string [sum_ele] != 0)
	{
		if (string[sum_ele] == 32 && string[sum_ele+1]!=32  )
		{
			sum_word++;
		}
		sum_ele++;

	}
	printf("%d", sum_word);
}

int main()
{
	int tong = 0;
	char str[] = " Hello world hihi";
	sum_word(str);
	

}









