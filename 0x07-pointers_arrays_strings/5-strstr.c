#include "main.h"
#include <stdbool.h>
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: the main string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	bool found;

	found = true;
	if (*needle != '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*n)
			{
				if (*h != *n)
				{
					found = false;
					break;
				}
				h++;
				n++;
			}
		}
	}
			if (found)
				return (haystack);
		haystack++;
	return (NULL);
}
