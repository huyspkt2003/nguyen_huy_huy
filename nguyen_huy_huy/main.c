#include <stdio.h>
#include <math.h>

char str[] = "Hello world , I'm HuyHuy";


int main()
{
	int size = sizeof(str) / sizeof(str[0])-1; 
	for (int i = 1; i <= size; i++)
	{
		if(str[i] >= 97)
			str[i]= str[i]- 32;
	}
	printf("%s", str);

}









