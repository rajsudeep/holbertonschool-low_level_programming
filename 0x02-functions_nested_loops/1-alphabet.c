#include "holberton.h"

/**
 * print_alphabet - writes the alphabet to stdout
 *
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
