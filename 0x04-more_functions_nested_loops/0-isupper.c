#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to test
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isupper(int c)
{
	int i = 0;
	char str[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

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
