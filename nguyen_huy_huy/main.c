#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int sl = 0;
	do
	{
		printf("nhap so nguyen: ");
		scanf_s("%d", &n);
		if (n ==
			0)
			sl++;
	} while (sl <= 5);
}




