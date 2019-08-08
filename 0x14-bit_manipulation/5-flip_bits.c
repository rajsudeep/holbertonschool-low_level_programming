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
	unsigned int len = sizeof(unsigned long int) * 8 - 1, i;

	for (i = 0; i < len; i++)
		if (get_bit(n, i) ^ get_bit(m, i))
			count++;
	return (count);
}
