#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabet to stdout 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;
	int alphaSize = 26;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	for (; j < 10; j++)
	{
		i = 0;
		while (i < alphaSize)
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
