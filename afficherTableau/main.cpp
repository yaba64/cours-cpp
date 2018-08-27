#include <iostream>


int main()
{
    std::cout << "╔══════════════╗" << std::endl;
    std::cout << "║ 12 │ 34 │ 56 ║" << std::endl;
    std::cout << "║────┼────┼────║" << std::endl;
    std::cout << "║ ab │ cd │ ef ║" << std::endl;
    std::cout << "╚══════════════╝" << std::endl << std::endl;


    std::cout << "┌────┬────┬────┐" << std::endl;
    std::cout << "│ 12 │ 34 │ 56 │" << std::endl;
    std::cout << "├────┼────┼────┤" << std::endl;
    std::cout << "│ ab │ cd │ ef │" << std::endl;
    std::cout << "└────┴────┴────┘" << std::endl;

    return 0;
}
