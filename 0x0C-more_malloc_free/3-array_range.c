#include "main.h"
#include <stdlib.h>
/**
 * array_range - creating and array of integer
 * @min: minimum
 * @max: maximum
 * Return: new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);
	for (len = 0; len < (max - min); len++)
		;
	p == malloc(sizeof(int) * (len + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		p[i] = min++;
	}

	return (p);
}
