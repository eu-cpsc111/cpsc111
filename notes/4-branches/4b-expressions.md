# Boolean Expressions

Expressions can contain different kind of operators:

- Boolean:
  - `!` - NOT
  - `&&` - AND
  - `||` - OR
- Equality
  - `==` - equal
  - `!=` - not equal
- Relational
  - `<` - less than
  - `>` - greater than
  - `<=` - less than or equal
  - `>=` - greater than or equal

## Equality

Consider this code:

```cpp
cout << "What is 4 + 5? ";

int answer;
cin >> answer;
```

You can check if the value of `answer` is equal to another value:

```cpp
if (answer == 9) {
    cout << "Correct!";
}
```

- `answer == 9` evaluates to either `true` or `false`.

You could check if the variable is _not equal_ to another value:

```cpp
if (answer != 9) {
    cout << "NOT correct!";
}
```

## Relational

Relational operators let you check whether values are less, greater, or equal to another value.

```cpp
int grade = GetStudentGrade();

if (grade >= 90) {
    cout << "Student got an A" << endl;
}
else if (grade < 60) {
    cout << "Student got an F" << endl;
}
```

- Make sure you choose the correct relational operator! In this example above, if you used `grade > 90`, the program would not correctly detect the score of 90 to be an A.

## Ranges

You can use multiple operators together in a Boolean expression to detect if a value is within a range.

```cpp
int grade = GetStudentGrade();

if (grade >= 70 && grade < 80) {
    cout << "Student got a C" << endl;
}
```

- This detects if the value of `grade` falls within a range of `[70, 80)`. The range used here is inclusive on the lower end (70 is included in the range) and exclusive in the upper end (80 is not included).
- The `&&` operator (Boolean AND) ensures that both sides of the expression are `true`.

## Order of Evaluation

_The full table of evaluation order is shown in the textbook._

Arithmetic and Boolean expressions can be combined to create fairly complex expressions. There are rules to the order in which these expressions are evaluated.

- `()` - inside parentheses are evaluated first. Find the innermost set of parentheses and evaluate the expressions inside.
- `!` - logical not
- Arithmetic operators - the order of operations for arithmetic expressions was discussed in the previous chapter.
- Relational operators
- Equality operators
- `&&` - logical AND
- `||` - logical OR

For example:

```cpp
cout << (3 < 10 || 5 >= 10) << endl;

/*
(3 < 10 || 5 >= 10)   <-- Evaluate left side of || first
(true   || 5 >= 10)   <-- Evaluate right side of || next
(true   || false  )   <-- Evaluate ||
(true)                <-- Result of expression
*/
```

Another example:

```cpp
cout << ( (10 + 7 < 20) && (2 > 3) || (5 + 5 == 20 - 10) ) << endl;

/*
( (10 + 7 < 20) && (2 > 3) || (5 + 5 == 20 - 10) )
  |-----------|
     This set of parentheses is evaluated first

( (10 + 7 < 20) && (2 > 3) || (5 + 5 == 20 - 10) )
   |----|
     Left side of relational operator evaluated

( (17     < 20) && (2 > 3) || (5 + 5 == 20 - 10) )
   |---------|
     Relational operator can now be evaluated

( (true       ) && (2 > 3) || (5 + 5 == 20 - 10) )
                   |-----|
                     Proceed to next innermost set of parentheses

( (true       ) && (false) || (5 + 5 == 20 - 10) )
                              |----------------|
                                Next set of parentheses evaluated

( (true       ) && (false) || (5 + 5 == 20 - 10) )
                               |---|
                                 Left side of == evaluated first

( (true       ) && (false) || (10    == 20 - 10) )
                                        |-----|
                                          Right side of == evaluated next

( (true       ) && (false) || (10    == 10     ) )
                               |---------|
                                 Equality can now be evaluated

( true && false || true )
  |-----------|
    && is always evaluated before ||

( false || true )
  |-----------|
    || is now evaluated

(true) - Final result
*/
```

## Exercise - License Costs

Write a program to compute the total license cost given a number of users:

```
Prompt user to input the number of users they want to purchase a license for.
Compute the total cost for that order.
Print the total cost.

License cost details:
    Cost per user for 1 to 50 users:       $20
    Cost per user for 51 to 1000 users:    $15
    Cost per user for over 1000 users:     $10

    Minimum fee: $50
```

## Exercises

1. Evaluate each of the following Boolean expressions. Each expression results in either `true` or `false`:

- `(true && false || true)`
- `(false || true && false)`
- `(10 != 5) && (4 <= 4)`
- `(7 < 2) || (3 * 2 == 6)`
- `!(8 > 12) && (5 >= 5)`
- `(2 + 2 == 4) && ((9 % 2 == 1) || (3 * 3 < 8))`
- `!( (4 < 6) && (2 != 2) ) || (7 <= 7)`

2. What is the value of `y` after the following code executes?

```cpp
int y = 5;
if (y < 10)
    y = y + 2;
else
    y = y - 2;
```

3. What is the value of `z` after the following code executes?

```cpp
int z = -3;
if (z > 0)
    z = z * 2;
else if (z == 0)
    z = 100;
else
    z = z - 5;
```

4. What is the value of `x` after the following code executes?

```cpp
int x = 7;
if (x % 2 == 0)
    x = x / 2;
else if (x % 3 == 0)
    x = x + 3;
else
    x = x * 2;
```

5. What is the value of `score` after the following code executes?

```cpp
int score = 15;
if (score > 20)
    score = score - 5;
else if (score > 10)
    score = score + 5;
else
    score = 0;
```

6. What is the value of `n` after the following code executes?

```cpp
int n = 4;
if (n < 0)
    n = -n;
else if (n == 0)
    n = 1;
else if (n < 5)
    n = n * n;
```

7. What is the value of `grade` after the following code executes?

```cpp
int grade = 75;

if (grade >= 60 && grade <= 79)
    grade = grade + 5;
else
    grade = grade - 5;
```
