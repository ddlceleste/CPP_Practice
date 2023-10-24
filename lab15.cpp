#include <cmath>
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
 * Description:
 * Starting point of the program. Gets three valid numbers from the user.
 * Calculates and displays the result.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main(){

    // TODO: get the first valid number
	int numA = getUserNumber();

    // TODO: get the second valid number
	int numB = getUserNumber();

    // TODO: get the third valid number
	int numC = getUserNumber();

    // TODO: calculate the result by calling the function
	int result;
	calculate(numA, numB, numC, result);

    // TODO: display the result
	cout << "Result: " << result << endl;

    // terminate
    return 0;
}

/*******************************************************************************
 * <TODO>
 * Prompt the user to enter an integer number
 * validate their input through the isValid function
 * return the users integer number after it has been validated
*******************************************************************************/

int getUserNumber(){

	int userNum = 0;
	do {

	// Prompt user to enter number and store input into <userNum>
    cout << "Enter a number: ";
    cin >> userNum;

    // Validate user input
	} while(!isValid(userNum));

	return userNum;
}

/*******************************************************************************
 * <TODO>
 * Takes in an integer
 * Returns true if a complex condition is met
 * Otherwise it returns false
*******************************************************************************/

bool isValid(int num){

	if (num >= 29 || ((num / 2) + 3 <= 11)){

		return true;
	}
	else{

		return false;
	}
}

/*******************************************************************************
 * <TODO>
 * Takes in three integers and a reference to a result variable
 * Performs calculations with the three integers
 * stores the output into the reference result variable
*******************************************************************************/

void calculate(int a, int b, int c, int& result){

	result = 4*a + pow(b,3) - 2*c + 1;
}
