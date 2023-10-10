#include <iostream>

// Print the first 5 multiples of given number
void print_multiples(int number){

	for(int i = 1; i <= 5; i++){

		std::cout << number * i << std::endl;
	}
}

// Add three floating point numbers
double add_floating_points(double numA, double numB, double numC){

	double result = numA + numB + numB;
	return result;
}

// Get 4 numbers from user and return sum
double sum_of_four_numbers(){

	double numA, numB, numC, numD;

	numA = numB = numC = numD = 0;
	std::cout << "Enter 4 whole numbers: ";
	std::cin >> numA >> numB >> numC >> numD;
	std::cin.ignore();


	double result = numA + numB + numC + numD;
	return result;
}


int main(){

	// First 5 multiples
	int num = 3;
	print_multiples(num);

	// Length of user name
	std::string userName;

	std::cout << "Enter your name: ";
	getline(std::cin, userName);
	num = userName.length();
	print_multiples(num);


	double output = add_floating_points(3.1, 4.5, 0.7);
	std::cout << "Output: " << output << std::endl;


	int output = sum_of_four_numbers();
	std::cout << "Output: " << output << std::endl;

	return 0;
}
