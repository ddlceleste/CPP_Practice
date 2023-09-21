#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(){

    // variable to store the upper limit decided by the user
    int limit;


    // TODO:
    // use a `for` loop to
    // prompt and gather input for `limit` (the number of iterations)
    // must validate that `limit` > 0

    for(cout << "How many times do you want to loop? ", cin >> limit; limit <= 0; cin >> limit){

    	cout << "How many times do you want to loop? ";
    }

    // prompt and gather input for message
    string msg;
    cout << "What message do you want to repeat? ";
    cin.ignore();
    getline(cin, msg);

    // display starting message
    cout << setfill('+') << setw(30) << "" << endl;
    cout << "Starting message loop" << endl;
    cout << setfill('+') << setw(30) << "" << endl;

    // TODO:
    // use a `for` loop to print `msg` a total of `limit` times

    for(int count = limit; count > 0; count--){

    	cout << msg << endl;
    }

    // terminate
    return 0;
}

