#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
 * Global variable
*******************************************************************************/

unsigned numCalls = 0;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

bool  checkValid(float);
float getFPNumber();
void  myFunc(float, bool = false);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls functions in various ways and
 * combinations. Displays the total number of function calls.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer representing the exit value to signal back to the OS
*******************************************************************************/

int main() {
    // call the functions
	myFunc(getFPNumber());
    myFunc(getFPNumber() + 9.5f);
    myFunc(getFPNumber(), true);
    myFunc(getFPNumber() - 17.84f, true);

    // display the total number of function calls made
    cout << "Number of function calls: " << numCalls << endl;

    // terminate
    return 0;
}

// Takes in a float and returns true if its greater than or equal to 6.7 otherwise it returns false
bool checkValid(float myFloat){

	bool flag;
	if(myFloat >= 6.7f){

		flag = true;
	}
	else{

		flag = false;
	}

	numCalls++;
	return flag;
}

// Gets a float from the user and validates input then returns float
float getFPNumber(){

	float userFloat = 0.0;

	// Validation Loop
	do{
		cout << "Enter a floating-point value: ";
		cin >> userFloat;

	} while(!checkValid(userFloat));

	numCalls++;
	return userFloat;
}

// Takes in a float and a boolean, displays a string, then displays the float squared if the boolean is true, otherwise it displays the float halved
void myFunc(float userFloat, bool flag){

	static string myString = "Hello";
	cout << myString << endl;
	myString = myString + " " + myString;

	if(flag){

		cout << userFloat * userFloat << endl;
	}
	else{

		cout << userFloat / 2.0 << endl;
	}

	numCalls++;
}
