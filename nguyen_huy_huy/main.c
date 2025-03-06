#include <stdio.h>



int main()
{
	int x = 0;
	int y = 0;
	printf("hay nhap so nguyen x\n");
	scanf_s ( "%d", &x);
	printf("hay nhap so nguyen y\n");
	scanf_s("%d", &y);
	if (x >= y)
	{
		printf("so lon nhat la:%d",x);
	}
	else
	{
		printf("so lon nhat la:%d", y);
	}
}


