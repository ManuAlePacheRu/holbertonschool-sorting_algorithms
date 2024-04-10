#include "sort.h"

/**
 *selection_sort - this function sort an array of int using selection sort
 *@size: ithave the length of the array
 *@array: is a pointer to the array
 *Return: return void
 */

void selection_sort(int *array, size_t size)
{
	size_t i1, i2, sup, temporary;

	for (i1 = 0; i1 < size; i1++)
	{
		sup = i1;
	
		for (i2 = 0; i2 < size; i2++)
		{
			if (array[i2] < array[sup])
			{
				temporary = array[i2];
				array[i2] = array[sup];
				array[sup] = temporary;
				print_array(array, size);
			}

		}
	}
}
