#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 *
 * @s: string to encode
 * Return: encoded string
 *
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char set[] = "aeotlAEOTL";
	char enc[] = "4307143071";

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; set[j] != '\0'; j++)
			if (s[i] == set[j])
			{
				s[i] = enc[j];
			}
	}
	return (s);
}
