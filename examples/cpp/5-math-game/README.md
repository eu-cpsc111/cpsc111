# Math Game

For this exercise you will write a game where the player has to answer a simple math problem. The player must keep answering the problem until they have entered the correct answer. The math problem will be randomly generated.

Here are the steps the program should take:

1. Generate two random numbers, each between 1 and 100.
2. Display an addition problem to the player using the two numbers. For example, if the two random numbers were `2` and `50`, the program would print:

```
2 + 50 =
```

3. Read in the player's answer into an `int` variable.
4. If the answer is correct, display an appropriate message to the user and exit the program.
5. If the answer is not correct, display a message to the user telling them they are incorrect. Go back to step 2 and keep repeating until the user enters the correct answer.

Notes:

- Some starter code is provided in `main.cpp`.
- A function to generate a random number is provided in the starter code. To use this function:

```
int x = GenerateRandomNum();
```

- There are different ways to implement the program, such as using a `while` or `do-while` loop.

## Bonus: Handling invalid input

What if the user enters a letter or string or special characters instead of a number? If you try this when using `cin` to read in the player's answer, you'll notice the program behaves erratically.

Handling invalid user input is an important part of any program. From the perspective of a developer, you should always be suspicious of user input. You can't trust that the user will input what you expect. Below is an example of extending the math game to handle invalid user input.

After you execute a `cin` statement, the `cin` object's internal state is updated to track whether there was an error trying to read the input. You can check whether the input failed with the following code:

```
bool isInvalid = cin.fail();
```

When you detect invalid input, you can notify the user and repeat the prompt and have the user try again.

There are a couple other things you have to do when dealing with `cin` input errors.

First, we need to reset the `cin` internal error state by calling `cin.clear()`. Otherwise `cin` will always think there is an error.

Second, we need to ignore any remaining input still in the standard input buffer using `cin.ignore(numeric_limits<streamsize>::max(), '\n')`. This tells `cin` to clear any input in the buffer up until it detects a newline character.

We want ignore additional input even if `cin` doesn't detect invalid input. For example, assume the user enters `12 43`. In this case, `cin` will properly read in the first integer `12` and stop when it detects the space character. We only want to process one player guess at a time, so we want to ignore any other characters after the space.

The sample code below demonstrates how to handle invalid input for the math game.

```
// Read in the user input
int answer;
cin >> answer;

// Check if the input was invalid (i.e. not an integer)
bool isInvalid = cin.fail();

// Reset the cin error state (do this after checking cin.fail())
cin.clear();

// Ignore any other characters in standard input up to the newline character.
// This will also handle the case where a user enters two numbers separated by a space. We
// only care about the first number, anything beyond that can be discarded.
cin.ignore(numeric_limits<streamsize>::max(), '\n');

// Handle invalid input
if (isInvalid) {
	cout << "Invalid input. Try again." << endl;
	continue; // Assuming this is within a loop, you can use `continue` to skip
			  // to the end of this loop iteration. The program will proceed to check if another
			  // loop iteration needs executed.
}
```

Here are some sample inputs and outputs that demonstrate the program handles invalid input correctly:

```
What is 21 + 17? 12
Incorrect. Try again.
What is 21 + 17? 12 38
Incorrect. Try again.
What is 21 + 17? a
Invalid input. Try again.
What is 21 + 17? Hello World
Invalid input. Try again.
What is 21 + 17? !@#$%^&
Invalid input. Try again.
What is 21 + 17? asdf 38 asdf asdf
Invalid input. Try again.
```
