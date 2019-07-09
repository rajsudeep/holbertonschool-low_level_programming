#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 *
 * @s: input string
 * @accept: reference to find specified bytes
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
