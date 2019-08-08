#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - sets a bit at given index to 1
 * @n: unsigned long integer value to search from
 * @index: location of bit to be found
 *
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(unsigned long int) * 8 - 1, i;

	for (i = 0; i < len; i++)
	{
		if (i == index)
		{
			*n |= 1 << i;
			return (1);
		}
	}
	return (-1);
}
