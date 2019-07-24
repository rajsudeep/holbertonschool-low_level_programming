#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: given name
 * @f: function that prints name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
