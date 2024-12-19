#include <cstdio>
#include <string>
using namespace std;

struct SinhVien {
    char name[100];      
    int age;             
    char phoneNumber[20]; 
};

int main() {
    SinhVien sv;
    printf("Nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);  
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);  
    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", sv.phoneNumber);  

    printf("\nThong tin sinh vien:\n");
    printf("Name: %s\n", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);

    return 0;
}


