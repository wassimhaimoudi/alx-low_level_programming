#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the number of columns.
 * @height: the number of lines.
 * Return: pointer to a 2d array, otherwise NULL if either
 * heigth or width are equal to 0, or if there happens to be a failure
 * allocating memory.
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **a;

	if (height < 1 || width < 1)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j < i; k++)
			{
				free(a[k]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
