#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array
 * using malloc
 *
 * @nmemb: size of array
 * @size: amount of bytes per element
 * Return: pointer to memory for array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int numbytes;

	if (nmemb == 0 || size == 0)
		return (NULL);
	numbytes = nmemb * size;
	p = malloc(numbytes);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, numbytes);
	return (p);
}

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
