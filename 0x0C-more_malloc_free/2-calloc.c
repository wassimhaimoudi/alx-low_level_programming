#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * _memset - fills the memory with a char.
 * @s: the space in memory to be filled.
 * @c: the character used to fill the memory.
 */

void _memset(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		*(s + i) = c;
	s[i] = '\0';
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
	char zero = '0';

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	p = malloc(total + 1);

	if (p == NULL)
		return (NULL);

	_memset(p, zero);

	return (p);
}
