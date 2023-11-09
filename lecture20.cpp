#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){

	char userInput;
	cout << "Enter a character :";
	cin >> userInput;

	if(isalpha(userInput)){ cout << "You entered a letter" << '\n';}
	else{ cout << "You did not enter a letter 🤦‍♂️" << '\n';}


	char userUp = toupper(userInput);
	userInput = tolower(userInput);

	cout << "Uppercase " << userUp << endl;
	cout << "Lowercase " << userInput << endl;



	char myColor[] = "fuchsia";
	cout << "My favorite color is " << myColor << endl;


	const int SIZE = 10;
	char userColor[SIZE];

	cout << "Enter you favorite color: ";
	//cin >> userColor;
	cin.ignore();
	cin.getline(userColor, SIZE);
	cout << "You entered: " << userColor << endl;


	cout << strstr(myColor, userColor) << endl;

	return 0;
}
