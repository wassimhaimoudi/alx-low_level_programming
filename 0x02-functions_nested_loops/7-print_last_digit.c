#include "main.h"

/**
 * print_last_digit - prints last digit of a given number.
 * @n: The number for which the last digit is extracted.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar('0' + ld);
	return (ld);
}
