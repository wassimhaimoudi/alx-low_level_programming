#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci_98();
	return (0);
}

/**
 * fibonacci_98 - prints the first 98 Fibonacci numbers.
 */
void fibonacci_98(void)
{
	unsigned int t1, t2, n;
	int i;

	t1 = 1;
	t2 = 2;
	printf("%u, %u", t1, t2);
	for (i = 3; i <= 100; i++)
	{
		n = t1 + t2;
		printf(", %u", n);
		t1 = t2;
		t2 = n;
	}
	printf("\n");
}
