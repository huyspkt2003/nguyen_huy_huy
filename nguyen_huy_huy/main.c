#include <stdio.h>


int main()
{
	int pass = 1234;
	int buoc = 1;
	int mknhap = 0;
	int solan = 0;
	int sotien = 0;
	while (buoc != 4)
	{
		switch (buoc)
		{
		case 1:
			printf("hay nhap mk:");
			scanf_s("%d", &mknhap);
			if (mknhap == pass)
			{
				printf("hay nhap so tien can rut:");
				buoc = 2;
			}
			else
			{
				solan++;
				if (solan > 3)
				{
					buoc = 4;
				}
			}
			break;
		case 2:
			scanf_s("%d", &sotien);
			if (sotien > 10000)
			{
				printf("hay nhap lai so tien can rut:");
			}
			else
			{
				buoc = 3;
			}
			break;
		case 3:
			printf("so tien rut la:%d", sotien);
			buoc = 4;
			break;
		}

	}
}