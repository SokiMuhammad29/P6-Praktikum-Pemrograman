#include <iostream>

bool prima(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Masukkan bilangan: ";
    std::cin >> n;
    if (prima(n)) std::cout << n << " adalah bilangan prima\n";
    else std::cout << n << " bukan bilangan prima\n";
    return 0;
}