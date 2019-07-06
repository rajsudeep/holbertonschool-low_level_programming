#include "holberton.h"

/**
 * *cap_string - capitalizes only proper words of a string
 *
 * @s: input string
 * Return: reformatted string
 *
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		    s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		    s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		     s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
	}
	return (s);
}
