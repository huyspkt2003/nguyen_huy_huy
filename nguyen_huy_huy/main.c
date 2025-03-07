#include <stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf(" Hay nhap vao so a:");
	scanf_s("%d",&a);
	printf(" Hay nhap vao so b:");
	scanf_s("%d", &b);
	printf(" Hay nhap vao so c:");
	scanf_s("%d", &c);
	if (a > b && a > c)
	{
		printf("So lon nhat la:%d", a);
	}
	else if (b > a && b > c)
	{
		printf("So lon nhat la:%d", b );
	}
	else 
	{
		printf("So lon nhat la:%d", c );
	}

}