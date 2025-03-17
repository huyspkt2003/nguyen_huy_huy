#include <stdio.h>
#include <math.h>

char str[] = "nguyen van a";
sum_word = 0;

int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 0; i <= size; i++)
	{
		if (str[i] == 32)
			str[i + 1] -= 32;
	}
	str[0] -= 32;
	printf("%s", str);

}









