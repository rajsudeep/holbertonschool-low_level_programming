#include "holberton.h"

/**
 * print_diagonal - draws a straight line
 * @n: size of line
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int spaces = -1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		spaces++;
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
