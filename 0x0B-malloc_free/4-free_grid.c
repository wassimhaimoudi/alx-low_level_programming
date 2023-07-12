#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the allocated memory to b freed.
 * @height: the depth of the memory allocation.
 */

void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(a);
}
