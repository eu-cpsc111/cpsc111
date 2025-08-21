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
