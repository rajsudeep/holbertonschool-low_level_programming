#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints given strings
 *
 * @separator: string printed between input strings
 * @n: number of strings passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *curStr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		curStr = va_arg(strings, char *);
		(curStr) ? printf("%s", curStr) : printf("(nil)");
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
