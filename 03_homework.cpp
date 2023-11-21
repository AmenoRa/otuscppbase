#include <iostream>
#include <string>

#include "introducing.h"
#include "random_value.h"
#include "accepts_digit.h"
#include "high_scores.h"


int main(int argc, char** argv) {

    int maxnumber = 100;

    int randomnumber = random_value(maxnumber);


    std::string username = introducing();

    std::cout << "Let's play, " << username << "!" << std::endl;
    std::cout << "Guess the number." << std::endl;

    int attempt = accepts_digit(maxnumber, randomnumber);
    if (attempt != -1) {
        std::cout << "To guess the number " << randomnumber << ", you needed " << attempt << " attempt(s)." << std::endl;
    } else {
        std::cout << "To more attempts, " << username << "! You lose. The number was " << randomnumber << "." << std::endl;
    }

    std::cout << "Bye-bye, " << username << "!" << std::endl<< std::endl<< std::endl;

    highscores(username, attempt);

}