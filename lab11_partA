#include <iostream>

using namespace std;

int main(){

    // variables
    int maxVal = 0, userNumber = 0;
    const int SENTINEL = -1;

    // TODO: create a `while` loop version of finding the maximum number
    cout << "-WHILE LOOP-" << '\n';
    while(userNumber != SENTINEL){

    	cout << "Enter a positive number (or enter " << SENTINEL << " to exit): ";
    	cin >> userNumber;

    	if(userNumber > maxVal){

    		maxVal = userNumber;
    	}
    }

    // TODO: create a `do-while` loop version of finding the maximum number
    userNumber = 0;
    cout << '\n' << "-DO WHILE LOOP-" << '\n';
    do{

        cout << "Enter a positive number (or enter " << SENTINEL << " to exit): ";
        cin >> userNumber;

        if(userNumber > maxVal){

        	maxVal = userNumber;
        }
    } while(userNumber != SENTINEL);

    // TODO: create a `for` loop version of finding the maximum number
    userNumber = 0;
    cout << '\n' << "-FOR LOOP-" << '\n';
    for(; userNumber != SENTINEL;){

    	cout << "Enter a positive number (or enter " << SENTINEL << " to exit): ";
    	cin >> userNumber;

    	if(userNumber > maxVal){

    		maxVal = userNumber;
    	}
    }

    // display results
    cout << '\n' << "Maximum number entered: " << maxVal << endl;

    // terminate
    return 0;
}
