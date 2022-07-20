#include "main.h"
/**
 * _pow_recursion - function that returns a value raised to a power of value
 * @x: value to multiply
 * @y: the times to multiply the value
 *
 * Return: the value multiply.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
