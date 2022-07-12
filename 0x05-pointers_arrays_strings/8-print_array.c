#include <stdio.h>
#include "main.h"
/**
 * print_array - function that print n element of the array
 * @a: array name
 * @n: number of the element of array to be print
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
