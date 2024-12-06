# Skyscrapers
A generalisation of the 7x7 Skyscrapers problem on Codewars I encountered during my time at the 42 Madrid Piscine. The original problem can be found [here](https://www.codewars.com/kata/5917a2205ffc30ec3a0000a8).

# Problem
Given an 4 * N positive integers all greater than 0, place in an N by N matrix numbers ranging from 1 to N whilst satisfying the following constraints:
- The 4 * N given numbers correspond to four groups; "up", "down", "left" and "right. For example, for N = 4, there are 4 * 4 = 16 numbers.
	- The first 4 numbers correspond to the "up" group
	- The next 4 numbers correspond to the "down" group
	- The next 4 numbers correspond to the "left" group
	- The remaining 4 numbers correspond to the "right" group
- Each number in all groups indicate the number of "visible blocks" as viewed in a certain direction based on the group.
	- For the "up" group, this direction is downwards.
	- For the "down" group, this direction is upwards.
	- For the "left" group, this direction is to the right.
	- For the "right" group, this direction is to the left.
- A block is visible if for a given direction all previous blocks are lesser than it (numerically)
- For example, if there are 3 blocks visible in a certain direction on an 4x4 matrix, a possible configuration would be `1 3 4 2`
- For any row or column, there may be no repeated elements
- All numbers must range between 1 and N
- If no solution is valid (for example, invalid groups), `map error` is printed
- If various solutions are found, the first solution will be printed

# Usage
To use this program, do the following:
1. Clone this repository
2. Navigate to your local repository
3. Execute the following command: `make`. Doing so will compile all `.c` files into their corresponding `.o` files without linking and then create an executable named `skyscrapers` in the `/bin` directory, having linked all needed `.o` files.
4. Run the executable by supplying adequate parameters (see "Parameters" below): `./bin/skyscrapers [PARAMS]`

# Parameters
In order for this program to execute, adequate parameters must be supplied. This means that they must follow these rules:
1. There must be 1 and only 1 parameter supplied to the program
2. The parameter must be a single string
3. The parameter must contain numbers separated by spaces (as described in the C standard library function `isspace`)
4. The amount of numbers in the parameter must be at least 4 and divisible by 4. For example, "1 1 1 1" is valid but not "1 1" nor ""
5. Each number corresponds to the number of visible blocks as viewed from each direction for each column (see "Problem" above). If valid numbers are supplied but the problem is unsolvable, the program simply prints `map error`
