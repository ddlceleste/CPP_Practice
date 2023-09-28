#include <iostream>

int main(){

	int max_games = 16;
	int game_counter = 0;
	int accumulated_score = 0;
	int user_input = 0;

	while(user_input != -1 && game_counter < max_games){

		game_counter++;
		std::cout << "Enter score for Game " << game_counter << " (-1 to exit): ";
		std::cin >> user_input;

		if(user_input != -1 && user_input != 1 && game_counter < max_games){

			accumulated_score += user_input;
		}
	}
	game_counter--;

	double average_score = accumulated_score / (game_counter * 1.0);
	std::cout << "Average score: " << average_score     << " points." << std::endl;
	std::cout << "Total score:   " << accumulated_score << " points." << std::endl;

	// Nested Loop
	int count_to = 0;
	int number_of_rows = 0;

	std::cout << "What number do you want to count to?: "; std::cin >> count_to;
	std::cout << "How many times?: "; std::cin >> number_of_rows;

	for(int row_num = 1; row_num <= number_of_rows; row_num++){

		std::cout << row_num << ": ";
		for(int inner_num = 1; inner_num <= count_to; inner_num++){

			std::cout << inner_num << " ";
		}
		std::cout << '\n';
	}

	return 0;
}
