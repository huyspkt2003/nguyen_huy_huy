#include <stdio.h>
#include <math.h>

typedef int so_nguyen_t; // tao kieu du lieu moi - so_nguyen_t : ten kieu du ieu moi


//xay dung struct
struct phan_so
{
	int tu;
	int mau;
};

//cach 2
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
	struct phan_so C;
	C.tu = A.tu* B.tu;
	C.mau = A.mau * B.mau;
	
	printf("Ket qua la:%d/%d", C.tu, C.mau);
}

// Chức năng :xay dung kieu du lieu hoc sinh
// ten tuoi, diem toan, diem van, diem trung binh, xep loai hoc sinh( 0: gioi, 1:kha, 2:TB, 3:Yeu)
// phan_so_t* mang - dia chi bat dau cua mang
// so luong phan tu
// Output : struct phan_tu ket qua phep tinh
typedef struct
{
	char* ten ;
	int tuoi;
	float diem_van;
	float diem_toan;
	float diem_TB;
	int xep_loai;
}hoc_sinh;






void main()
{
	phan_so_t mang[] = {
		{ 1,2 },
		{ 2,3 },
		{ 3,4 },
		{ 5,6 }
	};
}









