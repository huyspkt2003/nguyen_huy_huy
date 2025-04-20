#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ten[50];
    int tuoi;
    char gioi_tinh[4];
    float diemvan;
    float diemtoan;
    float diemtb;
} HocSinh;


float Tinh_TB(float diem1, float diem2)
{
    return (diem1 + diem2) / 2;
}

int main() {
    FILE* pf = fopen("D:/Download/DanhSachHocSinh1.csv", "r");

    if (pf == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    else {
        printf("Successfully opened the file.\n");
    }
    
//////////////////////
    HocSinh hocsinh;
    HocSinh hsmax;
    char buffer[1024];
    float TBmax = 0;
    char hocsinhmax[50];
 

    
    while (fgets(buffer, sizeof(buffer), pf) != NULL) {

        sscanf_s(buffer, "%49[^,],%d,%3s,%f,%f", 
            hocsinh.ten, (unsigned)_countof(hocsinh.ten),
            &hocsinh.tuoi, 
            hocsinh.gioi_tinh, (unsigned)_countof(hocsinh.gioi_tinh),
            &hocsinh.diemvan, 
            &hocsinh.diemtoan);

        hocsinh.diemtb = Tinh_TB(hocsinh.diemvan, hocsinh.diemtoan);
        if (hocsinh.diemtb > TBmax)
        {
            TBmax = hocsinh.diemtb;
            hsmax = hocsinh;
        }
    }
    
    printf("Hoc sinh co diem tb cao nhat:\n");
    printf("Name: %s\n", hsmax.ten);
    printf("Age: %d\n", hsmax.tuoi);
    printf("Gender: %s\n", hsmax.gioi_tinh);
    printf("Literature score : %.2f\n", hsmax.diemvan);
    printf("Math Score: %.2f\n", hsmax.diemtoan);
    printf(": %.2f\n", hsmax.diemtb);

    fclose(pf);
  

    return 0;
}