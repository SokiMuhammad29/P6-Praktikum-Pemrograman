#include <iostream> 
 
int jumlahSampai(int n) { 
    int jumlah = 0; 
    for (int i = 1; i <= n; ++i) { 
        jumlah += i; 
    } 
    return jumlah; 
} 
 
int main() { 
    std::cout << jumlahSampai(10) << '\n'; 
    std::cout << jumlahSampai(0) << '\n'; 
    std::cout << jumlahSampai(50) << '\n'; 
    return 0; 
} 