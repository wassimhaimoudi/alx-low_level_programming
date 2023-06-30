#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be capitalized,
 * Return: a pointer to s.
 */

char *cap_string(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' ||
			s[i] == '\t' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '\"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - ('a' - 'A');
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');
	return (s);
}
