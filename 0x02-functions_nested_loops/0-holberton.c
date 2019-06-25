#include "holberton.h"

/**
 * main - print out "Holberton"
 *
 * Return: 0
 */
int main(void)
{
	char str[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
