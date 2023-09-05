#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    // seed the random number generator
    srand(time(0));

    // declare and initialize a variable for `setw`
    const int WIDTH = 8;

    // TODO: declare and initialize 3 `int` variables to random values
    // in the range 55 to 270 (inclusive)
    int numA = 55 + rand() % (270 - 55 + 1);
    int numB = 55 + rand() % (270 - 55 + 1);
    int numC = 55 + rand() % (270 - 55 + 1);

    // TODO: manipulate the output stream to make it aligned to the left,
    // have precision of 3, and fixed
    cout << left;
    cout << fixed;
    cout << setprecision(3);

    // TODO: display their values
    cout << setw(WIDTH) << numA;
    cout << setw(WIDTH) << numB;
    cout << setw(WIDTH)<< numC;
    cout << '\n';

    // TODO: display the sine of each variable
    cout << setw(WIDTH) << sin(numA);
    cout << setw(WIDTH) << sin(numB);
    cout << setw(WIDTH) << sin(numC);
    cout << '\n';

    // TODO: display the cosine of each variable
    cout << setw(WIDTH) << cos(numA);
    cout << setw(WIDTH) << cos(numB);
    cout << setw(WIDTH) << cos(numC);
    cout << '\n';

    // TODO: display the square root of each variable
    cout << setw(WIDTH) << sqrt(numA);
    cout << setw(WIDTH) << sqrt(numB);
    cout << setw(WIDTH) << sqrt(numC);
    cout << '\n';

    // TODO: display the log10 of each variable
    cout << setw(WIDTH) << log(numA);
    cout << setw(WIDTH) << log(numB);
    cout << setw(WIDTH) << log(numC);
    cout << '\n';



    // terminate
    return 0;
}
