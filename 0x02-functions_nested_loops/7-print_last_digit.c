#include "main.h"

/**
 * print_last_digit - prints last digit of a given number.
 * @n: The number for which the last digit is extracted.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
