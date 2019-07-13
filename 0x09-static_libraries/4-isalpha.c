#include "holberton.h"

/**
 * _isalpha - checks if character is alphabetical
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isalpha(int c)
{
	int i = 0;
	char str[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (i < 52)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
