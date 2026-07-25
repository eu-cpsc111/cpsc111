#include <iostream>
#include <string>

using namespace std;

constexpr float PI = 3.14159265358979323846;

int main()
{
    /* ----------------------------------------------------
    Syntax error examples
    ---------------------------------------------------- */

    // Example: missing semi-colon at the end
    //int num 

    // Example: variable foo isn't defined
    //cout << foo;

    // Example: assigning a string to an integer variable
    //int num = "hello";

    // Example: multiple errors
    //int num;
    //cout num << " hi ";
    //cin >> num;

    /* ----------------------------------------------------
    Logic error examples
    ---------------------------------------------------- */

    // Example: wrong formula for circumference
    //float radius = 52.12f;
    //float circumference = 4 * radius * PI;

    // Example: forgot to use endl to put each string on its own line
    //cout << "Line 1" << "Line 2" << "Line 3";

    // Example: logic is backwards (returns when should quit is false instead of true)
    //bool shouldQuit = true;
    //if (!shouldQuit)
    //    return 0;

    // Example: infinite loop
    //int i = 0;
    //while (i == 0) {
    //}

    /* ----------------------------------------------------
    Runtime error examples
    ---------------------------------------------------- */

    // Accessing an invalid memory location
    //int* badPointer = (int*)1;
    //int a = *badPointer;

    return 0;
}
