#include "sort.h"

/**
<<<<<<< HEAD
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
=======
 * bubble_sort -> function which sorts an array using bubble sort
 * @array: pointer to the array of integers
 * @size: size of the array
>>>>>>> aa8dea86c400404bc6f47bf8cf4dcc446fe1eaf1
 *
 */

void bubble_sort(int *array, size_t size)
{
<<<<<<< HEAD
size_t i, index, tmp = 0;
if (size < 2)
return;
for (i = 0; i < size; i++)
for (index = 0; index < size; index++)
{
if (array[index] > array[index + 1] && array[index + 1])
{
tmp = array[index];
array[index] = array[index + 1];
array[index + 1] = tmp;
print_array(array, size);
}
}
=======
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
>>>>>>> aa8dea86c400404bc6f47bf8cf4dcc446fe1eaf1
}
