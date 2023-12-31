#include "main.h"

/**
 * *_strcpy - copies the string pointed to by
 * src, including null byte to the bufer pointed
 * to by dest.
 * @dest: destination string,
 * @src: source string
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *destStart = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (destStart);
}
