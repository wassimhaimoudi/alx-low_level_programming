#include "main.h"

/**
 * _isdigit - checks if a character is a number.
 * @c: the character to be checked.
 * Return: 0 if c is a number, otherwise 1.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
