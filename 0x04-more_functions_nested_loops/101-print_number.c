#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed.
 */
void print_number(int n)
{
	int digit, div;

	div = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while ((n / div) > 9)
		div *= 10;

	while (div != 0)
	{
		digit = n / div;
		_putchar('0' + digit);
		n %= div;
		div /= 10;
	}
}
