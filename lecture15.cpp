#include <iostream>

void referenceFunc(int&);
void getUserName(std::string&);

// Function Overload (4 separate functions with the same name)
int   myFunc();
void  myFunc(int);
void  myFunc(float);
float myFunc(int, int);

int main(){

	// Reference variables
	int numA = 20;
	int& numB = numA;
	int& numC = numA;
	std::cout << numC << std::endl;
	numB++;
	std::cout << numB << std::endl;
	referenceFunc(numA);
	std::cout << numA << std::endl;

	std::string user;
	getUserName(user);
	std::cout << "Your name is " << user << std::endl;

	//illegal
	//float& myFloat = 1.5f;



	return 0;
}

void referenceFunc(int& referenceNum){

	referenceNum--;
}

void getUserName(std::string& nameRef){

	std::cout << "Enter your name: ";
	getline(std::cin,nameRef);
}
