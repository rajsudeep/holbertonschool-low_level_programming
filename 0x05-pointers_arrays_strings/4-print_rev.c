#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;
	for (; i <= length; i++)
	{
		_putchar(*(s + (length - i)));
	}
	_putchar('\n');
}
