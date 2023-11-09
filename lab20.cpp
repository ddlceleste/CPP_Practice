#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Prototypes
void displayMenu();
char getUserChar(string);
void isDigitDemonstration();
//

int main(){

	// Menu Loop
	int userChoice = 0;
	do{

		displayMenu();
	    cout << "Enter your choice: ";
		cin >> userChoice;


		// Interpret user input
		if(userChoice == 1){ isDigitDemonstration();}
		else if(userChoice == 2){}
		else if(userChoice == 3){}
		else if(userChoice == 4){}
		else if(userChoice == 5){}
		else if(userChoice == 6){}
		else if(userChoice != 0){ cout << "Invalid Option!" << endl;}


	} while(userChoice != 0);

	return 0;
}

// Displays the navigation menu for the program
void displayMenu(){

	cout << '\n';
	cout << "-Choose a function to learn more about its functionality-" << endl;
	cout << '\t' << "1. isdigit" << endl;
	cout << '\t' << "2. **Option**" << endl;
	cout << '\t' << "3. **Option**" << endl;
	cout << '\t' << "4. **Option**" << endl;
	cout << '\t' << "5. **Option**" << endl;
	cout << '\t' << "6. **Option**" << endl;
	cout << '\t' << "0. Exit" << endl;
}

// Prompts user for a character and returns the character that the user entered
char getUserChar(string inputPrompt){

	char userInput;
	cout << inputPrompt;
	cin >> userInput;
	return userInput;
}

// Demonstrates the functionality of the isdigit function to the user
void isDigitDemonstration(){

	cout << '\n';
	cout << "The 'isdigit' function will determine if a character given to it is an integer between 0 and 9. \n"
			"If it is, the function will return true, signifying that the character given to it was a valid digit. \n"
			"Otherwise it will return false, meaning that the character it was given was not an integer between 0 and 9. \n";

	cout << '\n';
	char userChar = getUserChar("For example, enter a character and the isdigit function will determine if it is valid input: ");

	// Interpret user input
	if(isdigit(userChar)){

		cout << "The isdigit function has determined that the character you entered is a valid digit between 0 and 9." << endl;
	}
	else{

		cout << "The isdigit function has determined that the character you entered is not a valid digit between 0 and 9." << endl;
	}
}
