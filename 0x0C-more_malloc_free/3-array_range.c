#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: starting range of values to include
 * @max: ending range of values to include
 * Return: integer array
 *
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
