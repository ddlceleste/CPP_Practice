#include <iostream>
#include <fstream>
using namespace std;


int main(){

	ofstream writer;
	ifstream reader;
	string name = "Celeste";
	int myNum = 2701;
	const int CSTR_SIZE = name.size() + 1;
	char temp[CSTR_SIZE];

	//writer.open("test1.bin", ios::binary);
	reader.open("test1.bin", ios::binary);



	//writer.write(reinterpret_cast<char*>(&myNum), sizeof(myNum));
	//writer.write(name.c_str(), name.size() + 1);

	reader.read(temp, CSTR_SIZE);
	string loadName;
	loadName.insert(0 ,temp);
	cout << "Name: " << loadName << endl;


	//writer.close();
	reader.close();
	return 0;
}
