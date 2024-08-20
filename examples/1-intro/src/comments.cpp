#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    //cout << "Hello, world!" << endl;

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
    cout << a << b << endl;

    /* // valid */

    // this would be invalid: /* /**/ */

    return 0;
}
