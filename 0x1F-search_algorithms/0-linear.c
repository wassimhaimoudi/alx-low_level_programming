#include "search_algos.h"

/**
 * linear_search - Searches for a value using linear search.
 * @array: A pointer to the first elment of the array.
 * @size: The number of elemens in array.
 * @value: The value to search for.
 *
 * Return: The index at which the value was found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i = 0;

		while (i < size)
		{
			printf("Value checked array[%ld] = [%i]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
