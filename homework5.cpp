// Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
//

// Prototypes
void displayMenu(const int);
int  getNumber(string);
int  generateRandomNumber(int, int);
void changeTargetCoordinates(int&, int&, const int = 10);
void updateEquation(int&, int&, int&);
int  calculate(int, int, int, int);
void simulate(int, int, int, int, int, const int = 10);
void displayObject(char, int);
//

// Manages the logic for the program and branches off to other functions based on user input
// returns an integer corresponding to end of the program to the OS
int main(){

    // Set seed
    srand(time(0));

    // Introduction
    cout << "Welcome space cadet to your training module." << endl;
    cout << "Here, you will gain experience in finding the" << endl;
    cout << "correct trajectory to shoot down a stationary target." << endl;
    cout << "Good luck!" << endl;


    /// Simulation Loop
    int userChoice = 0;
    const int EXIT_VALUE = -1;

    // Simulation Variables
    int targetPositionX = 1,
	    targetPositionY = 1,
		equationCoefficientA = 1,
		equationCoefficientB = 1,
		equationCoefficientC = 1;

    do{

        // Prompt for and get user choice
        displayMenu(EXIT_VALUE);
        userChoice = getNumber("Enter your choice: ");

        // Interpret User Choice
        if(userChoice == 1)
        	updateEquation(equationCoefficientA, equationCoefficientB, equationCoefficientC);

        else if(userChoice == 2)
        	changeTargetCoordinates(targetPositionX, targetPositionY);

        else if(userChoice == 3){
        	cin.ignore();
        	simulate(equationCoefficientA, equationCoefficientB, equationCoefficientC, targetPositionX, targetPositionY);
        }

        else if(userChoice != EXIT_VALUE){

            // Invalid Choice
            cout << "Invalid choice, try again" << endl;
        }


    } while(userChoice != EXIT_VALUE);

    // Closing Message
    cout << '\n' << "See You Space Cowboy.";

    // Terminate
    return 0;
}

// Takes in an integer used to exit the program
// Displays the navigation menu
void displayMenu(const int EXIT_VALUE){

    cout << '\n';
    cout << "Here are your options (or enter " << EXIT_VALUE << " to exit):" << endl;
    cout << '\t' << "1. Update the equation coefficients" << endl;
    cout << '\t' << "2. Re-roll the target coordinates" << endl;
    cout << '\t' << "3. Run the simulation" << endl;
    cout << '\n';
}

// Takes in a message to prompt the user for an integer
// Prompts for and gets integer entered by the user
// Returns the given integer
int getNumber(string messagePrompt){

    int userNum = 0;
    cout << messagePrompt;
    cin >> userNum;

    return userNum;
}

// Takes in two integers that represent the boundaries for a range
// Returns a random number within the range of the two given integers
int generateRandomNumber(int min, int max){

    return min + rand() % (max - min + 1);
}

// Takes in three integers used for the simulation equation
// Prompts for and gets user input for the new coefficient values
// Displays the new equation with the users changes
void updateEquation(int& coefficientA, int& coefficientB, int& coefficientC){

	cout << "Enter the coefficient for x^2: ";  cin >> coefficientA;
	cout << "Enter the coefficient for x: ";      cin >> coefficientB;
	cout << "Enter the coefficient for 1: ";      cin >> coefficientC;
	cout << "Your updated equation is: " << coefficientA << "x^2 + " << coefficientB << "x + " << coefficientC << endl;
}

// Takes in two integers for the coordinates of the target, and another for the size of the grid
// Changes each of the integers to a random number between 1 and the grid size
// Displays the newly generated coordinates
void changeTargetCoordinates(int& targetX, int& targetY, const int GRID_SIZE){

    targetX = generateRandomNumber(1, GRID_SIZE);
    targetY = generateRandomNumber(1, GRID_SIZE);

    cout << "The target is now located at (" << targetX << ", " << targetY << ')' << endl;
}

// Takes in four integers used for calculations in the quadratic equation
// Calculates then returns the corresponding y value to the given x value
int calculate(int coefficientA, int coefficientB, int coefficientC, int x_value){

	int y_value = (coefficientA * pow(x_value,2)) + (coefficientB * x_value) + (coefficientC);
	return y_value;
}

// Takes in a char and an integer
// Displays the symbol with an amount of spacing in between corresponding to the integer
void displayObject(char symbol, int xPosition){

	for(int xSpacing = xPosition * 2; xSpacing >= 0; xSpacing--){

		cout << " ";
	}
	cout << symbol;
}


// Takes in 3 integers for an equation, two integers for the position of the target, and an integer the the size of the grid
// Displays a graph the length and width of the grid size integer, as well as the position the the target and projectile
// Updates the projectile over time, and checks for if the target and collision overlap
void simulate(int equationCoefficientA, int equationCoefficientB, int equationCoefficientC, int targetPositionX, int targetPositionY, const int GRID_SIZE){

	// Display total hits
	static int total_hits = 0;
	cout << '\n' << "Total hits so far: " << total_hits << '\n';

	// Run simulation
	bool continueFlag = true, collisionFlag = false;
	int projectilePositionX = 0;

	do{
		// Display projectile x_value
		cout << "Current timestamp (x-value): " << projectilePositionX << '\n';

		// Calculate projectile y_value
		int projectilePositionY = calculate(equationCoefficientA, equationCoefficientB, equationCoefficientC, projectilePositionX);


		// Display graph
		// Y-Plane
		for(int rowNum = GRID_SIZE; rowNum >= 0; rowNum--){

			cout << rowNum;
			rowNum < 10 ? cout << "  |" : cout << " |";

			// Check for collision
			if(targetPositionY == projectilePositionY && targetPositionX == projectilePositionX && targetPositionY == rowNum){

				displayObject('@', targetPositionX);

				continueFlag = false;
				collisionFlag = true;
			}
			else{
				// Display Objects
				if(targetPositionX < projectilePositionX){

					// Check for target
					if(targetPositionY == rowNum){displayObject('T', targetPositionX);}
					// Check for projectile
					if(projectilePositionY == rowNum){displayObject('.', projectilePositionX);}
				}
				else{

					// Check for projectile
					if(projectilePositionY == rowNum){displayObject('.', projectilePositionX);}
					// Check for target
					if(targetPositionY == rowNum){displayObject('T', targetPositionX);}
				}
			}
			cout << "\n";
		}
		cout << "   -------------------------" << '\n';

		// X-Plane
		cout << "     ";
		for(int colNum = 0; colNum <= GRID_SIZE; colNum++){

			cout << colNum << " ";
		}
		cout << '\n';

		if(continueFlag){

			// Prompt to continue
			char userInput = '\0';
			do{
				cout << "Continue to next step (y/n)? ";
				cin >> userInput;
				if(userInput == 'n'){continueFlag = false;}

			}while(userInput != 'n' && userInput != 'y');
		}

		projectilePositionX++;
		if(collisionFlag){cout << "You hit the target!\n";}

	}while(continueFlag);
}
