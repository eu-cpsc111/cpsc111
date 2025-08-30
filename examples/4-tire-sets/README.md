# Tire Sets

In certain motorsports there are different types of tires you can choose to put on your car. Each tire has a different compound of rubber resulting in different tire characteristics. For example, you might have a choice between soft, medium, or hard tire compounds.

You will write a program that determines how many sets of tires you need depending on which tire compound you chose.

For this program, there will be three tire compounds to choose from: soft, medium, or hard. For this exercise, each tire compound has a certain number of laps they are estimated to last:

- Soft: 10 laps
- Medium: 20 laps
- Hard: 30 laps

The program must:

- Prompt the user to select a tire compound, displaying the available options.
- The user inputs a single character:
  - `s` or `S` for soft compound.
  - `m` or `M` for medium compound.
  - `h` or `H` for hard compound.
  - If the user inputs anything else, display an error message and exit the program.
- Prompt the user to enter the total number of laps in the race.
- Calculate and display how many sets of tires are needed for the race.

Here is an example of what the program will look like if the user selects a soft compound tire for a race with 21 laps:

```
Pick a tire compound.
    's' for Soft
    'm' for Medium
    'h' for Hard

Which tire compound do you want? s
How many laps are in the race? 21
You will need 3 sets of tires.
```

Additional requirements:

- Use named constants to store how many laps can be done in each compound.
- Use a switch statement to determine the number of laps per tire set based on the user's input.
- Use `return 1;` to exit the program early.
- Optional: use the `double` data type to avoid integer division when computing the number of tire sets required.
- Optional: use the `ceil()` function when computing the number of tire sets required (a partial number of tire sets isn't valid for this program). You'll have to include the `<cmath>` header to get access to the `ceil()` function.

## Test Cases

Here are some example inputs and expected outputs.

```
Soft tires:
- 1 lap race: 1 set
- 10 lap race: 1 set
- 11 lap race: 2 sets
- 20 lap race: 2 sets
- 21 lap race: 3 sets

Medium tires:
- 1 lap race: 1 set
- 10 lap race: 1 set
- 11 lap race: 1 sets
- 20 lap race: 2 sets
- 21 lap race: 2 sets

Hard tires:
- 20 lap race: 1 sets
- 30 lap race: 1 sets
- 31 lap race: 2 sets
- 60 lap race: 2 sets
- 61 lap race: 3 sets
```
