#include <iostream>
#include <random>

using namespace std;

// Initialize the random number generator
random_device dev;
mt19937 rng(dev());

// Create a distribution of possible numbers for the guessing game
uniform_int_distribution<mt19937::result_type> possibleNumbers(0, 25);

/**
Generates a random number in the range [0, 25].
If randomNumOverride is set to a value other than -1, that number will be returned instead of a random number.
*/
static int GenerateRandomNum()
{
    // Generate a random number and return it
    return possibleNumbers(rng);
}

/**
Program entry point.
*/
int main()
{
    // TODO: Implement the program here

    // Exit program with return code 0 (no errors)
    return 0;
}
