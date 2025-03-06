#include <stdio.h>



int main()
{
	int a = 0;
	int b = 0;
	printf("hay nhap so nguyen x\n");
	scanf_s ( "%d", &a);
	printf("hay nhap so nguyen y\n");
	scanf_s("%d", &b);
	if (a >= b)
	{
		printf("so lon nhat la:%d",a);
	}
	else
	{
		printf("so lon nhat la:%d", b);
	}
}


