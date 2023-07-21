#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
