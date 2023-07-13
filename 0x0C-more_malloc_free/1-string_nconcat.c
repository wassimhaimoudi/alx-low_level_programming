#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: number of bytes from s2.
 * Return: pointer to a newly allocated space in memory.
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int num, len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
	;
	for (len2 = 0; s2[len2]; len2++)
	;

	if (n >= len2)
		n = len2;

	num = len1 + n + 1;

	p = malloc(sizeof(char) * num);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	p[len1 + n] = '\0';

	return (p);
}
