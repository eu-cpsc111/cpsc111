# For Loops

## Basics

A `for` statement is another type of loop in C++.

```cpp
for (int i = 0; i < 3; ++i) {
    cout << "i: " << i << endl;
}
```

A `while` loop had a single Boolean expression. A `for` has different parts, each separated by a semi-colon:

```
for (initialization; loop condition; post-iteration) {
    // Loop body
}
```

- Initialization statement (for example: `int i = 0;`). This is is executed only once when the `for` loop is first encountered.
- Loop condition check (for example: `i < 3;`). This is executed after each iteration of the loop to determine if the loop should repeat itself or end.
- Post-iteration (for example: `++i`). This is executed after the end of each loop iteration, but before the loop condition check.

A breakdown of the example `for` loop:

- `for`
- `int i = 0;` - initialize a variable `i` with the value 0.
- `i < 3;` - keep looping as long as `i` is less than 3.
- `++i` - increment `i` by 1 after each iteration of the loop.

## For Examples

This example prints a list of numbers from 1 to 10 (inclusive).

```cpp
for (int i = 1; i <= 10; ++i) {
    cout << i << endl;
}
```

- Pay close attention to the loop condition (`<=`).
- Off-by-one problems are common! Make sure to choose correctly between `<` and `<=` or `>` and `>=`.

The post-iteration statement does not have to only increment by one. You can put whatever statement you want there.

```cpp
for (int i = 1; i <= 10; i = i + 2) {
    cout << i << endl;
}
```

Consider this code:

```cpp
for (;;) {
    cout << "Hi" << endl;
}
```

- What is the result of this code?

Consider this code:

```cpp
int x = 5;
for ( ; x < 10; ) {
    cout << x << endl;
    x++;
}
```

- You may choose to omit parts of the loop.
- In this example, the initialization and post-iteration statements are omitted.
- This behaves just like a `while` loop.

## For vs While

When should you choose a `for` loop over a `while` loop? There is no hard rule, but one possible guideline:

- `for` - you know how many times you want to loop.
- `while` - you don't know how many times you want to loop.

## Prefix/Postfix Operators

The `++` and `--` operators perform increment and decrement operations.

```cpp
// These are all equivalent
x++;
++x;
x += 1;
x = x + 1;
```

- When a `++` is _after_ a variable, it is the _postfix increment_ operator.
- When a `++` is _before_ a variable, it is the _prefix increment_ operator.

The `++` and `--` do have some unique behavior in certain situations and can be tricky.

### Postfix

Consider this code:

```cpp
int a = 1;
cout << a++ << endl;  // <-- Postfix increment
cout << a << endl;
cout << a << endl;
```

A postfix operator is applied _after_ the value of the variable is read.

- The first line of output in this example is `1`.
- The `++` then increments the `a` variable.

### Pefix

Consider this code:

```cpp
int a = 1;
cout << ++a << endl;  // <-- Prefix increment
cout << a << endl;
cout << a << endl;
```

A prefix operator is applied _before_ the value of the variable is read.

- The first line of output in this example is `2`.
- The `++` increments the `a` variable, then the value is read and used in the `cout` statement.

## Exercise - Factorials

Write a program that gets a number from the user and computes the factorial of that number.

For example, if the user inputs the number 5, the program should print the result of 5!, which is 120.

Remember that 0! is 1.

## Exercise - FizzBuzz

Write a program that prints the numbers from 1 to 100 (inclusive).

- For multiples of three, print “Fizz” instead of the number.
- For multiples of five print “Buzz” instead of the number.
- For numbers that are both a multiple of three and five, print “FizzBuzz”.

Example output:

```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17

(and so on...)
```

## Exercises

1. What is the value of `x` after the following code executes?

```cpp
int x = 2;
while (x < 5) {
    x++;
}
```

2. What is the value of `x` after the following code executes?

```cpp
int x = 5;
for (int i = 0; i < 4; ++i) {
    x += i;
}
```

3. What is the value of `x` after the following code executes?

```cpp
int x = 5;
for (int i = 0; i < 5; ++i) {
    x -= i;
}
```

4. What is output by the following code? Pay attention to brace placement (or lack thereof).

```cpp
for (int i = 0; i <= 3; ++i)
    cout << i + 1 << " ";
cout << "done";
```

5. What is wrong with the following code? Pay careful attention to the semicolons!

```cpp
for (int i = 1; i < 4; ++i);
    cout << i << " ";
cout << "done";
```

6. The following code has no syntax errors, but there is still a problem. What is it?

```cpp
int num = 3;
while (num <= 10);
    num++;
cout << num;
```

7. What is output by the following code?

```cpp
int x = 10;
int y = 50;
while ( ( y - x ) % 3 != 0 )
{
    cout << y << " " ;
    y = y - 5;
}
```
