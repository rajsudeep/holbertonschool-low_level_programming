#include "holberton.h"

/**
 * set_string - sets the value of a
 * pointer to a char
 *
 * @s: reference to the address to
 * @to: reference to a char
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
