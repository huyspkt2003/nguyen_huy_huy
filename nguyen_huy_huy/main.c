#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0;
	float b = 0;
	float h = 0;
	float kq = 0;
	printf("Nhap a: ");
	scanf_s("%f", &a);
	printf("Nhap b: ");
	scanf_s("%f", &b);
	h = (b-a) / 1000;
	for (int i = 0; i < 999; i++)
	{
		kq += (pow((a + i * h), 2) + pow((a + (1 + i) * h), 2))*h/2;
	}
	printf("Ket qua la:%f", kq);
}




