#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be represente in binary.
 * Retur: Void.
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
