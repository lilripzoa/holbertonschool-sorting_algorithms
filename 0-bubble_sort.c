#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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
		printf("%d ", array[i]);
	}
	printf("\n");
}

/**
 * bubble_sort - function that sorts an array of integers
 * @array: pointer
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t swapped;
	int i;
	int temp;
	int iter;

	if (array == NULL || size == 0)
		return;

	do {
		swapped = 0;
		i = 0;
		for (iter = size - 1; i < iter; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		iter--;
	} while (swapped);
}
