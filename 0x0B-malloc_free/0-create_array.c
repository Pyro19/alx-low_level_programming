#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an arrays
 * @c: char to fill in the array
 * @size: size of the array
 *
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
