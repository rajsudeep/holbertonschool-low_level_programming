#include "holberton.h"

/**
 * print_triangle - prints a # triangle to stdout
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int spaces = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			spaces = (size - 1) - i;
			if (j < spaces)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
