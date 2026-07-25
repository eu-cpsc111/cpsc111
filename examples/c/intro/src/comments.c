#include <stdio.h>

int main()
{
    printf("Hello, world!\n");
    //printf("Hello, world!\n");

    // Single line comment

    /*
    Multi
    line
    comment
    */

    /* Mult line
    comment */

    /* Multi line comment, but on single line */

// comment
    int a = 1; // comment
    int /* comment */ b = 2;
    printf("a: %d, b: %d\n", a, b);

    /* // valid */

    // this would be invalid: /* /**/ */

    return 0;
}
