#include <stdio.h>
#include <math.h>

char str[] = "con cho con ";


int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 0; i <= size; i++)
	{
		if (str[i] == 99)
		{ 
			str[i + 1] -= 32;
			printf("%d\t", i);
		}
	}

}









