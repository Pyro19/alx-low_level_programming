#include "main.h"
/**
 * string_toupper - converting string to upper case
 * @z: string param
 * Return: string
 */
char *string_toupper(char *z)
{
	int i = 0;

	while (z[i])
	{
		if (z[i] >= 97 && z(i) <= 122)
			z[i] = z[i] - 32;
		i++;
	}
	return (z);
}
