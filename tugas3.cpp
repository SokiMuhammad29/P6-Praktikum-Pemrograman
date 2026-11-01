#include <iostream>

int faktorial(int n) {
    int hasil = 1;
    for (int i = 2; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

int permutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

int kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main() {
    int n, r;
    std::cout << "Masukkan n dan r: ";
    std::cin >> n >> r;
    if (r < 0 || r > n || n > 12) {
        std::cout << "Masukan tidak valid\n";
        return 1;
    }
    std::cout << "P(" << n << "," << r << ") = " << permutasi(n, r) << '\n';
    std::cout << "C(" << n << "," << r << ") = " << kombinasi(n, r) << '\n';
    return 0;
}