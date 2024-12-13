#include <stdio.h>
#include "sort.h"

/**
 * quick_sort_helper - Recursively applies the quick_sort algorithm.
 * @array: pointer.
 * @low: start index
 * @high: end index
 * Return: Nothing.
 */
void quick_sort_helper(int *array, int low, int high);


/**
 * quick_sort - Sorts an array of integers
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1);
}

/**
 * al_partition - Partitions the array
 * @array: A pointer to the first element of the array.
 * @low: start index
 * @high: end index
 * Return: The index
 */
int al_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int temp;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			print_array(array, high - low + 1);  
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	print_array(array, high - low + 1);  
	return i + 1;
}

/**
 * quick_sort_helper - Recursively applies the quick_sort algorithm.
 * @array: A pointer to the first element of the array.
 * @low: start index
 * @high: end index
 * Return: Nothing.
 */
void quick_sort_helper(int *array, int low, int high)
{
	int i;

	if (low < high)
	{
		i = al_partition(array, low, high);
		quick_sort_helper(array, low, i - 1);  
		quick_sort_helper(array, i + 1, high); 
	}
}
