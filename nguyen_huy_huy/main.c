#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	printf("Nhap so nguyen a: ");
	scanf_s("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf_s("%d", &b);
	if (a == 0 || b == 0)
	{
		printf("uoc chung lon nhat la:%d", a + b);
	}
	/// Use Euclid algorithm
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("Uoc chung lon nhat la:%d", a);


	
	
}




