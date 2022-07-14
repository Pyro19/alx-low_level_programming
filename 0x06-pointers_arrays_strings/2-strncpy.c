#include "main.h"
#include <string.h>
/**
 * _strncpy - function thst copy a string
 * @dest:  first param
 * @src: secom param
 * @n: third param
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
