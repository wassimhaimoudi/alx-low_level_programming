#include "main.h"

/**
 * get_bit - function name
 * Description: returns the value of a bit at a given index.
 *
 * @n: number passed to the function
 * @index: index of the bit
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long  int n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask;

	max = sizeof(unsigned long int) * 8 - 1;
	if (index > max)
		return (-1);

	mask = 1 << index;

	return ((n & mask) ? 1 : 0);
}
