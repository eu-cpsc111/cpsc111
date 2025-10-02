# More Branching

## Nested Branches

You can nest an `if` statement inside another `if` statement.

```cpp
bool isSystemRunning = CheckIsSystemRunning();
if (isSystemRunning) {

    bool isMorning = CheckIsMorning();
    if (isMorning) {
        cout << "Adjusting system for morning output." << endl;
        AdjustOutput();
    }
}
else {
    cout << "System is not running." << endl;
}
```

## Boolean Conversions

The compiler can perform implicit conversions of certain values into a Boolean value.

For example, an integer value can be converted into a boolean value. Any non-zero number is `true`. Zero is `false`.

```cpp
if (1) {
    cout << "This will ALWAYS be true." << endl;
}

if (0) {
    cout << "This will NEVER be true." << endl;
}
```

## Braces

If you have an `if` statement that only executes one statement in the branch, you can omit the curly braces.

Consider this code:

```cpp
if (systemIsArmed) {
    cout << "System is armed." << endl;
}
```

You can write the same code without the curly braces:

```cpp
if (systemIsArmed)
    cout << "System is armed." << endl;
```

This can be tricky if you don't pay attention! Consider this code:

```cpp
int i = 3;
if (i == 0)
    cout << "Zero!" << endl;
    i += 1;
```

In the code above, the `i += 1;` statement is _not_ considered part of the `if` block.

Instead you need to wrap both lines in curly braces.

```cpp
int i = 3;
if (i == 0) {
    cout << "Zero!" << endl;
    i += 1;
}
```

The same thing goes for `if` and `else if` and `else` blocks.

This code is valid:

```cpp
int x = 1;
if (x == 0)
    cout << "Hi" << endl;
else if (x == 0)
    cout << "There" << endl;
else
    cout << "Test" << endl;
```

But this code is NOT valid and will result in a compiler error:

```cpp
int x = 1;
if (x == 0)
    cout << "Hi" << endl;
else if (x == 0)
    cout << "There" << endl;  // <-- compiler thinks if statement ends here
    x += 1;  // <-- this statement is by itself, not part of an if/else if
else // <-- this else block is invalid since it is not attached to an if
    cout << "Test" << endl;
```

## Exercises

1. Consider the two `if` statements below. Are these two `if` statements identical? Do they do the same thing? Why or why not?

```cpp
// #1
if (isSystemArmed && isMotionDetected) {
    SoundTheAlarm();
}

// #2
if (isSystemArmed) {
    if (isMotionDetected) {
        SoundTheAlarm();
    }
}
```

2. What is output by the following code?

```cpp
int x = 10;
if (x > 5)
    cout << "A" << endl;
    cout << "B" << endl;
```

3. What is output by the following code?

```cpp
bool flag = false;
if (flag)
    cout << "Yes" << endl;
else
    cout << "No" << endl;
    cout << "Done" << endl;
```

4. What is output by the following code?

```cpp
bool ready = true;
if (ready)
    cout << "Go" << endl;
else {
    cout << "Stop" << endl;
    cout << "End" << endl;
}
```

5. What is output by the following code?

```cpp
bool ready = true;
if (ready)
    cout << "Go" << endl;
else
    cout << "Stop" << endl;
    cout << "End" << endl;
```

6. What is output by the following code?

```cpp
bool ready = true;
if (ready)
    cout << "ABC" << endl;
    cout << "DEF" << endl;
else
    cout << "Stop" << endl;
```

7. What is output by the following code?

```cpp
bool ready = true;
if (ready) {
    cout << "ABC" << endl;
    cout << "DEF" << endl;
}
else
    cout << "Stop" << endl;
```
