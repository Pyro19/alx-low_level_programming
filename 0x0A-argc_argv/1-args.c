#include "main.h"
#include <stdio.h>
/**
 * main - program that print num of arg passed into it
 * @argc: arguments
 * @argv: array to argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	print("%d\n", argc - 1);
	return (0);
}
