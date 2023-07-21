#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print parameters followd by a separator.
 * @separator: a string that separates the numbers.
 * @n: number of parameters.
 */
void print_numbers(const char *separator, const unsigned int  n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator && n)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (i < n - 1)
				printf("%s ", separator);
		}
		printf("\n");
		va_end(nums);
	}
}
