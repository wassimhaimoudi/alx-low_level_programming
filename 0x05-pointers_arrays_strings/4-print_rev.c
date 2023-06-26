#include "main.h"

/**
 * print_rev - prints a strin in reverse, followed by a new by a new line
 * @s: strin to be reversed and printed
 *
 */

void print_rev(char *s)
{
	int i, len, middle;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;

	middle = len / 2;
	for (i = 0; i < middle; i++)
	{
		s[i] = s[i] + s[len - i - 1];
		s[i - i - 1] = s[i] - s[len - i - 1];
		s[i] = s[i] - s[len - i - 1];
	}

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
