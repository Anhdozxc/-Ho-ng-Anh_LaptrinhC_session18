#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;               
    char name[100];       
    int age;              
    char phoneNumber[20]; 
};

int main() {
    struct SinhVien sinhVien[50];

    for (int i = 0; i < 5; i++) {
        sinhVien[i].id = i + 1;  
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin); 
        sinhVien[i].name[strcspn(sinhVien[i].name, "\n")] = 0; 
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sinhVien[i].age);  
        getchar();

        printf("Nhap so dien thoai sinh vien: ");
        fgets(sinhVien[i].phoneNumber, sizeof(sinhVien[i].phoneNumber), stdin);  
        sinhVien[i].phoneNumber[strcspn(sinhVien[i].phoneNumber, "\n")] = 0; 

        printf("\n");
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Name: %s\n", sinhVien[i].name);
        printf("Age: %d\n", sinhVien[i].age);
        printf("Phone Number: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}


