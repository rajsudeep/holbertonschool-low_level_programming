#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 *
 * @array: set of integers
 * @size: size of set of integers
 * @cmp: function to find integer
 * Return: On 0 on failure else an int > 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
