#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - using malloc to allocate memory
 * @b: input integer
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
