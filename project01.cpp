#include <iostream>
#include <string>
using namespace std;


int main(){

    // Variables
    string volunteerName = "Sam";

    float hoursWorked = 8.5;
    const float unitsEarnedRate = 0.5;
    float unitsEarnedThisWeek = hoursWorked * unitsEarnedRate;

    const int totalUnitsNeeded = 35;
    float unitsStillNeeded = totalUnitsNeeded - unitsEarnedThisWeek;
    float hoursStillNeeded = unitsStillNeeded / unitsEarnedRate;

    const float payRate = 14.5;
    float totalPay = hoursWorked * payRate;
    //
    //
    // Report
    cout << "	REPORT FOR " << volunteerName << '\n';
    cout << "---------------------------------" << '\n' << '\n';

    // Units Earned
    cout << volunteerName << " volunteered for " << hoursWorked
    << " hours this week." << '\n';

    cout << "Their class uses a rate of " << unitsEarnedRate
    << " units earned per hour volunteering." << '\n';

    cout << "This week, " << volunteerName << " earned " << unitsEarnedThisWeek
    << " units from their volunteer work." << '\n'

    << "    Units Earned = Hours Worked * Unit Rate | "
    << hoursWorked << " * " << unitsEarnedRate
    << '\n' << '\n';
    //

    // Units Still Needed
    cout << "Their class requires a total of " << totalUnitsNeeded
    << " units for the semester." << '\n';

    cout << "After this week they will need to earn another "
    << unitsStillNeeded << " units to reach their goal." << '\n'

    << "    Units Still Needed = Total Units Needed - Units Earned | "
    << totalUnitsNeeded << " - " << unitsEarnedThisWeek
    << '\n' << '\n';
    //

    // Hours Still Needed
    cout << "This means they will have to volunteer for another "
    << hoursStillNeeded << " hours this semester." << '\n';

    cout << "   Hours Still Needed = Units Still Needed / Unit Rate | "
    << unitsStillNeeded << " / " << unitsEarnedRate
    << '\n' << '\n';
    //

    // Paid instead of Volunteer
    cout << "If the work was done at a job paying $"
    << payRate << " per hour, they would have earned $"
    << totalPay << " this week." << '\n';

    cout << "   Total Pay = Hours Worked * Pay Rate | "
    << hoursWorked << " * " << payRate << endl;


    // Terminate
    return 0;
}
