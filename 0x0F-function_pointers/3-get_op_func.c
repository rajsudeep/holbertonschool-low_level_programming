#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - finds the function to perform operation
 * requested by user
 *
 * @s: operation input by user
 * Return: function for operation requested
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i]).op)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
