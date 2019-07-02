#include "holberton.h"

/**
 * puts_half - prints second half of string
 *
 * @str: string to print from
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int n = 0;
	int i = 0;

	while (str[length] != '\0')
		length++;
	n = length;
	if (length % 2 != 0)
		n++;
	n /= 2;
	for (i = n; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
