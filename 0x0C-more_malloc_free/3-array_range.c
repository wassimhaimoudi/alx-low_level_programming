#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value or the first element of the array.
 * @max: the maximum value or the last element of the array.
 * Return: a pointer to a newly created array.
 */

int *array_range(int min, int max)
{
	int n, i;
	int *p;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(n * sizeof(int));
	for (i = 0; i <= n; i++)
		p[i] = min + i;
	return (p);
}
