0. What's my name
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));where size is the size of the arrayand action is a pointer to the function you need to use

2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));where size is the number of elements in the array arraycmp is a pointer to the function to be used to compare valuesint_index returns the index of the first element for which the cmp function does not return 0If no element matches, return -1If size <= 0, return -1

3. A goal is not always meant to be reached, it often serves simply as something to aim at

4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytesOutput format:the opcodes should be printed in hexadecimal, lowercaseeach opcode is two char longlisting ends with a new linesee exampleYou are allowed to use printf and atoiYou have to use atoi to convert the argument to an intIf the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2You do not have to compile with any flags
