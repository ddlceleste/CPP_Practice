#include <iostream>


const char myGlobal = '^';

// Function Prototypes
int convertToASCII();
void countdown();
void printRectangle(unsigned = 6, unsigned = 4);

int main(){

	// Global Variable Example
	int asciiCode = convertToASCII();
    std::cout << asciiCode << '\n' << std::endl;

	// Static variable example
	countdown();
	countdown();
	countdown();
	countdown();
	std::cout << '\n';

	// Default arguments example
	printRectangle();
	printRectangle(15);

	return 0;
}

int convertToASCII(){

	int asciiCode = static_cast<int>(myGlobal);

	return asciiCode;
}

void countdown(){

	static int myNum = 8;

	std::cout << myNum << std::endl;
	myNum--;
}

void printRectangle(unsigned length, unsigned width){

	for(unsigned i = width; i > 0; i--){

		for(unsigned i = length; i > 0; i--){ std::cout << myGlobal;}
		std::cout << '\n';
	}
}
