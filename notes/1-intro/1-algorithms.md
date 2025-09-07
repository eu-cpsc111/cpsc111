# Algorithms

Computer science: solving problems with computers.

- Input -> Instructions -> Output

Calculator example:

- Enter expression -> computation -> output
- The word "computer" was originally a job description (performed by humans)

**Algorithm**: a series of steps/instructions to solve a problem.

- Steps should be precise and repeatable (think "recipe").

Dictionary example:

- Option 1: flip through page by page, front to back until word found. Slow and tedious, but works.
- Option 2: two pages at a time. Better, but need a step to check if you passed over the word after each flip.
- Option 3: open halfway, check to see if the word is in the left or right half of the dictionary. Repeat this process, each time shrinking the number of pages that need searched.
- Bonus option: use index tabs on the side if provided as a shortcut.
- Notice there are multiple valid algorithms. Some are more efficient than others. Some are more complicated than others.

## Efficiency

How efficient an algorithm can be visualized with a graph (see slides).

- Size of problem == number of pages in dictionary
- Time to solve == how long it takes to find correct page
- Option 1 is $n$ (linear). Add 10 pages, 10 more pages you may have to check.
- Option 2 is $n/2$ (but still linear). Add 10 pages, 5 more pages you may have to check.
- Option 3 is $log_2n$ (logarithmic). Problem size keeps being cut in half each iteration.

## Pseudocode

Pseudocode ("fake code").

- Human readable sentences describing the steps in the algorithm
- Not any specific computer language
- No specific syntax
- It needs to effectively communicate the algorithm steps!

Pseudocode example (see slide)

Verbs (functions)

- **Abstraction** - hide details about something. Important concept in computer science!
- e.g. How to "pick up" something is defined elsewhere, no need to repeat those steps here.

Conditionals

- Some steps only execute in certain conditions

Boolean expressions

- Yes/no questions used to test whether certain branches should be taken

Go back (loops)

- May need to repeat certain steps multiple times in an algorithm

## Other Notes

Some content is adapted from Harvard's CS50: https://cs50.harvard.edu/x/notes/0/. This is a great resource to check out!

## Exercises

### Reading Pseudocode

A large event venue has an automated parking system that directs cars coming in which parking lot to park at. An algorithm evaluates cars coming in and gives them directions based on a parking algorithm. Consider the following pseudocode for such an algorithm:

```
1:  Scan next vehicle in line.
2:  If vehicle has VIP tag:
3:      Direct vehicle to Lot 1A.
4:  Else if vehicle is high occupancy (bus, coach, etc.):
5:      Direct vehicle to drop-off zone.
6:  Else if vehicle has red parking tag:
7:      Direct vehicle to Lot 2.
8:  Else
9:      Direct vehicle to Lot 5.

10: If there are more vehicles in line:
11:     Go back to line 1.

12: Quit
```

Answer the following questions based on the pseudocode above.

- If a car has a red parking tag, which lot will it be directed to?
- If a car has an orange parking tag, which lot will it be directed to?
- Which lot are VIPs direct to?
- If a car has both a VIP and red parking tag, which lot will it be directed to?
- If a tour bus is arriving at the venue, where will it be directed to?

### M&M Sorting

Write pseudocode for an algorithm to sort a bag of M&Ms into containers.

- Red, green, and blue candies each go into separate containers.
- All other colors go into a fourth container.

### Grade Letter Conversion

Write pseudocode for an algorithm that takes a percentage grade (e.g. 89) and converts it into a letter grade (A, B, C, D, or F).

### Rock, Paper, Scissors

Write pseudocode for a game of [Rock, Paper, Scissors](https://en.wikipedia.org/wiki/Rock_paper_scissors).
