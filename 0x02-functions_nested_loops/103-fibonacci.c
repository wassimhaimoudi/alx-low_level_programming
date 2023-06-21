#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	even_fibonacci();
	return (0);
}

/**
 * even_fibonacci - prints even fibonacci terms under 4000000.
 */
void even_fibonacci(void)
{
	int i;
	long int t1, t2, n, s;

	t1 = 1;
	t2 = 2;
	n = t1 + t2;
	s = t2;
	for (i = 3; i <= 50; i++)
	{
		t1 = t2;
		t2 = n;
		n = t1 + t2;
		if (n < 4000000 || (n % 2) == 0)
			s = s + n;
	}
	printf("%ld", s);
	printf("\n");
}
