#include <iostream>
#include <iomanip>

double konversiSuhu(double suhu, char asal, char tujuan) {
    double celsius;

    if (asal == 'C') celsius = suhu;
    else if (asal == 'F') celsius = (suhu - 32) * 5.0 / 9.0;
    else celsius = suhu * 5.0 / 4.0;

    if (tujuan == 'C') return celsius;
    if (tujuan == 'F') return celsius * 9.0 / 5.0 + 32;
    return celsius * 4.0 / 5.0;
}

int main() {
    double suhu;
    char asal, tujuan;
    std::cout << "Masukkan suhu, asal, tujuan (C/F/R): ";
    std::cin >> suhu >> asal >> tujuan;
    if ((asal != 'C' && asal != 'F' && asal != 'R') ||
        (tujuan != 'C' && tujuan != 'F' && tujuan != 'R')) {
        std::cout << "Satuan tidak valid\n";
        return 1;
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << suhu << asal << " = " << konversiSuhu(suhu, asal, tujuan) << tujuan << '\n';
    return 0;
}