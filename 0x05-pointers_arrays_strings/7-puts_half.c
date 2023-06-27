#include "main.h"

/**
 * puts_half - prints half a string
 * @s: the string used.
 */

void puts_half(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	middle = (len - 1) / 2;
	for (i = middle; i < len; i++)
		_putchar(s[i]);
	_putchar('\n');
}
