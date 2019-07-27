#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints the given character values
 *
 * @c: list of character arguments to print
 *
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints the given integer values
 *
 * @i: list of integer arguments to print
 *
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_f - prints the given float values
 *
 * @f: list of float arguments to print
 *
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints the given strings
 *
 * @s: list of string arguments to print
 *
 */
void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints the values that exist relative
 * corresponding and valid specifiers given
 *
 * @format: given format string starting with string
 * of specifiers
 *
 */
void print_all(const char * const format, ...)
{
	t_printarg args[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list arguments;
	int i, j;

	va_start(arguments, format);
	i = 0;
	while (format && *(format + i) != '\0')
	{
		j = 0;
		while (args[j].fmt)
		{
			if (*(format + i) == *(args[j]).fmt)
			{
				args[j].f(arguments);
				if (*(format + i + 1) != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
