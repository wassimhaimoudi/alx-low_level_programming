#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
