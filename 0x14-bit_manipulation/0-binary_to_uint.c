#include "main.h"

/**
 * binary_to_uint - function name
 * Description: function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 1 and 0.
 * Return: unsigned int number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val;

	val = 0;
	i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (val);
}
