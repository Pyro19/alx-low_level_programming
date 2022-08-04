0---Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);If n == 0, return 0


1---Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);where separator is the string to be printed between numbersand n is the number of integers passed to the functionYou are allowed to use printfIf separator is NULL, don’t print itPrint a new line at the end of your function

2---Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);where separator is the string to be printed between the stringsand n is the number of strings passed to the functionYou are allowed to use printfIf separator is NULL, don’t print itIf one of the string is NULL, print (nil) insteadPrint a new line at the end of your function


3---Write a function that prints anything.

Prototype: void print_all(const char * const format, ...);where format is a list of types of arguments passed to the functionc: chari: integerf: floats: char * (if the string is NULL, print (nil) insteadany other char should be ignoredsee exampleYou are not allowed to use for, goto, ternary operator, else, do ... whileYou can use a maximum of2 while loops2 ifYou can declare a maximum of 9 variablesYou are allowed to use printfPrint a new line at the end of your function
