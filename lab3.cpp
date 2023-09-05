#include <iostream>
using namespace std;

int main(){

	// PART A
	char letterGrade = 'A';
	short gradePercent = 100;
	std::string likedFood = "pizza", dislikedFood = "tacos";
	double length = 20, width = 30, height = 40;
	bool inSchool = true, hasDog = false;

	std::cout << "I want to earn an " << letterGrade << " in this class."  << std::endl;
	std::cout << "I want to earn a "  << gradePercent << "% in this class." << std::endl;
	std::cout << "I like " << likedFood   << ", but i dislike " << dislikedFood << '.' << std::endl;
	std::cout << "The cube is " << length << "x" << width << "x" << height << std::endl;
	std::cout << "Am I in school?: "  << inSchool << std::endl;
	std::cout << "Do I have a dog?: " << hasDog   << std::endl;
	std::cout << "\n";
	//
	// PART B
	const int POPULATION = 1550;

	std::cout << "Population is doubled: "               << POPULATION * 2 << std::endl;
	std::cout << "Population is halved: "                << POPULATION / 2 << std::endl;
	std::cout << "684 people join the population: "      << POPULATION + 684 << std::endl;
	std::cout << "123 people left the population: "      << POPULATION - 123 << std::endl;
	std::cout << "People left without 4-bedroom units: " << POPULATION % 4 << std::endl;
	//

	return 0;
}
