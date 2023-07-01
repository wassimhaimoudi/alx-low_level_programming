#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: the string to be encoded
 * Return: a pointer to the string s.
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char l1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (l1[j] != '\0')
		{
			if (s[i] == l1[j])
				s[i] =`l2[j];
			j++;
		}
		i++;
	}
	return (s);
}
