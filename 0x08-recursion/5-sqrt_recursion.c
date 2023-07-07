#include "main.h"

/**
 * sqrt_checker - checks if a number has a natural square root.
 * @n: the square root.
 * @m: the number to be checked.
 * Return: the square root of m that is a natural number.
 */

int sqrt_checker(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (sqrt_checker(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: intger number param
 * Return: the  value of the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_checker(n, 1));
}
