#include "main.h"

/**
 * get_bit - Entry Point
 * @n: .......
 * @index: ......
 *
 * Return: .....
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
