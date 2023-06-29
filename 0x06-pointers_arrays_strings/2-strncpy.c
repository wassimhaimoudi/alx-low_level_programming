#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: the number of characters to be copied from src.
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
