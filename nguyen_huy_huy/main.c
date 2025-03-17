#include <stdio.h>
#include <math.h>

char str[] = "     this is     a    string   ";
sum_word = 0;

int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 1; i <= size; i++)
	{
		if(str[i] == 32 && str[i+1] != 32 && str[i + 1] != 0)
			sum_word ++;
	}
	printf("%d", sum_word);

}









