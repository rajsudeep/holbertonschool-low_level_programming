#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers to 98 to stdout
 * @n: number to start from
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
