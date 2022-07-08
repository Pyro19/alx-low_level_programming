#include "main.h"
/**
 * print_sign - funtion to check for a sign of a number
 * @n: the int use for the argument of the funtion
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
}
