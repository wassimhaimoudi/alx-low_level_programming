#include "main.h"

/**
 * flip_bits - function name
 * Description: returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: firt number
 * @m: second number
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	for (count = 0; result; count++)
		result &= result - 1;

	return (count);
}
