#include "main.h"
/**
 * swap_int - function that swap the value of 2 integers
 * @a: input 1
 * @b: input 2
 * Return: integers
 */
voud swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
