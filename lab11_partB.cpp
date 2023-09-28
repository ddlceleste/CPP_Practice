#include <iostream>

using namespace std;

int main(){

    // constants (DO NOT MODIFY)
    const int MAX_ROWS  = 11;
    const int MAX_STARS = 21;

    // outer loop controlling how many rows to print
    for (int row = 0; row < MAX_ROWS; row++){

        // inner loop to print the spaces on the left side
        for (int empty_space = row; empty_space > 0; empty_space--){

            cout << ' ';
        }

        // inner loop to print the stars
        for (int star_num = MAX_STARS - row * 2; star_num > 0; star_num--){

            cout << '*';
        }

        // break the line for the next row
        cout << endl;
    }

    // terminate
    return 0;
}
