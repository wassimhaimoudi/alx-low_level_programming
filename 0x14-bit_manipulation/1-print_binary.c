#include "main.h"

/**
 * print_binary - funtion name
 * Description: function that print the binary representation
 * of a number.
 *
 * @n: the number to be presented in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
