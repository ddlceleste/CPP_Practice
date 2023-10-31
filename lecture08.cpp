#include <iostream>
#include <ctime>

int main(){

	char inputChar = 's';
	char reverseChar;
	// LowerCase
	if(inputChar >= 97){
		reverseChar = inputChar - 32;
	}
	else{
		reverseChar = inputChar + 32;
	}
	std::cout << reverseChar;
	// Menu
	int userChoice = 0;

	std::cout << "--Hello User--" << '\n';
	std::cout << "[1] Greeting" << '\n';
	std::cout << "[2] RNG" << '\n';
	std::cout << "[3] Divide two numbers" << '\n';
	std::cout << "[4] Switch Examples" << '\n';
	std::cout << '\n';

	std::cout << "Enter an option: ";
	std::cin >> userChoice;
	std::cin.ignore();


	if(userChoice == 1){

		std::string username;
		std::cout << "Enter your name: ";
		std::getline(std::cin, username);

		if(username == ""){

			std::cout << "Invalid Input";
			return 1;
		}
		std::cout << "Nice to meet you " << username << '!' << std::endl;
	}
	else if(userChoice == 2){

		srand(time(0));
		int randNum = rand();
		std::cout << "Your random number is " << randNum << std::endl;
	}
	else if(userChoice == 3){

		int numA = 0, numB = 0;
		std::cout << "Enter two numbers: ";
		std::cin >> numA >> numB;
		std::cout << '\n';

		if(numB == 0){

			std::cout << "Invalid Input";
			return 1;
		}
		int result = numA / numB;
		std::cout << "The result is: " << result << std::endl;
	}
	else if(userChoice == 4){

		char userChar = '\0';
		std::cout << "Enter a character: "; std::cin >> userChar;

		switch(userChar){

			case 'a':{

				std::cout << "Yay! good job" << '\n';
				break;
			}

			case '$':{

				std::cout << "Cool symbol" << '\n';
				break;
			}

			default:{

				std::cout << "Default" << '\n';
			}

		}
	}
	else{

		std::cout << "Invalid Option";
		return 1;
	}


	return 0;
}

