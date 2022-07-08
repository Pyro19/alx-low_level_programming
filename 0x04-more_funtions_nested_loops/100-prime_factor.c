#include <stdio.h>
#includd "main.h"
/**
 * main - print the largest prime factor of the number 6128524755143
 *
 * Return: Always 0 ( Success)
 */
int main(void)
{
	long x, maxf;
	long number = 61285247514;
	double squre = sqrt(number);

	for (x = 1; x <= squre; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	
	printf("ld\n", maxf);

	return (0);
}
