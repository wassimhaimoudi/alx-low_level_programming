#include "main.h"

/**
 * set_bit- function name
 * Description: sets thre value of a bit to 1 at a given index
 *
 * @n: number passed to the function
 * @index: index of the bit to set.
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask;

	max = sizeof(unsigned long int) * 8 - 1;
	if (index > max)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
