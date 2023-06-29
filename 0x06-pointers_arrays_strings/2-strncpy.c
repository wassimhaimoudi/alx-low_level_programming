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
	int i, len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	;
	for (len2 = 0; src[len2] != '\0'; len2++)
	;
	if (n > len2)
		n = len2;
	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
