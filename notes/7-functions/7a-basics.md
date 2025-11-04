# Function Basics

## Basics

A simple function that takes two integers as input and produces a single integer as output:

```cpp
int Add(int a, int b)
{
    return a + b;
}
```

- `int` - the return type. This is the type of data the function returns back to the caller.
- `Add` - the name of the function.
- `(int a, int b)` - input parameter list. Each input is defined like a variable (data type following by name).
- `return` - code executes from the top of the function until a return statement is reached. The return statement indicates what value the function will return back to the caller.

By itself, the function does nothing. It needs to be triggered, or _called_ from somewhere in the program.

```cpp
int sum = Add(x, y);
cout << Add(2, 5) << endl;
cout << Add(99, 99) << endl;
cout << Add(x * 2, y * 2) << endl;
```

Function calls can be used as part of expressions as long as the return type is valid:

```cpp
int sum = Add(x, y) * Add(5, 5) * 2;
```

Here is a function that calculates the area of a circle:

```cpp
double CalculateCircleArea(double diameter)
{
    double radius = diameter / 2.0;
    return M_PI * radius * radius;   // Include <cmath> to get access to M_PI
}
```

Example function calls:

```cpp
cout << CalculateCircleArea(2) << endl;
cout << CalculateCircleArea(2.5) << endl;
cout << CalculateCircleArea(10.5) << endl;
```

## Void Functions

A function does not have to return a value. It can use `void` as the return type, meaning nothing is returned.

```cpp
void PrintGreeting()
{
    cout << "Welcome!" << endl;
    cout << "This program is awesome!" << endl;
}
```

- Void functions do not return a value.
- They cannot be used in an expression or assignment statement.

A void function is not required to have a `return` statement, but it can.

```cpp
void DoSomeThing(float timer)
{
    if (timer > 5)
        return;

    cout << "Do the thing.";
}
```

## Return Statements

Code in a function will execute line-by-line until you reach a return statement.

```cpp
int ComputeSumOfSquares(int num1, int num2)
{
    int sum;
    sum = (num1 * num1) + (num2 * num2);
    return sum;
}
```

You might have multiple return statements in a function. Whenever a return statement is hit, the rest of the code in the function is ignored. The return value is passed back to the caller.

```cpp
bool IsOpen(int day, int hour)
{
   if (day == 0)  // TODO: use enum/constants instead of magic nums
      return false;

   if (day == 6) {
      if (hour < 10 || hour >= 14) {
         return false;
      }
   }

   return hour >= 8 && hour < 20;
}
```

## Why

Why create functions?

- Reusable code blocks.
- Reduce code duplication.
- Improve code readability.
- Modular/incremental program development.

## Documentation

Documentation comments are specially formatted comment blocks placed above functions to document their purpose and what their parameters are. Code editors can parse these comments and include that information in various places for the developer (i.e., code suggestions and auto-completion).

```cpp
/**
Determines if the store is open.
@param day The day of the week (0 == Sunday, 6 == Saturday).
@param hour The hour of the day in 24-hour time (0 through 23).
@returns true if the store is open, false otherwise.
*/
bool IsOpen(int day, int hour)
{
    // ...
}
```

## Exercise - Rectangle Area

Write a function to compute the area of a rectangle given two input values (width and height). You can use integers for the parameter data types.

## Exercise - Draw Cone

Create a function that draws a simple cone to standard output using `/` and `\` characters.

The function should take one input parameter specifying how many lines tall the cone should be.

Here is the example output for one line:

```
 /\
```

Two lines:

```
  /\
 /  \
```

Three lines:

```
   /\
  /  \
 /    \
```

Seven lines:

```
       /\
      /  \
     /    \
    /      \
   /        \
  /          \
 /            \
```

## Exercises

1. What is output by the `cout` statement?

```cpp
int DoSomething(int u, int v)
{
    int a;
    a = u - v;
    u = a;
    v = u;
    return u + v;
}

// ...
cout << DoSomething(9, 7) << endl;
```

2. What is output by the `cout` statement?

```cpp
int SkipTwo(int x)
{
    return x + 2;
}

// ...
cout << SkipTwo(2) << endl;
cout << SkipTwo( SkipTwo( 5 ) ) << endl;
```

3. What is output by the `cout` statement?

```cpp
int AddOrSubtract(int x, int y)
{
   if (x > y)
      return x + y;
   else
      return x - y;
}

// ...
cout << AddOrSubtract(2, 3) << endl;
```
