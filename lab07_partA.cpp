#include <iostream>
using namespace std;

int main(){

	int num1 = 0;
	int num2 = 0;
	bool flag;

	cout << "Enter Num1: "; cin >> num1;
	cout << "Enter Num2: "; cin >> num2;

	flag = false;

	if(num1 > 0){

		if(num2 < 0){

			flag = true;
		}
	}
	else if(num1 == -5){

		if(num2 > 0){

			flag = true;
		}
	}


	if(flag){

		cout << "Complex condition met!" << endl;
	}


	return 0;
}
