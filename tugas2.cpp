#include <iostream>

int faktorial(int n) {
    if (n < 0 || n > 12) return -1;
    int hasil = 1;
    for (int i = 2; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int n;
    std::cout << "Masukkan n: ";
    std::cin >> n;
    int hasil = faktorial(n);
    if (hasil == -1) std::cout << "Masukan tidak valid " << "(Nilai Balik= " << hasil << ")\n";
    else std::cout << n << "! = " << hasil << '\n';
    return 0;
}