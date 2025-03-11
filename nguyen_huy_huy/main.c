#include <stdio.h>
#include <math.h>

int main()
{
	float so = 0;
	int n = 0;
	float tien = 2;

	printf("Hay nhap so:");
	scanf_s("%f", &so);
	if (0 < so && so < 50)//bac1
	{
		tien = so * 1.678;
	}
	else if (so < 100)//bac2
	{
		tien = 50 * 1.678 + (so - 50) * 1.734;
	}
	else if (so < 200)//bac3
	{
		tien = 50 * 1.678 + 50 * 1.734 + (so - 100) * 2.014;
	}
	else if (so < 300)//bac4
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (so - 200) * 2.536;
	}
	else if (so < 400)//bac5
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (so - 300) * 2.834;
	}
	else//bac6
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (so -400)*2.927;
	}
	printf("Tong so tien phai tra: %f", tien);
}




