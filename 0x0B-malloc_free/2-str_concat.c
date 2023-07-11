#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: seconf string.
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1 followd by the contents of s2 and null terminated.
 * Null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *p;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	}

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			p[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0 ; j < len1 + len2; j++)
		{
			p[len1 + j] = s2[j];
		}
		p[len1 + len2] = '\0';
	}
	return (p);
}
