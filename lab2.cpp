#include <iostream>
using namespace std;

int main(){

	// Values
	std::string values[5][2] = {
	/* 0 */	{"name", "Alex"},
	/* 1 */	{"movie", "Avengers Endgame"},
	/* 2 */	{"color", "orange"},
	/* 3 */	{"animal", "cat"},
	/* 4 */	{"fruit", "mango"},
	};

	// Birth Ints
	unsigned short birth_month = 5;
	unsigned short birth_day = 10;
	unsigned short birth_year = 2005;

	// Statements
	std::cout << "My name is " << values[0][1] << "." << std::endl;
	std::cout << "My favorite season is winter because of the cooler weather." << std::endl;
	std::cout << "My favorite movie is " << values[1][1] << "." << std::endl;
	std::cout << "My favorite color is " << values[2][1] << "." << std::endl;
	std::cout << "My favorite animal is " << values[3][1] << "."  << std::endl;
	std::cout << "My favorite fruit is " << values[4][1] << "." << std::endl;

	// Birth Statement
	std::cout << "I was born on " << birth_month << "/" << birth_day << "/" << birth_year;


	return 0;
}
