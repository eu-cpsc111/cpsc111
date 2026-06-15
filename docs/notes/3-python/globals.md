### Global Variables

A global variable is a variable that is not defined inside any function. A global variable can be used by any function.

```python
name = "Alice"

def do_a_thing():
    print("Your name is:", name)     # Using global variable `name`

do_a_thing()
```

Things can get weird fast!

Consider this code:

```python
name = "Alice"

def do_a_thing():
    name = "Bob"   # This creates a new LOCAL variable named `name`!!
    print("Your name is:", name)     # Using LOCAL variable `name`

do_a_thing()
print("Global name:", name)  # Using GLOBAL variable `name`
```

- 🫨
- This probably does not do what you first expect.
- The assignment to `name` inside the function creates a new global variable.

If you want a function to update a global variable instead of creating a new local variable, you have to declare the global variable inside the function (confused?).

Example:

```python
name = "Alice"

def do_a_thing():
    global name   # <-- Tells Python we want to be able to update the name variable
    name = "Bob"
    print("Your name is:", name)

do_a_thing()
print("Global name:", name)
```

This is very easy to forget. It's very easy to introduce bugs with global variables in Python.

In an upcoming assignment, you'll see an alternative approach to global variables.

With all that said, even ignoring Python's handling of them, global variables are often frowned upon, with some justification.
