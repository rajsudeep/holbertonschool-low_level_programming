#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * @s: string to encode
 * Return: encoded string
 *
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; set[j] != '\0'; j++)
			if (s[i] == set[j])
			{
				s[i] = enc[j];
				break;
			}
	}
	return (s);
}
