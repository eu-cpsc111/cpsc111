# Characters and Strings

## Characters

The `char` data type stores a single character.

```cpp
char c = 'a';
cout << c << endl;
```

- A character literal is wrapped with **single quotes**.

### Character Encoding

A `char` is stored in memory as a single, 8-bit integer. Each character has a unique mapping to a number:

- `'a'` -> `97`
- `'b'` -> `98`
- `'c'` -> `99`
- etc.

This type of encoding uses ASCII. For a full list of mappings, see https://www.ascii-code.com.

You can assign a number directly to a character if you want:

```cpp
char c = 90; // 'Z'
cout << c << endl;
```

_Note:_ A more advanced encoding is called [Unicode](https://en.wikipedia.org/wiki/Unicode). Unicode supports many languages, symbols, and emojis.

## Strings

### Basics

A string is a sequence of characters in a row. You've see string literals before:

```cpp
cout << "This is a string literal" << endl;
```

- A string literal is wrapped with **double quotes**.

Compare this with a character literal:

```cpp
cout << 'a' << endl;   // Single character
cout << "a" << endl;   // String with one character
cout << "abc" << endl; // String with multiple characters
cout << 'abc' << endl; // ERROR!
```

The `string` data type lets you create a variable that stores a string. It is not a fundamental data type in C++. You need to add `#include <string>` at the top of your source file to access it.

```cpp
string s = "Hello, world!";
cout << s << endl;
```

Just like other examples we've seen, there are declarations and assignments of `string` variables:

```cpp
string s;           // Declaration
s = "Hello";        // Assignment
string x = "Hello"; // Declaration + assignment
```

What is output by the following code?

```cpp
string a = "abc";
string b = a;
a = "123";
cout << a << endl << b << endl;
```

A string can have multiple characters, a single character, or it can be empty.

```cpp
string a = "a";
string b = "";
```

You can combine strings. This is called _concatenation_.

```cpp
string a = "abc";
string b = "123";
string c = a + b;
```

### Storage

A string is stored in memory as an array of characters one right after another.

Consider this string variable:

```cpp
string s = "abc";
```

Assume the variable `s` is stored in memory starting at address `7000`:

Memory |  |  |  |  | 
|-|-|-|-|-|
**Address** | 7000 | 7001 | 7002 | 7003 | 
**Value** | 97 | 98 | 99 | 0 |
**Character** | `a` | `b` | `c` | _NULL_ |

Notice there are three characters stored in a row. One byte per character. The last byte has a value of 0. This is the _null terminator_.

**Strings stored with C++ will end with a null terminator byte.** The null terminator byte does not show up in the output of the string. It is hidden. It's purpose is to mark the end of the string.

Another example:

```cpp
string a = "ab";
string b = "cde";
```

Assume the variable `a` is stored in memory starting at address `7000`. Assume the variable `b` is stored in memory right after `a`.

Memory |  |  |  |  | | | |
|-|-|-|-|-|-|-|-|
**Address** | 7000 | 7001 | 7002 | 7003 | 7004 | 7005 | 7006
**Value** | 97 | 98 | 0 | 99 | 100 | 101 | 0
**Character** | `a` | `b` | _NULL_ | `c` | `d` | `e` | _NULL_

### Escape Sequences

Special combinations of characters within a string can result in special behavior when the string is sent to output to be displayed.

A sample of escape sequences are mentioned below.

#### `\n` (New Line)

Moves output cursor to next line.

Code:

```cpp
cout << "Hello\nworld";
```

Output:

```
Hello
world
```

#### `\r` (Carriage Return)

Returns output cursor to beginning of current line.

Code:

```cpp
cout << "Hello\rworld";
```

Output:

```
world
```

#### `\t` (Tab)

Inserts a tab.

Code:

```cpp
cout << "Hello\tworld";
```

Output:

```
Hello	world
```

#### `\\` (Backslash)

If you actually want to see a single backslash character in the string, you have to use the double-backslash escape sequence: `\\`.

Code:

```cpp
cout << "Hello\\world";
```

Output:

```
Hello\world
```

#### `\"` (Double Quote)

Since string literals in C++ are surrounded by double quotes, if you actually want to include double quotes in the string, you have to "escape" the double quote with a backslash.

Code:

```cpp
cout << "Hello \"world\"";
```

Output:

```
Hello "world"
```

## String Input

Read in a string of characters, up until a whitespace character (space or new line), and store it in a variable:

```cpp
string x;
cin >> x;
```

- This only reads up until a space. It doesn't read the full line.

To read a full line of characters, including spaces:

```cpp
string x;
getline(cin, x);
```

Example: prompt user to enter full name.

```cpp
string name;
cout << "Enter your name: ";
getline(cin, name);

cout << "Your name is " << name << endl;
```

## Exercise - Miles Conversion

Try the miles conversion exercise in this repo [here](../../examples/3-miles-conversion/).

## Exercises

1. What is displayed by the following code?

```cpp
cout << "Hello\t\tEvangel";
```

3. What is displayed by the following code?

```cpp
cout << "I don't \"fit the part\".";
```

3. What is displayed by the following code?

```cpp
cout << "\"either \\ or \"";
```

4. If the user enters `George Washington`, what is the output of the following code?

```cpp
string name;
cout << "Enter your name: ";
cin >> name;
cout << "Hello, \"" << name << "\"";
```

5. If the user enters `George Washington`, what is the output of the following code?

```cpp
string name;
cout << "Enter your name: ";
getline(cin, name);
cout << "Hello, \""  << name << "\"";
```

6. If the user enters `George Washington`, what is the output of the following code?

```cpp
string name1;
string name2;
cout << "Enter your name: ";
cin >> name1 >> name2;
cout << "Hello, \"" << name1 << " " << name2 << "\"";
```

7. What is displayed by the following code?

```cpp
string s = "\n\nHello world!\n\tOne\n\tTwo\n\tThree";
cout << s;
```
