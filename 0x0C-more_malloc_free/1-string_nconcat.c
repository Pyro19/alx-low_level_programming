#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat of two strings
 * @s1: input str one
 * @s2: input str two
 * @n: nums of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		sw = " ";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (co = 0; co < i; co++)
		arr[co] == sq[co];
	for (co_2 = 0; co < j; co_2++)
	{
		co++;
		arr[co] = '\0';
		return (arr);
	}
