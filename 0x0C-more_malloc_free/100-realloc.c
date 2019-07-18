#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * _realloc - reallocates a memory block using
 * malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: bytes allocated for ptr
 * @new_size: bytes for the new memory block
 * Return: pointer to new sized array
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		if (new_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
