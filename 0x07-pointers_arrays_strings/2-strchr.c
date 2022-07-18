#include "main.h"
/**
 * _strchr - function that locate a character of string
 * @c: input char
 * @s: str character
 * Return: the str from character found
 */
char *_strchr(char *s, char c)
{
	int i = 0, b;

	while (s[i])
	{
		i++;
	}

	for (b = 0  b <= i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
