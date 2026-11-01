#include <iostream>

void hitungOtomatis() {
    int hitung = 0;
    ++hitung;
    std::cout << "otomatis = " << hitung << '\n';
}

void hitungStatic() {
    static int hitung = 0;
    ++hitung;
    std::cout << "static   = " << hitung << '\n';
}

int main() {
    for (int i = 0; i < 5; ++i) hitungOtomatis();
    for (int i = 0; i < 5; ++i) hitungStatic();
    return 0;
}