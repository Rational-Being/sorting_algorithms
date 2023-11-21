#include "sort.h"

/**
 * bubble_sort - a sunftion that sirt an array of intger using bubblwe sort
 * @array: array passed
 * @size: size of array
 * Return: returns noting - void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
