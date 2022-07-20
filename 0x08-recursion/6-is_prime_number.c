#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: input number
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n,  1));
}

/**
 * check_prime - check if num is pirme
 * @n: input number
 * @i: iteration num
 *
 * Return: 1 for prime 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
