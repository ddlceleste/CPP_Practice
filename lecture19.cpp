#include <iostream>
#include <vector>
using namespace std;

void func1(vector<double>&);
vector<string> func2();

int main(){

	vector<int> vecNumbers(5);

	vecNumbers[0] = 17;
	vecNumbers[1] = 4;

	// Safer
	vecNumbers.at(2) = 9;
	vecNumbers.at(3) = -23;
	vecNumbers.at(4) = 100;

	// Access invalid element
	//vecNumbers[-1] = 4;


	vector<double> weights;
	weights.push_back(97.008);
	cout << "First Weight: " << weights.at(0) << endl;
	weights.push_back(34.078);
	cout << "Second Weight: " << weights.at(1) << endl;

	double userWeight;
	cout << "Enter weight: ";
	cin >> userWeight;
	weights.push_back(userWeight);
	cout << "Third Weight: " << weights.at(2) << endl;


	vector<string> foods {"Salad", "Noodles", "Turkey Sandwich", "Tofu Scramble", "Pizza"};

	cout << "Total size: " << foods.size() << endl;
	cout << "Last element: " << foods.back() << endl;
	foods.pop_back();
	cout << "Total size: " << foods.size() << endl;
	cout << "Last element: " << foods.back() << endl;
	cout << '\n';

	for(unsigned i = 0; i < foods.size(); i++)
		cout << foods.at(i) << endl;

	cout << '\n';


	for(string food : foods)
		cout << food << endl;

	cout << '\n';



	return 0;
}


void func1(vector<double>& vecRef){

	for(unsigned i = 0; i < vecRef.size() / 2; i++){
		vecRef.at(i) += vecRef.at(vecRef.size() - i - 1);
	}
	if(vecRef.size() % 2 == 1){
		vecRef.at(vecRef.size() / 2) /= 2.0;
	}
}


vector<string> func2(){

	vector<string> myVec{"Red" , "Green" , "Blue"};

	return myVec;
}
