#invlude "main.h"
/**
 * _atoi - convert a str to an int
 * @s: string to be converted
 * Return: integer value of the converted str
 */
int _atoi(char *s)
{
	int sign = 1;
	int unsigned num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num *10) + (*s - '0');
		
		else if (num > 0)
			break;
	}
	while (*s++);
	retun (num * sign);
}
