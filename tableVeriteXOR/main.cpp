#include <iostream>

bool eval(bool a,bool b) {
    return ((!a && b) || (a && !b));
}

int main() {
    std::cout << std::noboolalpha;
    std::cout << "|  a  |  b  |  XOR   " << std::endl;
    std::cout << "|  0  |  0  |   " << eval(false, false) << std::endl;
    std::cout << "|  0  |  1  |   " << eval(false, true)  << std::endl;
    std::cout << "|  1  |  0  |   " << eval(true,  false) << std::endl;
    std::cout << "|  1  |  1  |   " << eval(true,  true)  << std::endl;

}
/*
1 et 0  = 0   ou  0 et 1 = 0
1 et 1  = 1   ou  0 et 0 = 0
0 et 0  = 0   ou  1 et 1 = 1
0 et 1  = 0   ou  1 et 0 = 0 */
