#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all given parameters
 *
 * @n: list of integers
 * Return: sum of integers
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list arguments;

	sum = 0;
	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
