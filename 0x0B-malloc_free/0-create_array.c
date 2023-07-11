#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of memory alloc.
 * @c: the character used to fill the memory.
 * Return: a pointer to the array, NULL if size is 0 or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	if (size == 0 || p == NULL)
		return (NULL);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		p[size] = '\0';
	}
	return (p);
}
