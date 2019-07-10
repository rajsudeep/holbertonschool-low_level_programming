#include "holberton.h"

int _sqrt_test(int x, int y);

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: input number
 * Return: square root of n else -1
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_test(n, 1));
}

/**
 * _sqrt_test - test numbers smaller than x
 * to see if they are the sqrt of y
 *
 * @x: number to square root
 * @y: testing number
 * Return: test result that either is sqrt of x or -1
 *
 */
int _sqrt_test(int x, int y)
{
	if (y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (_sqrt_test(x, y + 1));
}
