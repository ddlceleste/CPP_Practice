#include <iostream>
#include <ctime>
#include <iomanip>

int main(){

	//do-while loop
	int counterA = 0;
	do{

		std::cout << "CounterA: " << counterA << std::endl;
		counterA++;

	} while(counterA < 5);

	std::string userInput;
	do{

		std::cout << "Enter \"yes\" to exit loop: ";
		getline(std::cin, userInput);

	} while(userInput != "yes");


	unsigned userChoice;
	do{

		std::cout << "-Here are your options-" << std::endl;
		std::cout << "\t1. Example 1" << std::endl;
		std::cout << "\t1. Example 2" << std::endl;
		std::cout << "\t1. Example 3" << std::endl;

		std::cout << "Enter your choice: ";
		std::cin >> userChoice;

		switch(userChoice){

		case 0:

			std::cout << "Bye User!" << std::endl;
			break;

		case 1:

			std::cout << "You chose option 1." << std::endl;
			break;

		case 2:

			std::cout << "You chose option 2." << std::endl;
			break;

		case 3:

			std::cout << "You chose option 3." << std::endl;
			break;

		default:

			std::cout << "Invalid Choice!" << std::endl;
		}

	} while(userChoice != 0);



	// for loop (benchmark)
	int startTime = time(0);

	for(unsigned i = 0; i <= 1000000; i++){

		std::cout << i << std::endl;
	}
	int endTime = time(0);


	std::cout << startTime << " == " << endTime << std::endl;



	for(int count=1, multiple=4; count <= 12; count++){

		std::cout << multiple << " x " << count << " = " << multiple * count << std::endl;
	}


	return 0;
}
