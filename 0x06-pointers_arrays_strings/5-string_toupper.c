#include "holberton.h"

/**
 * *string_toupper - changes all lowercase characters to uppercase
 *
 * @s: input string
 * Return: string reformatted to uppercase.
 *
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
