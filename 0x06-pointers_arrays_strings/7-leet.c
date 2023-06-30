#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: a pointer to the string.
 */

char *leet(char *s)
{
	int i, j;
	char l[] = "AEOTL";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (s[i] == l[j] || s[i] == l[j] + 32)
				s[i] = n[j];

		}

	}
	return (s);
}
