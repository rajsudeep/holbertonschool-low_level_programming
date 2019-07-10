#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised by y
 *
 * @x: value being raised
 * @y: the power raised by
 * Return: value of operation
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
