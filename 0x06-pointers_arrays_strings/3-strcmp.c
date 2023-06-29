#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are the same,
 * a negetive or a positive values if they are not
 * the same
 */

int _strcmp(char *s1, char *s2)
{
	int value;

	while (*s1 == *s2)
	{
		if (*s1 != '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	value = *s1 - *s2;
	return (value);
}
