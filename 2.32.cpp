#include <iostream>

int main() {
  
    int edad;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    double mhr1 = 220 - edad;
    double mhr2 = 208 - 0.7 * edad;
    double mhr3 = 211 - 0.64 * edad;

    double minMHR = std::min({mhr1, mhr2, mhr3});
    double maxMHR = std::max({mhr1, mhr2, mhr3});

    std::cout << "Valores de MHR sugeridos:" << std::endl;
    std::cout << "MHR (220 - edad): " << mhr1 << std::endl;
    std::cout << "MHR (208 - 0.7 * edad): " << mhr2 << std::endl;
    std::cout << "MHR (211 - 0.64 * edad): " << mhr3 << std::endl;

    std::cout << "Rango sugerido de MHR: " << minMHR << " - " << maxMHR << std::endl;

    return 0;
}