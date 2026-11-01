#include <iostream> 
 
double nilaiAbsolut(double x) { 
    return (x < 0) ? -x : x; 
} 
 
double akarKuadrat(double x) { 
    if (x < 0) return -1.0; 
    if (x == 0) return 0.0; 
 
    double tebakan = x; 
    const double epsilon = 0.00001; 
    while (nilaiAbsolut(tebakan * tebakan - x) >= epsilon) { 
        tebakan = (tebakan + x / tebakan) / 2.0; 
    } 
    return tebakan; 
} 
 
int main() { 
    std::cout << akarKuadrat(4.0) << '\n'; 
    std::cout << akarKuadrat(0.0) << '\n'; 
    std::cout << akarKuadrat(-39.5) << '\n'; 
    return 0; 
} 