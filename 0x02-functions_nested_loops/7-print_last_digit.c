#include "holberton.h"

/**
 * print_last_digit - print last digit of a number to stdout
 * @n: Number to compute from
 *
 * Return: Last digit from n
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
