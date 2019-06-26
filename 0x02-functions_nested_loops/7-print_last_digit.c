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

	if (n < 0)
		n *= -1;
	x = n % 10;
	_putchar(x + '0');

	return (x);
}
