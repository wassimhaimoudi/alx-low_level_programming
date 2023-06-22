#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int t1, t2, n1, n2, r1, r2, i;

	t1 = 1;
	t2 = 2;
	printf("%lu", t1);
	for (i = 3; i < 91; i++)
	{
		printf(", %lu", t2);
		t2 = t2 + t1;
		t1 = t2 - t1;
	}

	n1 = t1 / 1000000000;
	n2 = t1 % 1000000000;
	r1 = t2 / 1000000000;
	r2 = t2 % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", r1 + (r2 / 1000000000));
		printf("%lu", r2 % 1000000000);
		r1 = r1 + n1;
		n1 = r1 - n1;
		r2 = r2 + n2;
		n2 = r2 - n2;
	}
	printf("\n");
	return (0);
}
