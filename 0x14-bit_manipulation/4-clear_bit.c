#include "main.h"

/**
 * clear_bit - function name
 * Description: sets the value of a bit to 0 at a given index
 *
 * @n: number to be processed
 * @index: index of the bit
 * Return: 1 if it worked, -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask;

	max = sizeof(unsigned long int) * 8 - 1;
	if (index > max)
		return (-1);

	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
