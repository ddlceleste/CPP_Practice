#include <iostream>
using namespace std;

int main(){

    // variables
    const unsigned NUM_GAMES = 5;
    unsigned score1, score2, score3, score4, score5;
    score1 = score2 = score3 = score4 = score5 = 0;

    // TODO: gather input
    cout << "Enter the scores from 5 previous basketball games: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    // TODO: calculate average
    cout << "The average score is " << (score1 + score2 + score3 + score4 + score5) / 5.0 << '\n';

    // TODO: update all scores
    score1 += 4;
    score2 -= 6;
    score3 *= 2;
    score4 /= 3;
    score5 %= 8;

    // TODO: recalculate average
    cout << "The updated average score is " << (score1 + score2 + score3 + score4 + score5) / 5.0 << '\n';

    // terminate
    return 0;
}
