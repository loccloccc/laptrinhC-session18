#include <stdio.h>
#include <string.h>


struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};


void inThongTinSinhVien(struct SinhVien sv) {
    printf("id: %d, ten : %s, tuoi : %d, sdt: %s\n", sv.id, sv.name, sv.age, sv.phoneNumber);
}


void themSinhVien(struct SinhVien sinhVien[], int *soLuongSinhVien) {
    struct SinhVien svMoi;

    
    printf("Nhap id sinh vien moi: ");
    scanf("%d", &svMoi.id);
    getchar();  
    
    printf("Nhap ten sinh vien moi : ");
    fgets(svMoi.name, 50, stdin);
    svMoi.name[strcspn(svMoi.name, "\n")] = 0;  
    
    printf("Nhap tuoi sinh vien moi : ");
    scanf("%d", &svMoi.age);
    getchar();  
    
    printf("Nhap so dien thoai cua sinh vien moi : ");
    fgets(svMoi.phoneNumber, 15, stdin);
    svMoi.phoneNumber[strcspn(svMoi.phoneNumber, "\n")] = 0;  

    
    sinhVien[*soLuongSinhVien] = svMoi;
    (*soLuongSinhVien)++; 
}

int main() {
    
    struct SinhVien sinhVien[50] = {
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Nguyen B", 21, "0987654321"},
        {3, "Nghuyen  C", 22, "0912345678"},
        {4, "Nguyen D", 23, "0908765432"},
        {5, "Nguyen E", 24, "0932123456"},
    };

    int soLuongSinhVien = 5; 

    
    themSinhVien(sinhVien, &soLuongSinhVien);

    
    printf("\nThong tin toan bo sinh vien moi them: \n");
    for (int i = 0; i < soLuongSinhVien; i++) {
        inThongTinSinhVien(sinhVien[i]);
    }

    return 0;
}
