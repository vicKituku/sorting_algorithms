#include "sort.h"

void swap_elements(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


void selection_sort(int *array, size_t size)
{
	int *lower;
	size_t i;
	size_t j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size-1); i++)
	{
		lower = array + i;
		for (j = i+1; j < size; j++)
		{
			lower = (array[j] < *lower) ? (array+j): lower;
		}

		if ((array + i ) != lower)
		{
			swap_elements(array + i, lower);
			print_array(array, size);
		}
	}
}


