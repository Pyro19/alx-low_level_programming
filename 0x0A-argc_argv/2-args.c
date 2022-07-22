#include "main.h"
#include <stdio.h>
/**
 * main - printing all arg received
 * @argv: argument vector
 * @argc: argumentb count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
