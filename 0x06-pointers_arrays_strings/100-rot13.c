#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: the string to be encoded
 * Return: a pointer to the string s.
 */

char *rot13(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'N') || (*ptr >= 'a' && *ptr <= 'n'))
			*ptr += 13;
		else if ((*ptr >= 'O' && *ptr <= 'Z') || (*ptr >= 'o' && *ptr <= 'z'))
			*ptr -= 13;
		ptr++;
	}
	return (s);
}
