# Function Parameters

Examples of passing by value and reference. These will be discussed in detail in class.

## Pass by Value

Example 1:

```cpp
int Add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int sum;
    sum = Add(2, 3);
    cout << sum;

    return 0;
}
```

Example 2:

```cpp
int Add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int sum;
    sum = Add(2, 3);
    cout << sum;

    return 0;
}
```

## Pass by Reference

Example 1:

```cpp
int Scale(int x, int scale)
{
    x = x * scale;
    return x;
}

int main()
{
    int x = 10;
    int scaledX = Scale(x, 5);
    cout << scaledX << endl;

    return 0;
}
```

Example 2:

```cpp
void Transfer(int a, int& b, int& c)
{
    a = a + 2;
    b = c;
    c = a;
}

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    Transfer(a, b, c);

    cout << a << " " << b << " " << c << endl;

    return 0;
}
```

Example where pass by reference with small, scalar values could be useful:

```cpp
const int SEC_PER_HOUR = 3600;
const int MAX_SECONDS = 900000;

bool ConvertSecondsToHoursMinutes(int seconds, int& hours, int& minutes)
{
    if (seconds < 0 || seconds > MAX_SECONDS) {
        return false;
    }

    hours = seconds / SEC_PER_HOUR;
    minutes = (seconds % SEC_PER_HOUR) / 60;
    return true;
}
```

## Strings

Passing by reference prevents creating an unnecessary copy of a string.

```cpp
#include<iostream>
#include <string>

using namespace std;

void PrintWelcome(string& name)
{
    cout << "Welcome, " << name << "!" << endl;
}

int main()
{
    string name = "Bob";
    PrintWelcome(name);

    return 0;
}
```

## Vectors

Same thing for vectors.

```cpp
void ZeroOutNegatives(vector<int>& list)
{
    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) < 0)
            list.at(i) = 0;
    }
}
```

## Const

Use `const` to indicate if a reference parameter's value should not change.

```cpp
int Func(const vector<int>& list)
{
    int x = list.at(0);

    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) > x) {
            x = list.at(i);
        }
    }

    return x;
}
```

## Exercises

1. Identify which parameters are passed by value and which are passed by reference:

```cpp
double SomeFun(int a, int& b, double c, bool& d, double& e, bool f)
{
    // ...
}
```

2. What is printed to standard output by the following program?

```cpp
void one(int x, int& y)
{
    int a;
    a = x;
    x = y;
    y = a;
}

void two(int& s, int t)
{
    int b;
    b = s - t;
    s = t + b + 2;
    t = 4 * b;
}

int main()
{
    int u = 1, v = 2;

    one(u, v);
    cout << u << ' ' << v << endl;
    two(u, v);
    cout << u << ' ' << v << endl;
}
```

3. In the following function, which parameters can be modified by the `Go` function? Which parameters cannot be modified?

```cpp
bool Go(vector<float>& items, const vector<int>& numbers, bool& success)
{
    // ...
}
```

4. Complete the following C++ function. The function accepts a vector of items. The function must reverse the order of the items in the vector.

```cpp
void Reverse(vector<int>& items)
{
    // TODO
}
```
