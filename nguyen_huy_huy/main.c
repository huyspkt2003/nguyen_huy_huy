#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int gt = 1;
	printf("nhap so nguyen: ");
	scanf_s("%d", &n);
	for (int np = 1 ; np <= n; np++)
	{
		gt = gt*np;
	}
	printf("%d",  gt );

	
}




