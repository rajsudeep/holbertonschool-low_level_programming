#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: given name
 * @f: function that prints name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *) = f;

	p(name);
}
