#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;
	size_t size_s = size;

	for (i = 0; i < size_s - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size_s; j++)
		{
			if (array[j] < array[min])

				min = j;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
