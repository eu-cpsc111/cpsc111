# Vectors

A vector in C++ is a data provided by the C++ standard library. A vector variable can store a list of items. It similar to an array, but provides a number of benefits over regular arrays:

- You can dynamically add or remove items from the list.
- You can resize the list.
- It throws an exception when accessing an invalid index.

Do not confuse a C++ vector with a `Vector2` from raylib. The name of the C++ vector is unfortunate as it has nothing to do with Euclidean vectors.

## Basics

To use a vector, include the header:

```cpp
#include <vector>
```

To declare a vector (2 options):

```cpp
vector<int> years;     // List starts empty - no elements
vector<int> years(3);  // Allocates three elements in the list
```

- Inside the `<>` you specify what type of data is stored in the vector.

A `vector` is a class in C++. A `vector` variable is an object (an _instance_ of the class). Objects in C++ can have member functions. These functions operate on that specific object.

For example, to check how many elements are in the list:

```cpp
cout << years.size() << endl;
```

- `size()` is a member function of the `vector` class.
- Since the `years` variable uses the `vector` data type, you can call the `size()` member function for the `years` variable.

To write an element:

```cpp
years.at(0) = 2008;           // Assignment
```

To read an element:

```cpp
cout << years.at(0) << endl;  // Read
```

## Initialization

Unlike arrays, vector elements are initialized to default values (0 for integers).

```cpp
vector<int> years(3);

for (int i = 0; i < years.size(); i++) {
    cout << years.at(i) << endl;
}
```

Initializer list example:

```cpp
vector<int> years = { 2024, 2020, 2016 };
```

An empty list has no elements:

```cpp
vector<int> years;
years.at(0) = 2024; // Invalid - throws exception
```

To add new items to the list, use the `push_back()` member function:

```cpp
years.push_back(2024); // index 0
years.push_back(2020); // index 1
years.push_back(2016); // index 2
cout << years.at(0) = 2024 << endl; // etc...
```

## Advantages of `at()`

Using `[]` and `at()` achieve the same thing:

```cpp
int yearsArray[] = { 2024, 2020, 2016 };
cout << yearsArray[1] << endl;

vector<int> years = { 2024, 2020, 2016 };
cout << years.at(1) << endl;

cout << years[1] << endl;
```

`at()` checks against accessing an invalid index:

```cpp
cout << years.at(99) << endl;
cout << years[99] << endl;
```

- Better to throw and catch an exception than risk accessing something you didn't intend to.

## Iteration

Similar to regular arrays:

```cpp
vector<int> values = { 10, 20, 30, 40, 50, 60 };
for (int i = 1; i < values.size(); i++) {
    cout << values.at(i) + values.at(i - 1) << endl;
}
```

- Not the use of `size()` to check how many times to iterate.

## Standard Input

Works the same as regular arrays.

```cpp
const int NUM_VALUES = 3;
vector<int> values(NUM_VALUES);

for (int i = 0; i < values.size(); i++) {
    cout << "Enter value " << i + 1 << ": ";
    cin >> values.at(i);
}
```

## Push/Pop Back

- `push_back()` - adds new element to end of list. Size of list updated automatically.
- `back()` - gets last element in the list (if any). Does not modify the vector.
- `pop_back()` - removes the last element from the list. Does not return any value. The size of the list is updated.

```cpp
vector<int> scores;
scores.push_back(100);
scores.push_back(86);
scores.push_back(92);
cout << scores.back() << endl;

scores.pop_back();
cout << scores.back() << endl;

scores.pop_back();
scores.pop_back();
scores.push_back(75);
cout << scores.back() << endl;
```

## Exercise - Test Scores

```cpp
vector<int> scores = { 100, 98, 75, 93, 92, 87, 99, 100, 55 };
```

Use a vector to store a list of test scores. Compute the min, max, and average test score.

## Exercises

1. What is output by the following code?

```cpp
vector<int> vect;
vect.push_back(10);
vect.push_back(20);
vect.push_back(30);
vect.push_back(40);
vect.push_back(50);
vect.pop_back();
vect.pop_back();

for (int i = 0; i < vect.size(); ++i)
    cout << vect.at(i) << " ";
```

2. What is output by the following code?

```cpp
vector<int> vect(4);
vect.at(0) = 100;
vect.at(1) = 200;
vect.at(2) = 300;
vect.at(3) = 400;

cout << vect.back();
```

3. Consider the following vector:

```cpp
vector<int> vect = { 0, 1, 2, 3, 4 };
```

- What is the result of `vect.at(2)`?
- What is the result of `vect[2]`?
- What is the result of `vect.at(10)`?
- What is the result of `vect[10]`?
