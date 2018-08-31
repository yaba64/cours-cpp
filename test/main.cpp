#include <iostream>
#include <limits>    // N'oubliez pas d'inclure l'en-tête

int main() {
    std::cout << "Max(long double) = " << std::numeric_limits<long double>::max() << std::endl;
std::cout << "Max(long double) = " << std::hex << std::showbase
        << std::numeric_limits<long double>::max() << std::endl;
}

