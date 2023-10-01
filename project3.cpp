#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;


int main() {

    // Display Menu
    cout << setfill('#') << setw(45) << '\n';
    cout << "You enter a cave and see 3 tunnels up ahead." << '\n';
    cout << "Which route do you take?" << '\n';
    cout << "A. Door" << '\n';
    cout << "B. Animal" << '\n';
    cout << "C. Super Easy Tunnel" << '\n';
    cout << setw(45) << '\n';


    // Get User Input
    char userChoice = '\0';
    cout << "Enter your tunnel choice: ";
    cin >> userChoice;
    cin.ignore();


    // Interpret User Input
    if(userChoice == 'A' || userChoice == 'a'){

        // Tunnel A
        cout << "You enter tunnel A and discover . . . a locked door." << '\n';
        cout << "It reads: to unlock, enter a word that has an odd length greater than 4" << '\n';

        // Get User Input
        string userWord;
        cout << "Enter your word: ";
        getline(cin, userWord);

        // Interpret User Input
        if(userWord.length() > 4 && userWord.length() % 2 != 0){

            // Pass
            cout << "You hear the lock click . . . it must be open!" << '\n';
            cout << "You push the door and end up outside, yay!" << '\n';
        }
        else{

            // Fail
            cout << "That did not work . . . you are now stuck FOREVER!" << '\n';
        }
    }
    else if(userChoice == 'B' || userChoice == 'b'){

        // Tunnel B
        cout << "You enter tunnel B and discover . . . a bunny?" << '\n';
        cout << "The bunny says: I will let you pass if you can guess my name!" << '\n';
        cout << "Here's a hint: it rhymes with hugs." << '\n';

        // Get User Input
        string userGuess;
        cout << "Enter your guess: ";
        getline(cin, userGuess);

        // Interpret User Input
        if(userGuess == "Bugs" || userGuess == "bugs"){

            // Pass
            cout << "The bunny bounces around and lets you through!" << '\n';
            cout << "You continue on and end up outside, yay!" << '\n';
        }
        else{

            // Fail
            cout << "That was incorrect . . . the bunny blocks your path FOREVER!" << '\n';
        }

    }
    else if(userChoice == 'C' || userChoice == 'c'){

        // Tunnel C
        cout << "You enter tunnel C and discover . . . a M E N A C I N G clock!" << '\n';
        cout << "The clock says: I have two riddles for you!" << '\n';

        // First Riddle
        int userNum = 0;
        cout << "First: tell me a number that will pass my hidden test" << '\n';
        cout << "Enter you guess: ";
        cin >> userNum;

        // Interpret User Input
        if(userNum != 0){

            // Calculations
            srand(time(0));
            const int RANDNUM = (1 + rand() % (12 - 1 + 1));
            const int RESULT = (pow(RANDNUM / userNum, 3)) + (sqrt(userNum + 5.74));

            if(RESULT >= 30 && userNum > 0){

                // Pass

                // Second Riddle
                userNum = 0;
                cout << "Second: I'm thinking of a number between 1 and 12. What is it?" << '\n';
                cout << "Enter you guess: ";
                cin >> userNum;

                // Interpret User Input
                if(userNum == RANDNUM){

                    // Pass
                    cout << "You beat the clock! It is no longer menacing." << '\n';
                    cout << "It lets you pass and end up outside, yay!" << '\n';
                }
                else{

                    // Fail
                    cout << "You failed to guess the clock number . . . you turn into a clock FOREVER!" << '\n';
                }
            }
            else{

                // Fail
                cout << "You entered the wrong value . . . your journey ends here FOREVER!" << '\n';
            }

        }
        else{

            // Invalid User Input
            cout << "That did not work . . . you are now stuck FOREVER!" << '\n';
        }
    }
    else{

        // Invalid Input
        cout << "Invalid menu option, please re-run the story." << '\n';
    }



    // Closing
    cout << "Good bye!";

    // terminate
    return 0;
}
