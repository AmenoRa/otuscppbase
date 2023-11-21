//
// Created by helli on 07.11.2023.
//
#include <iostream>

#include "accepts_digit.h"
#include "check_value.h"


int accepts_digit(int maxnumber, int randomnumber) {

    int currentnumber = 0;
    int attempt = 0;
    int attemptlimit = 32;
    bool not_win = true;

    while (not_win) {
        std::cout << std::endl;
        std::cout << "Attempt " << ++attempt << ". Enter your option from 1 to " << maxnumber << "." << std::endl;
        std::cin >> currentnumber;

        not_win = check_value(currentnumber, randomnumber);

        if (attemptlimit <= attempt) {
            attempt = -1;
            break;
        };
    }

    return attempt;
}