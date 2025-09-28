# Branching Basics

## Boolean Data Type

The `bool` data type supports two values, `true` and `false`.

You can create a `bool` variable like any other variable:

```cpp
bool b = true;
```

- `true` and `false` are both Boolean literals in C++.

## Boolean Operators

C++ supports different Boolean operators. These can be used in Boolean expressions:

- `!` - the exclamation mark is the NOT operator.
- `&&` - the double ampersand is the AND operator.
- `||` - the double pipe is the OR operator.

Here is an example:

```cpp
bool boolNot = !false;           // The ! (exclamation mark) is used as the NOT operator
bool boolAnd = true && true;     // && is the AND operator
bool boolOr = true || false;     // || is the OR operator

cout << boolalpha; // This tells character output to print "true" or "false" for Boolean values
cout << "boolNot: " << boolNot << endl;
cout << "boolAnd: " << boolAnd << endl;
cout << "boolOr: " << boolOr << endl;
```

Boolean variables can be used as part of Boolean expressions. Consider this example:

```cpp
bool isSaturday = true;
bool isSunday = false;
bool isWeekend = ___________;  // What is the correct expression here?
```

Or this example:

```cpp
// Security system will sound an alarm if motion is detected,
// but only if the system is armed
bool isSystemArmed = false;
bool isMotionDetected = true;
bool shouldSoundAlaram = ___________;  // What is the correct expression here?
```

## Branches

The `if` statement in C++ let's us introduce branching into programs.

```cpp
bool isSystemArmed = CheckIfSystemArmed();

if (isSystemArmed) {
    cout << "System is armed." << endl;
    cout << "The area is secure." << endl;
}
```

There are three main parts of the `if` statement.

- The `if` keyword.
- A set of parentheses with some expression inside: `(isSystemArmed)`.
- A block of statements to executed if the expression is true, surrounded by curly braces `{}`.

The expression within the parentheses is evaluated down to a single `true` or `false`, which determines whether the code within the `if` block gets executed or skipped.

```cpp
bool isSystemArmed = CheckIfSystemArmed();
bool isMotionDetected = CheckIfMotionDetected();

if (isSystemArmed && isMotionDetected) {
    cout << "Motion was detected. Alarm will sound." << endl;
    SoundTheAlarm();
}
```

### If..Else

An `else` block contains code you want to execute only when the `if` condition is `false`.

```cpp
bool isSystemArmed = CheckIfSystemArmed();

if (isSystemArmed) {
    cout << "System is armed." << endl;
    cout << "The area is secure." << endl;
}
else {
    cout << "System is not armed." << endl;
}
```

Consider what happens if you were to remove the `else` block here:

```cpp
bool isSystemArmed = CheckIfSystemArmed();

if (isSystemArmed) {
    cout << "System is armed." << endl;
    cout << "The area is secure." << endl;
}

cout << "System is not armed." << endl;
```

- The `cout` statement printing "System is not armed." will _always_ execute in this example.

### If..Else If..Else

It is possible to chain multiple conditional branches together using `else if` blocks.

```cpp
bool isSystemArmed = CheckIfSystemArmed();
bool isMotionDetected = CheckIfMotionDetected();

if (isSystemArmed && isMotionDetected) {
    cout << "Motion was detected. Alarm will sound." << endl;
    SoundTheAlarm();
}
else if (isSystemArmed) {
    cout << "System is armed, but no motion detected." << endl;
}
```

Pay close attention here! An `else if` condition is evaluated _only_ if the previous `if` condition is `false`.

- If the system is armed and motion was detected, the code inside the `if` block is executed and the `else if` block is skipped.

You can attach as many `else if` blocks as you want:

```cpp
bool isSystemArmed = CheckIfSystemArmed();
bool isMotionDetected = CheckIfMotionDetected();

if (isSystemArmed && isMotionDetected) {
    cout << "Motion was detected. Alarm will sound." << endl;
    SoundTheAlarm();
}
else if (isSystemArmed) {
    cout << "System is armed, but no motion detected." << endl;
}
else if (isMotionDetected) {
    cout << "Motion detected, but system not armed." << endl;
}
```

You can also attach a final `else` to the end of the chain:

```cpp
bool isSystemArmed = CheckIfSystemArmed();
bool isMotionDetected = CheckIfMotionDetected();

if (isSystemArmed && isMotionDetected) {
    cout << "Motion was detected. Alarm will sound." << endl;
    SoundTheAlarm();
}
else if (isSystemArmed) {
    cout << "System is armed, but no motion detected." << endl;
}
else if (isMotionDetected) {
    cout << "Motion detected, but system not armed." << endl;
}
else {
    cout << "System not armed; no motion detected." << endl;
}
```

- An `else` block **cannot** exist by itself.
  - It must be attached to an `if` block or `else if` block.
  - It must be the last block in the chain.
  - There can only be one `else` block attached to a `if`.
- An `else if` block **cannot** exist by itself.
  - It must come after an `if` (or another `else if`).

## Exercise - Odd or Event

Write a program that implements this pseudocode:

```
1. Prompt the user to enter a number.
2. If the number is odd:
3.     Tell the user they entered an odd number.
4. Otherwise:
5.     Tell the user they entered an even number.
```

## Exercises

1. What is the final value of `y` after this code executes?

```cpp
int x = 15;
int y = 20;

if (x == 15) {
    y = 10;
}
```

2. What is the final value of `y` after this code executes?

```cpp
int x = 5;
int y = 5;

if (x == 15) {
    y = 10;
}
```

3. What is the final value of `y` after this code executes?

```cpp
int x = 5;
int y = 5;

if (x == 15) {
    y = 10;
}
else {
    y = 20;
}
```

4. What is the final value of `y` after this code executes?

```cpp
int x = 10;
int y = 20;

if (x == 15) {
    y = 10;
}
if (x < 20) {
    y = 25;
}
else if (y == 20) {
    y = 30;
}
if (y == 25) {
    y = y + x;
}
```
