#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: the main string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len1, len2, flag;

	for (len1 = 0; haystack[len1]; len1++)
	;
	for (len2 = 0; needle[len2]; len2++)
	;

	for (i = 0; i < len1; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;
			for (j = 0; j < len2; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				return (haystack + i);
		}
	}
	return (NULL);
}
