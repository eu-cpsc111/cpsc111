#include <stdio.h>

int main()
{
    printf("Hello, world!\n");

    // ----------------------------------------------------
    // Literals and newlines
    // ----------------------------------------------------

    // Chain together multiple strings
    printf("%s%s\n", "Hello", "world"); // note how there is no space between the two
    printf("%s%s\n", "Hello ", "world");
    printf("%s%s%s\n", "Hello", " ", "world"); // String with just a space

    // Multiple lines of output using newline characters
    printf("Hello\nworld\n");

    // Multiple blank lines
    printf("Hello\n\nworld\n");

    // Newlines do not have to be at the end of a statement
    printf("Hello");
    printf("\nworld");
    printf("\n");

    // Newlines are optional when printing
    printf("Hello");
    printf(" world");
    printf("!");
    printf("\n");

    // Printing numbers
    printf("1\n2\n3\n"); // String literals with number characters inside the string
    printf("%d\n%d\n%d\n", 1, 2, 3); // Integer literals formatted as decimal text

    // Character literals
    printf("%c%c%c\n", 'a', 'A', '1');
    // printf("%c\n", 'abc'); // Multi-character character constants: don't do this

    // ----------------------------------------------------
    // Whitespace
    // ----------------------------------------------------

    // Spaces
    printf("%d %d %s%d\n", 1, 2, "           ", 3);

    // Tabs (a tab character is '\t')
    printf("%d\t%d\t    \t    %dhello\tworld\n", 1, 3, 3);

    // Newline character (aka "line feed")
    printf("A\n");
    printf("A\n");

    // Carriage return
    printf("B\rC\n"); // Notice how the 'B' may be overwritten by 'C'
    printf("A\rB\r\nC\nD\n");

    // ----------------------------------------------------
    // Variables
    // ----------------------------------------------------

    // Define a variable using syntax: <type> <name>;
    int numItems;

    // Write a value to the variable
    numItems = 15;

    // Read the variable and output to stdout
    printf("You have %d items in your inventory.\n", numItems);

    // String variables in C are arrays of char
    const char myName[] = "Victor";
    printf("My name is %s. What is yours?\n", myName);

    // ----------------------------------------------------
    // Formatting
    // ----------------------------------------------------

    // Field width (right-aligned by default)
    printf("Items: %10d\n", 142);
    printf("Items: %10d\n", 1234567890);
    printf("Items: %14lld\n", 12345678901234LL);

    // Fill character with width
    printf("Items: %030d\n", 1234);

    // Left and right justification with width
    printf("|%10s|\n", "Items");
    printf("|%-10s|\n", "Items");

    // See more formatting examples in the C printf documentation.

    return 0;
}
