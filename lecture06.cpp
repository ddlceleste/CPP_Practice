#include <iostream>

int main(){

	// Conditions

	float numA = 0.0f, numB = 8.5f;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> numA;

	bool comparison = numA >= numB;
	std::cout << "Is your answer >= my number?" << std::endl;
	std::cout << "The answer is: " << std::boolalpha << comparison << std::endl;


	// High Score

	double scoreA = 0.0, scoreB = 0.0, scoreC = 0.0;
	std::cout << "Enter three scores: ";
	std::cin >> scoreA >> scoreB >> scoreC;
	std::cout << '\n';

	double averageScore = (scoreA + scoreB + scoreC) / 3.0;
	std::cout << "The calculated average is " << averageScore << std::endl;

	if(averageScore >= 95.0){

		std::cout << "Thats a High Score!" << std::endl;
		std::cout << "You just needed " << 100.0 - averageScore << " for a perfect score" << std::endl;
	}


	// Even vs Odd
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << '\n';

	if(num % 2 == 0){

		std::cout << num << " is even" << std::endl;
	}
	else{

		std::cout << num << " is odd" << std::endl;
	}


	return 0;
}
