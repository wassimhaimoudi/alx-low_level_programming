#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	return (dest);
}
