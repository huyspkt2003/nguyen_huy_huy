#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int tong = 0;
	printf("nhap so nguyen: ");
	scanf_s("%d", &n);
	for (int np = 0; np <= n; np++)
	{
		tong = tong + np;
	}
	printf("%d", tong );

	
}




