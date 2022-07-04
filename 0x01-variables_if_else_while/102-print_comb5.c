#include <stdio.h>
/**
 * main - Print all possible comb of two two-digit
 * from 0-99
 * Return: Always 0 (success)
 */

int main(void)
{
for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 98; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 == 98 && num2 == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
