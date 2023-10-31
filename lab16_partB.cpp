#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(){

    // constant variables
    const char FILL = '-';
    const int WIDTH = 50;

    // seed the RNG
    srand(time(0));

    // TODO: create the array of size 7 for the magic 8-ball responses
    string responses[7];

    // TODO: let the user enter their own fortunes
    //       using a range-based `for` loop
    for(string& response : responses){

        cout << "Enter a response the the magic 8-ball: ";
        getline(cin, response);
    }

    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    //       you should be able to just copy-and-paste your loop from part A
    string userQuestion, userContinuePrompt;
    bool continueFlag = true;

    do{
        cout << setfill(FILL) << setw(WIDTH) << "" << endl;

        // Get user question
        cout << "Enter a question below, so that I might answer it:" << endl;
        getline(cin, userQuestion);

        // Get and Display magic 8-ball response
        cout << responses[(rand() % (7 + 1))] << '\n' << '\n';

        // Prompt to exit
        cout << "Enter yes to continue: ";
        getline(cin, userContinuePrompt);
        userContinuePrompt == "yes" ? continueFlag = true : continueFlag = false;

    } while(continueFlag);

    // final message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "           THE MAGIC 8-BALL NOW DEPARTS!\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
