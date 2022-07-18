#include "main.h"
/**
 * _strpbrk - serching for any set of bytes in a string
 * @accept: chararacter accepted
 * @s: input string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
