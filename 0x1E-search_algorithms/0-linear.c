#include "search_algos.h"

/**
 * linear_search - searches for an integer using linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of element in array
 * @value: integer to search for
 * Return: On success returns the index, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; ++i)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
