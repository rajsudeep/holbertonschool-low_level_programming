#include "sort.h"

/**
 * part - partition array
 * @a: array of ints
 * @lo: start
 * @hi: end
 * @size: size of array
 * Return: pivot of array
 */
int part(int *a, int lo, int hi, size_t size)
{
	int i = lo, j = lo, tmp;

	for (; j < hi; j++)
	{
		if (a[j] <= a[hi])
		{
			if (i != j)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				print_array(a, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		tmp = a[i];
		a[i] = a[hi];
		a[hi] = tmp;
		print_array(a, size);
	}
	return (i);
}

/**
 * _quick_sort - sorts by partitioning
 * @a: array of ints
 * @lo: start
 * @hi: end
 * @size: size of array
 */
void _quick_sort(int *a, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = part(a, lo, hi, size);
		_quick_sort(a, lo, p - 1, size);
		_quick_sort(a, p + 1, hi, size);
	}
}

/**
 * quick_sort - sorts integers in ascending order using quick sort
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 1)
		return;
	_quick_sort(array, 0, size - 1, size);
}
