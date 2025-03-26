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

// Chức năng : nhap vao so luong hoc sinh
// Input: NO
// ten tuoi, diem toan, diem van, diem trung binh, xep loai hoc sinh( 0: gioi, 1:kha, 2:TB, 3:Yeu)
// hoc_sinh* mang - dia chi bat dau cua mang
// int so luong hoc sinh
// Output : khong ( xử lí trong mảng )

//void Nhap_hocsinh()
//{
//	int so_luong =0;
//	printf("Nhập số lượng học sinh: ");
//	scanf("%d", &so_luong);
//	
//
//	hoc_sinh* mang = (hoc_sinh*)malloc(so_luong * sizeof(hoc_sinh));
//	if (mang == NULL) {
//		printf("Không đủ bộ nhớ!\n");
//		return 1;
//	}
//	for (int i = 0; i < so_luong; i++)
//	{
//
//		printf("Nhập tên: ");
//		scanf_s(" %s", mang[i].ten);
//
//		printf("Nhập tuổi: ");
//		scanf_s("%d", &mang[i].tuoi);
//
//		printf("Nhập điểm Văn: ");
//		scanf_s("%f", &mang[i].diem_van);
//
//		printf("Nhập điểm Toán: ");
//		scanf_s("%f", &mang[i].diem_toan);
//
//	}
//
//}

// Chức năng : In ra danh sách
// ten tuoi, diem toan, diem van, diem trung binh, xep loai hoc sinh( 0: gioi, 1:kha, 2:TB, 3:Yeu)
// hoc_sinh* mang - dia chi bat dau cua mang
// int so luong hoc sinh
// Output : khong 


void In_DS(hoc_sinh* mang, int so_luong)
{
	
	for (int i = 0; i < so_luong; i++)
	{

		printf("Hoc sinh %d: ,%s , %d, %f, %f, %f, %d\n ",(i+1), mang[i].ten, mang[i].tuoi, mang[i].diem_toan, mang[i].diem_van,
			mang[i].diem_TB, mang[i].xep_loai);

	}
	
}

// Chức năng : Xep loai hoc sinh
// ten tuoi, diem toan, diem van, diem trung binh, xep loai hoc sinh( 0: gioi, 1:kha, 2:TB, 3:Yeu)
// hoc_sinh* mang - dia chi bat dau cua mang
// int so luong hoc sinh
// Output : khong ( xử lí trong mảng )


void XL_HS (hoc_sinh * mang, int so_luong)
{


		for (int i = 0; i < so_luong; i++)
		{

			float TB = (mang[i].diem_toan + mang[i].diem_van) / 2;
			mang[i].diem_TB = TB;
			if (TB >= 8.0)
				mang[i].xep_loai = 0;
			else if (TB <= 8.0 && TB >= 7.0)
				mang[i].xep_loai = 1;
			else if (TB <= 7.0 && TB >= 6.0)
				mang[i].xep_loai = 2;
			else
				mang[i].xep_loai = 3;

		}


	

}

// Chức năng : In ra hoc sinh co diem cao nhat
// ten tuoi, diem toan, diem van, diem trung binh, xep loai hoc sinh( 0: gioi, 1:kha, 2:TB, 3:Yeu)
// hoc_sinh* mang - dia chi bat dau cua mang
// int so luong hoc sinh
// Output : Thong tin hoc sinh gioi nhat

void HS_Gioi(hoc_sinh* mang, int so_luong)
{
	int vi_tri = 0;
	float max = 0;
	for (int i = 0; i < so_luong; i++)
	{

		if (mang[i].diem_TB > max)
		{
			max = mang[i].diem_TB;
			vi_tri = i;
		}
		
	}
	printf("Day la hoc sinh gioi nhat:%s , %d, %f, %f, %f, %d", mang[vi_tri].ten, mang[vi_tri].tuoi,mang[vi_tri].diem_toan, mang[vi_tri].diem_van,
		mang[vi_tri].diem_TB,mang[vi_tri].xep_loai);
}





// Bai 4: Chức năng : Sap xep hoc sinh theo diem trung binh tang dan
// Input:
// hoc_sinh* mang - dia chi bat dau cua mang
// int so luong hoc sinh
// Output : khong ( xử lí trong mảng )

void sapxep_HS(hoc_sinh* mang, int so_luong)
{
	hoc_sinh temp ;
	for (int i = 0; i < so_luong-1; i++)
	{
		for (int j = 0; j < so_luong-i -1; j++)
		{
			if (mang[j].diem_TB > mang[j+1].diem_TB)
			{
				temp = mang[j];
				mang[j] = mang[j+1];
				mang[j+1] = temp;
			}
			

		}

	}
	
}







 int main()
{
	
	hoc_sinh mang_hoc_sinh[] = {
		{.ten = "Nguyen Van A", .tuoi = 18, .diem_toan = 8, .diem_van = 9},
		{.ten = "Nguyen Van B", .tuoi = 18, .diem_toan = 7, .diem_van = 3},
		{.ten = "Nguyen Van C", .tuoi = 18, .diem_toan = 2, .diem_van = 2},
		{.ten = "Nguyen Van D", .tuoi = 18, .diem_toan = 8, .diem_van = 8}
	};
	XL_HS(mang_hoc_sinh, 4);
	sapxep_HS(mang_hoc_sinh, 4);
	



}









