#include "main.h"

/**
 * print_number - prints and integer.
 * @n: number to be printed.
 */

void print_number(int n)
{
	int divisor, digit;

	divisor = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
