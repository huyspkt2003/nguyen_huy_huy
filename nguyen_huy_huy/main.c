#include <stdio.h>
#include <math.h>

int main()
{
	float tien_gui = 0;
	float tien_nhan = 0;
	int i = 0;
	int n = 0;
	printf("nhap tien gui: ");
	scanf_s("%f", &tien_gui);
	printf("nhap so nam gui: ");
	scanf_s("%d", &n);
	tien_nhan = tien_gui;
	for (int i = 0 ;i < n ; i++)
	{
			tien_nhan *=  (1+ 0.082);
	}
	printf("so tien nhan duoc la:%f", tien_nhan);
}




