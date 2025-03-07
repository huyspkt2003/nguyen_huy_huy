#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int delta = 0;
	int no = 0;
	int no_kep = 0;
	int x1 = 0;
	int x2 = 0;
	printf(" Hay nhap vao so a:");
	scanf_s("%d",&a);
	printf(" Hay nhap vao so b:");
	scanf_s("%d", &b);
	printf(" Hay nhap vao so c:");
	scanf_s("%d", &c);
	delta = b*b - (4 * a * c);

	if ( delta<0 )
	{
		printf("pt vo nghiem");
	}
	else if (delta == 0)
	{
		no_kep = -b / (2 * a);
		printf("pt co nghiem kep la x1=x2=:%d", no_kep );
	}
	else 
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("phuong trinh co 2 nghiem la x1 =:%d\n x2=%d" , x1, x2 );
		
	}

}