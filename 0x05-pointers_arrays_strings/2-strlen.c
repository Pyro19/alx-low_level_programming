#include "main.h"
/**
 * _strlen - function that return a lenghts of a string
 * @s: char input
 * Return: lenght of the inpt string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
