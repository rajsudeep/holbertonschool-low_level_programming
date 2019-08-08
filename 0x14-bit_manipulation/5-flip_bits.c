#include "holberton.h"

/**
 * flip_bits - number of bits needed to flip from one number to another
 * @n: first value to compare
 * @m: second value to compare
 *
 * Return: Count of how many bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flips = n ^ m;

	while (flips)
	{
		if (flips & 1)
			count++;
		flips >>= 1;
	}
	return (count);
}
