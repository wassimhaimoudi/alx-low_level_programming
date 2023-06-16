#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (i = 0; i < 6; i++)
		putchar('a' + i);
	return (0);
}
