#include <cstdlib>
#include <ctime>

int random_value(int maxnumber = 100) {


	std::srand(std::time(nullptr)); // use current time as seed for random generator

	const int random_value = std::rand() % maxnumber;

	return random_value;
}