#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _islower(int c)
{
	int i = 0;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
