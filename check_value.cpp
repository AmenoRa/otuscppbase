#include <iostream>


bool check_value(int current_value, const int target_value) {

	bool not_win = true;

		if (current_value < target_value) {
			std::cout << "More than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "Less than " << current_value << std::endl;
		}
		else {
			std::cout << "You guessed right!" << std::endl;
            not_win = false;
		}

	return not_win;
}