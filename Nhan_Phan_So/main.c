#include <stdio.h>
#include <math.h>

typedef struct
{
	int tu;
	int mau;
}phan_so_t;

// Chức năng: Nhân 2 phân số
// Input :
// struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
// Output : struct phan_tu ket qua phep tinh
void nhanpx(phan_so_t A, phan_so_t B)
{
	phan_so_t C;
	C.tu = A.tu * B.tu;
	C.mau = A.mau * B.mau;

	printf("Ket qua la:%d/%d", C.tu, C.mau);
}

// Chức năng: Chia 2 phân số
// Input :
// struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
// Output : struct phan_tu ket qua phep tinh
void chia_px(phan_so_t A, phan_so_t B)
{
	phan_so_t C;
	C.tu = A.tu * B.mau;
	C.mau = A.mau * B.tu;

	printf("Ket qua la:%d/%d", C.tu, C.mau);
}

// Chức năng: Cộng 2 phân số
// Input :
// struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
// Output : struct phan_tu ket qua phep tinh
void cong_px(phan_so_t A, phan_so_t B)
{
	phan_so_t C;

	if (A.mau == B.mau)
	{
		C.tu = B.tu + A.tu;
		C.mau = A.mau;

	}
	else
	{
		
		A.tu = A.tu * B.mau;
		A.mau = A.mau * B.mau;

		B.tu = B.tu * A.mau;
		B.mau = A.mau * B.mau;

		C.tu = B.tu + A.tu;
		C.mau = A.mau;
	}

	printf("Ket qua la:%d/%d", C.tu, C.mau);
}

// Chức năng: Rut gon 2 phân số
// Input :
// struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
// Output : struct phan_tu ket qua phep tinh
void rutgon_px(phan_so_t A)
{
	phan_so_t C;
	int ucln = 0;
	while (A.mau != 0) {
		int temp = A.mau;
		A.mau = A.tu % A.mau;
		A.tu = temp;
		ucln = A.tu;
	}
	

		C.tu = A.tu/ucln;
		C.mau = A.mau/ucln;
	

	printf("Ket qua la:%d/%d", C.tu, C.mau);
}




int main()
{
	phan_so_t X = { 1,2 };
	phan_so_t Y = { 1,2 };
	void cong_px( X, Y);
	printf("hello\n");

	
}


