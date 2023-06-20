#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The number for which the absolute value is computed.
 *
 * Return: The absolut value of the number.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
