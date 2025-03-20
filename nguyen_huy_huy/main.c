#include <stdio.h>
#include <math.h>

//Chức năng: dùng để in hoa chữ cái đầu tiên của từ trong chuỗi str
//"nguyen van a" -> "Nguyen Van A"
//Input: chuỗi
// (char* string)
//Output: no
void upper_word(char* string)
{
	int sum_ele = 0;
	int sum_word = 0;
	string[0] -= 32;
	while (string [sum_ele] != 0)
	{
		if (string[sum_ele] == 32 && string[sum_ele+1]!=32  )
		{
			string[sum_ele + 1] -= 32;
		}
		sum_ele++;

	}
	printf("%d", sum_word);
}

int main()
{
	int tong = 0;
	char str[] = "nguyen huu huy";
	upper_word(str);
	

}









