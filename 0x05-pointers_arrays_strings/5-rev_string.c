#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{
	int i, len, middle;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	middle = len / 2;
	for (i = 0; i < middle; i++)
	{
		s[i] = s[i] + s[len - i - 1];
		s[len - i - 1] = s[i] - s[len - i - 1];
		s[i] = s[i] - s[len - i - 1];
	}
}
