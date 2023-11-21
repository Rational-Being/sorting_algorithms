#include "sort.h"

/**
 * selection_sort - sorts an aray
 * @array: array of ints
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int tmp;

	if (size == 0 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
