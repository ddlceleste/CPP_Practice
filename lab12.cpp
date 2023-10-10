#include <iostream>
using namespace std;

// Returns an int entered by the user
int getNumber(){

	int userNum;

	do{
		cout << "Enter a number: ";
		cin >> userNum;
		cin.ignore();
	} while(userNum <= 0);

	return userNum;
}

// Returns a string entered by the user
string getMessage(){

	string userMessage;

	cout << "Enter a message: ";
	getline(cin, userMessage);

	return userMessage;
}

// Takes a string and number and displays the string n number of times
void repeat(int num, string msg){

	for(int i = 0; i < num; i++){

		cout << msg << endl;
	}
}


int main(){

	int repeatTimes = getNumber();
	string message = getMessage();

	repeat(repeatTimes, message);

	return 0;
}
