#include "main.h"

/**
 * print_last_digit - prints last digit of a given number.
 * @n: The number for which the last digit is extracted.
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
