#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare and initialize variables
    int numSiblings = 0;
    string fullName, city;

    // gather input from the user
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter a how many siblings you have: ";
    cin >> numSiblings;
    cin.ignore();
    cout << "Enter your current city: ";
    getline(cin, city);

    // TODO: display that information
    cout << "Your full name is " << fullName << '.' << endl;
    cout << "You have " << numSiblings << " siblings." << endl;
    cout << "You live in " << city << '.' << endl;

    // TODO: display the length of each `string` variable
    cout << "Your name has " << fullName.length() << " characters." << endl;
    cout << "Your city has " << city.length() << " characters." << endl;



    // terminate
    return 0;
}
