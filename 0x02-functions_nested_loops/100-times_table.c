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
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				_putchar(',');
				_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p  / 10) % 10 + '0');
				}
				else if (p >= 10 && p <= 99)
				{
					_putchar((p / 10) + '0');
				}
				_putchar(p + '0');
			}
			_putchar('\n');
		}
	}
}
