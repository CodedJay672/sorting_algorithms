#include "sort.h"

/**
 * bubble_sort -> function which sorts an array using bubble sort
 * @array: pointer to the array of integers
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			int first_val = 0;

			if (array[i] > array[i + 1])
			{
				first_val = array[i + 1];
				array[i + 1] = array[i];
				array[i] = first_val;
				print_array(array, size);
			}
		}
	}
}
