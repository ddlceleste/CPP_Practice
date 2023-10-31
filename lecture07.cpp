#include <iostream>

int main(){


	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::cout << std::endl;

	if(num >= 10){

		if(num <= 25){std::cout << num << " is between 10 and 25." << std::endl;}
		else{std::cout << num << " is greater than 25" << std::endl;}
	}
	else{std::cout << num << " is less than 10" << std::endl;}


	std::cout << "Bye user :)" << std::endl;

	// Calculator
	double numA = 0.0;
	double numB = 0.0;
	double answer = 0.0;
	char operation = '!';

	std::cout << "Enter a number:                 "; std::cin >> numA;
	std::cout << "Enter an operation (+,-,*,/,%): "; std::cin >> operation;
	std::cout << "Enter a second number:          "; std::cin >> numB;

	if(operation == '+'){answer = numA + numB;}
	else if(operation == '-'){answer = numA - numB;}
	else if(operation == '*'){answer = numA * numB;}
	else if(operation == '/'){answer = numA / numB;}
	else{std::cout << "Invalid Operation!"; return 1;}

	std::cout << "Answer: " << answer << std::endl;


	int y = 0;

	std::cout << "Enter a number: "; std::cin >> y;

	if(y < 10){std::cout << y << " is less than 10" << std::endl;}
	else if(y < 20){std::cout << y << " is between 10 and 20" << std::endl;}
	else if(y < 30){std::cout << y << " is between 20 and 30" << std::endl;}
	else if(y < 40){std::cout << y << " is between 30 and 40" << std::endl;}
	else{std::cout << y << " is greater than or equal to 40"  << std::endl;}


	bool status = false;
	int z = 0;

	std::cout << "Enter a number: "; std::cin >> z;

	if((z >= 0) && (z % 2 == 0 || z < 10)){ status = true; }

	if(status){std::cout << "Status is True"  << std::endl;}
	else      {std::cout << "Status is False" << std::endl;}





	return 0;
}
