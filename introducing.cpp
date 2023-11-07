#include <iostream>

#include "introducing.h"


char introducing() {
    char username;
    std::cout << "Enter your name, pls." << std::endl;
    std::cin >> username;

    std::cout << "Hi!" << std::endl;

    return username;
}