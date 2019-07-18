#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	memset(p, 0, numbytes);
	return (p);
}
