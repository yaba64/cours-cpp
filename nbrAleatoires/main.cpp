#include <random>
#include <iostream>
#include <ctime>

int main() {

    auto const seed = std::time(nullptr);          // génération de la graine

    std::ranlux48_base engin { seed };     // générateur aléatoire

    std::uniform_int_distribution<> uniform_int(-9, 6);     // loi uniforme sur des entiers

    auto const de6faces = uniform_int(engin);              // génération

    std::cout << de6faces << std::endl;



    std::uniform_real_distribution<> uniform_real(-2, 2);   // loi uniforme sur des réels

    auto const value2 = uniform_real(engin);              // génération

    std::cout << value2 << std::endl;

}/* LISTE DES ALGORITHMES
std::minstd_rand0 ;
std::minstd_rand ;
std::mt19937 ;
std::mt19937_64 ;
std::ranlux24_base ;
std::ranlux48_base ;
std::ranlux24 ;
std::ranlux48 ;
std::knuth_b
*/
