#include "sort.h"

/**
 * selection_sort - this function sort an array of int using selection sort
 * @size: ithave the length of the array
 * @array: is a pointer to the array
 * Return: return void
 */

void selection_sort(int *array, size_t size)
{
	size_t i1, i2, sup, temp;

	if (!array || size == 0)
		return;

	for (i1 = 0; i1 < size - 1; i1++)
	{
		sup = i1;

		for (i2 = i1 + 1; i2 < size; i2++)
		{
			if (array[i2] < array[sup])
			{
				temp = array[i2];
				sup = i2;
			}
			if (sup != i1)
			{
				temp = array[i1];
				array[i1] = array[sup];
				array[sup] = temp;
				print_array(array, size);
			}

		}
	}
}
