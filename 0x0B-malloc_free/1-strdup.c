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
	unsigned int i, len;
	char *ptr;

	if (str == 0)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	;

	ptr = malloc(sizeof(char)*(len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; (ptr[i] = str[i]) != '\0'; i++)
	;
	return (ptr);
}
