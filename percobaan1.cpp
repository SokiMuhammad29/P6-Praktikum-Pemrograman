#include <iostream> 
 
void tampilkanPesan(); 
 
int main() { 
    for (int i = 1; i <= 5; ++i) { 
        std::cout << "Pesan ke-" << i << ": "; 
        tampilkanPesan(); 
    } 
    return 0; 
} 
 
void tampilkanPesan() { 
    std::cout << "Belajar fungsi C++\n"; 
}