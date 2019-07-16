#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: the size of the memory
 * @c: char the array is initialized with
 * Return: pointer to the char array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
