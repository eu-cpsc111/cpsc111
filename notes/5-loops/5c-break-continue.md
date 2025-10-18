# Break and Continue

## Break

A `break` statement will jump out of the parent loop.

```cpp
int x = 0;
while (true) {
    if (x > 5) {
        break;
    }

    x++;
}
```

- This breaks out of the `while` loop.
- `break` statements do not affect `if` statements.

Another example:

```cpp
const int NUM_GUESSES = 10;
const int TARGET_NUM = 40;

for (int i = 0; i < NUM_GUESSES; i++) {

    cout << "Guess a number between 1 and 100: ";
    int guess;
    cin >> guess;

    if (guess == TARGET_NUM)
    {
        cout << "You guessed the number!" << endl;
        break;
    }
}
```

Many types of programs have a "main loop". This loop repeats over and over until the user takes some action that will end the program.

For example:

```cpp
while (true) {
    cout << "Enter a command: ";
    char c;
    cin >> c;

    if (c == 'a') {
        cout << "Perform action..." << endl;
    }
    else if (c == 'q') {
        cout << "Quitting..." << endl;
        break;
    }
}
```

## Continue

A `continue` statement will end the current loop iteration immediately, but not completely break out of the loop. Any post-iteration statements (in `for` loops) will be executed. Then the loop condition will be evaluated as normal.

In this example, the loop prints numbers from 1 to 100, but will skip over numbers that are divisible by 3.

```cpp
for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
        continue;
    }

    cout << i << endl;
}
```

Example with a `while` loop:

```cpp
while (true) {

    cout << "Menu:" << endl;
    cout << "0 - exit" << endl;
    cout << "1 - option 1" << endl;
    cout << "2 - option 2" << endl << endl;

    cout << "Enter your option: ";
    int option;
    cin >> option;

    if (option == 0)
        break;

    if (option > 2) {
        cout << "Invalid option!" << endl << endl;
        continue;
    }

    cout << "You picked option " << option << endl << endl;
}
```

## Return

A `return` statement exits the current function. If in the `main()` function, the program will end.

```cpp
int main() {
    cout << "Hello" << endl;

    return 0;
}
```

`return` will be covered in more detail in the module covering functions.

## Break/Continue/Return

You can use `break`, `continue`, and `return` will within the same function and/or loop.

```cpp
while (true) {
    cout << "Menu:" << endl;
    cout << "0 - return" << endl;
    cout << "1 - continue" << endl;
    cout << "2 - break" << endl << endl;

    int option;
    cin >> option;

    if (option == 0) {
        return 0;
    }

    if (option == 1) {
        continue;
    }

    if (option == 2) {
        break;
    }

    cout << "You selected option " << option << endl;
}

cout << "End of program." << endl;
```

## Nested Loops

Loops can be nested inside each other.

```cpp
const int NUM_ROWS = 3;
const int NUM_COLS = 10;

for (int row = 0; row < NUM_ROWS; row++) {
    cout << "Row " << row << ": ";

    for (int col = 0; col < NUM_COLS; col++) {
        cout << setw(5) << col;
    }

    cout << endl;
}
```

## Exercises

1. If the input values from the user are `4`, `7`, `-8`, `-5`, and `2`, what will the following code output?

```cpp
int sum = 0, num, j;

for (j = 1; j <= 5; ++j)
{
    cin >> num;
    if (num < 0)
        break;

    sum = sum + num;
}

cout << sum << endl;
```

2. How many 'x' characters will be output by the following code?

```cpp
int i = 1;
while (i <= 3) {
    int j = 1;

    while (j <= i) {
        cout << "x";
        ++j;
    }

    cout << endl;
    ++i;
}
```

3. What is output by the following code?

```cpp
for (int i = 4; i > 0;--i) {
    if (i % 2 == 0)
        continue;
    cout << i << " ";
}
```

4. What is output by the following code?

```cpp
int num = 2;

while (num < 14) {
    cout << num << " ";
    if (num == 9)
        break;

    num++;
}

cout << "Done";
```

5. What is the result after the following code executes?

```cpp
for (int i = 0; i < 10; i++) {
    cout << i << endl;
    break;
}
```

6. What is the result after the following code executes?

```cpp
for (int i = 0; i < 10; i++) {
    i--;
}
```
