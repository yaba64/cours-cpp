#include <iostream>
#include <limits>

int main() {
    std::cout << "Types entiers :" << std::endl;
    std::cout << "Max(short int) = " << std::numeric_limits<short int>::max() << std::endl;
    std::cout << "Max(unsigned short int) = " << std::numeric_limits<unsigned short int>::max() << std::endl;
    std::cout << "Max(int) = " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Max(unsigned int) = " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Max(long int) = " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "Max(unsigned long int) = " << std::numeric_limits<unsigned long int>::max() << std::endl;
    std::cout << "Max(long long int) = " << std::numeric_limits<long long int>::max() << std::endl;
    std::cout << "Max(unsigned long long int) = " <<
        std::numeric_limits<unsigned long long int>::max() << std::endl;

    std::cout << std::endl << "Types réels:" << std::endl;
    std::cout << "Max(float) = " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Max(double) = " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Max(long double) = " << std::numeric_limits<long double>::max() << std::endl;
}
