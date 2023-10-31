#include <iomanip>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){

    // display the menu options
    const char FILL  = '-';
    const int  WIDTH = 40;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "1. Calculate the length of a sentence\n";
    cout << "2. Validate inside a range\n";
    cout << "3. Validate outside a range\n";
    cout << "4. Random Number Generator\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    cout << "Enter the option you want: ";
    cin  >> userChoice;
    cin.ignore();

    switch(userChoice){

    	case 1:{

			string userSentence;
			cout << "Enter your sentence: "; getline(cin, userSentence); cout <<'\n';
			cout << "Your sentence is " << userSentence.length() << " characters long." << '\n';
			break;
		}

    	case 2:{

			int userNum;
			cout << "Enter a number between 5 and 10: "; cin >> userNum;
			cin.ignore(); cout << '\n';
			if(userNum >= 5 && userNum <= 10){

				cout << "Your number is in range! :)" << '\n';
			}
			else{

				cout << "Your number is out of range! :(" << '\n';
			}
			break;
		}

    	case 3:{

			int userNum;
			cout << "Enter a number less then 5 and greater then 10: "; cin >> userNum;
			cin.ignore(); cout << '\n';
			if(userNum < 5 || userNum > 10){

				cout << "Your number is out of range! :)" << '\n';
			}
			else{

				cout << "Your number is in range! :(" << '\n';
			}
			break;
		}
    	case 4:{

    		srand(time(0));
    		int minimumValue = 0;
    		int maximumValue = 0;

    		cout << "Enter a minimum value: "; cin >> minimumValue;
    		cout << "Enter a maximum value: "; cin >> maximumValue;

    		int randomNum = (minimumValue + rand() % (maximumValue - minimumValue + 1));
    		cout << "Your random number is: " << randomNum << '\n';

    		break;
    	}
    	default:{

			cout << "Invalid Choice!";
		}
    }

    // good bye message
    cout << "Good bye! Thanks for using my program\n";

    // terminate
    return 0;
}
