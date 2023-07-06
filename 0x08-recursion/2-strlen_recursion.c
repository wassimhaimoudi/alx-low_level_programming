#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: a pointer to the string.
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
