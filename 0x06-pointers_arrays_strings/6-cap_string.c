#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be capitalized,
 * Return: a pointer to s.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '\"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s -= ('a' - 'A');
		}
	if (s[0] >= 'a' && s[0] <= 'z')
		s -= ('a' - 'A');
	return (s);
}
