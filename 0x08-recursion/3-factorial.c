#include "main.h"
/**
 * factorial - returning the factorial of a given num
 * @n: input figure
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
