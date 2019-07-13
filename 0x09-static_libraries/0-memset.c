#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: memory area pointed to
 * @b: constant byte
 * @n: amount of bytes
 * Return: pointer to memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i != n; i++)
		s[i] = b;
	return (s);
}
