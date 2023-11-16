#include <iostream>
#include <vector>
using namespace std;



int main(){

	const int FLAVORS_SIZE = 8;
	const string FLAVORS[FLAVORS_SIZE] = {"Mango", "Strawberry", "Banana", "Orange", "Chocolate", "Kiwi", "Dragonfruit", "Rasberry"};
	bool selectedFlavors[FLAVORS_SIZE] = {0,0,0,0,0,0,0,0};



	// Menu Options
	cout << "----SMOOTHIE SHOP----" << "\n\n";

	cout << "Hello! What would you like to order?\n" << endl;
	for(unsigned i = 0; i < FLAVORS_SIZE; i++){

		selectedFlavors[i] ? cout << "*Selected* " : cout << "           ";

		cout << '[' << i << ']' << FLAVORS[i] << endl;
	}

	char userChoice;

	do{

		cout << ""

	} while(userChoice != -1);


	return 0;
}
