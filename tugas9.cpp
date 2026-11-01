#include <iostream>

int jumlahDigit(int n) {
    if (n == 0) return 0;
    return n % 10 + jumlahDigit(n / 10);
}

int jumlahDigitIteratif(int n) {
    int jumlah = 0;
    while (n > 0) {
        jumlah += n % 10;
        n /= 10;
    }
    return jumlah;
}

int main() {
    int n;
    std::cout << "Masukkan bilangan nonnegatif: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Masukan tidak valid\n";
        return 1;
    }
    std::cout << "Rekursif : " << jumlahDigit(n) << '\n';
    std::cout << "Iteratif : " << jumlahDigitIteratif(n) << '\n';
    return 0;
}