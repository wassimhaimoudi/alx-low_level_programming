#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
	fibonacci_50();
	return (0);
}

/**
 * fibonacci_50 - prints the first 50 fibonacci numbers.
 */
void fibonacci_50(void)
{
	long int i, t1, t2, n;

	t1 = 1;
	t2 = 2;
	n = t1 + t2;
	printf("%d, %d, %d, ", t1, t2, n);
	for (i = 3; i <= 50; i++)
	{
		t1 = t2;
		t2 = n;
		n = t1 + t2;
		printf("%d", n);
		if (i < 50)
			print(", ");
	}
	printf("\n");
}
