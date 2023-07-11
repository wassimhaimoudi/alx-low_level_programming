#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 * Return: On success, the _strdup function returns a pointer string.
 * It returns NULL if insufficient memory was available or if str is NULL.
 */

char *_strdup(char *str)
{
	size_t i, size;
	char *ptr;

	for (size = 0; str[size] != '\0'; size++)
	;

	ptr = malloc(size);

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';
	return (ptr);
}
