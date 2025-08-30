/*
Example solution for part one of the exercise.
*/

#include <iostream>

using namespace std;

int main()
{
    int highwayNumber;
    cout << "Enter a highway number: ";
    cin >> highwayNumber;

    // Check if highway is primary or auxiliary
    bool isPrimary = highwayNumber > 0 && highwayNumber < 100;
    bool isAux = highwayNumber > 100 && highwayNumber <= 999;

    // 0 is not a valid primary highway number.
    // Thus, a highway number that is divisible by 100 is invalid.
    bool isValid = (isPrimary || isAux) && (highwayNumber % 100);
    if (!isValid) {
        cout << highwayNumber << " is not a valid highway number." << endl;
        return 1;
    }

    // Output whether the highway is primary or auxiliary.
    if (isPrimary) {
        cout << "I-" << highwayNumber << " is primary." << endl;
    }
    else {
        cout << "I-" << highwayNumber << " is auxiliary." << endl;
    }

    return 0;
}
