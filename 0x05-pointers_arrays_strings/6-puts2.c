#include "main.h"
/**
 * puts2 - functions tyat print every other char of a string
 * @str: input
 * @s: input
 * return: string
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
