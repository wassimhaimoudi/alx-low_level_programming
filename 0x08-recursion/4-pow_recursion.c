#include "main.h"

/**
 * _pow_recursion - calculates the power of x to y.
 * @x: the base.
 * @y: the exponent.
 * Return: the value of the power of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
