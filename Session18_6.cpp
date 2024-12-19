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

    int index = 5; 
    struct SinhVien newStudent;
    printf("Nhap thong tin sinh vien moi:\n");

    printf("Nhap ten: ");
    getchar(); 
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0; 
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);

    printf("Nhap so dien thoai: ");
    getchar(); 
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = 0; 

    newStudent.id = index + 1;

    sinhVien[index] = newStudent;
    index++;  // Tăng chỉ số sinh viên hiện tại
    printf("\nThong tin cac sinh vien sau khi them moi:\n");
    for (int i = 0; i < index; i++) {
        printf("Sinh vien %d:\n", sinhVien[i].id);
        printf("Name: %s\n", sinhVien[i].name);
        printf("Age: %d\n", sinhVien[i].age);
        printf("Phone Number: %s\n", sinhVien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}


