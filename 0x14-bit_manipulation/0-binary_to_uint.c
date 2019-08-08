#include "holberton.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: string representing a binary number
 *
 * Return: The unsigned int conversion value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (!(b))
		return (0);
	for (result = 0; *b; b++)
	{
		if (*b == '1')
			result = (result << 1) | 1;
		else if (*b == '0')
			result <<= 1;
		else
			return (0);
	}
	return (result);
}
