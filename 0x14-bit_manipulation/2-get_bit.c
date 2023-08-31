#include "main.h"

/**
 * get_bit - returns the value at a given index
 * @n: number to input.
 * @index: the index starting from 0 of the bit to get
 * Return: The value of the bit at index or -1 if an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask;

	max = sizeof(unsigned long int) * 8 - 1;
	if (index > max)
		return (-1);
	mask = 1 << index;
	if ((mask & n) == 0)
		return (0);
	else
		return (1);
}
