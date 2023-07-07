#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string used to find the occurence of the charcter
 * @c: the character to look for.
 * Return: a pointer to the first occurence of c,
 * NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
