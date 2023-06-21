#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table.
 * @n: the input of the function.
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				if (j >= 0)
				{
					if (p < 10)
						printf(" ");
					if (p < 100)
						printf(" ");
					if (p < 1000)
						printf(" ");
				}
				printf("%d", p);
				if (j < n)
					printf(",");
			}
			printf("\n");
		}
	}
}
