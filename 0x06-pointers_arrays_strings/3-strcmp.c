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
	int value = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;

		}
	}
	return (value);
}
