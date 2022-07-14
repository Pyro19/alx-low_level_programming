#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concernate 2 string
 * @src: append string
 * @dest: string to append to
 * Return: concernate str
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
