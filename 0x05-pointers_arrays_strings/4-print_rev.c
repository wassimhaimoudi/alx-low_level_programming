#include "main.h"

/**
 * print_rev - prints a strin in reverse, followed by a new by a new line
 * @s: strin to be reversed and printed
 *
 */
void print_rev(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
