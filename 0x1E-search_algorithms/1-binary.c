#include "search_algos.h"

/**
 * binary_search - searches for an integer using binary search
 * @array: pointer to first element of array
 * @size: number of element in array
 * @value: integer to find
 *
 * Return: On success returns index, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, j,  k = 0, l = 0, m = size - 1;

	if (array)
	{
		while (l <= m)
		{
			printf("Searching in array: ");
			for (i = l, j = m; i <= j; i++)
				printf("%d%s", array[i], (i != j) ? ", " : "");
			printf("\n");
			k = (l + m) / 2;
			if (array[k] < value)
				l = k + 1;
			else if (array[k] > value)
				m = k - 1;
			else
				return (k);
		}
	}
	return (-1);
}
