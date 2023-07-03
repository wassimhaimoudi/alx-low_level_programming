#include "main.h"

/**
 * _memcpy - copies n bytes from memory area to another
 * @dest: destination memory.
 * @src: source memory.
 * @n: number of bytes to copy.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	return (dest);
}
