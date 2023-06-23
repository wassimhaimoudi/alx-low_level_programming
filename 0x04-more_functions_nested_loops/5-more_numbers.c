#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));
			_putchar('0' +  (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
	}

}
