#include <stdio.h>
#include <math.h>

char str[] = "hello";
int sum = 0;

int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 1; i <= size; i++)
	{
		sum++;
	}
	printf("%d", sum);

}









