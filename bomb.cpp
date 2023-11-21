#include <iostream>
using namespace std;


struct BombProperties{

	bool litCAR = false;
	bool litFRK = false;
	bool SN_Even = false;
	bool SN_Vowel = false;
	bool parellelPort = false;
	bool isNeedy = false;
	bool twoPlusBatteries = false;
	unsigned short moduleCount = 0;

};

class Bomb{

	BombProperties parms;
	string conversionString;


	bool convertToBool(){

		if(conversionString == "yes" || conversionString == "y" || conversionString == "1")
			return true;

		else if(conversionString == "no" || conversionString == "n" || conversionString == "0")
			return false;

		cout << "Invalid Conversion!" << endl;
		return false;
	}

	string convertToString(bool conversionBool){

		if(conversionBool)
			return "Yes";

		else if(!conversionBool)
			return "No";

		return "Conversion Error!";
	}

	public : void displayParms(){

		cout << '\n';
		cout << "-- Bomb Parameters ---" << endl;
		cout << "Module Count: "      << parms.moduleCount << endl;
		cout << "2+ Batteries: "     << convertToString(parms.twoPlusBatteries) << endl;
		cout << "Is Needy: "          << convertToString(parms.isNeedy) << endl;
		cout << "SN is Even: "        << convertToString(parms.SN_Even) << endl;
		cout << "SN has Vowel: "      << convertToString(parms.SN_Vowel) << endl;
		cout << "Has CAR indicator: " << convertToString(parms.litCAR) << endl;
		cout << "Has FRK indicator: " << convertToString(parms.litFRK) << endl;
		cout << "Has Parallel Port: " << convertToString(parms.parellelPort) << endl;
		cout << '\n';
	}

	public : void initialize(){

		cout << '\n';
		cout << "--- Initialization ---" << endl;
		cout << "How many Modules? ";   cin >> parms.moduleCount;
		cout << "Are there 2+ Batteries? "; cin >> conversionString; parms.twoPlusBatteries = convertToBool();
		cout << "Any Needy modules? ";  cin >> conversionString; parms.isNeedy = convertToBool();
		cout << "Lit CAR indicator? ";  cin >> conversionString; parms.litCAR = convertToBool();
		cout << "Lit FRK indicator? ";  cin >> conversionString; parms.litFRK = convertToBool();
		cout << "Is the Last digit of SN Even? ";  cin >> conversionString; parms.SN_Even = convertToBool();
		cout << "Does the SN have a Vowel? ";  cin >> conversionString; parms.SN_Vowel = convertToBool();
		cout << "Is there a Parallel Port? ";  cin >> conversionString; parms.parellelPort = convertToBool();
	}
};


int main(){

	Bomb thisBomb;
	thisBomb.initialize();
	thisBomb.displayParms();

	return 0;
}

