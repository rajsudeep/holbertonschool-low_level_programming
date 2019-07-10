#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2
 * diagnoals of a square matrix of ints
 *
 * @a: reference to 2D array
 * @size: size of square array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, fwd_sum = 0, bwd_sum = 0;

	for (i = 0; i < size; i++)
	{
		fwd_sum += *(a + i * size + i);
		bwd_sum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", fwd_sum, bwd_sum);
}
