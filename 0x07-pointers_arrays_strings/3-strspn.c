#include "main.h"
/**
 * _strspn - getting the lenght of a prefix substring
 * @s: source str
 * @accept: accepted sring
 * Return: return bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accepted[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}

	return (t);
}
