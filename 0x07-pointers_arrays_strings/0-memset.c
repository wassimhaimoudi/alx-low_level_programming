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

	for (; *ptr != '\0' && n > 0;)
	{
		if (*p == 0)
			break;
		*ptr++ = b;
		n--;
	}
	return (s);
}
