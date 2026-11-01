#include <iostream>

int hitungDigit(int n) {
    if (n == 0) return 1;
    int jumlah = 0;
    while (n > 0) {
        ++jumlah;
        n /= 10;
    }
    return jumlah;
}

int balikDigit(int n) {
    int balik = 0;
    while (n > 0) {
        balik = balik * 10 + n % 10;
        n /= 10;
    }
    return balik;
}

bool palindrom(int n) {
    return n == balikDigit(n);
}

int main() {
    int n;
    std::cout << "Masukkan bilangan nonnegatif: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Masukan tidak valid\n";
        return 1;
    }
    std::cout << "Jumlah digit  : " << hitungDigit(n) << '\n';
    std::cout << "Hasil dibalik : " << balikDigit(n) << '\n';
    if (palindrom(n)) std::cout << "Palindrom\n";
    else std::cout << "Bukan palindrom\n";
    return 0;
}