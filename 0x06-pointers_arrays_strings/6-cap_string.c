#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be capitalized,
 * Return: a pointer to s.
 */

char *cap_string(char *s)
{
	int i;

	while ( s[i] != '\0')
	{
		if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '\"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');
	return (s);
}
