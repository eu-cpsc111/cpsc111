# Scope

The lifetime of a variable (how long the variable can be used) is determined by its _scope_.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int first = 50;
    cout << first << endl;

    return 0;
}
```

- In this example, the scope of the `first` variable starts when the variable is declared and ends at the end of the `main()` function.

Expanded example with a second variable.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int first = 50;
    cout << first << endl;

    int last = 100;
    cout << last << endl;

    return 0;
}
```

- In this example, the scope of the `last` variable starts when the variable is declared and ends at the end of the `main()` function.
- The variable cannot be used before it is declared.

## Braces

Scope is often determined by the inner-most pair of curly braces a variable is within.

```cpp
int x = 0;

if (x == 0) {
    int y = 1;
    cout << x << " " << y << endl;
}

cout << x << " " << y << endl; // compiler error
```

- In this example, the `y` variable's scope starts when the variable is declared within the `if` block, but ends at the end of the `if` block.

A pair of standalone curly braces can be added to a program (without being associated with an `if`, `while`, etc.). This introduces a new scope.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    {
        int b = 1;
        cout << b << endl;
    }

    cout << a << endl;
    cout << b << endl; // Compiler error - variable b out of scope

    return 0;
}
```

## Loops

A `for` loop has special scope considerations for variables declared inside the initialization statement.

```cpp
int x = 50;

for (int i = 0; i < 10; i++) {
    cout << i << endl;
    cout << x << endl;
}

cout << i << endl;  // Compiler error
cout << x << endl;
```
