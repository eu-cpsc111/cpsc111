# Highway Numbers

_Derived from lab 3.24 in textbook._

Primary U.S. highways are numbered 1-99.

- Odd numbers run north to south (example: I-35).
- Even numbers run east to west (example: I-80).

Auxiliary highways are numbered 101-999. They service the primary highway indicated by the rightmost two digits.

- Example: I-435 services I-35.

A highway number cannot be even divisible by 100.

- Example: 200 is not a valid auxiliary highway number because 00 is not a valid primary highway number.

## Part 1

For this exercise, write a program that takes a highway number as input and displays whether the highway is primary or auxiliary. If the highway number is invalid, print a message indicating it is invalid.

Examples:

- If highway number is `80`: `I-80 is primary.`
- If highway number is `435`: `I-435 is auxiliary.`
- If highway number is `200`: `200 is not a valid highway number.`

Use this starter code:

```
#include <iostream>

using namespace std;

int main() {
    int highwayNumber;
    cout << "Enter a highway number: ";
    cin >> highwayNumber;

   return 0;
}

```

## Part 2

Extend the program to indicate whether the highway is running north/south or east/west.

Example:

- If the highway number is `80`: `I-80 is primary and runs north/south.`
- If the highway number is `435`: `I-435 is auxiliary and runs east/west.`
