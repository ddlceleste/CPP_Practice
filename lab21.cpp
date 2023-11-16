#include <iostream>
using namespace std;

struct Video_Game{

	string title;
	string genre;
	float price;
	short releaseYear;
};

int main(){

	Video_Game gameA = {"Celeste", "Platformer", 20.0f, 2018};
	Video_Game gameB;

	// Get users game
	cout << "What is your favorite video game? "; getline(cin, gameB.title);
	cout << "What is the games genre? "; getline(cin, gameB.genre);
	cout << "How much does it cost? "; cin >> gameB.price;
	cout << "What year did it realease? "; cin >> gameB.releaseYear;
	cout << '\n';


	// Dsplay Games
	cout << "---My Favorite Game---" << endl;
	cout << "Title: " << gameA.title << endl;
	cout << "Genre: " << gameA.genre << endl;
	cout << "Price: " << gameA.price << endl;
	cout << "Release Year: " << gameA.releaseYear << endl;
	cout << '\n';

	cout << "---Your Favorite Game---" << endl;
	cout << "Title: " << gameB.title << endl;
	cout << "Genre: " << gameB.genre << endl;
	cout << "Price: $" << gameB.price << endl;
	cout << "Release Year: " << gameB.releaseYear << endl;
	cout << '\n';

	return 0;
}
