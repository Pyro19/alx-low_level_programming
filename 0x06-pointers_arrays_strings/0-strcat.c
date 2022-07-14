#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concernate 2 string
 * @src: append string
 * @dest: string to append to
 * Return: concernate str
 */
char *_strcat(char *dest, char *src);
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
