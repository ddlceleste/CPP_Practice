#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // seed RNG
    srand(time(0));

    // variables
    const char SYMBOL = '-';
    const int LINE = 50;
    const string STORENAME = "MallMart";

    // greeting
    cout << "Welcome to " << STORENAME << '!' << '\n';

    // TODO: gather input
    // Get Name
    string customerName = "Name";
    cout << "Please enter your name: ";
    getline(cin, customerName);

    // Get Items
    string itemProductA = "itemA", itemProductB = "itemB", itemProductC = "itemC";
    double itemPriceA = 0.00, itemPriceB = 0.00, itemPriceC = 0.00;
    // A
    cout << "Enter the first item you want to purchace: "; getline(cin, itemProductA); cout << '\n';
    cout << "Enter the price of the first item: $"; cin >> itemPriceA; cout << '\n'; cin.ignore();
    // B
    cout << "Enter the second item you want to purchace: "; getline(cin, itemProductB); cout << '\n';
    cout << "Enter the price of the second item: $"; cin >> itemPriceB; cout << '\n'; cin.ignore();
    // C
    cout << "Enter the third item you want to purchace: "; getline(cin, itemProductC); cout << '\n';
    cout << "Enter the price of the third item: $"; cin >> itemPriceC;

    cout << "Thank you for shopping at " << STORENAME << '!' << endl;



    // TODO: calculations
    double taxPercent = (3 + rand() % (20 - 3 + 1));
    double subTotal = itemPriceA + itemPriceB + itemPriceC;
    double taxedTotal = (subTotal * (taxPercent / 100)) + subTotal;
    

    // TODO: display receipt
    cout << setprecision(2);
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;
    //// Display Store Name
    cout << setfill(' ') << left;
    cout << setw(LINE/2-(STORENAME.length()/2)) << '|'; 
    //
    cout << STORENAME;
    //
    cout << right; 
    cout << setw(LINE/2-(STORENAME.length()/2)) << '|';
    cout << endl;
    ////
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;
    //// Display Customer Name
    cout << setfill(' ');
    cout << left << setw(LINE/2 - 1) << "| Customer:";
    cout << right << setw(LINE/2 - 1) << customerName << " |";
    cout << endl;
    //
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;
    ////
    //// Display Item 1
    // Item
    cout << setfill(' ');
    cout << left << setw(LINE/2 - 1) << "| Item #1:";
    cout << right << setw(LINE/2 - 1) << itemProductA << " |";
    cout << endl;
    // Price
    cout << left << setw(LINE/2 - 1) << "| Price $:";
    cout << right << setw(LINE/2 - 1) << fixed << itemPriceA << " |";
    cout << endl;
    //
    cout << left  << setw(LINE/2) << '|'; 
    cout << right << setw(LINE/2) << '|'; 
    cout << endl;
    ////
    //// Display Item 2
    // Item
    cout << left << setw(LINE/2 - 1) << "| Item #2:";
    cout << right << setw(LINE/2 - 1) << itemProductB << " |";
    cout << endl;
    // Price
    cout << left << setw(LINE/2 - 1) << "| Price $:";
    cout << right << setw(LINE/2 - 1) << fixed << itemPriceB << " |";
    cout << endl;
    //
    cout << left  << setw(LINE/2) << '|'; 
    cout << right << setw(LINE/2) << '|'; 
    cout << endl;
    ////
    //// Display Item 3
    // Item
    cout << left << setw(LINE/2 - 1) << "| Item #3:";
    cout << right << setw(LINE/2 - 1) << itemProductC << " |";
    cout << endl;
    // Price
    cout << left << setw(LINE/2 - 1) << "| Price $:";
    cout << right << setw(LINE/2 - 1) << fixed << itemPriceC << " |";
    cout << endl;
    ////
    cout << left;
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;
    //
    //// Totals
    // Subtotal
    cout << setfill(' ');
    cout << left << setw(LINE/2 - 1) << "| Sub Total $:";
    cout << right << setw(LINE/2 - 1) << subTotal << " |";
    cout << endl;
    // Random Tax
    cout << left << setw(LINE/2 - 1) << "| Random Tax:";
    cout << right << setw(LINE/2 - 2) << taxPercent << "% |";
    cout << endl;
    ///
    cout << left;
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;
    ///
    // Taxed Total
    cout << setfill(' ');
    cout << left << setw(LINE/2 - 1) << "| Total $:";
    cout << right << setw(LINE/2 - 1) << taxedTotal << " |";
    cout << endl;
    ////
    cout << left;
    cout << setfill(SYMBOL);
    cout << setw(LINE) << "" << endl;


    // terminate
    return 0;
}
