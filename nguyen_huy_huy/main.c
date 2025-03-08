#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int n = 0;
	while (n != 2)
	{

		switch (n)
		{
		case 0:
			printf("Hay nhap so:");
			scanf_s("%d", &a);
			if (a == 0)
			{
				n = 0;
			}
			else
			{
				n = 1;
			}
			break;
		case 1:
			if ((a+2)%2 == 0)
			{
				printf("Day la so chan");
				n = 2;

			}
			else
			{
				printf("Day la so le");
				n = 2;
			}
			break;
		}
	}




}