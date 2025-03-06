#include <stdio.h>



int main()
{
	float d = 3.0;
	printf ("Nhap diem cua hoc sinh\n");
	scanf_s ("%f" ,& d);
	if (d >= 8.0)
	{
		 printf("gioi\n");
	}
	else if (8.0 > d && d >= 6.5)
	{
		printf("kha\n");
	}
	else if (6.5 > d && d >= 5.0)
	{
		printf("tb\n");
	}
	else if (d < 5.0)
	{
		printf("yeu\n");
	}
}


