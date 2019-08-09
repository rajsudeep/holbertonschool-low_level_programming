#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%lu", (n & 1));
}
