0- Write a function that concatenates two strings.
1-Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);The _strncat function is similar to the _strcat function, except thatit will use at most n bytes from src; andsrc does not need to be null-terminated if it contains n or more bytesReturn a pointer to the resulting string dest

2-Write a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy

3-Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);Your function should work exactly like strcmp

4-Write a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);Where n is the number of elements of the array

5-Write a function that changes all lowercase letters of a string to uppercase.

Prototype: char *string_toupper(char *);

6-Write a function that capitalizes all words of a string.

Prototype: char *cap_string(char *);Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-Write a function that encodes a string into 1337.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);You can only use one if in your codeYou can only use two loops in your codeYou are not allowed to use switchYou are not allowed to use any ternary operation
