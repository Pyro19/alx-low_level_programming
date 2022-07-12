#include "main.h"
/**
 * puts2 - functions tyat print every other char of a string
 * @str: input
 * @s: input
 * return: string
void puts(char *str)
{
int i = 0;

for (str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
