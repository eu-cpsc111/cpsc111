#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constants containing conversion factors
    const double METERS_PER_MILE = 1609.344;
    const double FEET_PER_MILE = 5280;
    const double INCHES_PER_MILE = 63360;

    // Prompt for and read in the number of miles
    cout << "Enter a number of miles: ";
    double miles;
    cin >> miles;

    // Convert to other units of measure
    double feet = miles * FEET_PER_MILE;
    double inches = miles * INCHES_PER_MILE;
    double meters = miles * METERS_PER_MILE;

    // Configure output to display two decimal places for floating-point values
    cout << fixed << setprecision(2);

    // Display the results of the conversion
    cout << miles << " miles is equal to:" << endl;
    cout << "\t" << feet << " feet" << endl;
    cout << "\t" << meters << " meters" << endl;
    cout << "\t" << inches << " inches" << endl;

    return 0;
}
