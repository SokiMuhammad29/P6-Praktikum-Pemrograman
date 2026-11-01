#include <iostream>

int terbesarTiga(int a, int b, int c) {
    int terbesar = a;
    if (b > terbesar) terbesar = b;
    if (c > terbesar) terbesar = c;
    return terbesar;
}

int main() {
    int a, b, c;
    std::cout << "Masukkan tiga bilangan: ";
    std::cin >> a >> b >> c;
    std::cout << "Bilangan terbesar = " << terbesarTiga(a, b, c) << '\n';
    return 0;
}