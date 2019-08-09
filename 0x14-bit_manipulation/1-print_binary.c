#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int k;
	int i = sizeof(unsigned long int) * 8 - 1, f = 0;

	if (n == 0)
		printf("0");
	for (; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			f = 1;
			printf("1");
		}
		else
			printf("0");
	}
}
