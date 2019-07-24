#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - run through a function using
 * various parameters
 *
 * @array: set of parameter inputs
 * @size: size of parameter array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
