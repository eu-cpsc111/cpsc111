# Misc

## Conditionals

Consider this code:

```cpp
int x = 0;
if (12 > 15)
    x = 10;
else
    x = 20;
```

You can condense this down into a single line:

```cpp
int x = (12 > 15) ? 10 : 20;
```

This is called a conditional expression. It has the form of:

```
condition ? expressionIfTrue : expressionIfFalse
```

- There are three sub-expressions here.
- The `?` is called a ternary operator.
- The `condition` sub-expression is evaluated first.
- If `condition` is `true`, the `expressionIfTrue` sub-expression is evaluated. The result is used as the overall result of the entire expression.
- If `condition` is `false`, the `expressionIfFalse` sub-expression is evaluated. The result is used as the overall result of the entire expression.
- You can read the expression like "if condition is true, use the first value, otherwise use the second value."

Here is a breakdown of how the example above would be evaluated:

```cpp
int x = (12 > 15) ? 10 : 20;
      = (False)   ? 10 : 20;
      = 20
```

Here's an example of a more complicated sub-expression:

```cpp
int y = 25;
int x = (25 == y) ? (y * 2) : (y - 10);
```

## Short-circuit Evaluation

Consider the following two Boolean expressions:

```cpp
bool b = (x == y || 2 + x == 5);
bool b = (x == y && 2 + x == 5);
```

These two expressions use different Boolean operators: OR and AND. There is a quirk to how these expressions get evaluated that may be useful to understand in the future.

When doing an OR operation, at least one side of the operator has to be true. Each side is evaluated left to right.

- If the first side is true, then the OR condition is already satisfied. The program doesn’t need to even evaluate the second side. It skips that sub-expression and says “the result is True”.

When doing an AND operation, both sides of the operator has to be true.

- If the first side is false, then the AND condition has failed. The program doesn’t need to evaluate the second side. It already knows the result is false.

## Exercise

1. Convert this if/else into a conditional expression:

```cpp
int x = 10;
int y = 5;

if (x * 2 == 30) {
    y = x;
}
else {
    y = x + y;
}
```

2. What is the value of `x` after the following code executes?

```cpp
int x = 10;
int y = (x == 2 || !(x < 5)) ? 10 : 20;
```

3. What value of `x` would result in a short-circuit evaluation?

```cpp
bool b = (x < 5) && (y >= 8);
```

3. What value of `x` would result in a short-circuit evaluation?

```cpp
bool b = (x + 2 == 9) || (x == 5);
```
