#include "holberton.h"

/**
 * factorial - gives the facotrial of a given number
 *
 * @n: input number to factor
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
