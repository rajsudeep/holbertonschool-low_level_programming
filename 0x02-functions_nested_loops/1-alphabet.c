#include "holberton.h"

/**
 * print_alphabet - writes the alphabet to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int i = 0;
	int alphaSize = 26;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < alphaSize)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
