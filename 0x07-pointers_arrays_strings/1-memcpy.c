#include "main.h"
/**
 * _memcpy - functions that copies memory area
 * @n: bytes to copy
 * @src: copy from
 * @dest: copy to
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
