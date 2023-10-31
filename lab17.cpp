#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

void   printParallel(const double[], const string[], const int);
double updateAndSum(double[], const string[], const int);

/*******************************************************************************
 * Description:
 * Starting point of the program. Creates two arrays. Uses loops to let the user
 * populate the arrays. Calls functions to print out and update the arrays in
 * parallel.
 *
 * Input(s):
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];

    // TODO: range-based `for` loop to get user input for `firstArray`
    for(double& element : firstArray){

    	cout << "Enter a floating-point number: ";
    	cin >> element;
    }
    cin.ignore();

    // declare second array
    string secondArray[SIZE];

    // TODO: normal `for` loop to get user input for `secondArray`
    for(int i = 0; i < SIZE; i++){

        cout << "Enter a name: ";
        getline(cin,secondArray[i]);
    }

    // TODO: function calls (print, update, then print again)
    double sum;

    cout << '\n';
    printParallel(firstArray, secondArray, SIZE);
    cout << '\n';

    sum = updateAndSum(firstArray, secondArray, SIZE);
    cout << "Sum: " << sum << "\n\n";

    printParallel(firstArray, secondArray, SIZE);

    // terminate
    return 0;
}

// Takes in two arrays and their size
// Displays the elements in both arrays in parallel
void printParallel(const double firstArray[], const string secondArray[], const int SIZE){

	int currentIndex = 0;
	while(currentIndex < SIZE){

		cout << firstArray[currentIndex] << " " << secondArray[currentIndex] << endl;
		currentIndex++;
	}
}

// Takes in two arrays and their size
// then adds the length of the string in the second array to its corresponding index in the first array
// then returns the sum of every double in the first array
double updateAndSum(double firstArray[], const string secondArray[], const int SIZE){

	double sum = 0.0;
	for(int i = 0; i < SIZE; i++){

		firstArray[i] += secondArray[i].length();
		sum += firstArray[i];
	}
	return sum;
}
