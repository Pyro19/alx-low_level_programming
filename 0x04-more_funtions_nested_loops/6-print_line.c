#include "main.h"
/**
 * print_line - Draw a straight line according to paragrah
 * @n: Number of line to drawn
 *
 * Return: empty
 */
int print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
