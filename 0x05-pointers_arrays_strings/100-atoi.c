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
	int digit;

	sign = 1;
	res = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
	}
	while ((*s >= '0' && *s <= '9') && *s != '\0')
	{
		digit = *s - '0';
		res = res * 10 - digit;
		s++;
	}
	return (sign * res);
}
