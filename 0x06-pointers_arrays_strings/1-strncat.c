#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: n bytes from src.
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, size_src, n2 = n;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (size_src = 0; src[size_src] != '\0'; size_src++)
	;
	if (n > size_src)
		n2 = size_src;
	for (j = 0; j < n2; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
