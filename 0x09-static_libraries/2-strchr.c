#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 *
 * @s: pointer to string input
 * @c: character searching for
 * Return: pointer to first occurrence of c or NULL
 *
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s);
	else
		return (NULL);
}
