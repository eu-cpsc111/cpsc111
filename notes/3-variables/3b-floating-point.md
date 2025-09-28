# Floating Point

<!-- <style>
    /* initialise the counter */
    body { counter-reset: figureCounter; }
    /* increment the counter for every instance of a figure even if it doesn't have a caption */
    exampleNum { counter-increment: figureCounter; }
    /* prepend the counter to the figcaption content */
    exampleNum:before {
        content: "Example " counter(figureCounter) ":";
        font-size: 8pt;
    }
</style> -->

## Data types

Integers: whole numbers. Uses the `int` data type.

<exampleNum />

```cpp
int x = 123;
cout << x;
```

Floating point: fractional numbers. Uses the `double` data type.

<exampleNum />

```cpp
double x = 123.789;
cout << x;
```

`double` variables can be used just like other numeric data types.

<exampleNum />

```cpp
double x;      // Declaration
x = 123.132;   // Assignment
double y = 325.12;  // Declaration + assignment
y = x * 12.1 + 2.2; // Arithmetic expressions

cout << x << ", " << y;
```

There is another floating point data type named `float`.

<exampleNum />

```cpp
float x = 123.789f;
cout << x;
```

Both `double` and `float` do the same thing, but `double` can allocates twice the amount of storage and therefore can store a larger range of values:

- a `double` variable allocates 64 bits of storage.
- a `float` variable allocates 32 bits of storage.

For our purposes here, we'll stick with `double`.

### Exercise

Finish the following C++ program to compute the area of a circle. The constant `M_PI` contains the value of pi.

<exampleNum />

```cpp
#include <iostream>
#include <cmath> // Provides M_PI

using namespace std;

int main()
{
    double circleRadius;
    double circleArea;

    // Read radius from user input
    cout << "Enter the circle radius: ";
    cin >> circleRadius;

    // PUT YOUR CODE HERE

    // Output the result
    cout << circleArea << endl;

    return 0;
}
```

## Type Conversions

### Literals

A _literal_ is a hard-coded value in C++ code. For example:

<exampleNum />

```cpp
int x = 24;
```

- `24` is recognized by the compiler as a literal integer value.

A literal `double` has a decimal point:

<exampleNum />

```cpp
double x = 24.3;
```

This is also a `double` literal:

<exampleNum />

```cpp
double x = 24.0;
```

- Even though the number is a whole number, since we put a decimal point (`.0`) at the end, the compiler recognizes this as a floating-point value.

### Implicit Conversions

What happens if we try to assign an integer literal to a double variable?

<exampleNum />

```cpp
double x = 24;
```

- `x` is a `double` variable.
- `24` is an `int` literal.
- This is an _implicit conversion_.

What happens if we try to do the opposite?

<exampleNum />

```cpp
int x = 24.0;
```

- `x` is a `int` variable.
- `24.0` is an `double` literal.
- This is also an implicit conversion.

Consider this example:

<exampleNum />

```cpp
int x = 24.3;
```

- `x` is an `int` variable.
- `24.3` is a `double` literal.
- What happens?

Implicit conversions can happen with variables:

<exampleNum />

```cpp
int x = 0;
double y = 24.3;
x = y;
```

- What is the value of `x`?

### Explicit Conversions

Consider this example:

<exampleNum />

```cpp
double x = 25 / 3;
```

- `25` is a literal integer.
- `3` is a literal integer.
- Therefore, the compiler will perform integer division.
- What is the value of `x`?

If either value is a floating-point literal, then floating-point division is performed instead.

<exampleNum />

```cpp
double x = 25 / 3.0;
```

- `3.0` is a floating-point literal value.
- Therefore, floating-point division is performed.
- What is the value of `x`?

Same concept applies with variables:

<exampleNum />

```cpp
int x = 21;
int y = 5;
double z = x / y;
```

- `x` and `y` are `int` variables, so integer division will be performed.

We can manually tell the compiler to convert values into other data types using an _explicit conversion_.

<exampleNum />

```cpp
int x = 21;
int y = 5;
double z = x / static_cast<double>(y);
```

- Use the special compiler function `static_cast<double>()`.
- Inside the `()`, but the value you want to convert.
- The `<double>` tells the compiler to convert the value to a `double` data type.

This does the same thing as the previous example:

<exampleNum />

```cpp
int x = 21;
int y = 5;
double z = static_cast<double>(x) / y;
```

It is important to pay attention to the order of operations though. Consider this example:

<exampleNum />

```cpp
int x = 21;
int y = 5;
double z = static_cast<double>(x / y);
```

- The compiler will evaluate _inside_ the parentheses first!
- What is the value of `z`?

Doing these data type conversions is called _type casting_. You are _casting_ a value from one data type to another.

## Floating Point Display

You can control how floating point numbers are printed when using `cout`.

- Put `#include <iomanip>` at the top of your source file.
- Add a statement like: `cout << fixed << setprecision(8);`
- Tweak the value passed into `setprecision()` to control the number of decimal places to display in the output.

<exampleNum />

```cpp
#include <iomanip>
// ...
cout << fixed << setprecision(8);
double x = 25.0 / 3.0;
cout << x << endl;
```

## Exercise - Fuel Efficiency

Write a program that computes fuel efficiency.

- Have user input number of miles driven.
- Have user input gallons of gas used.
- Output the fuel efficiency in miles per gallon.

Example:

```
Enter miles driven: 350
Enter gallons used: 10
Fuel efficiency is 35.00 miles/gallon
```

## Exercises

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
double x = 2.3 + static_cast<double>(5) / 3;
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
double x = 2.3 + static_cast<double>(5 / 3);
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
double x = 2.3 + 5 / 3;
```

<exampleNum />

What is the value of `c` after the following code executes?

```cpp
double a = 5.0;
double b = 2.0;
double c = a / b;
```

<exampleNum />

What is the value of `c` after the following code executes?

```cpp
int a = 5.2;
int b = 2.0;
double c = a / b;
```

<exampleNum />

What is the value of `c` after the following code executes?

```cpp
int a = 5.2;
int b = 2.0;
double c = a / static_cast<double>(b);
```

<exampleNum />

What is the value of `c` after the following code executes?

```cpp
int a = 5;
int b = 2;
double c = static_cast<double>(a / b);
```

<exampleNum />

What is the value of `c` after the following code executes?

```cpp
int a = 5;
int b = 2;
double c = static_cast<double>(a) / static_cast<double>(b);
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
int x = 9;
double d = 11.8;
x = x + d;
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
int x = 5;
int y = 10;
double z = x / y;
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
int x = 5;
int y = 10;
double z = static_cast<double>(x) / y;
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
int x = 5;
int y = 10;
double z = static_cast<int>(x) / y;
```

<exampleNum />

What is the value of `x` after the following code executes?

```cpp
int x = 5;
int y = 10;
double z = static_cast<double>(x / y);
```
