
#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
    std::string inp;
    std::cout << "Inputword" << "\n";
    std::getline(std::cin, inp);

    std::cout << inp << "\n";
    std::cout << inp.length() << "\n";
    std::cout << inp[0] << "\n";
    std::cout << inp[inp.length()-1] << "\n";
}

