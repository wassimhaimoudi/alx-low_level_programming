#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: the string to search in for the first occurence
 * @accept: the string contaiing the bytes.
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*accept == *s)
				return (s);
		}
	}

	return (NULL);
}
