#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Simple integer input
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    // String input
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;

    // Multiple inputs can be stacked together
    // Input is read up until the first space
    // cin will sit and wait until input is received
    int a;
    int b;
    cout << "Enter two numbers separated by a space: ";
    cin >> a >> b;
    cout << "You entered " << a << " and " << b << endl;

    string word1;
    string word2;
    cout << "Enter two words separated by a space: ";
    cin >> word1 >> word2;
    cout << "You enetered " << word1 << " and " << word2 << endl;

    /*
    Notes:
    - cin doesn't wait if input is detected. It immediately reads the next input and proceeeds.
        If you enter multiple inputs at the first prompt, each cin statement in the program
        will happily accept whatever is next in the input stream and continue on.
        There are methods for validating and ignoring input, such as cin.fail(),
        cin.clear(), cin.ignore(), etc, though these are out of scope for this example.

    - endl isn't used with cin:     cin >> a >> endl; // results in compilation error
    */

    return 0;
}
