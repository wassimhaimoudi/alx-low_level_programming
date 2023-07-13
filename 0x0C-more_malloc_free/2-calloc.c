#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * _memset - fills the memory with a char.
 * @s: the space in memory to be filled.
 * @c: the character used to fill the memory.
 * @n: the number of bytes to fill.
 */

void _memset(char *s, int c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = c;
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 * Return: a pointer to the allocated space in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total;
	int zero = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	p = malloc(total);

	if (p == NULL)
		return (NULL);

	_memset(p, zero, total);

	return (p);
}
