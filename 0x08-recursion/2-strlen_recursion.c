#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to be used.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen_recursive(s + 1));
	else
		return (0);

}
