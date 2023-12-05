#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){

	ofstream surveyFile;
	int userNumber = 0;
	string userInputString;
	int userInputInt;

	// Open file
	surveyFile.open("surveyResults.txt");

	// Introduction
	cout << "Welcome to my survey!" << endl;
	cout << "I will be asking you a series of 5 questions." << endl;
	cout << "Your responses will be saved for future reference." << endl;

	do{

		// Update user number
		userNumber++;


		cout << setfill('+') << setw(50) << "" << endl;
		cout << "Now starting survey for user #" << userNumber << endl;



		// Question 1
		cout << "What is your name?" << endl;
		getline(cin, userInputString);
		surveyFile << "Name: " << userInputString << '\n';

		// Question 2
		cout << "What is your favorite color?" << endl;
		getline(cin, userInputString);
		surveyFile << "Color: " << userInputString << '\n';

		// Question 3
		cout << "What city do you live in?" << endl;
		getline(cin, userInputString);
		surveyFile << "City: " << userInputString << '\n';

		// Question 4
		cout << "How many siblings do you have?" << endl;
		cin >> userInputInt;
		surveyFile << "Siblings: " << userInputInt << '\n';

		// Question 5
		cout << "What year were you born?" << endl;
		cin >> userInputInt;
		surveyFile << "Year Born: " << userInputInt << '\n';
		cin.ignore();

		// Prompt for next survey
		cout << "Thank you for taking my survey!" << endl;
		cout << "Would someone else like to take this survey?" << endl;
		getline(cin, userInputString);

	} while(userInputString == "y" || userInputString == "yes" || userInputString == "yeah");

	// Closing
	surveyFile.close();
	cout << setfill('+') << setw(50) << "" << endl;
	cout << "Good bye!";


	return 0;
}
