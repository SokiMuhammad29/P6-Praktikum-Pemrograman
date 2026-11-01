#include <iostream>

int fpb(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

int main() {
    std::cout << "FPB(150, 35) = " << fpb(150, 35) << '\n';
    std::cout << "FPB(1026, 0) = " << fpb(1026, 0) << '\n';
    std::cout << "FPB(83, 240) = " << fpb(83, 240) << '\n';
    return 0;
}