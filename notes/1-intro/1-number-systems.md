# Number Systems

A single value can be represented in different number systems. We usually use the decimal number system. However, there are other number systems that are useful to know for computer science.

| Name              | Base    | # of digits | Digits   |
| ----------------- | ------- | ----------- | -------- |
| Binary            | Base 2  | 2           | 0-1      |
| Octal             | Base 8  | 8           | 0-7      |
| Decimal           | Base 10 | 10          | 0-9      |
| Hexadecimal (Hex) | Base 16 | 16          | 0-9, A-F |

Notes:

- A number system _base_ or _radix_ is the number of unique digits available to be used.
- Place value formula: $B^n$ where $B$ is the base and $n$ starts at $0$ and increases.
- Least significant digital: has least influence on the overall value (right-most digit).
- Most significant: has most influence on the overall value (left-most digit).

## Exercises

Convert the following values from binary (base 2) to decimal (base 10).

- `1101`
- `0011`
- `1111`
- `111100`
- `101010`
- `100000011`

Convert the following values from decimal (base 10) to binary (base 2).

- `0`
- `3`
- `7`
- `18`
- `20`
- `351`
- `128`
- `64`
- `99`
- `255`

Convert the following values from hexadecimal (base 16) to both decimal (base 2) and binary (base 2).

- `A`
- `EC`
- `12`
- `16`
- `FF`
- `AE`
- `9D`

Convert the following values from binary (base 2) to hexadecimal (base 16).

- `10101101`
- `11011010`
- `111010`
- `11`
- `1111`
- `11101011`

Convert the following values from octal (base 8) to decimal (base 10).

- `14`
- `7`
- `77`
- `34`
- `19`
- `8` (trick question: this is an invalid number in octal - why?)

Perform the following addition of binary numbers.

- `1010 + 0101`
- `0101 + 0111`
- `1111 + 0001`
- `10110001 + 00100011`
- `10011 + 1`
