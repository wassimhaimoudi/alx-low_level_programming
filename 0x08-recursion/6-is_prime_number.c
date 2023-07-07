#include "main.h"
#include <math.h>

/**
 * is_prime_helper - Helper function to check if a number is prime recursively.
 * @n: The number to be checked.
 * @i: The current divisor to check for divisibility.
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int i)
{
	if (n == 1 || n == 2)
		return (1);
	if (n < 2)
		return (0);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime - Function to check if a number is prime.
 *
 * @n: The number to be checked.
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime(int n)
{
	return (is_prime_helper(n, n - 1));
}
