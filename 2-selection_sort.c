#include <stdio.h>
#include "sort.h"

/**
 * print_array_s - Prints the elements of an array of integers.
 * @array: Pointer to the first element of the array.
 * @size: The size of the array.
 * Return: void
 */
void print_array_s(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * selection_sort - Sorts an array of integers
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;

			print_array(array, size);
		}
	}
}
