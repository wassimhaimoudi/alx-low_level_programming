#include "main.h"

/**
 * islower - checks for lowercase character.
 * @c: The character to be checked.
 * Return: 1 if character is lowercase, otherwise 0.
 */
int islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
