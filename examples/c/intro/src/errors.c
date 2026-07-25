#include <stdbool.h>
#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
    /* ----------------------------------------------------
    Syntax error examples
    ---------------------------------------------------- */

    // Example: missing semi-colon at the end
    //int num 

    // Example: variable foo isn't defined
    //printf("%d", foo);

    // Example: assigning a string to an integer variable
    //int num = "hello";

    // Example: multiple errors
    //intnum;
    //printf " hi ";

    /* ----------------------------------------------------
    Logic error examples
    ---------------------------------------------------- */

    // Example: wrong formula for circumference
    //float radius = 52.12f;
    //float circumference = 4 * radius * PI;

    // Example: forgot to print newlines between lines
    //printf("Line 1");
    //printf("Line 2");
    //printf("Line 3");

    // Example: logic is backwards (returns when shouldQuit is false instead of true)
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
