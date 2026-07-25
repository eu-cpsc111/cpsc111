#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;

    // ----------------------------------------------------
    // Literals and newlines
    // ----------------------------------------------------

    // Chain together multiple strings
    cout << "Hello" << "world" << endl; // note how there is no space between the two
    cout << "Hello " << "world" << endl;
    cout << "Hello" << " " << "world" << endl; // String with just a space

    // Multiple lines of output using endl
    cout << "Hello" << endl << "world" << endl;

    // Multiple blank lines
    cout << "Hello" << endl << endl << "world" << endl;

    // endl doesn't have to be at the end of the statement
    cout << "Hello";
    cout << endl << "world";
    cout << endl;

    // endl isn't required in a cout statement
    cout << "Hello";
    cout << " world";
    cout << "!";
    cout << endl;

    // Printing numbers
    cout << "1" << endl << "2" << endl << "3" << endl; // String literals with number characters inside the string
    cout << 1 << endl << 2 << endl << 3 << endl; // These are internal literals, but get converted to characters when using cout

    // Character literals
    cout << 'a' << 'A' << '1' << endl;
    // cout << 'abc' << endl; // Multi-character character constants: don't do this, you get weird output (some compilers will throw an error and prevent you from doing this)

    // ----------------------------------------------------
    // Whitespace
    // ----------------------------------------------------

    // Spaces
    cout << 1 << " " << 2 << ' ' << "           " << 3 << endl;

    // Tabs (a tab character is '\t')
    cout << 1 << '\t' << 3 << "\t" << "    \t    " << 3 << "hello\tworld" << endl;

    // Newline character (aka "line feed")
    cout << "A\n";
    cout << "A" << endl;

    // Carriage return
    cout << "B\r" << "C" << endl; // Notice how the 'B' doesn't show up in the output
    cout << "A\r" << "B\r\n" << "C\n" << "D" << endl;

    // ----------------------------------------------------
    // Variables
    // ----------------------------------------------------

    // Define a variable using syntax: <type> <name>;
    int numItems;

    // Write a value to the variable
    numItems = 15;

    // Read the variable and output to stdout
    cout << "You have " << numItems << " items in your inventory." << endl; // Notice the intentional spaces added in the string literals

    // String variables (requires <string> header)
    string myName = "Victor";
    cout << "My name is " << myName << ". What is yours?" << endl;

    // ----------------------------------------------------
    // Formatting
    // ----------------------------------------------------

    // setw (set width, requires <iomanip> header)
    cout << "Items: " << setw(10) << 142 << endl;
    cout << "Items: " << setw(10) << 1234567890 << endl;
    cout << "Items: " << setw(10) << 12345678901234 << endl;

    // setfill (fill the unused spaces from setw() with a different character)
    cout << "Items: " << setfill('.') << setw(30) << 1234 << endl;

    // Right justify
    cout << right << setfill('-') << setw(10) << "Items" << endl;

    // See more formatting examples at: https://opensource.com/article/21/11/c-stdcout-cheat-sheet

    return 0;
}
