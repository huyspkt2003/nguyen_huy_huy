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

float Tinh_TB(float diem1, float diem2) {
    return (diem1 + diem2) / 2.0f;
}

int main() {
    FILE* pf = fopen("D:/Download/DanhSachHocSinh1.csv", "r");

    if (pf == NULL) {
        printf("Không mở được file.\n");
        return 1;
    }

    HocSinh dshs[5];
    int n = 0;
    char buffer[1024];


    while (fgets(buffer, sizeof(buffer), pf) != NULL) {
        int result = sscanf(buffer, "%49[^,],%d,%3[^,],%f,%f",
            dshs[n].ten,
            &dshs[n].tuoi,
            dshs[n].gioi_tinh,
            &dshs[n].diemvan,
            &dshs[n].diemtoan);

        if (result == 5) {
            dshs[n].diemtb = Tinh_TB(dshs[n].diemvan, dshs[n].diemtoan);
            n++;
        }
        else {
            printf(" Lỗi đọc dòng: %s", buffer);
        }
    }
    int vitri_max = 0;
    for (int i = 1; i < n; i++) {
        if (dshs[i].diemtb > dshs[vitri_max].diemtb) {
            vitri_max = i;
        }
    }

    HocSinh hsmax = dshs[vitri_max];
    printf("\n Hoc sinh co diem TB cao nhat:\n");
    printf("Ten: %s\n", hsmax.ten);
    printf("Tuoi : %d\n", hsmax.tuoi);
    printf("Gioi tinh: %s\n", hsmax.gioi_tinh);
    printf("Diem Van: %.2f\n", hsmax.diemvan);
    printf("Diem Toan: %.2f\n", hsmax.diemtoan);
    printf("Diem TB : %.2f\n", hsmax.diemtb);
    
    printf("----------------------------------------------------------------\n");
    // Sapxep
    HocSinh temp;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i+1; j < n; j++)
        {

            if (dshs[i].diemtb < dshs[j].diemtb)
            {
                temp = dshs[i];
                dshs[i] = dshs[j];
                dshs[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s,%d,%s,%.2f,%.2f,%.2f\n", dshs[i].ten, dshs[i].tuoi, dshs[i].gioi_tinh,
            dshs[i].diemvan, dshs[i].diemtoan, dshs[i].diemtb);
    }

    //--------------------------------------------------------------------------------------
    FILE* pf_out = fopen("D:/Download/SapXep.txt", "w");

    if (pf_out == NULL) {
        printf("Không mở được file.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        fprintf(pf_out, "%s,%d,%s,%.2f,%.2f,%.2f\n", dshs[i].ten, dshs[i].tuoi, dshs[i].gioi_tinh,
            dshs[i].diemvan, dshs[i].diemtoan, dshs[i].diemtb);
    }


    fclose(pf_out);
    fclose(pf);
    return 0;
}

