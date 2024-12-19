#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;               
    char name[100];       
    int age;             
    char phoneNumber[20]; 
};

int main() {
    struct SinhVien sinhVien[50] = {
        {1, "Do Hoang Anh", 20, "0123456789"},
        {2, "Tran Tri Duong", 22, "0987654321"},
        {3, "Le Truong An", 21, "0912345678"},
        {4, "Do Minh Tuyen", 23, "0951234567"},
        {5, "Nguyen Duy Manh", 20, "0934567899"}
    };

    int idToFind;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &idToFind);

    int found = 0; 
    for (int i = 0; i < 5; i++) {
        if (sinhVien[i].id == idToFind) {
          
            found = 1;

            printf("Sinh vien tim thay: \n");
            printf("ID: %d\n", sinhVien[i].id);
            printf("Name: %s\n", sinhVien[i].name);
            printf("Age: %d\n", sinhVien[i].age);
            printf("Phone Number: %s\n", sinhVien[i].phoneNumber);

            printf("Nhap ten moi: ");
            getchar(); 
            fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
            sinhVien[i].name[strcspn(sinhVien[i].name, "\n")] = 0; 

            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhVien[i].age);

            printf("\nThong tin sinh vien sau khi sua: \n");
            printf("ID: %d\n", sinhVien[i].id);
            printf("Name: %s\n", sinhVien[i].name);
            printf("Age: %d\n", sinhVien[i].age);
            printf("Phone Number: %s\n", sinhVien[i].phoneNumber);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi id %d.\n", idToFind);
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


