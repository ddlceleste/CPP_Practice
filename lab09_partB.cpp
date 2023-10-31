#include <iostream>
using namespace std;

int main(){

	string message;
	cout << "Enter a message :";
	getline(cin, message);

	while(!(message.length() >= 5 && message.length() <= 10)){

		cout << "Invalid! Message must have between 5 and 10 characters." << '\n';
		cout << "Enter a message :";
		getline(cin, message);
	}

	int counter = message.length();

	cout << "Countdown initiating . . ." << '\n';
	while(!(counter <= 0)){

		cout << counter << ", ";
		counter--;
	}

	cout << '\n' << "Blast off to Planet " << message << '!';


	return 0;
}

