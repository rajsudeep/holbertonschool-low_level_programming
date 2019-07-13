#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - finds the first occurrence of the
 * substring needle in the string haystack
 *
 * @haystack: input string
 * @needle: desired substring
 * Return: pointer to the beginning of the located
 * substring, else NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (needle[j + 1] == '\0')
					return (haystack + i);
			}
		}
		j = 0;
	}
	return (NULL);
}
