// Libraries
#include <iostream>
#include <ctime>
using namespace std;
//

// Prototypes
void generateDungeon(int[], const int);
int generateRandomNumber(const int, const int);
void displayDungeon(const int, const int[], const int);
void playerEnemyEncounter(bool&, bool&, int&);
//

// The main logic loop for the program
// Displays the dungeon, gets player input, and then interprets what to do based on the players dungeon position
// Returns an exit value to the OS at the end of the program
int main(){

	// Set seed
	srand(time(0));

	// Introduction message
	cout << "You find yourself in a dungeon!" << endl;


	//// Game Loop ////

	// Variables
	const int GAME_SIZE = 15;
	int positionsVisited[GAME_SIZE], dungeonLayout[GAME_SIZE];
	int currentPlayerPosition = 0, playerCoinCount = 0;
	bool playerWonFlag = true, continueFlag = true;

	// Generate Dungeon
	generateDungeon(dungeonLayout, GAME_SIZE);

	do{

		// Update positions visited
		positionsVisited[currentPlayerPosition] = 1;

		// Display player information
		cout << '\n' << "You are currently in position " << currentPlayerPosition << " of the dungeon." << endl;
		cout << "Number of coins: " << playerCoinCount << endl;

		// Display Dungeon
		displayDungeon(currentPlayerPosition, positionsVisited, GAME_SIZE);

		// Get and validate players next position
		do{
			cout << "Where would you like to go next: ";
			cin >> currentPlayerPosition;
		} while(currentPlayerPosition < 0 || currentPlayerPosition >= GAME_SIZE || positionsVisited[currentPlayerPosition] == 1);


		// Interpret players position in dungeon
		switch(dungeonLayout[currentPlayerPosition]){

			// Grass
			case 0:
				cout << "You move and find . . . grass." << '\n' ;
				cout << "Phew, nothing happens."         << endl;
				break;

			// Water
			case 1:
				cout << "You move and find . . . water." << '\n' ;
				cout << "Oh no! You drown :("            << endl;
				continueFlag = playerWonFlag = false;
				break;

			// Enemy
			case 2:
				playerEnemyEncounter(continueFlag, playerWonFlag, playerCoinCount);
				break;

			// Coin
			case 3:
				cout << "You move and find . . . a coin!" << '\n' ;
				cout << "You take it for safe keeping"    << endl;
				playerCoinCount++;
				break;

			// Exit
			case 4:
				cout << "You move and find . . . the exit!!!" << endl;
				continueFlag = false; playerWonFlag = true;
				break;
		}


	}while(continueFlag);
	////////


	/// Ending statements

	// Won
	if(!playerWonFlag){

		cout << "You fought well, but the dungeon proved too strong :(" << endl;
	}

	// Lost
	else{

		cout << "Very nice, you escape the dungeon!" << endl;
		cout << "Congratulations, you survived the dungeon!" << endl;

		cout << "You leave with " << playerCoinCount << " shiny coin";
		playerCoinCount != 1 ? cout << 's' : cout << "";
		playerCoinCount != 0 ? cout << ", yay :)" : cout << ", :(";
	}



	// Terminate
	return 0;
}


// Takes in an integer array for the layout of the dungeon, as well as a constant integer for the size of the dungeon
// Populates an area with the exit, and then populates the remaining spaces, besides the players starting position, with a random obstacle
void generateDungeon(int dungeonLayout[], const int GAME_SIZE){

	/// Populate Dungeon

	// Exit
	int exitIndex = generateRandomNumber(1, GAME_SIZE - 1);
	dungeonLayout[exitIndex] = 4;

	// Populate remaining spaces
	int obstacleNum;
	for(int index = 1; index < GAME_SIZE; index++){

		if(index != exitIndex){

			obstacleNum = generateRandomNumber(0,3);
			dungeonLayout[index] = obstacleNum;
		}
	}
}

// Takes in two integers
// Returns a random integer within the range of the given numbers
int generateRandomNumber(const int MIN, const int MAX){

	return MIN + rand() % (MAX - MIN + 1);
}

// Takes in 3 constant integers
// Displays and formats the dungeon to show the players current position, where they have already explored, and the size of the dungeon
void displayDungeon(const int playerPosition, const int positionsVisited[], const int GAME_SIZE){

	/// Display Dungeon
	// Top
	for(int i = 0; i < GAME_SIZE; i++)
		cout << "----";
	cout << "-\n";

	// Middle
	cout << "| ";
	for(int i = 0; i < GAME_SIZE; i++){

		if(playerPosition == i){ cout << 'X';}
		else if(positionsVisited[i] == 1){ cout << '*';}
		else {cout << " ";}
		cout << " | ";
	}
	cout << '\n';

	// Bottom
	for(int i = 0; i < GAME_SIZE; i++)
		cout << "----";
	cout << "-\n";
	///
}


// Takes in 3 reference variables, 2 booleans and 1 integer
// Goes through process for when a player encounters an enemy
// Player can trade one coin to escape encounter, or take a 7/10 chance to escape with a coin
void playerEnemyEncounter(bool& continueFlag, bool& playerWonFlag, int& playerCoinCount){

	cout << "You move and find . . . an enemy!" << '\n';

	char playerInput;
	if(playerCoinCount > 0){

		// Get and validate user input
		do{
			cout << "Do you want to use a coin to run away (y/n): ";
			cin >> playerInput;
		} while(playerInput != 'y' && playerInput != 'n');
	}

	if(playerInput == 'y'){

		cout << "You trade a coin for your safety." << endl;
		playerCoinCount--;
	}
	else{

		int playerLuckChance = generateRandomNumber(1,10);

		cout << "You try your luck against the enemy . . . ";

		// Lost
		if(playerLuckChance > 7){

			cout << "but lose :(" << endl;
			continueFlag = playerWonFlag = false;
		}

		// Won
		else{

			cout << "and Lady Luck was in your favor!" << endl;
			cout << "You escape and manage to steal a coin." << endl;
			playerCoinCount++;
		}
	}
}


