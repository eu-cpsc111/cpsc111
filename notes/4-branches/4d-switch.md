# Switch Statements

Another way to add branching is the `switch` statement.

Here is an example:

```cpp
int x = 10;

switch (x)
{
    case 1:
        cout << "x is 1" << endl;
        break;

    case 5:
        cout << "x is 5" << endl;
        break;

    default:
        cout << "value not supported" << endl;
        break;
}
```

A `switch` statement has a set of parentheses `()`. Inside is an expression that gets evaluated. The result of the expression does not have be a Boolean value, it could be an number or character.

Within the curly braces of a `switch` are listed different `case` statements. The program will evaluate each case from top to bottom until a case is found that matches in switched value. The program will jump to that case statement and start executing any code from that point on.

The `default` case is executed if the value does not match any of the other cases.

## `break` and Fallthrough

What's the deal with the `break;` statement?

This tells the program to stop executing code inside the `switch` block and jump out to the end of the closing curly brace. The program will continue on after the `switch` statement's closing curly brace.

If you omit the `break`, the code will keep executing, event on into the next `case` block!

Consider this code:

```cpp
int x = 1;

switch (x)
{
    case 1:
        cout << "x is 1" << endl;

    case 5:
        cout << "x is 5" << endl;
}
```

- This will execute _both_ `cout` statements!
- Since `x` is `1`, the code will _start_ executing right after `case 1:`. But it will continue through the reset of the code inside the `switch` because there is no `break`.

Ths is called **fallthrough**.

Here's another example:

```cpp
int x = 2;

switch (x)
{
    case 1:
    case 2:
    case 3:
        cout << “You win!” << endl;
        break;
}
```

Sometimes fallthrough is intentional. Other times it is a bug. So pay attention!

## Equivalency to if..else if..else

A switch statement can be converted into an if..else if..else statement and do the same thing.

Consider this code:

```cpp
int x = 10;

switch (x)
{
    case 1:
        cout << "x is 1" << endl;
        break;

    case 5:
        cout << "x is 5" << endl;
        break;

    default:
        cout << "value not supported" << endl;
        break;
}
```

It is equivalent to this code:

```cpp
int x = 10;

if (x == 1) {
    cout << "x is 1" << endl;
}
else if (x == 5) {
    cout << "x is 5" << endl;
}
else {
    cout << "value not supported" << endl;
}
```

## Characters

Here is an example of using a `switch` when evaluating a `char` value:

```cpp
char key = 'a';

switch (key)
{
case 'A':
case 'a':
    cout << "You pressed the a key" << endl;
    break;

case 'B':
case 'b':
    cout << "You pressed the b key" << endl;
    break;
}

cout << "Resuming..." << endl;
```

## Constants

Using constants (or enumerations, discussed later in the course) is often a good practice.

```cpp
const int GOLD = 0;
const int SILVER = 1;

int material = GOLD;

switch (material)
{
case GOLD:
    cout << "Gold" << endl;
    break;

case SILVER:
    cout << "Silver" << endl;
    break;
}
```

## Exercise - Tire Set Calculator

See the [tire set calculator](../../examples/4-tire-sets/) example.

## Exercises

1. What is the value of `x` after the following code executes?

```cpp
int x = 1;
switch (x)
{
case 1:
    x = 50;
case 2:
case 3:
    x = x * 10;
    break;
}
```

2. What is the value of `y` after the following code executes?

```cpp
int y = 2;
switch (y)
{
case 1:
    y = 10;
    break;
case 2:
    y = 20;
    break;
default:
    y = 0;
}
```

3. What is the value of `z` after the following code executes?

```cpp
int z = 3;
switch (z)
{
case 1:
    z = 100;
case 2:
    z = 200;
case 3:
    z = 300;
}
```

4. What is the value of `x` after the following code executes?

```cpp
int x = 2;
switch (x)
{
case 1:
    x = 5;
    break;
case 2:
    x = 10;
case 3:
    x = x + 5;
    break;
case 4:
    x = 0;
    break;
}
```

5. Rewrite the following switch statement into an if..else if statement.

```cpp
int x = 5;
switch (x)
{
    case 1:
        cout << "ABC" << endl;
        break;

    case 2:
        cout << "DEF" << endl;
        break;
}
```
