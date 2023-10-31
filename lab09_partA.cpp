#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){

    // prompt and store an integer number from the user
    int userNumber = 0;
    cout << "Enter an integer value: ";
    cin  >> userNumber;

    // seed the RNG using the current time
    srand(time(0));

    // TODO: generate a random number using the range:
    const int MAX = userNumber * 2;
    const int MIN = userNumber * 3;
    int randNum = MIN + rand() % (MAX - MIN + 1);

    // TODO: display the random number
    cout << "Random Number: " << randNum << endl;

    // display the calculating message
    cout << "Calculating . . .\n";

    // TODO: while loop to print *beep* or *boop*
    while(userNumber <= randNum){

    	if(userNumber % 5 == 0){

    		cout << " *beep* ";
    	}
    	if(userNumber % 10 == 0){

    		cout << " -boop- ";
    	}

    	userNumber++;
    	randNum--;
    }

    // display the final message
    cout << "\nDone!\n";

    // terminate
    return 0;
}
