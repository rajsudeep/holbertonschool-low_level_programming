#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
/**
 * struct printarg - points to print functions
 * relative to format  specifier
 * @fmt: format specifier for a char, int, float
 * or string
 * @f: functions that take specified argument to print
 */
typedef struct printarg
{
	char *fmt;
	void (*f)(va_list);
} t_printarg;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
