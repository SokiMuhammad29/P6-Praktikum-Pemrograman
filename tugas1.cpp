#include <iostream>

bool kabisat(int tahun) {
    if (tahun % 400 == 0) return true;
    if (tahun % 100 == 0) return false;
    return tahun % 4 == 0;
}

int main() {
    int tahun;
    std::cout << "Masukkan tahun: ";
    std::cin >> tahun;
    if (kabisat(tahun)) std::cout << tahun << " adalah tahun kabisat\n";
    else std::cout << tahun << " bukan tahun kabisat\n";
    return 0;
}