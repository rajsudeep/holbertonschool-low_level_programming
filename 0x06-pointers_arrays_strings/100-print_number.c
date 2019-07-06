#include "holberton.h"
#include <stdio.h>

void print_number(int n);
int count_int(int n);
int _abs(int n);
int _pow(int x, int y);

/**
 * count_int - counts the number of digits
 * @n: integer to count from
 * Return: number of digits from n
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
 * _abs - calculates the absolute value of a number
 * @n: integer to input
 * Return: absolute value of n
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
 * _pow - calculates the power of a number
 * @x: the base of number
 * @y: the power of the number
 * Return: x powered by y
 */

int _pow(int x, int y)
{
	int temp;

	if (y == 0)
		return (1);
	temp = _pow(x, y / 2);
	if (y % 2 == 0)
		return (temp * temp);
	else
		return (x * temp * temp);
}

/**
 * print_number - prints the input number as an integer using putchar
 * @n: integer to print
 */

void print_number(int n)
{
	int digits = count_int(n);
	int x;
	int currDigit;
	int i;
	unsigned int un_n;

	if (n < 0)
		_putchar('-');

	un_n = _abs(n);

	_putchar('0' + (un_n / (_pow(10, digits - 1))));
	for (i = 2; i <= digits; i++)
	{
		x = _pow(10, (digits - i));
		currDigit = (un_n / x) % 10;
		_putchar(currDigit + '0');
	}
}
