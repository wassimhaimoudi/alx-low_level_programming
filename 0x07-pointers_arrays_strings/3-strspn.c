#include "main.h"
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be used.
 * @accept: the substring
 * Return: the number of bytes in the initial segment of s
 * which consists only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int init_length = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool found_match = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
			return (init_length);
		init_length++;
	}
	return (init_length);
}
