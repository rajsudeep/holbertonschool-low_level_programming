#include "holberton.h"

/**
 * reverse_array - reverse content of an array of integers
 *
 * @a: array of integers
 * @n: length of array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	n--;
	for (; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n--] = temp;
	}
}
