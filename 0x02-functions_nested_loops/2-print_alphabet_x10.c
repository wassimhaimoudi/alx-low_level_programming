#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabets in lowercase.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 9; i++)
	{
		for (c = 97; c < 123; c++)
			_putchar(c);
	}
	_putchar('\n');
}
