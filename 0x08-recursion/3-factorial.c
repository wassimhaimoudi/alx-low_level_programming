#include "main.h"

/**
 * factorial - calculates the factorial value of an int.
 * @n: the parameter used for calculation.
 * Return: the factorial value of n, otherwise (-1).
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
