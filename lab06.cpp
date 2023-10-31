#include <iostream>
using namespace std;

int main(){

	float temp = 0.0f;

	cout << "Enter the temperature in your current location: ";
	cin >> temp;
	cout << '\n';

	if(temp <= 70.0f){

		cout << "Bring a jacket!" << endl;
	}
	else{

		cout << "Have an awesome trip!" << endl;
	}

	return 0;
}
