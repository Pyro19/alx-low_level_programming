#include "main.h"
/**
 * _strchr - function that locate a character of string
 * @c: input char
 * @s: str character
 * Return: the str from character found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
