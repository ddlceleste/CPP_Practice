#include <iostream>

void correctWeight(std::string[], double[], const int);

int main(){


	const int SIZE_A = 5;
	double volumes[SIZE_A] = {31.5, 56.187, 109.0, 6.0314, 44.9};

	for(int i = 0; i < SIZE_A; i++){

		volumes[i] -= 10.5;
	}

	std::cout << volumes << std::endl;

	for(double element : volumes){

		std::cout << element << " | ";
	}
	std::cout << std::endl;


	double copyArray[SIZE_A] = {31.5, 56.187, 109.0, 6.0314, 44.9};
	// Illegal
	//if(volumes == copyArray){std::cout << "They are the same Array" << std::endl;}
	//else{std::cout << "Arrays are not equal" << std::endl;}

	// Correct comparison check
	bool equalFlag = true;
	for(int i = 0; i < SIZE_A; i++){

		if(volumes[i] != copyArray[i]){

			equalFlag = false;
			break;
		}
	}

	if(equalFlag){

		std::cout << "The two arrays are equal" << std::endl;
	}
	else{

		std::cout << "Arrays are not equal" << std::endl;
	}


	// Maximum value
	double highestElement = 0.0;
	for(double element : volumes){

		if(element > highestElement){ highestElement = element;}
	}
	std::cout << highestElement << std::endl;



	// Parallel arrays
	const int PAR_SIZE = 4;
	std::string animals[PAR_SIZE] = {"cat", "dog", "bird", "snake"};
	     double weights[PAR_SIZE] = {10.0 ,  16.5,   1.9,    4.1  };

	for(int i = 0; i < PAR_SIZE; i++){

		std::cout << animals[i] << " is " << weights[i] << " kilograms." << std::endl;
	}

	correctWeight(animals, weights, PAR_SIZE);


	return 0;
}

void correctWeight(std::string animals[], double weights[], const int SIZE){

	int userIndex = 0;
	do{

		std::cout << "Enter the index you want to correct: ";
		std::cin >> userIndex;
	} while(userIndex < 0 || userIndex > SIZE);

	std::cout << "Enter the new weight in kilograms: ";
	std::cin >> weights[userIndex];

	std::cout << "The " << animals[userIndex] << " now weighs " << weights[userIndex] << " kilograms" << std::endl;
}
