#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string is passed to the function
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}
