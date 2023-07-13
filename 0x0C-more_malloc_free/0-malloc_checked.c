#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @n: the number of space required
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int n)
{
	char *p;

	p = malloc(n);
	if (p == NULL)
		exit(98);
	return ((void *)p);
}
