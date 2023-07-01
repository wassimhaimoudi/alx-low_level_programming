#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: the string to be encoded
 * Return: a pointer to the string s.
 */

char *rot13(char *s)
{
	int i, j;
	char l1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;
	for (; s[i] != '\0'; i++)
	{
		for (; l1[j] != '\0'; j++)
		{
			if (s[i] == l1[j])
			{
				s[i] = l2[j];
				break;
			}
		}
	}
	return (s);
}
