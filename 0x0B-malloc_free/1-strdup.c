#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a new memory space
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);
	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);
	for (i = 0; i < end; i++)

		array[i] = str[i];

	if (array == NULL)
		return (NULL);

	return (array);
}
