#include <iostream>

int main(){

	// ++ , --
	int val = 5;
	std::cout << "A: " << val << std::endl;
	val++;
	std::cout << "B: " << val << std::endl;
	val--;
	std::cout << "C: " << val << std::endl;
	std::cout << "D: " << val-- << std::endl;


	// while loop
	unsigned int x = 14;
	while(x > 9){

		std::cout << x-- << std::endl;
	}

	double db = 3.1;
	while(db <= 7.5){

		std::cout << db << '\t';
		db += 1.1;
	}
	std::cout << '\n';

	char letter = 'a';
	while(letter <= 'f'){

		std::cout << letter << '\t';
		if(letter == 'c'){

			std::cout << '\n';
		}
		letter++;
	}
	std::cout << '\n';


	// Validation Loop
	short userNumA = 0;
	std::cout << "Enter a value > 15: ";
	std::cin >> userNumA;
	while(!(userNumA > 15)){

		std::cout << "ERROR Invalid Input" << '\n';
		std::cout << "Enter a value > 15: ";
		std::cin >> userNumA;
	}

	std::cout << "Valid Value: " << userNumA << '\n';


	short userNumB = 0;
	int loopCounter = 0;
	std::cout << "Enter a positive value >= 50: ";
	std::cin >> userNumB;
	while(!(userNumB >= 50) || !(userNumB > 0)){
		loopCounter++;

		std::cout << "ERROR Invalid Input" << '\n';
		std::cout << "Enter a positive value >= 50: ";
		std::cin >> userNumB;
	}

	std::cout << "Valid Value: " << userNumB << " after " << loopCounter << " attempts" << '\n';



	return 0;
}

