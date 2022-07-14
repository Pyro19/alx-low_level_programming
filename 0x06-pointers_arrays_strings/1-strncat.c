#include "main.h"
#include <string.h>
/**
 * _strncat - function to append some character
 * @dest: first parameter
 * @src: second parameter
 * @n: third oaraneter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
