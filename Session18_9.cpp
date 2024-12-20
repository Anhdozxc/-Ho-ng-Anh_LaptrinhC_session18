#include <stdio.h>
#include <string.h>

struct Dish {
    int id;
    char name[50];
    int price;
};
int main() {
    struct Dish menu[100] = {
        {1, "Pho", 35000},
        {2, "Banh bao", 10000},
        {3, "Com suon", 40000},
        {4, "Bun cha", 25000},
        {5, "Banh mi", 15000}
    };
    int size = 5; 
    int choice;
    
    do {
        printf("\nMENU\n");
        printf("1. In ra gia tri cac phan tu trong menu\n");
        printf("2. Them mot phan tu vao vi tri chi dinh\n");
        printf("3. Sua mot phan tu o vi tri chi dinh\n");
        printf("4. Xoa mot phan tu o vi tri chi dinh\n");
        printf("5. Sap xep cac phan tu tang dan theo gia\n");
        printf("6. Tim kiem phan tu theo ten(tim kiem tuyen tinh)\n");
        printf("7. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: 
            for (int i = 0; i < size; i++) {
                printf("%d. %s, price: %d\n", i + 1, menu[i].name, menu[i].price);
            }
            break;
        case 2: { 
            if (size >= 100) {
                printf("Menu da day, khong the them phan tu moi!\n");
                break;
            }
            int pos;
            printf("Moi ban nhap vi tri muon them (0 - %d): ", size);
            scanf("%d", &pos);
            if (pos < 0 || pos > size) {
                printf("Vi tri khong hop le!\n");
                break;
            }
            for (int i = size; i > pos; i--) {
                menu[i] = menu[i - 1];
            }
            printf("Nhap id: ");
            scanf("%d", &menu[pos].id);
            printf("Nhap ten: ");
            scanf(" %[^\n]", menu[pos].name);
            printf("Nhap gia: ");
            scanf("%d", &menu[pos].price);
            size++;
            break;
        }
        case 3: { 
            int pos;
            printf("Moi ban nhap vi tri muon sua (0 - %d): ", size - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= size) {
                printf("Vi tri khong hop le!\n");
                break;
            }
            printf("Nhap id moi: ");
            scanf("%d", &menu[pos].id);
            printf("Nhap ten moi: ");
            scanf(" %[^\n]", menu[pos].name);
            printf("Nhap gia moi: ");
            scanf("%d", &menu[pos].price);
            break;
        }
        case 4: { 
            int pos;
            printf("Moi ban nhap vi tri muon xoa (0 - %d): ", size - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= size) {
                printf("Vi tri khong hop le!\n");
                break;
            }
            for (int i = pos; i < size - 1; i++) {
                menu[i] = menu[i + 1];
            }
            size--;
            break;
        }
        case 5: { 
            for (int i = 0; i < size - 1; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (menu[i].price > menu[j].price) {
                        struct Dish temp = menu[i];
                        menu[i] = menu[j];
                        menu[j] = temp;
                    }
                }
            }
            printf("Da sap xep menu tang dan theo gia!\n");
            break;
        }
        case 6: { 
            char searchName[50];
            printf("Moi ban nhap ten mon an can tim: ");
            scanf(" %[^\n]", searchName);

            int found = 0;
            for (int i = 0; i < size; i++) {
                if (strcmp(menu[i].name, searchName) == 0) {
                    printf("Da tim thay: %s, price: %d\n", menu[i].name, menu[i].price);
                    found = 1;
                }
            }
            if (!found) {
                printf("Khong tim thay mon an!\n");
            }
            break;
        }
        case 7: 
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le, vui long hay chon lai!\n");
            break;
        }
    } while (choice != 7);

    return 0;
}  




