#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order
*
* @array: The array to be sorted.
* @size: Number of elements in the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (array == NULL || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}

}
