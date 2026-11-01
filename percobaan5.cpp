#include <iostream> 
 
double minimum(double x, double y) { 
    if (x < y) return x; 
    return y; 
} 
 
int main() { 
    double a, b; 
    std::cout << "Masukkan dua bilangan: "; 
    if (!(std::cin >> a >> b)) { 
        std::cout << "Masukan tidak valid\n"; 
        return 1; 
    } 
    std::cout << "Nilai minimum = " << minimum(a, b) << '\n'; 
    return 0; 
} 