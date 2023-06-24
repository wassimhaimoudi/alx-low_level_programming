#include "main.h"

/**
 * print_triangle - draws a triangle.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
