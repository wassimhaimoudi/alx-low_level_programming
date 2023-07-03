#include "main.h"

/**
 * _memset - fills the first n bytes
 * of the memory area pointed to by s.
 * @s: the memory area to be filled.
 * @b: character used to fill the memory area.
 * @n: number of bytes.
 * Return: a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	for (; ptr != NULL && n > 0;)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
