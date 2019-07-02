#include "holberton.h"

/**
 * puts2 - prints one char out of each 2 of a string
 *
 * @str: string to print from
 *
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
		length++;
	for (; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
