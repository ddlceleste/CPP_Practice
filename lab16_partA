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

    // TODO: create the array of size 12 for the magic 8-ball responses
    // and initialize the elements using the given responses on Canvas
    string responses[12] = {

        "Yes, of course!",
        "Without a doubt, yes.",
        "You can count on it.",
        "For sure!",
        "Ask me later.",
        "I'm not sure . . .",
        "I can't tell you right now.",
        "I'll tell you after my nap. Zzzzzz",
        "No way!",
        "I don't think so.",
        "Without a doubt . . . no!",
        "The answer is very clearly NOOOOO"
    };

    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    string userQuestion, userContinuePrompt;
    bool continueFlag = true;

    do{
        cout << setfill(FILL) << setw(WIDTH) << "" << endl;

        // Get user question
        cout << "Enter a question below, so that I might answer it:" << endl;
        getline(cin, userQuestion);

        // Get and Display magic 8-ball response
        cout << responses[(rand() % (12 + 1))] << '\n' << '\n';

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
