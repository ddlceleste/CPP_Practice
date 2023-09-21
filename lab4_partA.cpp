#include <cmath>
#include <iostream>
using namespace std;

int main(){

    // declare and initialize variables to hold user information
    int userAge = 0;
    float userHours = 0;
    float userPayRate = 0;

    // prompt the user for their age
    cout << "How old are you? ";
    cin >> userAge;

    // prompt the user for their pay rate
    cout << "What is your pay rate? $";
    cin >> userPayRate;

    // prompt the user for their hours worked
    cout << "How many hours did you work this week? ";
    cin >> userHours;

    // math statements
    // TODO: write various math statements according to list
    cout << "Twice your age is " << userAge * 2                              << '\n';
    cout << "Half your age is "  << userAge / 2                              << '\n';
    cout << "You will earn $"    << userHours * userPayRate << " this week." << '\n';

    cout << "If you earned a $50 bonus this week, your new total is $"
    		<< userHours * userPayRate + 50 << '\n';

    cout << "Under an exponential pay, you would get " << pow(userPayRate, userHours) << endl;

    // terminate
    return 0;
}
