#include <iostream> 
 
void demo() { 
    int otomatis = 0; 
    static int tetap = 0; 
    ++otomatis; 
    ++tetap; 
    std::cout << "otomatis=" << otomatis 
              << ", static=" << tetap << '\n'; 
} 
 
int main() { 
    for (int i = 0; i < 3; ++i) demo(); 
    return 0; 
}
