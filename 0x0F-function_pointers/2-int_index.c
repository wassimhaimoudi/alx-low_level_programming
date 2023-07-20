#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - searches for an integer.
 * @array: an array of integers.
 * @size: size of the array.
 * @cmp: cmp is a pointer to the function.
 * Return: index of the first time cmp returns somethin other than
 * 0, otherwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
