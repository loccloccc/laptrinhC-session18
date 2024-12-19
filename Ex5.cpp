#include <stdio.h>
#include <string.h>


struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};


void inThongTinSinhVien(struct SinhVien sv) {
    printf("id: %d, ten: %s, tuoi: %d, sdt: %s\n", sv.id, sv.name, sv.age, sv.phoneNumber);
}


void suaThongTinSinhVien(struct SinhVien *sv) {
    printf("Nhap ten moi : ");
    getchar();  
    fgets(sv->name, 50, stdin);
    sv->name[strcspn(sv->name, "\n")] = 0;  
    
    printf("Nhap tuoi moi : ");
    scanf("%d", &(sv->age));
}

int main() {
    
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Nguyen B", 21, "0987654321"},
        {3, "Nghuyen  C", 22, "0912345678"},
        {4, "Nguyen D", 23, "0908765432"},
        {5, "Nguyen E", 24, "0932123456"}
    };

    int idCanSua;
    printf("Nhap id cua sinh vien can sua : ");
    scanf("%d", &idCanSua);

    int timThay = 0;

   
    for (int i = 0; i < 50; i++) {
        if (sinhVien[i].id == idCanSua) {
            timThay = 1;
            printf("Sinh vien can tim :  ");
            inThongTinSinhVien(sinhVien[i]);

            // Sửa thông tin sinh viên
            suaThongTinSinhVien(&sinhVien[i]);
            printf("Thong tin sinh vien vua sua : ");
            inThongTinSinhVien(sinhVien[i]);
            break;
        }
    }

    if (!timThay) {
        printf("Khong tim thay sinh vien co id : %d\n", idCanSua);
    }

   
    printf("\nThong tin toan bo sinh vien: \n");
    for (int i = 0; i < 50; i++) {
        if (sinhVien[i].id != 0) {  
            inThongTinSinhVien(sinhVien[i]);
        }
    }

    return 0;
}
