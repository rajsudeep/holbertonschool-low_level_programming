#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - finds bit at given index
 * @n: unsigned long integer value to search from
 * @index: location of bit to be found
 *
 * Return: value of bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;
	unsigned int len = sizeof(unsigned long int) * 8 - 1, i, bit;

	for (i = 0; i < len; i++)
	{
		k = n >> i;
		if (i == index)
		{
			(k & 1) ? (bit = 1) : (bit = 0);
			return (bit);
		}
	}
	return (-1);
}
