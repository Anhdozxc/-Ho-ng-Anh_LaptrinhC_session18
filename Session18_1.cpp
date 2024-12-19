#include <cstdio>
#include <string>
using namespace std;
struct SinhVien {
    string name;
    int age;
    string phoneNumber;
};
int main() {
    SinhVien sv;
    sv.name = "Do Hoang Anh";
    sv.age = 18;
    sv.phoneNumber = "0366687388";

    printf("Name: %s\n", sv.name.c_str());
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber.c_str());

    return 0;
}
