#include <iostream>

bool validSegitiga(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return a + b > c && a + c > b && b + c > a;
}

int main() {
    int a, b, c;
    std::cout << "Masukkan tiga sisi: ";
    std::cin >> a >> b >> c;
    if (!validSegitiga(a, b, c)) {
        std::cout << "Bukan segitiga yang valid\n";
    } else if (a == b && b == c) {
        std::cout << "Segitiga sama sisi\n";
    } else if (a == b || a == c || b == c) {
        std::cout << "Segitiga sama kaki\n";
    } else {
        std::cout << "Segitiga sembarang\n";
    }
    return 0;
}