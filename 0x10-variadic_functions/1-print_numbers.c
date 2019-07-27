#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given
 *
 * @separator: string to be printed between numbers
 * @n: list of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
