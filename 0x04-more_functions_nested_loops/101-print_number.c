#include "holberton.h"
#include <stdio.h>

void print_number(int n);
int count_int(int n);
int _abs(int n);
int _pow(int x, int y);

/**
 * count_int - counts the number of digits in an integer
 * @n: input number from 101-main.c
 * Return: The number of digits of the input number
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
 * @n: input from 101-main.c
 * Return: A positive value
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
 * Return: x
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
 * print_number - prints the input number as an integer
 * @n: input from 101-main.c
 */

void print_number(int n)
{
	int digits;
	int i;
	int x;
	int lastDigit;
	int currDigit;

	if (n < 0)
		_putchar('-');
	lastDigit = _abs(n % 10);
	n = _abs(n / 10);
	digits = count_int(n);

	_putchar('0' + (n / (_pow(10, digits - 1))));
	for (i = 2; i <= digits; i++)
	{
		x = _pow(10, (digits - i));
		currDigit = (n / x) % 10;
		_putchar(currDigit + '0');
	}
	_putchar(lastDigit + '0');
}
