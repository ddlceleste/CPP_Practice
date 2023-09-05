#include <iostream>
#include <iomanip>

int main(){
	// NTS: cin.ignore();

	const int spacing = 9;
	std::string dashes = "-";
	bool isCoding = true;


	// Set spacing
	std::cout << std::right;
	std::cout << std::setw(spacing) << 21   << " | " << std::setw(spacing) << 306   << " | " << std::setw(spacing) << -7    << " | " << std::endl;
	dashes = "--------"; for(int i = 0; i < spacing * 3; i++){dashes += "-";} std::cout << dashes                                    << std::endl;
	std::cout << std::setw(spacing) << 1421 << " | " << std::setw(spacing) << 0     << " | " << std::setw(spacing) << 1001  << " | " << std::endl;
	dashes = "--------"; for(int i = 0; i < spacing * 3; i++){dashes += "-";} std::cout << dashes                                    << std::endl;
	std::cout << std::setw(spacing) << 3    << " | " << std::setw(spacing) << 14560 << " | " << std::setw(spacing) << -400  << " | " << std::endl;
	std::cout << '\n';

	// Number Displays
	double longDecimal = 46.3432424112367245;
	std::cout << "ShowPoint: "      << std::showpoint << 26.0                       << std::endl;
	std::cout << "Precision: "      << std::setprecision(10) << longDecimal         << std::endl;
	std::cout << "FixedPrecision: " << std::fixed << longDecimal                    << std::endl;
	std::cout << '\n';

	// Boolean Output
	std::cout << "Is Coding: " << std::boolalpha << isCoding << std::endl;

	std::cout << "\n\n";

	//// Full Name and Age
	std::string fullName;
	int age = 0;

	// Name
	std::cout << "Enter your full name: ";
	std::getline(std::cin, fullName);

	// Age
	std::cout << "Enter your age: ";
	std::cin >> age;

	// Output
	std::cout << "Your full name is " << fullName << std::endl;
	std::cout << "You are " << age << " years old" << std::endl;





	return 0;
}
