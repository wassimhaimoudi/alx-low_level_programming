#include "main.h"

/**
 * _atoi - function that converts ascii into integer
 * @s: array of chars to be converted
 * Return: 0 if no numbers, otherwise the value of number.
 */

int _atoi(char *s)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	do {
		if (*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');
		else if (res > 0)
			break;
	} while (*s++);
	return (sign * res);
}
