#include "holberton.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: amount of bytes
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i != n; i++)
		dest[i] = src[i];
	return (dest);
}
