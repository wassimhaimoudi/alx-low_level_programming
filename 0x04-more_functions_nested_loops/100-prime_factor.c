#include <stdio.h>

/**
 * main - prime_factor text.
 * Return: 0.
 */

int main(void)
{
	long int n, div, maxFact;

	n = 612852475143;
	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", maxFact);
				break;
			}
		}
	}
	return (0);


}
