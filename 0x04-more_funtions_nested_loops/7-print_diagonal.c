#include "main.h"
/**
 * print_diahonal - Draw a diagonal lines according to parameter
 * @n: numbwr of line to print diagonal
 *
 * Return: empty
 */
void print_diagonal(int n)
{
	int x, y;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
