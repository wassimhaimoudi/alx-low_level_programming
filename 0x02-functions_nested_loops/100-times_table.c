#include "main.h"

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
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
				{
					_putchar(p + '0');
				}
				else if (j != 0 && p < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (p / 10));
					_putchar('0' + (p % 10));
				}
				else if (p >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + ((p / 100) % 10));
					_putchar('0' + (p / 10));
					_putchar('0' + (p % 10));
				}
			}
			_putchar('\n');
		}
	}
}
