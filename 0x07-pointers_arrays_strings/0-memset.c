#include "main.h"
/**
 * _memset - a function that fills memory with a constant bytes
 * @n: bytes of memory area
 * @s:constant byte to fill
 * @b: constant bytes to fill
 *
 * Return: pointers to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
