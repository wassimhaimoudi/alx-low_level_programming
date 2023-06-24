#include <stdio.h>

/**
 * main - prime_factor text.
 * Return: 0.
 */

int main(void)
{
	long int n, div;

	n = 612852475143;
	for (div = 2; div < n; div++)
	{
		if (n % div == 0)
			n /= div;
	}
	printf("%ld\n", div);

	return (0);
}
