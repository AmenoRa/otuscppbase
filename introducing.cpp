#include <iostream>

#include "introducing.h"


std::string introducing() {

    std::string name;
    std::cout << "Enter your name, pls." << std::endl;
    std::cin >> name;

    std::cout << "Hi!" << std::endl;

    return name;

}