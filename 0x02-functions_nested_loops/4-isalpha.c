#include "main.h"
/**
 * _isalpha - function to chaeck if c is a letter, lowercase or upercase
 * @c: the int that will use for the argument of the funtion
 * Return: 0
 */
int_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
