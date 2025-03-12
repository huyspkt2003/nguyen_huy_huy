#include <stdio.h>
#include <math.h>

int main()
{
	int tong = 0;
	int nhap = 0;
	int n50 = 0;
	int n100 = 0;
	int n200 = 0;
	int n500 = 0;
	int ch = 0;
	printf("nhap so tien: ");
	//scanf_s("%d", &nhap);
	scanf_s("%d", &nhap);
	while (nhap != tong)
	{
		if (nhap - tong >= 50)
		{
			n50++;
			tong = n50*50+ n100*100+ n200*200+ n500*500;
		}
		if (nhap - tong >= 100)
		{
			n100++;
			tong = n50 * 50 + n100 * 100 + n200 * 200 + n500 * 500;
		}
		if (nhap - tong >= 200)
		{
			n200++;
			tong = n50 * 50 + n100 * 100 + n200 * 200 + n500 * 500;
		}
		if (nhap - tong >= 500)
		{
			n500++;
			tong = n50 * 50 + n100 * 100 + n200 * 200 + n500 * 500;
		}
	}
	printf("%d x 50\n %d x 100\n %d x 200\n %d x 500\n ", n50, n100, n200, n500  );

	
}




