#include "holberton.h"

/**
 * print_last_digit - print last digit of a number to stdout
 * @n: Number to compute from
 *
 * Return: Last digit from n
 */
int print_last_digit(int n)
{
	int lastDig;

	if (n < 0)
		n *= -1;
	lastDig = n % 10;
	_putchar(lastDig + '0');
	return (lastDig);
}
