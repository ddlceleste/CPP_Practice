#include <iostream>
using namespace std;

void printBoard(const unsigned[][3]);
void updateBoard(unsigned, unsigned, unsigned, unsigned[][3]);
bool checkWin(const unsigned[][3]);
void getUserInput(unsigned&, unsigned&);

int main(){

	unsigned gameBoard[3][3] = {
		0,0,0,
		0,0,0,
		0,0,0
	};
	unsigned playerRow, playerCol, currentPlayer;

	printBoard(gameBoard);
	for(int i = 1; i < 11; i++){

		i % 2 == 0 ? currentPlayer = 2 : currentPlayer = 1;

		// Player Move
		cout << "-Player " << currentPlayer << "-" << '\n';
		getUserInput(playerRow, playerCol);
		updateBoard(playerRow, playerCol, currentPlayer, gameBoard);
		printBoard(gameBoard);

		if(checkWin(gameBoard)){break;}
	}

	// Winning Message
	cout << '\n' << "Player " << currentPlayer << " Wins!" << endl;


	return 0;
}

void printBoard(const unsigned gameBoard[][3]){

	cout << "-------------" << '\n';
	for(int row = 0; row < 3; row++){

		cout << "| ";
		for(int col = 0; col < 3; col++){

			cout << gameBoard[row][col] << " | ";
		}
		cout << '\n' << "-------------" << '\n';
	}

}

bool checkWin(const unsigned gameBoard[][3]){

	bool winFlag = false;
	// Row Check
	if(gameBoard[0][0] != 0 && gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][2] == gameBoard[0][1]){winFlag = true;}
	else if(gameBoard[1][0] != 0 && gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][2] == gameBoard[1][1]){winFlag = true;}
	else if(gameBoard[2][0] != 0 && gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][2] == gameBoard[2][1]){winFlag = true;}
	// Column Check
	else if(gameBoard[0][0] != 0 && gameBoard[0][0] == gameBoard[1][0] && gameBoard[2][0] == gameBoard[1][0]){winFlag = true;}
	else if(gameBoard[0][1] != 0 && gameBoard[0][1] == gameBoard[1][1] && gameBoard[2][1] == gameBoard[1][1]){winFlag = true;}
	else if(gameBoard[0][2] != 0 && gameBoard[0][2] == gameBoard[1][2] && gameBoard[2][2] == gameBoard[1][2]){winFlag = true;}
	// Diagonal
	else if(gameBoard[0][0] != 0 && gameBoard[0][0] == gameBoard[1][1] && gameBoard[2][2] == gameBoard[1][1]){winFlag = true;}
	else if(gameBoard[2][0] != 0 && gameBoard[2][0] == gameBoard[1][1] && gameBoard[0][2] == gameBoard[1][1]){winFlag = true;}

	return winFlag;
}

void updateBoard(unsigned row, unsigned col, unsigned value, unsigned gameBoard[][3]){

	gameBoard[row][col] = value;
}

void getUserInput(unsigned& rowInput, unsigned& colInput){

	do{
		cout << "Enter your move (row, column): ";
		cin >> rowInput >> colInput;
	}
	while(rowInput < 0 || rowInput > 2 || colInput < 0 || colInput > 2);
}
