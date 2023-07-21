#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @a: the number of parameters passed to the function.
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int a, ...)
{
	unsigned int i, sum;
	va_list nums;

	if (a == 0)
		return (0);
	va_start(nums, a);
	sum = 0;
	for (i = 0; i < a; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
