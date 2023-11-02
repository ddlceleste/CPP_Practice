#include <iostream>
using namespace std;

/*******************************************************************************
 * Global variable
*******************************************************************************/

const int COL_SIZE = 5;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int total(const int[][COL_SIZE], const int);
double average(const int[][COL_SIZE], const int);
void userInit(int[][COL_SIZE], const int);

/*******************************************************************************
 * Description:
 * Starting point of the program. Declares and initializes a 2D array. Displays
 * the total sum and the average value. Repeats but with user values.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    const int ROW_SIZE = 4;

    // TODO: declare and initialize a 2D array
    int numArray[ROW_SIZE][COL_SIZE] = {

    117, -76, 128, -68,  85,
    105,  34, -79,  54, 105,
    -85, 151, 133, -50,	173,
    -38, -20, 185, 173, -49
    };

    // TODO: call functions to display the calculations
    cout << "Total: "   << total(numArray, ROW_SIZE) << endl;
    cout << "Average: " << average(numArray, ROW_SIZE) << endl;

    // now let the user try
    cout << "\nNow it's your turn!\n";

    // TODO: create a 2D array for the user with different row size
    const int USER_ROW_SIZE = 4;
    int userNumArray[USER_ROW_SIZE][COL_SIZE];

    // TODO: call functions to let user initialize 2D array and calculate again
    userInit(userNumArray, USER_ROW_SIZE);
    cout << "Total: "   << total(userNumArray, USER_ROW_SIZE)   << endl;
    cout << "Average: " << average(userNumArray, USER_ROW_SIZE) << endl;

    // terminate
    return 0;
}


// Takes in a 2D Array and an integer corresponding to its amount of rows
// Loops through each value in array and adds it to a collective sum integer
// Returns the sum
int total(const int numArray[][COL_SIZE], const int ROW_SIZE){

	int sum = 0;

	for(int row = 0; row < ROW_SIZE; row++){

		for(int col = 0; col < COL_SIZE; col++){

			sum += numArray[row][col];
		}
	}
	return sum;
}


// Takes in a 2D Array and an integer corresponding to its amount of rows
// Loops through each value in array and adds it to a collective sum integer
// Gets the average of the sum and returns the average
double average(const int numArray[][COL_SIZE], const int ROW_SIZE){

	double average = 0.0;

		for(int row = 0; row < ROW_SIZE; row++){

			for(int col = 0; col < COL_SIZE; col++){

				average += numArray[row][col];
			}
		}
	average /= (ROW_SIZE * COL_SIZE);
	return average;
}


// Takes in a 2D Array and an integer corresponding to its amount of rows
// Loops through array and sets its values to values chosen by the user
void userInit(int numArray[][COL_SIZE], const int ROW_SIZE){

	for(int row = 0; row < ROW_SIZE; row++){

		cout << "Enter " << COL_SIZE << " numbers in a row (" << row + 1 << '/' << ROW_SIZE << "): ";

		for(int col = 0; col < COL_SIZE; col++)
			cin >> numArray[row][col];
	}
}
