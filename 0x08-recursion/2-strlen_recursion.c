#include "holberton.h"

/**
 * strlen_recursion - finds the length of a string
 *
 * @s: input string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
