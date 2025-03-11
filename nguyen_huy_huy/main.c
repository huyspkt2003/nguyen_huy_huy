#include <stdio.h>
#include <math.h>

int main()
{
	int kq = 0;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			kq = j * i;
			printf("%d x %d = %d \t",j, i, kq);
			

		}
		printf("\n");
	}
}




