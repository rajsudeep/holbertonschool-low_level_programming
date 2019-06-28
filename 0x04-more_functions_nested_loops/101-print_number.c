#include "holberton.h"
#include <stdio.h>

void print_number(int n);
int _abs(int n);
int _pow(int x, int y);
int count_int(int n);

/**
 * count_int - counts number of digits
 *
 * @n: integer to count from
 *
 * Return: number of digits
 */
int count_int(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

/**
 * _abs - create absolute value
 *
 * @n: integer to absolute
 *
 * Return: value absoluted
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}

/**
 * _pow - computes the power of a int
 *
 * @x: int to power
 * @y: amount of power
 *
 * Return: the powered value
 */
int _pow(int x, int y)
{
	int i;

	for (i = 0; i < y; i++)
		x *= y;
	return (x);
}

/**
 * print_number - print integer
 *
 * @n: integer to print
 *
 */
void print_number(int n)
{
	int digits = count_int(n);
	int i;
	int x;
	int currDigit;

	if (n < 0)
		putchar('-');

	n = _abs(n);

	putchar('0' + (n / (_pow(10, digits - 1))));
	for (i = 2; i <= digits; i++)
	{
		x = _pow(10, (digits - i));
		currDigit = (n / x) % 10;
		putchar(currDigit + '0');
	}
}
