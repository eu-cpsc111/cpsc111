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

    // Input is read up until the first space
    int a;
    int b;
    cout << "Enter two numbers separated by a space: ";
    cin >> a >> b;

    cout << "You entered " << a << " and " << b << endl;

    return 0;
}
