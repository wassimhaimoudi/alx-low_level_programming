#include <stdio.h>
#include "main.h"
/**
 * main - entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	below_1024();
	return (0);
}

/**
 * below_1024 - sums the multiples of 3 under 1024.
 */
void below_1024(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			s = s + i;
		}
	}
	printf("%d\n", s);
}
