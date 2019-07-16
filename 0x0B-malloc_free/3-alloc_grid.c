#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer to the 2D array
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * width);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		if (arr[i] == NULL)
			return (NULL);
		arr[i] = (int *)malloc(sizeof(int) * height);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
