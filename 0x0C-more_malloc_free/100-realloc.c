#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: the chunk of memory to reallocate.
 * @old_size: old size allocated for str.
 * @new_size: new size allocated for str.
 * Return: a void pointer, NULL if the allocation
 * fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (nptr);
		for (i = 0; i < old_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (nptr);
}
