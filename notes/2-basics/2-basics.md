# C++ Basics

_Notes here are not exhaustive. Refer to the textbook exercises and lecture slides for additional resources._

## Character Output

Use the `cout` object to send data to the standard output stream (e.g., terminal window).

For example:

```cpp
cout << "Hello, world!";
```

If you want to send a string of characters to the output stream, enclose them with double quotes.

```cpp
// Correct:
cout << "Hello, world!";

// Incorrect:
cout << Hello, world!; // Don't do this!
```

To start a new line in the output stream, use `endl`.

```cpp
cout << "Line 1" << endl;
cout << "Line 2" << endl;
```

You can combine multiple data outputs into a single `cout` statement.

```cpp
cout << "Line 1" << endl << "Line 2" << endl;
```

Pay attention to whitespace. For example, consider this code:

```cpp
cout << "My name" << "is" << " Bill.";
```

This code will produce the following output:

```
My nameis Bill.
```

Notice the lack of space between "name" and "is"? This can be fixed by including a space character within the double quotes:

```cpp
cout << "My name " << "is" << " Bill.";
```

You can use variables in the output. Do not put variable names it quotes!

```cpp
string name = "Bill";
cout << "My name is " << name << ".";
```

It is valid to have a long `cout` statement that does not fit onto a single line. The statement only ends when you put a semicolon at the end.

```cpp
string schoolName = "Evangel";
string name = "Bill";
string majorName = "Computer Science";

cout << "My name is " << name << ", and I attend "
     << schoolName << ". I am studying " << majorName
     << " because it is so cool." << endl;
```

## Character Input

You can read data from the standard input stream into a variable using the `cin` object.

```cpp
int num;     // Declare an integer variable named "num"
cin >> num;  // Read an integer from standard input and copy it into the "num" variable
```

Use a combination of `cout` and `cin` to inform the user of expected input:

```cpp
int num;
cout << "Enter a number: ";
cin >> num;
cout << "You entered " << num << endl;
```

You can read in multiple values with a single `cin` statement.

```cpp
int num1;
int num2;
cout << "Enter two numbers separated by a space: ";
cin >> num1 >> num2;
cout << "You entered " << num1 << " and " << num2 << ".";
```

## Comments

Comments are ignored by the compiler. Use comments to make notes throughout your code, explaining why certain blocks of code exist and what they accomplish. Make notes to your future self and other developers who may read your code.

A single line comment:

```cpp
// This is a comment
cout << "Hello"; // This is also a comment
```

A multi-line comment:

```cpp
/*
This is a
multi-line comment.

cout << "Hello";
*/
```

## Exercises

Try to answer the questions below. You could use an online C++ compiler (e.g. https://www.online-cpp.com) to check your answers.

1. What is output (i.e., what is displayed) by the following code?

```cpp
cout << "Welcome to " << "Evangel" << "University";
```

2. What is output by the following code? (Pay close attention to detail! Whitespace is important!)

```cpp
int age = 22;
cout << "You are" << age << "years old.";
```

3. What is output by the following code?

```cpp
// cout << "What time" << endl;
cout << "is it?";
```

4. Suppose you have two variables: `word1` and `word2`. Write a single `cin` statement that would read two words separated by a space from the standard input and store them in these two variables.

```cpp
string word1;
string word2;
cout << "Enter two words separated by a space: ";
// <-- What should go here? -->
cout << "You entered " << word1 << " and " << word2 << ".";
```

5. The following code has a compilation error. What is wrong?

```cpp
int value;
cin >> value
cout << "You entered " << value;
```

6. The following code has a compilation error. What is wrong?

```cpp
int value;
cin >> value;
cout << "You entered " value;
```
