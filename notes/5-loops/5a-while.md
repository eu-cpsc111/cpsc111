# While Loops

Loops let you repeat code as long as some condition evaluates to `true`.

## Basics

A `while` loop is a simple example of a loop construct in C++.

```cpp
int x = 0;
while (x < 3) {
    cout << "X: " << x << endl;
    x++;
}
```

Complex expressions can be used for loop conditions:

```cpp
int x = 10;
int y = 2;

while ( ( (x + y) % 10 ) > 0) {
    cout << x + y << " ";
    x++;
}
```

What is the result of the following loop?

```cpp
while (1) {
    cout << "Hello" << endl;
}
```

While loops can omit braces for one-liners, just like `if` statements.

```cpp
int x = 0;

while (x < 3)
    cout << x++ << endl;
cout << "Done" << endl;
```

## Do-While

This version of a loop puts the condition _after_ the first iteration of the loop.

```cpp
int x = 0;
do {
    cout << "X: " << x << endl;
    x++;
} while (x < 3);
```

The code in the loop will _always_ execute once. Then the condition is evaluated to determine if the loop should go again or be done.

## Exercise - While vs Do-While

Consider this do-while loop.

```cpp
int input;
do
{
    cout << "Enter a number less than 5: ";
    cin >> input;
} while (input >= 5);
```

Re-write this loop into a regular `while` loop.

## Exercise - Math Game

See the [math game](../../examples/5-math-game/) example.

## Exercises

1. What is the result of the following code?

```cpp
int num = 3;
while (num < 6) {
    cout << num << " ";
    num++;
}
cout << "Done";
```

2. What is the result of the following code?

```cpp
int a = 1;
do {
    cout << (13 % a) << " ";
    a = a + 1;
} while ((13 % a) < 5);
```

3. What is the result of the following code? (Hint: be careful!)

```cpp
int num = 6;
while (num < 10)
    cout << num << " ";
```
