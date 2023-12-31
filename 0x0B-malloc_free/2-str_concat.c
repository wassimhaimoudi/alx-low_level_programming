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
	int i, j, len1, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0 ; s2[j] != '\0'; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
