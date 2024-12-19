#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[100];      
    int age;              
    char phoneNumber[20]; 
};

int main() {
    struct SinhVien sinhVien[5];

    for (int i = 0; i < 5; i++) {
        printf("Moi ban nhap thong tin sinh vien %d:\n", i + 1);
        printf("Moi ban nhap ten sinh vien: ");
        fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);  
        sinhVien[i].name[strcspn(sinhVien[i].name, "\n")] = 0;

        printf("Nhap tuoi cua sinh vien: ");
        scanf("%d", &sinhVien[i].age);  // Nhập tuổi sinh viên

        // Xóa ký tự dư thừa trong bộ đệm sau khi sử dụng scanf
        getchar();

        printf("Nhap so dien thoai cua sinh vien: ");
        fgets(sinhVien[i].phoneNumber, sizeof(sinhVien[i].phoneNumber), stdin);  // Nhập số điện thoại

        // Xóa ký tự dư thừa trong bộ đệm sau khi sử dụng fgets
        sinhVien[i].phoneNumber[strcspn(sinhVien[i].phoneNumber, "\n")] = 0;

        printf("\n");
    }

    // In thông tin các sinh viên ra màn hình
    printf("\nThong tin cac sinh vien la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Name: %s\n", sinhVien[i].name);
        printf("Age: %d\n", sinhVien[i].age);
        printf("Phone Number: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}


