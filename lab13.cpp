//Daniel Lopez, Alex Thomatis, Cameron Overton, Gracy Sutaria


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int userChoice();

void displayMenu();


//choices

void choice1();

void choice2();

void choice3();



// main
int main(){

	int num;

	do{

		displayMenu();

		num = userChoice();

		switch(num){

			case 1:{

				break;
			}

			case 2:{

				break;
			}

			case 3:{

				break;
			}

			case 4:{

				cout << "Thank you for using my program :)" << endl;
				break;
			}

			default:{

				cout << "Invalid choice :(" << endl;
			}

		}

	}while(num != 4);
  
	return 0;
}



// user input
int userChoice(){

	int userChoice;
	cout << "Enter your choice: ";
	cin >> 	userChoice;
	return userChoice;
}

// display menu
void displayMenu(){

	cout << "Here are your option: " << endl;
	cout << "1. Option 1:" << endl;
	cout << "2. Option 2:" << endl;
	cout << "3. Option 3:" << endl;
	cout << "4. Exit:" << endl;
}

//number choice
double loopA(){

	double numA;
  do{
		cout << "Enter one non negative number!";
		cin >> numA;

	} while (!(numA >= 0));

	return numA;
}

// choices

// sinh(x)
void choice1(){
	double numA = loopA();
	cout << "The hyperbolic sine or sinh of " << numA << " is " << sinh(numA) << endl;
}

// cosh(x)
void choice2(){

	double numA = loopA();
	cout << "The hyperbolic cosine or cosh of " << numA << " is " << cosh(numA) << endl;
}

// tanh(x)
void choice3(){
  
	double numA = loopA();
	cout << "The hyperbolic tangent or tanh of " << numA << " is " << tanh(numA) << endl;
}
