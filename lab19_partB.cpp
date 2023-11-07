#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

void   printParallel(const vector<double>&, const vector<string>&);
double updateAndSum(vector<double>&, const vector<string>&);

/*******************************************************************************
 * Description:
 * Starting point of the program. Creates two Vectors. Uses loops to let the user
 * populate the Vectors. Calls functions to print out and update the Vectors in
 * parallel.
 *
 * Input(s):
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main(){
    // declare first vector
    vector<double> firstVector(5);

    // range-based `for` loop to get user input for `firstVector`
    for (double& elem : firstVector) {
        cout << "Enter a floating-point number: ";
        cin  >> elem;
    }

    // declare second Vector
    vector<string> secondVector;

    // normal `for` loop to get user input for `secondVector`
    cin.ignore();
    string userInput;
    for (unsigned i = 0; i < secondVector.size(); i++){
        cout << "Enter a name: ";
        getline(cin, userInput);
        secondVector.push_back(userInput);
    }

    // function calls
    printParallel(firstVector, secondVector);
    cout << "Sum: " << updateAndSum(firstVector, secondVector) << endl;
    printParallel(firstVector, secondVector);

    // terminate
    return 0;
}

/*******************************************************************************
 * Description:
 * Uses a `while` loop to print the two Vectors in parallel.
 *
 * Input(s):
 * DARR       - a constant Vector of `double` elements
 * SARR       - a constant Vector of `string` elements
 * Vector_SIZE - a constant integer that represents how many elements exist in
 *              the Vectors
 *
 * Output:
 * N/A
*******************************************************************************/

void printParallel(const vector<double> DARR, const vector<string> SARR){
    cout << endl;
    unsigned i = 0;
    while (i < DARR.size()){
        cout << DARR.at(i) << ' ' << SARR.at(i) << endl;
        i++;
    }
    cout << endl;
}

/*******************************************************************************
 * Description:
 * Uses a normal `for` loop to update `darr` by adding the length of its
 * parallel element in `SARR`. Also calculates the sum of the new values.
 *
 * Input(s):
 * darr       - a vector of `double` elements
 * SARR       - a constant Vector of `string` elements
 * Vector_SIZE - a constant integer that represents how many elements exist in
 *              the vectors
 *
 * Output:
 * The sum of the newly updated elements in `darr`.
*******************************************************************************/

double updateAndSum(vector<double> darr, const vector<string> SARR){
    double sum = 0.0;
    for (unsigned i = 0; i < darr.size(); i++){
        darr.at(i) += SARR.at(i).length();
        sum += darr.at(i);
    }
    return sum;
}
