#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    // Define how many laps you can do on each available tire compound
    const int SOFT_LAPS = 10;
    const int MED_LAPS = 20;
    const int HARD_LAPS = 30;

    // Show tire compound input options
    cout << "Pick a tire compound." << endl;
    cout << "\t's' for Soft" << endl
        << "\t'm' for Medium" << endl
        << "\t'h' for Hard" << endl
        << endl;

    // Prompt and read in user's tire choice
    cout << "Which tire compound do you want? ";
    char compound;
    cin >> compound;

    // Prompt for how many laps the race is
    cout << "How many laps are in the race? ";
    double lapsInRace;
    cin >> lapsInRace;

    // Determine number of laps on the selected tire
    double lapsPerCompound;

    switch (compound) {
        // Soft compound
    case 's':
    case 'S':
        lapsPerCompound = SOFT_LAPS;
        break;

        // Medium compound
    case 'm':
    case 'M':
        lapsPerCompound = MED_LAPS;
        break;

        // Hard compound
    case 'h':
    case 'H':
        lapsPerCompound = HARD_LAPS;
        break;

        // Invalid selection
    default:
        cout << "Invalid tire compound." << endl;
        return 1;
    }

    // Compute the number of sets of tires required for the compound
    int numSets = ceil(lapsInRace / lapsPerCompound);

    // Display the result
    cout << "You will need " << numSets << " sets of tires." << endl;

    return 0;
}
