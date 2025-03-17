#include <stdio.h>
#include <math.h>

char str[] = "hello world , I'm GPT";
int sum_space = 0;

int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 1; i <= size; i++)
	{
		if(str[i] == 32)
			sum_space++;
	}
	printf("%d", sum_space);

}









