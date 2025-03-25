#include <stdio.h>
#include <math.h>

typedef int so_nguyen_t; // tao kieu du lieu moi - so_nguyen_t : ten kieu du ieu moi

//xay dung struct
struct phan_so
{
	int tu;
	int mau;
};

//Chức năng: Nhân 2 phân số
//Input :
// struct phan_so x - phan so thu nhat
// struct phan_so y - phan so thu hai
// Output : struct phan_tu
void nhanpx(struct phan_so A, struct phan_so B)
{
	struct phan_so C;
	C.tu = A.tu* B.tu;
	C.mau = A.mau * B.mau;
	
	printf("Ket qua la:%d/%d", C.tu, C.mau);
}

int main()
{
	struct phan_so X;
	X.tu = 1;
	X.mau = 2;
	struct phan_so Y;
	Y.tu = 1;
	Y.mau = 2;
	nhanpx(X, Y);
}









