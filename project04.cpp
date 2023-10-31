#include <iostream>
using namespace std;

int main() {

    // Introduction
    cout << "Welcome to my interactive art gallery, wonderful patron!" << endl;

    // Main Loop
    int userInput = 0;
    while(userInput != 4){

        // Display Menu
        cout << '\n' << "Here are the different exhibits you can visit:" << endl;
        cout << '\t' << "1. Draw a stack of boxes" << endl;
        cout << '\t' << "2. Draw a triangle of boxes" << endl;
        cout << '\t' << "3. Draw an X" << endl;
        cout << '\t' << "4. Exit" << endl;
        cout << "Enter your choice: ";

        // Get user input
        cin >> userInput;


        // Interpret user input
        if(userInput == 1){

            // Stack of Boxes

            // Get box size and amount
            int amountOfBoxes = 0, boxWidth = 0;
            while(amountOfBoxes < 3 || amountOfBoxes > 10 || boxWidth < 3 || boxWidth > 10){

                cout << "Enter how many boxes you want and their width: ";
                cin >> amountOfBoxes >> boxWidth;

            }

            // Display box stack

            // Display top of first box
            for(int width = boxWidth; width > 0; width--){

                cout << '-';
            }
            cout << '\n';

            // Display the middle and bottom of the amount of boxes
            for(int boxNum = amountOfBoxes; boxNum > 0; boxNum--){

                // Middle / Empty Space
                cout << '|';
                for(int emptySpace = boxWidth - 2; emptySpace > 0; emptySpace--){

                    cout << " ";
                }
                cout << '|';
                cout << '\n';   

                // Bottom
                for(int width = boxWidth; width > 0; width--){

                    cout << '-';
                }
                cout << '\n';
                
            }

        }
        else if(userInput == 2){

            // Triangle of Boxes

            // Get triangle width
            int triangleWidth = 0;
            while(triangleWidth < 2 || triangleWidth > 7){

                cout << "Enter the maximum width for the triangle: ";
                cin >> triangleWidth;
            }

            // Display triangle

            // Top Half
            for(int rowNum = 1; rowNum <= triangleWidth; rowNum++){

                // Top of box
                for(int boxNum = rowNum; boxNum > 0; boxNum--){

                    cout << " _ ";
                }
                cout << '\n';

                // Middle of box
                for(int boxNum = rowNum; boxNum > 0; boxNum--){

                    cout << "|_|";
                }
                cout << '\n';
            }

            // Bottom Half
            for(int rowNum = triangleWidth - 1; rowNum > 0; rowNum--){

                // Top of box
                for(int boxNum = rowNum; boxNum > 0; boxNum--){

                    cout << " _ ";
                }
                cout << '\n';

                // Middle of box
                for(int boxNum = rowNum; boxNum > 0; boxNum--){

                    cout << "|_|";
                }
                cout << '\n';
            }
        }
        else if(userInput == 3){
            
            // X

            // Get stem size
            int userStemSize = 0;
            while(userStemSize < 1 || userStemSize > 10){

                cout << "Enter the stem size for the X: ";
                cin >> userStemSize;
            }

            // Display X

            // Top Half
            for(int rowNum = 0; rowNum < userStemSize; rowNum++){

                // Empty Space Before
                for(int amountOfSpace = rowNum; amountOfSpace > 0; amountOfSpace--){

                    cout << " ";
                }

                cout << '\\';

                // Empty Space After 
                for(int amountOfSpace = (userStemSize * 2 - 2) - (2 * rowNum); amountOfSpace > 0; amountOfSpace--){

                    cout << " ";
                }

                cout << '/';
                cout << '\n';
            }

            // Bottom Half
            for(int rowNum = 0; rowNum < userStemSize; rowNum++){

                // Empty Space Before
                for(int amountOfSpace = userStemSize - rowNum - 1; amountOfSpace > 0; amountOfSpace--){

                    cout << " ";
                }

                cout << '/';

                // Empty Space After 
                for(int amountOfSpace = 2 * rowNum; amountOfSpace > 0; amountOfSpace--){

                    cout << " ";
                }

                cout << '\\';
                cout << '\n';
            }
                
        }
        else if(userInput != 4){
            
            // Invalid input
            cout << "Invalid choice, try again." << endl;
        }   
    }
    
    // Good bye message
    cout << '\n' << "Good bye, thank you for visiting my art gallery!" << endl;

    // terminate
    return 0;
}
