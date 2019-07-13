#include "holberton.h"

/**
 * _abs - compute absolute value of integer
 * @n: Number to compute
 *
 * Return: Absolute value of input number
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
