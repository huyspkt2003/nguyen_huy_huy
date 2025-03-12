#include <stdio.h>
#include <math.h>

int main()
{
	int nhap = 0;
	int n = 0;
	printf("nhap so nguyen: ");
	scanf_s("%d", &nhap);
		for (int i = 0; i < nhap; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i % j == 0)
				n++;
					
			}
			if (n == 2)
				printf("%d\t", i);
			n = 0;
		}

	
	
}




